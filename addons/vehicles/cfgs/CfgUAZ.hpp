
class RHS_UAZ_Base;
class RHS_UAZ_DShKM_Base;
class RHS_UAZ_AGS30_Base;

class RHS_UAZ_MSV_01;
class spag_uaz : RHS_UAZ_MSV_01 {
    scope = 2;
    scopeCurator = 2;
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Cars";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
};
class rhs_uaz_open_MSV_01;

class spag_uaz_open : rhs_uaz_open_MSV_01 {
    scope = 2;
    scopeCurator = 2;
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Cars";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
};


class spag_uaz_dshkm : RHS_UAZ_DShKM_Base {
    editorPreview ="";
    scope = 2;
    scopeCurator = 2;
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Cars";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
};

class spag_uaz_ags30 : RHS_UAZ_AGS30_Base {
    editorPreview ="";
    scope = 2;
    scopeCurator = 2;
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Cars";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY

};
