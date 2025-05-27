

class UZAF_Rifleman_AK_74_01 : ua_kzh_Rifleman_AK74 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (AK-74)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74_2"};
    respawnWeapons[] = {"rhs_weap_ak74_2"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_plum_AK",30},{},""},{},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_plum_AK",1,30},{"rhs_mag_rdg2_white",2,1}}},{"ua_6sh117_rifleman_od",{{"rhs_30Rnd_545x39_7N6M_plum_AK",5,30},{"rhs_mag_rgd5",2,1},{"rhs_mag_rdg2_white",1,1}}},{},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Officer_01 : ua_kzh_Officer {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Officer";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_vkbo_speca";

    linkedItems[] = {"ua_patrol_speca","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"ua_patrol_speca","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_aks74u","Binocular"};
    respawnWeapons[] = {"rhs_weap_aks74u","Binocular"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74u","rhs_acc_pgs64_74u","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"ua_vkbo_speca",{{"ACE_fieldDressing",4},{"rhs_30Rnd_545x39_7N6M_AK",1,30}}},{},{},"ua_patrol_speca","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Officer_Field_01 : ua_kzh_Officer_Field {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Officer (Field)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6b45_light_od","ua_patrol_speca","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"ua_6b45_light_od","ua_patrol_speca","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_aks74u","Binocular"};
    respawnWeapons[] = {"rhs_weap_aks74u","Binocular"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74u","rhs_acc_pgs64_74u","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_AK",2,30}}},{"ua_6b45_light_od",{{"rhs_30Rnd_545x39_7N6M_AK",1,30}}},{},"ua_patrol_speca","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Section_Leader_01 : ua_kzh_Section_Leader {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Section Leader";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca";

    linkedItems[] = {"rhsgref_6b23_khaki_officer","ua_6b7_1m_speca","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"rhsgref_6b23_khaki_officer","ua_6b7_1m_speca","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74_2","rhs_weap_makarov_pm"};
    respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_makarov_pm"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_mag_9x18_8_57N181S"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_plum_AK",30},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"ua_6sh122_speca",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",2,1},{"rhs_mag_rdg2_white",2,1}}},{"rhsgref_6b23_khaki_officer",{{"rhs_mag_rdg2_white",1,1},{"rhs_30Rnd_545x39_7N6M_plum_AK",5,30},{"rhs_mag_9x18_8_57N181S",1,8}}},{},"ua_6b7_1m_speca","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Team_Leader_01 : ua_kzh_Team_Leader {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Team Leader";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6sh117_teamleader_od","ua_6b7_1m_speca","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6sh117_teamleader_od","ua_6b7_1m_speca","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74n_2_gp25"};
    respawnWeapons[] = {"rhs_weap_ak74n_2_gp25"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_VOG25","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_VOG25"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_VOG25","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_VOG25"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_2_gp25","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_plum_AK",30},{"rhs_VOG25",1},""},{},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_mag_rdg2_white",1,1},{"rhs_30Rnd_545x39_7N6M_plum_AK",1,30}}},{"ua_6sh117_teamleader_od",{{"rhs_30Rnd_545x39_7N6M_plum_AK",5,30},{"rhs_VOG25",5,1},{"rhs_mag_rdg2_white",3,1},{"rhs_mag_rgd5",3,1}}},{},"ua_6b7_1m_speca","",{},{"","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Autorifleman_01 : ua_kzh_Autorifleman {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca";

    linkedItems[] = {"ua_6sh117_ar_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6sh117_ar_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_rpk74m"};
    respawnWeapons[] = {"rhs_weap_rpk74m"};

    magazines[] = {"rhs_60Rnd_545X39_7N10_AK","rhs_60Rnd_545X39_7N10_AK"};
    respawnMagazines[] = {"rhs_60Rnd_545X39_7N10_AK","rhs_60Rnd_545X39_7N10_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m","rhs_acc_dtkrpk","","",{"rhs_60Rnd_545X39_7N10_AK",60},{},""},{},{},{"ua_6sh122_speca",{{"ACE_fieldDressing",4},{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1}}},{"ua_6sh117_ar_od",{{"rhs_60Rnd_545X39_7N10_AK",5,60}}},{},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Machinegunner_01 : ua_kzh_Machinegunner {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machinegunner";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6sh117_mg_od","ua_6b7_1m_speca","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"ua_6sh117_mg_od","ua_6b7_1m_speca","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm"};
    respawnWeapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S"};

    backpack = "ua_kzh_gpmg_pack";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1},{"rhs_mag_9x18_8_57N181S",1,8}}},{"ua_6sh117_mg_od",{{"rhs_100Rnd_762x54mmR",2,100}}},{"ua_kzh_gpmg_pack",{{"rhs_100Rnd_762x54mmR",3,100}}},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Marksman_01 : ua_kzh_Marksman {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_specaspring";

    linkedItems[] = {"ua_6sh117_dmr_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6sh117_dmr_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_svd_pso1","rhs_weap_makarov_pm"};
    respawnWeapons[] = {"rhs_weap_svd_pso1","rhs_weap_makarov_pm"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svd_pso1","","","rhs_acc_pso1m2",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"ua_6sh122_specaspring",{{"ACE_fieldDressing",4},{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1},{"rhs_10Rnd_762x54mmR_7N1",5,10}}},{"ua_6sh117_dmr_od",{{"rhs_10Rnd_762x54mmR_7N1",5,10},{"rhs_mag_9x18_8_57N181S",1,8}}},{},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Anti_tank_RPG_01 : ua_kzh_Anti_Tank {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-tank (RPG-7)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6b45_rifleman_2_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6b45_rifleman_2_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74","rhs_weap_rpg7"};
    respawnWeapons[] = {"rhs_weap_ak74","rhs_weap_rpg7"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_rpg7_PG7VL_mag","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_rpg7_PG7VL_mag","rhs_30Rnd_545x39_7N6M_AK"};

    backpack = "ua_kzh_mat_pack";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{"rhs_weap_rpg7","","","",{"rhs_rpg7_PG7VL_mag",1},{},""},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_AK",2,30}}},{"ua_6b45_rifleman_2_od",{{"rhs_30Rnd_545x39_7N6M_AK",4,30}}},{"ua_kzh_mat_pack",{{"rhs_rpg7_PG7VL_mag",3,1}}},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Anti_tank_Assistant_01 : ua_kzh_Anti_Tank_Assistant {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-tank Assistant";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6b45_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"ua_6b45_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_ak74_2"};
    respawnWeapons[] = {"rhs_weap_ak74_2"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};

    backpack = "ua_kzh_mat_pack";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_plum_AK",30},{},""},{},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_plum_AK",2,30}}},{"ua_6b45_rifleman_od",{{"rhs_30Rnd_545x39_7N6M_plum_AK",4,30}}},{"ua_kzh_mat_pack",{{"rhs_rpg7_PG7VL_mag",3,1}}},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Anti_air_9K38_01 : ua_kzh_Anti_Air {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-air (9K38)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";   

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74","rhs_weap_igla"};
    respawnWeapons[] = {"rhs_weap_ak74","rhs_weap_igla"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9k38_rocket","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9k38_rocket","rhs_30Rnd_545x39_7N6M_AK"};

    backpack = "ua_kzh_aa_pack";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_AK",2,30}}},{"ua_6sh117_rifleman_od",{{"rhs_30Rnd_545x39_7N6M_AK",4,30}}},{"ua_kzh_aa_pack",{{"rhs_mag_9k38_rocket",1,1}}},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Engineer_01 : ua_kzh_Engineer {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Engineer";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74_2"};
    respawnWeapons[] = {"rhs_weap_ak74_2"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};

    backpack = "rhs_rk_sht_30_olive";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_plum_AK",30},{},""},{},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_mag_rdg2_white",1,1},{"rhs_30Rnd_545x39_7N6M_plum_AK",1,30}}},{"ua_6sh117_rifleman_od",{{"rhs_30Rnd_545x39_7N6M_plum_AK",5,30}}},{"rhs_rk_sht_30_olive",{{"ToolKit",1},{"rhs_mine_pmn2_mag",6,1},{"rhs_ec200_mag",2,1}}},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Grenadier_01 : ua_kzh_Grenadier {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6b45_vog_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6b45_vog_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74_gp25"};
    respawnWeapons[] = {"rhs_weap_ak74_gp25"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_gp25","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{"rhs_VOG25",1},""},{},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_AK",2,30}}},{"ua_6b45_vog_od",{{"rhs_30Rnd_545x39_7N6M_AK",4,30},{"rhs_VOG25",5,1}}},{},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Rifleman_RPG_18_01 : ua_kzh_Rifleman_LAT {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (RPG-18)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6sh117_rifleman_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_ak74","rhs_weap_rpg18"};
    respawnWeapons[] = {"rhs_weap_ak74","rhs_weap_rpg18"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{"rhs_weap_rpg18","","","",{},{},""},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_AK",2,30}}},{"ua_6sh117_rifleman_od",{{"rhs_30Rnd_545x39_7N6M_AK",4,30}}},{},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Rifleman_AKM_01 : ua_kzh_Rifleman_AKM {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (AKM)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca";

    linkedItems[] = {"ua_6b45_rifleman_2_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_6b45_rifleman_2_od","ua_6b7_1m_speca","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"ua_6sh122_speca",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_762x39mm",1,30}}},{"ua_6b45_rifleman_2_od",{{"rhs_30Rnd_762x39mm",5,30},{"rhs_mag_rdg2_white",3,1},{"rhs_mag_rgd5",3,1}}},{},"ua_6b7_1m_speca","",{},{"","","","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Crewman_01 : ua_kzh_Crewman {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_vkbo_speca_gloves";

    linkedItems[] = {"rhsgref_6b23_khaki","rhs_tsh4","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsgref_6b23_khaki","rhs_tsh4","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_aks74u"};
    respawnWeapons[] = {"rhs_weap_aks74u"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74u","rhs_acc_pgs64_74u","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"ua_vkbo_speca_gloves",{{"ACE_fieldDressing",4},{"rhs_30Rnd_545x39_7N6M_AK",3,30}}},{"rhsgref_6b23_khaki",{}},{},"rhs_tsh4","",{},{"","","","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Assaulter_AK_105_01 : ua_kzh_sf_Assaulter {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Assaulter (AK-105)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam";

    linkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct_bk","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct_bk","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_xps3_wmx_tgpa","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_xps3_wmx_tgpa","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"ua_kzh_rhs_weap_ak105_zenitco_xps3_wmx_tgpa","rhs_acc_tgpa","rhsusf_acc_wmx_bk","rhsusf_acc_eotech_xps3",{"rhs_30Rnd_545x39_7N22_AK",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rgo",2,1},{"rhs_mag_zarya2",2,1},{"rhs_mag_rdg2_white",1,1}}},{"ua_lbt_multicam_light",{{"rhs_30Rnd_545x39_7N22_AK",8,30},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{},"ua_fast_multicam_ct_bk","rhs_googles_black",{},{"","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Team_Leader_03 : ua_kzh_sf_Team_Leader {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Team Leader";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam";

    linkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct_bk","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct_bk","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_g33_xps3_wmx_tgpa","rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_g33_xps3_wmx_tgpa","rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"ua_kzh_rhs_weap_ak105_zenitco_g33_xps3_wmx_tgpa","rhs_acc_tgpa","rhsusf_acc_wmx_bk","rhsusf_acc_g33_xps3",{"rhs_30Rnd_545x39_7N22_AK",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rgo",2,1},{"rhs_mag_zarya2",2,1},{"rhs_mag_rdg2_white",1,1}}},{"ua_lbt_multicam_light",{{"rhs_mag_rdg2_white",1,1},{"rhs_30Rnd_545x39_7N22_AK",8,30},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{},"ua_fast_multicam_ct_bk","rhs_ess_black",{"rhs_pdu4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Autorifleman_03 : ua_kzh_sf_Autorifleman {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam";

    linkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"ua_kzh_rhs_weap_rpk74m_tgpa","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"ua_kzh_rhs_weap_rpk74m_tgpa","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_60Rnd_545X39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_60Rnd_545X39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_60Rnd_545X39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_60Rnd_545X39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"ua_kzh_rhs_weap_rpk74m_tgpa","rhs_acc_tgpa","","",{"rhs_60Rnd_545X39_7N22_AK",60},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"ACE_EarPlugs",1},{"rhs_mag_rgo",2,1},{"rhs_mag_rdg2_white",1,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{"ua_lbt_multicam_light",{{"rhs_60Rnd_545X39_7N22_AK",6,60}}},{},"ua_fast_multicam_ct","rhs_googles_black",{},{"","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Machinegunner_02 : ua_kzh_sf_Machinegunner {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machinegunner";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam_rolled";

    linkedItems[] = {"ua_lbt_multicam_heavy","ua_fast_multicam_ct_bk","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_lbt_multicam_heavy","ua_fast_multicam_ct_bk","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"rhs_weap_pkp","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_pkp","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhsusf_mag_17Rnd_9x19_FMJ","rhs_100Rnd_762x54mmR","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhsusf_mag_17Rnd_9x19_FMJ","rhs_100Rnd_762x54mmR","rhsusf_mag_17Rnd_9x19_FMJ"};

    backpack = "ua_kzh_sf_gpmg_pack";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_1p78",{"rhs_100Rnd_762x54mmR",100},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam_rolled",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"ACE_EarPlugs",1},{"rhs_mag_rgo",2,1},{"rhs_mag_rdg2_white",1,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{"ua_lbt_multicam_heavy",{{"rhs_100Rnd_762x54mmR",1,100}}},{"ua_kzh_sf_gpmg_pack",{{"rhs_100Rnd_762x54mmR",4,100}}},"ua_fast_multicam_ct_bk","rhs_ess_black",{},{"","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Marksman_03 : ua_kzh_sf_Marksman {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam";

    linkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"ua_kzh_rhs_weap_svdp_npz_tws_tgpv2","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"ua_kzh_rhs_weap_svdp_npz_tws_tgpv2","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N14","rhsusf_mag_17Rnd_9x19_FMJ","rhs_10Rnd_762x54mmR_7N14","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N14","rhsusf_mag_17Rnd_9x19_FMJ","rhs_10Rnd_762x54mmR_7N14","rhsusf_mag_17Rnd_9x19_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"ua_kzh_rhs_weap_svdp_npz_tws_tgpv2","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"ACE_EarPlugs",1},{"rhs_mag_rgo",2,1},{"rhs_10Rnd_762x54mmR_7N14",4,10}}},{"ua_lbt_multicam_light",{{"rhs_10Rnd_762x54mmR_7N14",6,10},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{},"ua_fast_multicam_ct","rhs_ess_black",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Engineer_03 : ua_kzh_sf_Engineer {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Engineer";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam";

    linkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"ua_kzh_rhs_weap_aks74n_ekp8_tgpa","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"ua_kzh_rhs_weap_aks74n_ekp8_tgpa","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};

    backpack = "ua_kzh_sf_engineer_pack";

    ALiVE_orbatCreator_loadout[] = {{"ua_kzh_rhs_weap_aks74n_ekp8_tgpa","rhs_acc_tgpa","","rhs_acc_ekp8_02",{"rhs_30Rnd_545x39_7N22_AK",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rgo",3,1},{"rhs_mag_zarya2",1,1},{"rhs_mag_rdg2_white",1,1}}},{"ua_lbt_multicam_light",{{"rhs_mag_rdg2_white",1,1},{"rhs_30Rnd_545x39_7N22_AK",8,30},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{"ua_kzh_sf_engineer_pack",{{"ToolKit",1},{"MineDetector",1},{"rhs_mine_pmn2_mag",6,1},{"rhs_ec200_mag",3,1},{"rhs_mine_tm62m_mag",1,1}}},"ua_fast_multicam_ct","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Medic_02 : ua_kzh_sf_Medic {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam";

    linkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_t1_high_wmx_tgpa","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_t1_high_wmx_tgpa","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};

    backpack = "ua_ace_kzh_sf_medic_pack";

    ALiVE_orbatCreator_loadout[] = {{"ua_kzh_rhs_weap_ak105_zenitco_t1_high_wmx_tgpa","rhs_acc_tgpa","rhsusf_acc_wmx_bk","rhsusf_acc_T1_high",{"rhs_30Rnd_545x39_7N22_AK",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rgo",2,1},{"rhs_mag_zarya2",1,1},{"rhs_mag_rdg2_white",1,1}}},{"ua_lbt_multicam_light",{{"rhs_mag_rdg2_white",1,1},{"rhs_30Rnd_545x39_7N22_AK",8,30},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{"ua_ace_kzh_sf_medic_pack",{{"ACE_surgicalKit",1},{"ACE_personalAidKit",1},{"ACE_suture",4},{"ACE_plasmaIV",1},{"ACE_plasmaIV_500",3},{"ACE_splint",3},{"ACE_tourniquet",6},{"ACE_epinephrine",6},{"ACE_morphine",9},{"ACE_packingBandage",30}}},"ua_fast_multicam_ct","rhs_ess_black",{},{"","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Assaulter_LAT_01 : ua_kzh_sf_Assaulter_LAT {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Assaulter (LAT)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","rhsusf_g_army"};

    uniformClass = "ua_crye_combat_multicam";

    linkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
    respawnlinkedItems[] = {"ua_lbt_multicam_light","ua_fast_multicam_ct","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

    weapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_t1_high_wmx_tgpa","rhs_weap_rpg26","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"ua_kzh_rhs_weap_ak105_zenitco_t1_high_wmx_tgpa","rhs_weap_rpg26","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ","rhs_30Rnd_545x39_7N22_AK","rhsusf_mag_17Rnd_9x19_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"ua_kzh_rhs_weap_ak105_zenitco_t1_high_wmx_tgpa","rhs_acc_tgpa","rhsusf_acc_wmx_bk","rhsusf_acc_T1_high",{"rhs_30Rnd_545x39_7N22_AK",30},{},""},{"rhs_weap_rpg26","","","",{},{},""},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"ua_crye_combat_multicam",{{"ACE_packingBandage",6},{"ACE_morphine",1},{"ACE_tourniquet",1},{"ACE_EarPlugs",1},{"rhs_mag_rgo",2,1},{"rhs_mag_zarya2",2,1},{"rhs_mag_rdg2_white",1,1}}},{"ua_lbt_multicam_light",{{"rhs_30Rnd_545x39_7N22_AK",8,30},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17}}},{},"ua_fast_multicam_ct","rhs_googles_black",{},{"","","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Border_Guard_01 : ua_kzh_Rifleman_Light {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Border Guard";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_6sh122_speca_nogloves";

    linkedItems[] = {"ua_6sh117_rifleman_od","rhs_ushanka","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"ua_6sh117_rifleman_od","rhs_ushanka","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_ak74_2"};
    respawnWeapons[] = {"rhs_weap_ak74_2"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_plum_AK",30},{},""},{},{},{"ua_6sh122_speca_nogloves",{{"ACE_fieldDressing",4},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_plum_AK",2,30}}},{"ua_6sh117_rifleman_od",{{"rhs_30Rnd_545x39_7N6M_plum_AK",2,30}}},{},"rhs_ushanka","",{},{"","","","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Helicopter_Pilot_01 : ua_kzh_Helicopter_Pilot {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Helicopter Pilot";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_vkbo_speca_gloves";

    linkedItems[] = {"rhsgref_6b23_khaki","rhs_zsh7a_mike","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsgref_6b23_khaki","rhs_zsh7a_mike","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_aks74u"};
    respawnWeapons[] = {"rhs_weap_aks74u"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74u","rhs_acc_pgs64_74u","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"ua_vkbo_speca_gloves",{{"ACE_fieldDressing",4},{"rhs_30Rnd_545x39_7N6M_AK",3,30}}},{"rhsgref_6b23_khaki",{}},{},"rhs_zsh7a_mike","",{},{"","","","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Fighter_Pilot_01 : ua_kzh_Fighter_Pilot {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Fighter Pilot";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    identityTypes[] = {"Head_Asian","LanguageRUS_F","NoGlasses"};

    uniformClass = "ua_vkbo_speca_gloves";

    linkedItems[] = {"rhsgref_6b23_khaki","rhs_zsh7a","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsgref_6b23_khaki","rhs_zsh7a","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_makarov_pm"};
    respawnWeapons[] = {"rhs_weap_makarov_pm"};

    magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"ua_vkbo_speca_gloves",{{"ACE_fieldDressing",4},{"rhs_mag_9x18_8_57N181S",2,8}}},{"rhsgref_6b23_khaki",{}},{},"rhs_zsh7a","",{},{"","","","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};