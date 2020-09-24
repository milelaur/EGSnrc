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
#include "egs_run_control.h"

#include "egs_rndm.h"

/*a class in which you put infos and generate new positions*/
class APP_EXPORT EGS_PosUncertDistributor {

public:
        /*Constructor*/
        EGS_PosUncertDistributor() {}

        /*Destructor*/
        ~EGS_PosUncertDistributor() {};

};
/* a class for correlated positioning uncertainty estimator*/
class APP_EXPORT EGS_PosUncertEstimator {

public:
        /*Constructor*/
        EGS_PosUncertEstimator() {};

        /*Destructor*/
        ~EGS_PosUncertEstimator() {};
};

class APP_EXPORT EGS_ChamberApplication : public EGS_AdvancedApplication {

public:

    /*! Constructor */
    EGS_ChamberApplication(int argc, char **argv) :
        EGS_AdvancedApplication(argc,argv), ngeom(0), dose(0),
        fsplit(1), fspliti(1), csplit(1) {  };

    /*! Destructor.  */
    ~EGS_ChamberApplication() {
        if( dose )  delete dose;
        if( ngeom > 0 ) {
            delete [] geoms; delete [] mass; int j;
            for(j=0; j<ngeom; j++) if( transforms[j] ) delete transforms[j];
            delete [] transforms;
            for(j=0; j<ngeom; j++) delete [] is_cavity[j];
            delete [] is_cavity;
            for(j=0; j<ngeom; j++) delete [] cs_enhance[j];
            delete [] cs_enhance;
            for(j=0; j<ngeom; j++) delete [] subgeoms[j];
            delete [] nsubgeoms;
            for(j=0; j<ngeom; j++) delete [] is_subgeomreg[j];
            delete [] is_subgeomreg;
        }
        if( ncg > 0 ) {
            delete [] gind1; delete [] gind2; delete [] scg;
        }
    };

    void do_cs_enhancement(EGS_Float &GMFP);

    /*! Initialize scoring.  */
    int initScoring();

    /*! Accumulate quantities of interest at run time */
    int ausgab(int iarg);

    /*! Simulate a single shower.
        We need to do special things and therefore reimplement this method.
     */
    int simulateSingleShower();

    /*! Get the current simulation result.  */
    void getCurrentResult(double &sum, double &sum2, double &norm,
            double &count);

    /*! simulate a shower */
    int shower();

    /* Select photon mean-free-path */
    void selectPhotonMFP(EGS_Float &dpmfp);

    int rangeDiscard(EGS_Float tperp, EGS_Float range) const ;

protected:

    /*! Start a new shower.  */
    int startNewShower();

private:

    EGS_I64          ncase;

    int              ngeom;     // number of geometries to calculate
                                // quantities of interest
    int              ig;        // current geometry index

    int              ncg;       // number of correlated geometry pairs.
    int              *gind1,
                     *gind2;    // indeces of correlated geometries
    double           *scg;      // sum(dose(gind1[j])*dose(gind2[j]);

    EGS_BaseGeometry **geoms;   // geometries for which to calculate the
                                // quantites of interest.
    EGS_AffineTransform **transforms;
                                // transformations to apply before transporting
                                // for each geometry
    bool             **is_cavity; // array of flags for each region in each
                                // geometry, which is true if the region
                                // belongs to the cavity and false otherwise
    EGS_ScoringArray *dose;     // scoring array for dose scoring in each of
                                // the calculation geometries.
    EGS_Float        *mass;     // mass of the material in the cavity.

    EGS_Float        fsplit;    // photon splitting number
    EGS_Float        fspliti;   // inverse photon splitting number
    int              csplit;    // radiative splitting number

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
    int nsmall_step;

    int **cs_enhance;
    int do_TmpPhsp;
    bool do_mcav;
    EGS_BaseGeometry **cgeoms;
    vector<string *> subgeoms;
    int *nsubgeoms;
    bool **is_subgeomreg;
    bool check_for_subreg;
    bool do_sub;
    int basereg;			// region of the "base" geometry where particles where scored
    EGS_Float save_dose;
    bool *has_sub;
    int silent;


    EGS_Float *rECUT;	// region based ECUT
    bool	*do_rECUT;	// flag for doing region-based ECUT
    bool    **is_rECUT;

    bool onegeom;

    //*HB_start************************

    vector<string> correlgnames;        // identifier of correlated set of geometries

    bool             iso_pu_flag, cav_pu_flag; // on-off flag for positioning uncertainty

    vector<EGS_PosUncertDistributor*>  pu_distributor; //shift info and manager

    EGS_I64          McasePerPos, NposPerSample; //positioning uncertainty parameters

    vector<EGS_PosUncertEstimator*>   pu_estimator, pu_estimator_corr;      //positioning uncertainty estimator

    //*HB_end**************************

};

extern __extc__  void
F77_OBJ_(select_photon_mfp,SELECT_PHOTON_MFP)(EGS_Float *dpmfp) {
    EGS_Application *a = EGS_Application::activeApplication();
    EGS_ChamberApplication *app = dynamic_cast<EGS_ChamberApplication *>(a);
    if( !app ) egsFatal("select_photon_mfp called with active application "
            " not being of type EGS_ChamberApplication!\n");
    app->selectPhotonMFP(*dpmfp);
}

