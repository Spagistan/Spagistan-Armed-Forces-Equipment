class UZAF_MiG_29S_01 : ua_kzh_mig29 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "MiG-29S";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Fighter_Pilot_01";
    editorCategory = "UZAF_Category";

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_lgray_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_lgray_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_lgray_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LightGray";

};

class UZAF_Su_25_01 : ua_kzh_su25m {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Su-25";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Fighter_Pilot_01";
    editorCategory = "UZAF_Category";

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Mi_35_01 : ua_kzh_mi35 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-35";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Fighter_Pilot_01";
    editorCategory = "UZAF_Category";




    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo2_co.paa'];_unit setObjectTextureGlobal [1,'\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo2_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Camo2";

};

class UZAF_Mi_171Sh_01 : ua_kzh_mi8amtsh {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-171Sh";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Helicopter_Pilot";
    editorCategory = "UZAF_Category";




    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_Mi_8MTV_3_01 : ua_kzh_mi8mtv3 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-8MTV-3";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Helicopter_Pilot_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class UZAF_Mi_8MT_01 : ua_kzh_mi8mt {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-8MT";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Helicopter_Pilot_01";
    editorCategory = "UZAF_Category";




    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};