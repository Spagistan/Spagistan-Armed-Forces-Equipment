class UZAF_T80B_01 : rhs_t80b {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-80B";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";
    editorSubcategory = "EdSubcat_Tanks";

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};


class UZAF_T72B_obr_1985g_01 : ua_kzh_t72bb {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-72B (obr. 1985g.)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "ua_kzh_Crewman";
    editorCategory = "UZAF_Category";
    editorSubcategory = "EdSubcat_Tanks";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_sand_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_sand_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05b_sand_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_Sand";

};

class UZAF_T72B_obr_1984g_01 : ua_kzh_t72ba {
    author = "Y.Yonga";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-72B (obr. 1984g.)";
    side = 0;
    faction = QUOTE(UZFACTION);
    crew = "UZAF_Crewman_01";
    editorCategory = "UZAF_Category";
    editorSubcategory = "EdSubcat_Tanks";

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_Sand";

};