extern __extc__ void F77_OBJ_(range_discard,RANGE_DISCARD)(
        const EGS_Float *tperp, const EGS_Float *range) {
    EGS_ChamberApplication *app = dynamic_cast<EGS_ChamberApplication *>(
            EGS_Application::activeApplication());
    the_epcont->idisc = app->rangeDiscard(*tperp,*range);
}


extern __extc__ void F77_OBJ_(do_cs_enhancement,DO_CS_ENHANCEMENT)(EGS_Float *gmfp){
     EGS_Application *a = EGS_Application::activeApplication();
     EGS_ChamberApplication *app = dynamic_cast<EGS_ChamberApplication *>(a);
     if( !app ) egsFatal("do_cs_enhancement called with active application "
            " not being of type EGS_ChamberApplication!\n");
     app->do_cs_enhancement(*gmfp);
}

void EGS_ChamberApplication::do_cs_enhancement(EGS_Float &gmfp) {
	// rayleigh-correction-function is called during 'normal' egs-photon routine
	// (not selectPhotonMFP in here for photon-splitting)
	// it is misused here to enhance photon cross-sections (adopted from dosrznrc.mortran)
	// GMFP is passed from egs-photon routine
	int np = the_stack->np-1;
	int ir = the_stack->ir[np]-2;
	if(cs_enhance[ig][ir] > 1 )
		gmfp /= cs_enhance[ig][ir];
	return;
}

int EGS_ChamberApplication::initScoring() {

    EGS_Input *options = input->takeInputItem("scoring options");

    if( options ) {

        //
        // *********** calculation geometries
        //
        vector<EGS_BaseGeometry *> geometries;
        vector<int *>  cavity_regions;
        vector<int>  n_cavity_regions;
        vector<EGS_Float> cavity_masses;
        vector<EGS_AffineTransform *> transformations;
        EGS_Input *aux;
        EGS_BaseGeometry::setActiveGeometryList(app_index);
        vector<EGS_BaseGeometry *> cav_geoms;
        vector<int>  n_subgeometries;
        vector<int *>  subgeometry_regions;
        vector<int>  n_subgeometry_regions;

        vector<int *> ecut_regions;
        vector<int> ecut_regions_nr;
        vector<EGS_Float> ecut_val;

        do_mcav = true;
        while( (aux = options->takeInputItem("calculation geometry")) ) {
            string gname;
            aux->getInput("geometry name",gname);

            string cavString;
            vector<int> cav;
            aux->getInput("cavity regions",cavString);

            string ecut_rString;
            vector<int> ecut_r;
            EGS_Float ecut_v;
            aux->getInput("ECUT regions",ecut_rString);
            aux->getInput("ECUT",ecut_v);

            string cav_gname;
            string cs_regString;
            vector<int> cs_reg;
            vector<int> cs_fac;

            EGS_Float cmass;
            int err2 = aux->getInput("cavity mass",cmass);
            if( err2 ) {
                cmass = -1;
            }
            EGS_BaseGeometry::setActiveGeometryList(app_index);

            EGS_BaseGeometry *cg = EGS_BaseGeometry::getGeometry(cav_gname);
            if( !cg ){
                cg = 0;
            }

            EGS_BaseGeometry *g = EGS_BaseGeometry::getGeometry(gname);
            g->getNumberRegions(cavString, cav);
            g->getLabelRegions(cavString, cav);
            g->getNumberRegions(cs_regString, cs_reg);
            g->getLabelRegions(cs_regString, cs_reg);
            g->getNumberRegions(ecut_rString, ecut_r);
            g->getLabelRegions(ecut_rString, ecut_r);

            int nreg = g->regions();
            int *regs = new int [cav.size()];
            int ncav = 0;
            for(int j=0; j<cav.size(); j++) {
                regs[ncav++] = cav[j];
            }
            geometries.push_back(g);
            cav_geoms.push_back(cg);
            n_cavity_regions.push_back(ncav);
            cavity_regions.push_back(regs);
            cavity_masses.push_back(cmass);
            transformations.push_back(
                    EGS_AffineTransform::getTransformation(aux));
            int *r = new int [ecut_r.size()]; int nr=0;
            for(int j=0; j<ecut_r.size(); j++) {
                if( ecut_r[j] >= 0 && ecut_r[j] < nreg ) {
                    r[nr++] = ecut_r[j];
                }
            }
            delete [] r;
            ecut_regions.push_back(0);
            ecut_regions_nr.push_back(0);
            ecut_val.push_back(0);
            subgeoms.push_back(0);
            n_subgeometries.push_back(0);
            subgeometry_regions.push_back(0);
            n_subgeometry_regions.push_back(0);

            delete aux;
        }
        ngeom = geometries.size();
		do_rECUT = new bool [ngeom];

        nsubgeoms = new int[ngeom];
        is_subgeomreg = new bool* [ngeom];
        geoms = new EGS_BaseGeometry* [ngeom];
        is_cavity   = new bool* [ngeom];
        cs_enhance = new int* [ngeom];
        mass = new EGS_Float [ngeom];
        dose = new EGS_ScoringArray(ngeom);
        transforms = new EGS_AffineTransform* [ngeom];
        has_sub = new bool [ngeom];

        for(int j=0; j<ngeom; j++) {
			do_rECUT[j] = false;
            geoms[j] = geometries[j];
            mass[j] = cavity_masses[j];
            transforms[j] = transformations[j];
            int nreg = geoms[j]->regions();
            is_cavity[j]  = new bool [nreg];
            cs_enhance[j] = new int[nreg];
            is_subgeomreg[j]  = new bool [nreg];
            int i;
            for(i=0; i<nreg; i++){
                is_cavity[j][i]     = false;
                cs_enhance[j][i]    = 1;
                is_subgeomreg[j][i] = false;
            }
            for(i=0; i<n_subgeometry_regions[j]; i++) {
                int ireg = subgeometry_regions[j][i];
                if (ireg == -1)
                    has_sub[j] = false;
                else{
                    has_sub[j] = true;
                    is_subgeomreg[j][ireg] = true;
                }
            }
            nsubgeoms[j] = n_subgeometries[j];
            int imed = -999;
            for(i=0; i<n_cavity_regions[j]; i++) {
                int ireg = cavity_regions[j][i];
                is_cavity[j][ireg] = true;
                if( imed == -999 ) imed = geoms[j]->medium(ireg);
                else {
                    geoms[j]->medium(ireg);
                }
            }

            delete [] cavity_regions[j];
        }

        delete options;

    }

    //
    // **** set up ausgab calls
    //
    int call;
    for(call=BeforeTransport; call<=ExtraEnergy; ++call)
        setAusgabCall((AusgabCall)call,true);
    for(call=AfterTransport; call<UnknownCall; ++call)
        setAusgabCall((AusgabCall)call,false);
    return 0;
}


