#include "script_component.hpp"

#include "XEH_PREP.hpp"

ADDON = true;

[QUOTE(TBD_MORTAR_82mm_BOX_HE), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTAR_82mm_BOX_ILLUM), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTAR_82mm_BOX_CUMUL), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTAR_82mm_BOX_SMOKE), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
