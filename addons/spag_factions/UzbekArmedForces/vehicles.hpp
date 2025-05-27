class UZAF_ZU_23_2_01 : ua_ve_zu23 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "ZU-23-2";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_ve_Rifleman_AK103";
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

class UZAF_V2_01 : rhs_v2 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "V-2";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";

    crew = "Civilian";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_UAZ_3151_01 : ua_kzh_uaz {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "UAZ-3151";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Camo";

};

class UZAF_UAZ_3151_Open_01 : ua_kzh_uaz_open {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "UAZ-3151 (Open)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Camo";

};

class UZAF_2A18M_D30A_02 : ua_kzh_d30 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "2A18M (D-30A)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Rifleman_AK74";
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

class UZAF_2S1_01 : ua_kzh_2s1 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "2S1";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Crewman";
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

class UZAF_Ural_4320_Open_01 : ua_kzh_ural_open {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Open)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class UZAF_Ural_4320_01 : ua_kzh_ural_closed {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
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

class UZAF_Ural_4320_Fuel_01 : ua_kzh_ural_fuel {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Fuel)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [6,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [7,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [8,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [9,'rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa'];_unit setObjectTextureGlobal [10,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class UZAF_Ural_4320_Ammo_01 : ua_kzh_ural_ammo {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Ammo)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Camo";

};

class UZAF_Ural_4320_Repair_01 : ua_kzh_ural_repair {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Repair)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Camo";

};

class UZAF_SPG_9M_01 : ua_prm_spg9m {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "SPG-9M";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_prm_Fighter_AKM";
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

class UZAF_9K133_1Kornet_M_01 : ua_prm_kornet {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "9K133-1 Kornet-M";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_prm_Fighter_AK74MR";
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

class UZAF_P37_01 : ua_prm_p37 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "P-37";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_prm_Commander";
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

class UZAF_BRDM_2_01 : ua_kzh_brdm2 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "BRDM-2";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BDRM2_KHK_01_CO.paa'];_unit setObjectTextureGlobal [1,'\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa'];_unit setObjectTextureGlobal [2,'\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "khaki";

};

class UZAF_BTR_80_01 : ua_kzh_btr80 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "BTR-80";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_tri01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_tri01_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_tri01_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "tricolourhard";

};


class UZAF_BRM_1K_01 : ua_kzh_brm1k {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "BRM-1K";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_sand";

};

class UZAF_BMP_2_01 : ua_kzh_bmp2 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "BMP-2";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_sand";

};



class UZAF_MATV_Unarmed_01 : rhsusf_m1240a1_usarmy_d {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "M-ATV (Unarmed)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_caiman\data\m153_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_CO.paa'];_unit setObjectTextureGlobal [9,'rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_CA.paa'];_unit setObjectTextureGlobal [10,'rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_desert";

};

class UZAF_MATV_CROWS_M2_01 : rhsusf_m1240a1_m2crows_usarmy_d {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "M-ATV (CROWS/M2)";
    side = 0;
    faction = QUOTE(UZFACTION);
    editorCategory = "UZAF_Category";
    crew = "UZAF_Rifleman_AK_74_01";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class UZAF_BTR_70_01 : ua_prm_btr70 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "BTR-70";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_btr70_camo\data\btr70_1_sand_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_btr70_camo\data\btr70_2_sand_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_sand";

};

class UZAF_ZSU_23_4V_01 : ua_prm_zsutank {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "ZSU-23-4V";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa'];_unit setObjectTextureGlobal [1,'\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa'];_unit setObjectTextureGlobal [2,'\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_sand";

};


class UZAF_2A18M_D30A_AT_01 : ua_kzh_d30_at {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "2A18M (D-30A) AT";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Rifleman_AK74";
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

class UZAF_9K115_2Metis_M_01 : ua_prm_metis {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "9K115-2 Metis-M";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_prm_Fighter_AK105_Alt";
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

class UZAF_2B14_1Podnos_01 : ua_kzh_2b14 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "2B14-1 'Podnos'";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Rifleman_AK74";
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

class UZAF_DShKM_01 : ua_kzh_dshkm_high {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "DShKM";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Rifleman_AK74";
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

class UZAF_DSHkM_Minitripod_01 : ua_kzh_dshkm_low {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "DSHkM Minitripod";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Rifleman_AK74";
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

class UZAF_GJ_5_01 : ua_kzh_gj5 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "GJ-5";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Rifleman_AK_74_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_OPFOR_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Opfor";

};

class UZAF_BM_21_01 : ua_kzh_bm21 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "BM-21";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Officer_Field_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class UZAF_2S3M1_Direct_Fire_01 : ua_kzh_2s3_at {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "2S3M1 (Direct Fire)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_tri_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_tri_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_2s3\data\rhs_art_wheels_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_tri";

};

class UZAF_2S3M1_01 : ua_kzh_2s3 {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "2S3M1";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";




    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_tri_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_tri_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_2s3\data\rhs_art_wheels_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_tri";

};



class UZAF_2S1_Direct_Fire_02 : ua_kzh_2s1_at {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "2S1 (Direct Fire)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Crewman";
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