//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 218.152893 on Stable branch
// Generated with ALiVE version 2.1.9.2501091
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class S_Soldier_Rifleman;
    class S_Soldier_Rifleman_OCimport_01 : S_Soldier_Rifleman { scope = 0; class EventHandlers; };
    class S_Soldier_Rifleman_OCimport_02 : S_Soldier_Rifleman_OCimport_01 { class EventHandlers; };

    class S_Soldier_Armor;
    class S_Soldier_Armor_OCimport_01 : S_Soldier_Armor { scope = 0; class EventHandlers; };
    class S_Soldier_Armor_OCimport_02 : S_Soldier_Armor_OCimport_01 { class EventHandlers; };

    class ua_chvk_afr_ural_fuel;
    class ua_chvk_afr_ural_fuel_OCimport_01 : ua_chvk_afr_ural_fuel { scope = 0; class EventHandlers; };
    class ua_chvk_afr_ural_fuel_OCimport_02 : ua_chvk_afr_ural_fuel_OCimport_01 { scope = 0; class EventHandlers; };

    class ua_chvk_afr_ural_ammo;
    class ua_chvk_afr_ural_ammo_OCimport_01 : ua_chvk_afr_ural_ammo { scope = 0; class EventHandlers; };
    class ua_chvk_afr_ural_ammo_OCimport_02 : ua_chvk_afr_ural_ammo_OCimport_01 { scope = 0; class EventHandlers; };

    class ua_chvk_afr_ural_open;
    class ua_chvk_afr_ural_open_OCimport_01 : ua_chvk_afr_ural_open { scope = 0; class EventHandlers; class Turrets; };
    class ua_chvk_afr_ural_open_OCimport_02 : ua_chvk_afr_ural_open_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class ua_chvk_afr_ural_repair;
    class ua_chvk_afr_ural_repair_OCimport_01 : ua_chvk_afr_ural_repair { scope = 0; class EventHandlers; };
    class ua_chvk_afr_ural_repair_OCimport_02 : ua_chvk_afr_ural_repair_OCimport_01 { scope = 0; class EventHandlers; };

    class S_Soldier_SL;
    class S_Soldier_SL_OCimport_01 : S_Soldier_SL { scope = 0; class EventHandlers; };
    class S_Soldier_SL_OCimport_02 : S_Soldier_SL_OCimport_01 { class EventHandlers; };

    class ua_chvk_afr_2b14;
    class ua_chvk_afr_2b14_OCimport_01 : ua_chvk_afr_2b14 { scope = 0; class EventHandlers; class Turrets; };
    class ua_chvk_afr_2b14_OCimport_02 : ua_chvk_afr_2b14_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class I_Spagistan_Garmsar_Garmsar_Cadet_01 : S_Soldier_Rifleman_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Cadet";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        editorCategory = "Spagistan_GC_Category";

        identityTypes[] = {"Head_TK","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_S_Uniform_SPAGPAT";

        linkedItems[] = {"rhs_chicom_khk","rhs_pilotka","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_chicom_khk","rhs_pilotka","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm"};
        respawnWeapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm"};

        magazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};
        respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m38","","","",{"rhsgref_5Rnd_762x54_m38",5},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"U_S_Uniform_SPAGPAT",{{"ACE_microDAGR",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_elasticBandage",20},{"ACE_Banana",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"ACE_suture",10},{"rhsgref_5Rnd_762x54_m38",3,5},{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_br_m84",1,1}}},{"rhs_chicom_khk",{{"rhsgref_5Rnd_762x54_m38",10,5},{"rhssaf_mag_br_m84",4,1},{"ALiVE_Handgrenade_can",2,1}}},{},"rhs_pilotka","",{},{"ItemMap","","TFAR_anprc148jem","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Spagistan_Insignia'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Spagistan_Insignia";

    };

    class I_Spagistan_Garmsar_Garmsar_Driving_Boy_01 : S_Soldier_Armor_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Driving Boy";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        editorCategory = "Spagistan_GC_Category";

        identityTypes[] = {"Head_TK","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_S_Uniform_SPAGPAT";

        linkedItems[] = {"rhs_chicom_khk","S_PatrolCap_SPAGPAT","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_chicom_khk","S_PatrolCap_SPAGPAT","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm"};
        respawnWeapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm"};

        magazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};
        respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};

        backpack = "S_KitBag_Spag_Rifleman";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m38","","","",{"rhsgref_5Rnd_762x54_m38",5},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"U_S_Uniform_SPAGPAT",{{"ACE_microDAGR",1},{"ACE_CableTie",2},{"ACE_EarPlugs",2},{"rhsgref_5Rnd_762x54_m38",3,5}}},{"rhs_chicom_khk",{}},{"S_KitBag_Spag_Rifleman",{{"ACE_elasticBandage",20},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_splint",4},{"ACE_tourniquet",4},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_EntrenchingTool",1},{"ToolKit",1},{"rhssaf_mag_br_m75",5,1},{"rhssaf_mag_brd_m83_white",5,1},{"acex_intelitems_notepad",1,1},{"rhsgref_5Rnd_762x54_m38",10,5}}},"S_PatrolCap_SPAGPAT","",{},{"ItemMap","","TFAR_anprc148jem","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Spagistan_Insignia'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Spagistan_Insignia";

    };

    class I_Spagistan_Garmsar_Garmsar_Gunner_Boy_01 : I_Spagistan_Garmsar_Garmsar_Driving_Boy_01 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Gunner Boy";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        editorCategory = "Spagistan_GC_Category";

        identityTypes[] = {"Head_TK","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_S_Uniform_SPAGPAT";

        linkedItems[] = {"rhs_chicom_khk","rhs_ssh68_2","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_chicom_khk","rhs_ssh68_2","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm"};
        respawnWeapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm"};

        magazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};
        respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};

        backpack = "S_KitBag_Spag_Rifleman";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m38","","","",{"rhsgref_5Rnd_762x54_m38",5},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"U_S_Uniform_SPAGPAT",{{"ACE_microDAGR",1},{"ACE_CableTie",2},{"ACE_EarPlugs",2},{"rhsgref_5Rnd_762x54_m38",3,5}}},{"rhs_chicom_khk",{}},{"S_KitBag_Spag_Rifleman",{{"ACE_elasticBandage",20},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_splint",4},{"ACE_tourniquet",4},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_EntrenchingTool",1},{"ToolKit",1},{"rhssaf_mag_br_m75",5,1},{"rhssaf_mag_brd_m83_white",5,1},{"acex_intelitems_notepad",1,1},{"rhsgref_5Rnd_762x54_m38",10,5}}},"rhs_ssh68_2","",{},{"ItemMap","","TFAR_anprc148jem","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Spagistan_Insignia'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Spagistan_Insignia";

    };

    class I_Spagistan_Garmsar_Garmsar_Fuel_Truck_02 : ua_chvk_afr_ural_fuel_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Fuel Truck";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spagistan_Garmsar_Garmsar_Driving_Boy_01";
        editorCategory = "Spagistan_GC_Category";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [6,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [7,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [8,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [9,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [10,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_tka_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo1";

    };

    class I_Spagistan_Garmsar_Garmsar_Ammo_Truck_01 : ua_chvk_afr_ural_ammo_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Ammo Truck";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spagistan_Garmsar_Garmsar_Driving_Boy_01";
        editorCategory = "Spagistan_GC_Category";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_tka_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo7";

    };

    class I_Spagistan_Garmsar_Garmsar_Boys_Truck_02 : ua_chvk_afr_ural_open_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Boys Truck";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spagistan_Garmsar_Garmsar_Driving_Boy_01";
        editorCategory = "Spagistan_GC_Category";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo1";

    };

    class I_Spagistan_Garmsar_Garmsar_Repair_Truck_01 : ua_chvk_afr_ural_repair_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Repair Truck";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spagistan_Garmsar_Garmsar_Driving_Boy_01";
        editorCategory = "Spagistan_GC_Category";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo2";

    };

    class I_Spagistan_Garmsar_Garmsar_Sergeant_01 : S_Soldier_SL_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Sergeant";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        editorCategory = "Spagistan_GC_Category";
    
        identityTypes[] = {"Head_TK","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_S_Uniform_SPAGPAT";

        linkedItems[] = {"rhs_gear_OFF","S_beret_green_SPAGPAT","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_gear_OFF","S_beret_green_SPAGPAT","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm","Binocular"};
        respawnWeapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm","Binocular"};

        magazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};
        respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S","rhsgref_5Rnd_762x54_m38","rhs_mag_9x18_8_57N181S"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m38","","","",{"rhsgref_5Rnd_762x54_m38",5},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"U_S_Uniform_SPAGPAT",{{"ACE_microDAGR",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_elasticBandage",20},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_splint",4},{"rhsgref_5Rnd_762x54_m38",3,5},{"rhssaf_mag_brz_m88",1,1},{"rhssaf_mag_br_m84",1,1}}},{"rhs_gear_OFF",{{"rhsgref_5Rnd_762x54_m38",3,5},{"rhssaf_mag_brd_m83_white",2,1}}},{},"S_beret_green_SPAGPAT","",{"Binocular","","","",{},{},""},{"ItemMap","","TFAR_anprc148jem","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Spagistan_Insignia'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Spagistan_Insignia";

    };

    class I_Spagistan_Garmsar_Garmsar_Boys_Mortar_01 : ua_chvk_afr_2b14_OCimport_02 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Garmsar Boys Mortar";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spagistan_Garmsar_Garmsar_Gunner_Boy_01";
        editorCategory = "Spagistan_GC_Category";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "I_Spagistan_Garmsar_Garmsar_Gunner_Boy_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};