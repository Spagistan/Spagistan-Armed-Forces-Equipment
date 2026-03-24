itemfactory1 addAction [
    "Deploy Crate (Empty)",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

                _crate = createVehicle ["rhs_7ya37_1_single", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
                _crate setDir getDir crateMarker_2;
                _crate setPosATL getPosATL crateMarker_2;
                _crate setVariable ["ace_cargo_customName", "Empty", true];

                clearWeaponCargoGlobal _crate;
                clearMagazineCargoGlobal _crate;
                clearItemCargoGlobal _crate;
                clearBackpackCargoGlobal _crate;

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];
   
itemfactory1 addAction [
    "Deploy Rifle Supply Crate",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _crate1 = createVehicle ["rhs_7ya37_1_single", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _crate1 setDir getDir crateMarker_2;
            _crate1 setPosATL getPosATL crateMarker_2;
            _crate1 setVariable ["ace_cargo_customName", "Rifle Squad Supply Crate", true];
            _crate1 setVariable ["ace_cargo_noRename", true];

            clearWeaponCargoGlobal _crate1;
            clearMagazineCargoGlobal _crate1;
            clearItemCargoGlobal _crate1;
            clearBackpackCargoGlobal _crate1;

            _crate1 addWeaponCargoGlobal ["rhs_weap_ak74m", 2];
            _crate1 addWeaponCargoGlobal ["rhs_weap_rpg75", 2];
            _crate1 addMagazineCargoGlobal ["grcb_30Rnd_545x39_7N24_AK", 20];
            _crate1 addMagazineCargoGlobal ["grcb_60Rnd_545x39_7N24", 10];
            _crate1 addMagazineCargoGlobal ["rhs_VOG25", 20];
            _crate1 addMagazineCargoGlobal ["rhs_GRD40_white", 10];
            _crate1 addMagazineCargoGlobal ["rhssaf_mag_br_m75", 10];
            _crate1 addMagazineCargoGlobal ["rhssaf_mag_brd_m83_white", 10];
            _crate1 addItemCargoGlobal ["ACE_elasticBandage", 20];
            _crate1 addItemCargoGlobal ["ACE_packingBandage", 20];
            _crate1 addItemCargoGlobal ["ACE_morphine", 5];
            _crate1 addItemCargoGlobal ["ACE_epinephrine", 5];
            _crate1 addItemCargoGlobal ["ACE_tourniquet", 5];
            _crate1 addItemCargoGlobal ["ACE_splint", 5];
            _crate1 addItemCargoGlobal ["ACE_EarPlugs", 3];
            _crate1 addItemCargoGlobal ["ACE_suture", 20];
            _crate1 addItemCargoGlobal ["ACE_salineIV_500", 5];
            _crate1 addMagazineCargoGlobal ["cigs_morley_cigpack", 1];

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy Weapons Supply Crate",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _crate3 = createVehicle ["rhs_7ya37_1_single", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _crate3 setDir getDir crateMarker_2;
            _crate3 setPosATL getPosATL crateMarker_2;
            _crate3 setVariable ["ace_cargo_customName", "Weapons Squad Supply Crate", true];
            _crate3 setVariable ["ace_cargo_noRename", true];

            clearWeaponCargoGlobal _crate3;
            clearMagazineCargoGlobal _crate3;
            clearItemCargoGlobal _crate3;
            clearBackpackCargoGlobal _crate3;
            
            _crate3 addMagazineCargoGlobal ["rhs_250Rnd_762x54mmR_7N26", 4];
            _crate3 addMagazineCargoGlobal ["rhs_rpg7_PG7VS_mag", 6];
            _crate3 addMagazineCargoGlobal ["rhs_rpg7_type69_airburst_mag", 3];
            _crate3 addMagazineCargoGlobal ["rhs_rpg7_TBG7V_mag", 3];
            _crate3 addMagazineCargoGlobal ["rhs_rpg7_OG7V_mag", 2];
            _crate3 addItemCargoGlobal ["ACE_EarPlugs", 3];
            _crate3 addItemCargoGlobal ["ACE_canteen", 1];
            _crate3 addMagazineCargoGlobal ["cigs_morley_cigpack", 1];

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy 9K115 Metis Ammo Crate",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _crate8 = createVehicle ["rhs_7ya37_1_single", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _crate8 setDir getDir crateMarker_2;
            _crate8 setPosATL getPosATL crateMarker_2;
            _crate8 setVariable ["ace_cargo_customName", "9K115 Metis Ammo Crate", true];
            _crate8 setVariable ["ace_cargo_noRename", true];

            clearWeaponCargoGlobal _crate8;
            clearMagazineCargoGlobal _crate8;
            clearItemCargoGlobal _crate8;
            clearBackpackCargoGlobal _crate8;
            
            _crate8 addMagazineCargoGlobal ["ace_compat_rhs_afrf3_mag_9M131M", 12];
            _crate8 addMagazineCargoGlobal ["ace_compat_rhs_afrf3_mag_9M131F", 6];
            _crate8 addItemCargoGlobal ["ACE_EarPlugs", 3];
            _crate8 addMagazineCargoGlobal ["cigs_morley_cigpack", 1];

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy Medical Supply Crate",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _crate2 = createVehicle ["ACE_medicalSupplyCrate_advanced", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _crate2 setDir getDir crateMarker_2;
            _crate2 setPosATL getPosATL crateMarker_2;

                clearWeaponCargoGlobal _crate2;
                clearMagazineCargoGlobal _crate2;
                clearItemCargoGlobal _crate2;
                clearBackpackCargoGlobal _crate2;

                _crate2 addItemCargoGlobal ["ACE_elasticBandage", 75];
                _crate2 addItemCargoGlobal ["ACE_packingBandage", 75];
                _crate2 addItemCargoGlobal ["ACE_quikclot", 75];
                _crate2 addItemCargoGlobal ["ACE_bodyBag", 5];
                _crate2 addItemCargoGlobal ["ACE_CableTie", 25];
                _crate2 addItemCargoGlobal ["ACE_morphine", 25];
                _crate2 addItemCargoGlobal ["ACE_epinephrine", 25];
                _crate2 addItemCargoGlobal ["ACE_salineIV", 40];
                _crate2 addItemCargoGlobal ["ACE_salineIV_500", 40];
                _crate2 addItemCargoGlobal ["ACE_tourniquet", 16];
                _crate2 addItemCargoGlobal ["ACE_splint", 16];
                _crate2 addItemCargoGlobal ["ACE_EarPlugs", 3];
                _crate2 addItemCargoGlobal ["ACE_suture", 100];
                _crate2 addItemCargoGlobal ["ACE_surgicalKit", 4];
                _crate2 addItemCargoGlobal ["ACE_painkillers", 15];
                _crate2 addItemCargoGlobal ["ACE_suture", 100];
                _crate2 addMagazineCargoGlobal ["cigs_morley_cigpack", 1];

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy Vehicle Ammo Crate",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _vehCrate = createVehicle ["Box_East_AmmoVeh_F", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _vehCrate setDir getDir crateMarker_2;
            _vehCrate setPosATL getPosATL crateMarker_2;

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy Concertina Wire",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _conWire = createVehicle ["ACE_ConcertinaWireCoil", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _conWire setDir getDir crateMarker_2;
            _conWire setPosATL getPosATL crateMarker_2;
        

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy Fuel Can",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _fCanSpawn = createVehicle ["rhsusf_props_ScepterMFC_OD", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _fcanSpawn setDir getDir crateMarker_2;
            _fcanSpawn setPosATL getPosATL crateMarker_2;

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy Spare Wheel",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;
            _spareTire = createVehicle ["ACE_Wheel", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _spareTire setDir getDir crateMarker_2;
            _spareTire setPosATL getPosATL crateMarker_2;
            // _sparetire call fnc_doPatchWheelProgress;
                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];

itemfactory1 addAction [
    "Deploy Spare Track",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        if (missionNameSpace getVariable ["canManufacture", true]) then {
            missionNameSpace setVariable ["canManufacture", false];

           playSound3D ["a3\sounds_f\sfx\alarm_independent.wss", propCrate6];

            [_target] spawn {
                sleep 3;

            _track = createVehicle ["ACE_Track", getMarkerPos "cratemarker_1", [], 0, "CAN_COLLIDE"];
            _track setDir getDir crateMarker_2;
            _track setPosATL getPosATL crateMarker_2;

                //(_this select 0) setVariable ["canManufacture", true];
            };
        } else {
            playSound3D [getMissionPath "music\hl1_error2.ogg", itemfactory1, false, getPosASL itemfactory1, 2];
        };
    },
    [],
    6,
    false,
    true,
    "",
    "_target distance _this < 8"
];