/*! Accumulate quantities of interest at run time */
int EGS_ChamberApplication::ausgab(int iarg) {
    int np = the_stack->np-1;
    int ir = the_stack->ir[np]-2;
    //
    //  **** energy deposition
    //
    if( iarg <= ExtraEnergy ) {
        if( ir >= 0 && is_cavity[ig][ir] ) {
            EGS_Float aux = the_epcont->edep*the_stack->wt[np];
            if(aux > 0){
                dose->score(ig,aux);
            }
        }
        return 0;
    }
    return 0;
};


/*! Simulate a single shower.
    We need to do special things and therefore reimplement this method.
 */
int EGS_ChamberApplication::simulateSingleShower() {
    
    int stop_geom = ngeom;
    last_case = current_case;
    EGS_Vector x,u;
    the_egsvr->nbr_split = csplit;
    current_case = source->getNextParticle(rndm,p.q,p.latch,p.E,p.wt,x,u);
    int err = startNewShower(); if( err ) return err;
    
    EGS_BaseGeometry *save_geometry = geometry;
    for(ig=0; ig<stop_geom; ig++) {
        geometry = geoms[ig]; p.x = x; p.u = u;
        if( transforms[ig] ) {
            transforms[ig]->transform(p.x); transforms[ig]->rotate(p.u);
        }
        int ireg = geometry->isWhere(p.x);
        if( ireg < 0 ) {
            EGS_Float t = 1e30; ireg = geometry->howfar(ireg,p.x,p.u,t);
            if( ireg >= 0 ) p.x += p.u*t;
        }
        if( ireg >= 0 ) {
            p.ir = ireg;
            nsmall_step = 0;
            err = shower(); if( err ) return err;
        }
    }
    err = finishShower();
    geometry = save_geometry;
    return err;
};

/*! Get the current simulation result.  */
void EGS_ChamberApplication::getCurrentResult(double &sum, double &sum2, double &norm,
        double &count) {
    count = current_case; double flu = source->getFluence();
    int geom_count = do_TmpPhsp ? 1 : 0;
    norm = flu > 0 ? 1.602e-10*count/(flu*mass[geom_count]) : 0;
    dose->currentScore(geom_count,sum,sum2);
};

/*! simulate a shower */
int EGS_ChamberApplication::shower() {
    return EGS_AdvancedApplication::shower();
};

/* Select photon mean-free-path */
void EGS_ChamberApplication::selectPhotonMFP(EGS_Float &dpmfp) {
    
};

int EGS_ChamberApplication::rangeDiscard(EGS_Float tperp, EGS_Float range) const {
    return 0;
};


/*! Start a new shower.  */
int EGS_ChamberApplication::startNewShower() {
  int res = EGS_Application::startNewShower();
  if( res ) return res;
  if( current_case != last_case ) {
      if( ncg > 0 ) {
          for(int j=0; j<ncg; j++)
              scg[j] += dose->thisHistoryScore(gind1[j])*
                        dose->thisHistoryScore(gind2[j]);
      }
      dose->setHistory(current_case);
      last_case = current_case;
  }
  return 0;
};

#ifdef BUILD_APP_LIB
APP_LIB(EGS_ChamberApplication);
#else
APP_MAIN(EGS_ChamberApplication);
#endif
