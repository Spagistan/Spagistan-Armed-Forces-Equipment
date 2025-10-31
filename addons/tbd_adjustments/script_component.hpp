#define COMPONENT tbd
#include "\z\spag\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_VEHICLES
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_VEHICLES
  #define DEBUG_SETTINGS DEBUG_SETTINGS_COMMON
#endif


// #ifdef DISABLE_COMPILE_CACHE
//     #undef PREP
//     #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
// #else
//     #undef PREP
//     #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
// #endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORTAR_82mm_BOX_HE spag_82mm_box_he
#define TBD_MORTAR_82mm_BOX_SMOKE spag_82mm_box_smoke
#define TBD_MORTAR_82mm_BOX_ILLUM spag_82mm_box_illum
#define TBD_MORTAR_82mm_BOX_CUMUL spag_82mm_box_cumul

#include "\z\spag\addons\main\script_macros.hpp"
