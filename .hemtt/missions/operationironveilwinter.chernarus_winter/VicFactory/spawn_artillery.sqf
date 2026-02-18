removeAllActions vicfactory1;

vicfactory1 addAction [
    "Deploy 2S3M1",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];
			
			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["ua_kzh_2s3", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
            _vehicle setDir markerDir "vicmarker_1";
            _vehicle setObjectTexture [0, "rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_tri_co.paa"];
            _vehicle setObjectTexture [1, "rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_tri_co.paa"];
            _vehicle setObjectTexture [2, "rhsafrf\addons\rhs_2s3_camo\data\rhs_art_wheels_des_co.paa"];
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
    "Deploy BTR-40 82mm Mortar",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["PRACS_SLA_BTR40_mortar", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy BM-21",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];

			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["spag_ural_bm21", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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