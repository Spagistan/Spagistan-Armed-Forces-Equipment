removeAllActions vicfactory1;

vicfactory1 addAction [
    "Deploy Ural-4320",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_ural_closed", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
            _vehicle setDir markerDir "vicmarker_1";
            call saf_fnc_vicLoadout; 
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", vicfactory1, false, getPosASL vicfactory1, 4];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

vicfactory1 addAction [
    "Deploy Ural-4320 (Repair)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["O_uzbek_Ural_4320_Repair_01", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
            _vehicle setDir markerDir "vicmarker_1";
            call saf_fnc_vicLoadout;
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", vicfactory1, false, getPosASL vicfactory1, 4];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

vicfactory1 addAction [
    "Deploy Ural-4320 (Fuel)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_ural_fuel", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
            _vehicle setDir markerDir "vicmarker_1";
            call saf_fnc_vicLoadout;
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", vicfactory1, false, getPosASL vicfactory1, 4];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

/* vicfactory1 addAction [
    "Deploy KrAZ-255B1 (Cargo)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_kraz_flatbed", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
            _vehicle setDir markerDir "vicmarker_1";
			_vehicle setVehicleCargo Land_WoodenCrate_01_stack_x5_F;
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", vicfactory1, false, getPosASL vicfactory1, 4];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];
*/

vicfactory1 addAction ["Go back", saf_fnc_vicFactoryInit];