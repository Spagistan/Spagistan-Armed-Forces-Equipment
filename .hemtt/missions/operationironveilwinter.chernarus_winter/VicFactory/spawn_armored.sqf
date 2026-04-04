removeAllActions vicfactory1;

vicfactory1 addAction [
    "Deploy BMP-2D",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];
			
			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["S_BMP2D_Spagpat", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
            _vehicle setDir markerDir "vicmarker_1";
			_vehicle setObjectTextureGlobal [0, "rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa"];
			_vehicle setObjectTextureGlobal [1, "rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa"];
			_vehicle setObjectTextureGlobal [2, "rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa"];
			_vehicle setObjectTextureGlobal [3, "rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa"];
			_vehicle setObjectTextureGlobal [4, "rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa"];
			_vehicle setObjectTextureGlobal [5, "rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"];
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
    "Deploy BTR-80A",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];
			
			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["rhs_btr80a_vmf", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy M113A3 (Unarmed)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];
			
			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["m113_spagpat", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy M113A3 (M2)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];
			
			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["ua_sna_m113a3_m2", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
    "Deploy Obyekt-681",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];
			
			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["I_SPAGF_SPAG_Objyekt_681_01", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
            _vehicle setDir markerDir "vicmarker_1";
            _vehicle setObjectTextureGlobal [0, "rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa"];
			_vehicle setObjectTextureGlobal [1, "rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa"];
			_vehicle setObjectTextureGlobal [2, "rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa"];
			_vehicle setObjectTextureGlobal [3, "rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa"];
			_vehicle setObjectTextureGlobal [4, "rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa"];
			_vehicle setObjectTextureGlobal [5, "rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"];
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
    "Deploy T-80UE-1",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufactureVic", true]) then {
            missionNameSpace setVariable ["canManufactureVic", false];
			
			call saf_fnc_vicFactoryInit;
           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", vicSpeaker];

            [_target] spawn {
                sleep 3;

            _vehicle = createVehicle ["rhs_t80ue1", getMarkerPos "vicmarker_1", [], 0, "CAN_COLLIDE"];
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
