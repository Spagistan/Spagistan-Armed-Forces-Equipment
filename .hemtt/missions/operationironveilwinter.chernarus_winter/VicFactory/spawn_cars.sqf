removeAllActions vicfactory1;

vicfactory1 addAction [
    "Deploy UAZ-3151",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_uaz", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy UAZ-3151 (Open)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_uaz_open", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy UAZ-3151 (DShKM)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_uaz_dshkm", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy UAZ-3151 (AGS-30)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_uaz_ags30", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy UAZ-3151 (SPG-9)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["rhsgref_nat_uaz_spg9", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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

vicfactory1 addAction ["Go back", saf_fnc_vicFactoryInit];
