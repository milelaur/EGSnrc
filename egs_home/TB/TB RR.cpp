#include <cstdlib>
// We derive from EGS_AdvancedApplication => need the header file.
#include "egs_advanced_application.h"
// We use scoring objects provided by egspp => need the header file.
#include "egs_scoring.h"
// Every C++ EGSnrc application needs this header file
#include "egs_interface2.h"
// We use egsInformation() => need the egs_functions.h header file.
#include "egs_functions.h"
// We use the EGS_Input class
#include "egs_input.h"
// To get the maximum source energy
#include "egs_base_source.h"
// The random number generator
#include "egs_rndm.h"
// Transformations
#include "egs_transformations.h"
// Interpolators
#include "egs_interpolator.h"
#include <cstdio>

class APP_EXPORT TB : public EGS_AdvancedApplication {

    EGS_ScoringArray *score;    // scoring array with energies deposited
    int              nreg;      // number of regions in the geometry
    int              nph;       // number of pulse height objects.


    public:
        TB(int argc, char **argv) :
            EGS_AdvancedApplication(argc,argv), score(0),
            nreg(0), nph(0), rr_flag(0), Esave(0), rho_rr(1), cgeom(0) { };

        /*! Destructor.
            Deallocate memory
            */
        ~TB() {
            if (score) {
                delete score;
            }
            if(ngeom > 0) {
                delete[] mass;
                delete[] geoms;
            }
            int j;
            for(j=0; j<ngeom; j++) delete [] is_cavity[j];
            delete [] is_cavity;
        };

        /*! Initialize scoring.
        This function is called from within initSimulation() after the
        geometry and the particle source have been initialized.
        In our case we simple construct a scoring array with nreg regions
        to collect the deposited energy in the nreg geometry regions and
        the reflected and transmitted energies, and if the user has
        requested it, initialize scoring array objects for pulse height
        distributions in the requested regions.
        */
        int initScoring();

        /*! Accumulate quantities of interest at run time
        This function is called from within the electron and photon transport
        routines at 28 different occasions specified by iarg (see PIRS-701
        for details). Here we are only interested in energy deposition =>
        only in iarg<=4 ausgab calls and simply use the score method of
        the scoring array object to accumulate the deposited energy.
        */
        int ausgab(int iarg);

        /*! simulate a shower */
        int shower();

        /*! Get the current simulation result.
        This function is called from the run control object in parallel runs
        in order to obtain a combined result for all parallel jobs.
        A single result is requested (and so, in simulations that calculate
        many quantites such as a 3D dose distribution, it is up to the user
        code to decide which single result to return). If this function is
        not reimplemented in a derived class, the run control object will simply
        not store information about the combined result in the JCF and not print
        this info in the log file. In our case we arbitrarily decide to return the
        reflected energy fraction as the single result of the simulation.
        */
        void getCurrentResult(double &sum, double &sum2, double &norm,
                            double &count);
        
        int rangeDiscard(EGS_Float tperp, EGS_Float range) const {
            // we can be sure that when this function is called
            // range rejection/RR is on.
            //
            // If rr_flag = 1 & E<Esave, we immediately discard the particle if it
            // can not reach the cavity or escape the current region
            // If rr_flag > 1, we play RR with the particle with survival
            // probability of 1/rr_flag, if it can not reach the cavity or
            // discard it if it is in the cavity and can not escape and E<Esave
            // However, we only play RR if that was not done before.
            // This is indicated by the value of latch:
            //   latch=0,1 indicates a primary/secondary electron that has
            //             not been previosly subjected to RR.
            //   latch=x,x+1 (with x>1) indicates a primary/secondary electron
            //             that has already been range-RR'ed.
            //
            int np = the_stack->np-1;
            if( abs(the_stack->latch[np]) > 1 ) return 0;
            int signo = the_stack->latch[np]<0 ? -1 : 1;
            bool is_cav = is_cavity[ig][the_stack->ir[np]-2];
            if( (rr_flag == 1 || is_cav) && the_stack->E[np] > Esave ) return 0;
            // i.e., if rr_flag is 1 or rr_flag > 1 but we are in the cavity and
            // the energy is greater than Esave, don't discard the particle
            int retval = the_stack->iq[np] == -1 ? 1 : 99;
            // if here: rr_flag = 1 && E < Esave
            //  or      rr_flag > 1 && (in cavity but E<Esave) || not in cavity
            bool do_RR = false;
            if( range < tperp ) { // can not escape current region
                if( rr_flag == 1 || is_cav ) return retval;
                do_RR = true;
            }
            else { // can escape current region
                if( is_cav || !cgeom ) return 0;
                // don't do it in low density media
                EGS_Float rho = the_media->rho[the_useful->medium-1];
                if( rho < 0.95*rho_rr ) return 0;
                EGS_Vector x(the_stack->x[np],the_stack->y[np],the_stack->z[np]);
                int ireg = cgeom->isWhere(x);
                if( ireg < 0 ) {
                    EGS_Float cperp = cgeom->hownear(ireg,x);
                    EGS_Float crange = the_stack->iq[np] == -1 ?
                        rr_erange.interpolateFast(the_epcont->elke) :
                        rr_prange.interpolateFast(the_epcont->elke);
                    //egsInformation("E=%g elke=%g crange=%g x=(%g,%g,%g) cperp=%g\n",
                    //        the_stack->E[np],the_epcont->elke,crange,
                    //        x.x,x.y,x.z,cperp);
                    if( crange < cperp ) {
                        if( rr_flag == 1 ) return retval;
                        do_RR = true;
                    }
                }
            }
            if( !do_RR ) return 0;
            if( rndm->getUniform()*rr_flag < 1 ) {
                // particle survives.
                the_stack->wt[np] *= rr_flag; the_stack->latch[np] += signo*rr_flag;
                return 0;
            }
            return -1; // i.e. particle is killed and must be discarded immediately.
        };

