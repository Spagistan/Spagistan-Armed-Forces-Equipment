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


// Spagistan Specific
#define SPAGCAMNAME Spagcam
#define SPAGFACTION Spag_F
