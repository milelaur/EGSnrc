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

class APP_EXPORT TB : public EGS_AdvancedApplication {

    EGS_ScoringArray *score;    // scoring array with energies deposited
    int              nreg;      // number of regions in the geometry
    int              nph;       // number of pulse height objects.
    double           Etot;      // total energy that has entered the geometry
    int              *ph_regions; // region indeces of the ph-dsitributions



    public:
        TB(int argc, char **argv) :
            EGS_AdvancedApplication(argc,argv), score(0),
            nreg(0), nph(0), Etot(0) { };

        /*! Destructor.
            Deallocate memory
            */
        ~TB() {
            if (score) {
                delete score;
            }
            if (nph > 0) {
                delete [] ph_regions;
            }
        };

        /*! Initialize scoring.
        This function is called from within initSimulation() after the
        geometry and the particle source have been initialized.
        In our case we simple construct a scoring array with nreg+2 regions
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

};


int TB::initScoring() {
    // Get the numner of regions in the geometry.
    nreg = geometry->regions();
    score = new EGS_ScoringArray(nreg+2);
    return 0;
}

int TB::ausgab(int iarg) {
    if (iarg <= 4) {
        int np = the_stack->np - 1;

        // Note: ir is the region number+1
        int ir = the_stack->ir[np]-1;

        // If the particle is outside the geometry and headed in the positive
        // z-direction, change the region to count it as "transmitted"
        // Note: This is only valid for certain source/geometry conditions!
        // If those conditions are not met, the reflected and transmitted
        // energy fractions will be wrong
        if (ir == 0 && the_stack->w[np] > 0) {
            ir = nreg+1;
        }

        EGS_Float aux = the_epcont->edep*the_stack->wt[np];
        if (aux > 0) {
            score->score(ir,aux);
        }
        return 0;
    }
    return 0;
}



void TB::getCurrentResult(double &sum, double &sum2,
        double &norm, double &count) {
    count = current_case;
    norm = Etot > 0 ? count/Etot : 0;
    score->currentScore(0,sum,sum2);
}

int TB::startNewShower() {
    Etot += p.E*p.wt;
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
