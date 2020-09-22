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

//class APP_EXPORT TB : public EGS_AdvancedApplication {
//    public:
//        TB(int argc, char **argv) :
//            EGS_AdvancedApplication(argc,argv) {}
        // int initScoring();
        // int ausgab(int iarg);
//};


//#ifdef BUILD_APP_LIB
//APP_LIB(TB);
//#else
//APP_MAIN(TB);
//#endif

APP_MAIN(EGS_AdvancedApplication);
