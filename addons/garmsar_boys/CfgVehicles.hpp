#include "\z\spag\addons\factions\Spagistan\loadout_macros.hpp"

#define GCVEHICLEINVENTORY class TransportBackpacks\
	{\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_ak74m,2);\
		weap_xx(rhs_weap_rpg75,2);\
		weap_xx(rhs_weap_igla,1);\
		weap_xx(rhs_weap_rpg7,1);\
	};\
	class TransportMagazines\
	{\
		mag_xx(rhs_mag_9k38_rocket,4);\
		mag_xx(rhs_rpg7_PG7VS_mag,6);\
		mag_xx(rhs_rpg7_type69_airburst_mag,4);\
		mag_xx(rhs_rpg7_TBG7V_mag,2);\
		mag_xx(grcb_30Rnd_545x39_7N24_AK,20);\
		mag_xx(grcb_60Rnd_545x39_7N24,10);\
		mag_xx(rhs_VOG25,20);\
		mag_xx(rhs_GRD40_white,10);\
		mag_xx(rhssaf_mag_br_m75,10);\
		mag_xx(rhssaf_mag_brd_m83_white,10);\
		mag_xx(cigs_morley_cigpack,1);\
		mag_xx(rhs_250Rnd_762x54mmR_7N26,2);\
	};\
	class TransportItems\
	{\
		item_xx(ACE_Clacker,1);\
		item_xx(DemoCharge_Remote_Mag,1);\
		item_xx(rhs_acc_pgo7v3,2);\
		item_xx(ACE_wirecutter,1);\
		item_xx(ACE_elasticBandage,20);\
		item_xx(ACE_packingBandage,20);\
		item_xx(ACE_morphine,5);\
		item_xx(ACE_epinephrine,5);\
		item_xx(ACE_tourniquet,5);\
		item_xx(ACE_splint,5);\
		item_xx(ACE_EarPlugs,3);\
		item_xx(ACE_suture,20);\
		item_xx(ACE_salineIV_500,5);\
	};

class CfgVehicles {
    class S_Soldier_Rifleman;
    class rhsgref_cdf_ural_fuel;
    class rhsgref_cdf_ural_open;
    class RHS_Ural_Ammo_MSV_01;
    class rhsgref_cdf_ural_repair;
    class StaticMortar;
    class rhs_2b14_82mm_Base: StaticMortar {
        class Turrets;
    };
    class rhs_2b14_82mm_msv: rhs_2b14_82mm_Base {
        class Turrets:Turrets {
            class MainTurret;
        };
    };

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
        GCVEHICLEINVENTORY
   };
    class I_spag_gc_ural_ammo : RHS_Ural_Ammo_MSV_01 {
        author = "Canadian";
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spag_Cadet_Driver";
        editorCategory = "Spagistan_GC_Category";
        hiddenSelectionsTextures[] = {"z\spag\addons\vehicles\data\Ural\ural_spaggc.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_tka_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
        GCVEHICLEINVENTORY
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
        GCVEHICLEINVENTORY
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
        GCVEHICLEINVENTORY
    };

    class I_Spag_Cadet_Mortar : rhs_2b14_82mm_msv {
        author = "A. Dan";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "I_Spagistan_Garmsar";
        crew = "I_Spag_Cadet_CSW_Crew";
        editorCategory = "Spagistan_GC_Category";
        class Turrets : Turrets {
            class MainTurret : MainTurret {
            magazines[] = {"spag_mag_3vo18_10_garmsar","spag_mag_3vo18_10_garmsar","spag_mag_3vo18_10_garmsar","spag_mag_3vo18_10_garmsar"};
            weapons[]=
				{
					"spag_weap_2b14"
				};
            };
        };
    };
};
