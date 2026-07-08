class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class S_Soldier_Rifleman;
    class rhsgref_cdf_ural_fuel;
    class rhsgref_cdf_ural_open;
    class RHS_Ural_Ammo_MSV_01;
    class rhsgref_cdf_ural_repair;

    class ua_chvk_afr_ural_repair;
    class ua_chvk_afr_ural_repair_OCimport_01 : ua_chvk_afr_ural_repair { scope = 0; class EventHandlers; };
    class ua_chvk_afr_ural_repair_OCimport_02 : ua_chvk_afr_ural_repair_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsgref_ins_g_2b14;


    class I_Spag_Cadet : S_Soldier_Rifleman {
        author = "Canadian";
        displayName = "Cadet";
        faction = "I_Spagistan_Garmsar";
        editorCategory = "Spagistan_GC_Category";
        identityTypes[] = {"Head_TK","LanguagePER_F","G_GUERIL_default"};
        linkedItems[] = {"rhs_chicom_khk","rhs_pilotka","cigs_morley_cig4","ItemMap","ItemCompass"};
        respawnlinkedItems[] = {"rhs_chicom_khk","rhs_pilotka","cigs_morley_cig4","ItemMap","ItemCompass"};
        backpack = "";
        items[] = {ITEM_20("ACE_elasticBandage"),"ACE_EarPlugs","ACE_CableTie",ITEM_4("ACE_Splint"),ITEM_2("ACE_tourniquet")};
        respawnItems[] = {ITEM_20("ACE_elasticBandage"),"ACE_EarPlugs","ACE_CableTie",ITEM_4("ACE_Splint"),ITEM_2("ACE_tourniquet")};
        weapons[] = {"rhs_weap_m38"};
        respawnWeapons[] = {"rhs_weap_m38"};
        magazines[] = {ITEM_13("rhsgref_5Rnd_762x54_m38"),"rhssaf_mag_brd_m83_white",ITEM_5("rhssaf_mag_br_m84")};
        respawnMagazines[] = {ITEM_13("rhsgref_5Rnd_762x54_m38"),"rhssaf_mag_brd_m83_white",ITEM_5("rhssaf_mag_br_m84")};
    };

    class I_Spag_Cadet_Driver : I_Spag_Cadet {
        displayName = "Cadet Driver";
        linkedItems[] = {"rhs_chicom_khk","rhs_fieldcap_m88","cigs_morley_cig4","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_chicom_khk","rhs_fieldcap_m88","cigs_morley_cig4","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
    };

    class I_Spag_Cadet_CSW_Crew : I_Spag_Cadet_Driver {
        displayName = "Cadet Gunner";
        linkedItems[] = {"rhs_chicom_khk","rhs_ssh68_2","cigs_morley_cig4","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_chicom_khk","rhs_ssh68_2","cigs_morley_cig4","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
    };

        class I_Spag_Cadet_SGT : I_Spag_Cadet {
        displayName = "Cadet Sergeant";
        rank = "Sergeant";
        linkedItems[] = {"rhs_gear_OFF","S_beret_green_SPAGPAT","cigs_morley_cig2","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_gear_OFF","S_beret_green_SPAGPAT","cigs_morley_cig2","ItemMap","TFAR_anprc148jem","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm","Binocular"};
        respawnWeapons[] = {"rhs_weap_m38","rhs_weap_makarov_pm","Binocular"};

        magazines[] = {ITEM_13("rhsgref_5Rnd_762x54_m38"),"rhssaf_mag_brd_m83_white",ITEM_5("rhssaf_mag_br_m84"),ITEM_2("rhs_mag_9x18_8_57N181S")};
        respawnMagazines[] = {ITEM_13("rhsgref_5Rnd_762x54_m38"),"rhssaf_mag_brd_m83_white",ITEM_5("rhssaf_mag_br_m84"),ITEM_2("rhs_mag_9x18_8_57N181S")};
    };

    class I_spag_gc_ural_fuel : rhsgref_cdf_ural_fuel {
        author = "Canadian";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spag_Cadet_Driver";
        editorCategory = "Spagistan_GC_Category";
        hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","camo3"};
        hiddenSelectionsTextures[] = {"z\spag\addons\vehicles\data\Ural\ural_spaggc.paa",
        "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_camo_co.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_tka_co.paa"};
        VEHICLEINVENTORY
   };
    class I_spag_gc_ural_ammo : RHS_Ural_Ammo_MSV_01 {
        author = "Canadian";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spag_Cadet_Driver";
        editorCategory = "Spagistan_GC_Category";
        hiddenSelectionsTextures[] = {"z\spag\addons\vehicles\data\Ural\ural_spaggc.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_tka_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
        VEHICLEINVENTORY
    };
    class I_spag_gc_ural_open : rhsgref_cdf_ural_open {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spag_Cadet_Driver";
        editorCategory = "Spagistan_GC_Category";
        hiddenSelectionsTextures[] = {"z\spag\addons\vehicles\data\Ural\ural_spaggc.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        VEHICLEINVENTORY
    };

    class I_spag_gc_ural_repair : rhsgref_cdf_ural_repair {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spag_Cadet_Driver";
        editorCategory = "Spagistan_GC_Category";
        hiddenSelectionsTextures[] = {"z\spag\addons\vehicles\data\Ural\ural_spaggc.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"};
        VEHICLEINVENTORY
    };

    class I_Spag_Cadet_Mortar : rhsgref_ins_g_2b14 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spag_Cadet_CSW_Crew";
        editorCategory = "Spagistan_GC_Category";

    };
};
