#include "\x\cba\addons\main\script_macros_common.hpp"
//#include "\x\cba\addons\xeh\script_xeh.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define linkCOMMON "units.arma3.com/unit/spagistan"
#define authorCOMMON "Spagistan Development Team"


#ifdef DISABLE_COMPILE_CACHE
  #undef PREP
  #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
  #undef PREP
  #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif



#ifndef VERSION
    #define VERSION 0
#endif

#ifndef VERSION_STR
    #define VERSION_STR VERSION
#endif


#ifndef VERSION_AR
    #define VERSION_AR VERSION
#endif

#ifndef VERSION_CONFIG
    #define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION_STR); versionAr[] = {VERSION_AR}
#endif

// Spagistan Specific
#define SPAGCAMNAME Spagcam
#define SPAGFACTION Spag_F
#define NGFACTION Spag_NG
#define GCFACTION Spag_GC