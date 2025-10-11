class ua_chvk_afr_ural_closed;

class I_SPAGF_Ural_4320_01 : ua_chvk_afr_ural_closed {
    author = "Canadian";
    scope = 1;
    scopeCurator = 0;
    displayName = "Ural-4320";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Camo";

};

class RHS_Ural_MSV_01;
class RHS_Ural_Open_MSV_01;
class RHS_Ural_Flat_MSV_01;
class RHS_Ural_Fuel_MSV_01;
class RHS_Ural_Ammo_MSV_01;
class RHS_BM21_MSV_01;

class spag_ural_closed: RHS_Ural_MSV_01
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY

};

class spag_ural_open: RHS_Ural_Open_MSV_01
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Open)";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
    rhs_decalParameters[]={
        "['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
        "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
    };
};

class spag_ural_flat: RHS_Ural_Flat_MSV_01
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Flat)";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
    rhs_decalParameters[]={
        "['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
        "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
    };
};

class spag_ural_fuel: RHS_Ural_Fuel_MSV_01
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Fuel)";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
    rhs_decalParameters[]={
        "['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
        "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
    };
};
class spag_ural_ammo: RHS_Ural_Ammo_MSV_01
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Ammo)";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
    rhs_decalParameters[]={
        "['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
        "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
    };
};


class RHS_Ural_Zu23_Base;
class RHS_Ural_Zu23_MSV_01 : RHS_Ural_Zu23_Base {
    class Turrets
    {
        class MainTurret;
        class CargoTurret_01;
        class CargoTurret_02;
        class CargoTurret_03;
    };

};


class spag_ural_zu23: RHS_Ural_Zu23_MSV_01
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (Zu-23)";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
    rhs_decalParameters[]={
        "['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
        "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
    };

    class Turrets: Turrets
    {
        class MainTurret: MainTurret {
            gunnerType="S_Soldier_Rifleman";
        };
        class CargoTurret_01: CargoTurret_01
        {
            gunnerType="S_Soldier_Rifleman"; //someone with binocular recomended
        };
        class CargoTurret_02: CargoTurret_02 {};
        class CargoTurret_03: CargoTurret_03 {};
    };
};
class spag_ural_bm21: RHS_BM21_MSV_01
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320 (BM-21)";
    editorCategory = "Spagistan_Category";
    editorSubcategory = "rhs_EdSubcat_truck";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "S_Soldier_Rifleman";
    VEHICLEINVENTORY
    rhs_decalParameters[]={
        "['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
        "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
    };


};
