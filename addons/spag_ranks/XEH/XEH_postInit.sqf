#include "\z\spag\addons\ranks\script_component.hpp"

[] spawn {
	[ {time > 2 && !(isNull player) }, FUNC(TFARSetup) ] call CBA_fnc_waitUntilAndExecute;
};

["ace_settingsInitialized", { call FUNC(updateSettings);}] call CBA_fnc_addEventHandler;

if (hasInterface && isMultiplayer) then {
	[] spawn {
		[ {time > 2 && !(isNull player) }, FUNC(TFARSetup) ] call CBA_fnc_waitUntilAndExecute;
    };
};