    protected:

        /*! Start a new shower.
        This function is called from within the shower loop just before the
        actual simulation of the particle starts. The particle parameters are
        available via the protected base class variable p which is of type
        EGS_Particle (see egs_application.h).
        In our case we simply accumulate the total energy into Etot
        and, if the current history is different from the last, we call
        the startHistory() method of our scoring object to make known
        to the scoring object that a new history has started (needed for
        the history-by-history statistical analysis).
        If 1 or more pulse heoght distributions are being calculated (nph > 0),
        we get the energy deposited in each pulse height region from the
        energy scoring object and add a pulse to the pulse height scoring
        object of the region in the appropriate bin.
        */
        int startNewShower();

    private:

        int              ncg;       // number of correlated geometry pairs.
        int              *gind1,
                        *gind2;    // indeces of correlated geometries
        double           *scg;      // sum(dose(gind1[j])*dose(gind2[j]);
        int              csplit;    // radiative splitting number
        int              ngeom;     // number of geometries to calculate
                                    // quantities of interest
        int              ir;        // current geometry index
        EGS_BaseGeometry **geoms;   // geometries for which to calculate the
                                    // quantites of interest.
        int nsmall_step;
        EGS_Float        *mass;     // mass of the material in the cavity.
        double           Etot;      // total energy that has entered the geometry
        bool             **is_cavity; // array of flags for each region in each
                                // geometry, which is true if the region
                                // belongs to the cavity and false otherwise
        int              ig;        // current geometry index
        int              rr_flag;   // range rejection flag:
        /*! Save energy for range rejection
        For rr_flag = 1, electrons are range-discarded if E<Esave
        For rr_flag > 1, electrons in the cavity are range-discarded if
        E<Esave, electrons outside of the cavity are always rouletted,
        no matter what their energy.
        */
        EGS_Float        Esave;
        /*! Mass density of the range rejection medium */
        EGS_Float        rho_rr;
        /*! Cavity bounding geometry.
        If no cavity bounding geometry is defined, range-rejection of RR
        is used only on a region-by-region basis. If a cavity bounding geometry
        is defined, then tperp to that geometry is also checked and if greater
        than the electron range, range-rejection or RR is done.
        */
        EGS_BaseGeometry *cgeom;
        /*! Range interpolators */
        EGS_Interpolator rr_erange;
        EGS_Interpolator rr_prange;

};


int TB::initScoring() {
    EGS_Input *options = input->takeInputItem("scoring options");

    if( options ) {
        vector<EGS_BaseGeometry *> geometries;
        vector<EGS_Float> cavity_masses;
        EGS_Input *aux;
        while( (aux = options->takeInputItem("calculation geometry")) ) {
            EGS_Float cmass;
            string gname;
            int err2 = aux->getInput("cavity mass",cmass);
            if( err2 ) {
                egsWarning("initScoring: missing/wrong 'cavity mass' "
                    "input\n"); cmass = 1;
            }
            EGS_BaseGeometry::setActiveGeometryList(app_index);
            EGS_BaseGeometry *g = EGS_BaseGeometry::getGeometry(gname);
            cavity_masses.push_back(cmass);
            geometries.push_back(g);
            delete aux;
        }
        ngeom = geometries.size();
        geoms = new EGS_BaseGeometry* [ngeom];
        mass = new EGS_Float [ngeom];
        for(int j=0; j<ngeom; j++) {
            geoms[j] = geometries[j];
            mass[j] = cavity_masses[j];
        }  
        delete options;
    }
    // Get the number of regions in the geometry.
    nreg = geometry->regions();
    score = new EGS_ScoringArray(nreg+2);
    // Ausgab calls
    int call;
    for(call=BeforeTransport; call<=ExtraEnergy; ++call)
        setAusgabCall((AusgabCall)call,true);
    for(call=AfterTransport; call<UnknownCall; ++call)
        setAusgabCall((AusgabCall)call,false);
    return 0;
}

int TB::ausgab(int iarg) {
    if (iarg <= ExtraEnergy) {
        int np = the_stack->np-1;

        // Note: ir is the region number+1
        int ir = the_stack->ir[np]-1;

        // If the particle is outside the geometry and headed in the positive
        // z-direction, change the region to count it as "transmitted"
        // Note: This is only valid for certain source/geometry conditions!
        // If those conditions are not met, the reflected and transmitted
        // energy fractions will be wrong
        if (ir >= 0 && the_stack->w[np] > 0) {
            ir = nreg+1;
        }

        EGS_Float aux = the_epcont->edep*the_stack->wt[np];
        if (aux > 0) {
            score->score(ir,aux);
        }
        return 0;
    }
    return 0;
};

int TB::shower() {
    return EGS_AdvancedApplication::shower();
};

void TB::getCurrentResult(double &sum, double &sum2,
        double &norm, double &count) {
    count = current_case;
    double flu = source->getFluence();
    norm = flu > 0 ? 1.602e-10*count/(flu*mass[0]) : 0;
    score->currentScore(0,sum,sum2);
}

int TB::startNewShower() {
    int res = EGS_Application::startNewShower();
    if (res) {
        return res;
    }
    if (current_case != last_case) {
        score->setHistory(current_case);
        last_case = current_case;
    }
    return 0;
}


#ifdef BUILD_APP_LIB
APP_LIB(TB);
#else
APP_MAIN(TB);
#endif

//APP_MAIN(EGS_AdvancedApplication);
