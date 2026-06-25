#include "script_component.hpp"
class CfgPatches
{
	class spag_vehicles
	{
		name = "vehicles";
		units[] = {
			"BMP_Spagpat",
			"BTR_Spagpat",
			"Spag_Empty_Crate",
			"Spag_Rifle_Crate",
			"Spag_Weap_Crate",
			"Spag_Metis_Crate",
			"Spag_Med_Crate",
			"Spag_SupplyCrate",
			"hummv_d_SPAGPAT",
			"hummv_d_SPAGPAT_ar",
			"hummv_d_SPAGPAT_gl",
			"hummv_d_SPAGPAT_troop",
			"hummv_d_SPAGPAT_WPSS",
			"hummv_d_SPAGPAT_softF",
			"hummv_d_SPAGPAT_softH",
			"hummv_d_SPAGPAT_open",
			"m113_spagpat",
			"mi8t_spagpat",
			"SU25_Spagpat",
			"YAK130_Spagpat",
			"spag_ural_closed",
			"spag_ural_open",
			"spag_ural_flat",
			"spag_ural_fuel",
			"spag_ural_ammo",
			"spag_ural_zu23",
			"spag_ural_bm21",
			"spag_kraz_open",
			"spag_kraz_flatbed",
			"spag_kraz_fuel",
			"spag_kraz_pmp",
			"spag_kraz_bmkt",
			"spag_uaz",
			"spag_uaz_open",
			"spag_uaz_dshkm",
			"spag_uaz_ags30",
			"spag_BTR40",
			"spag_BTR40_Mortar",
			"spag_BTR40_AGS",
			"spag_BTR40_NSV",
			"spag_BRDM2",
			"spag_BRDM2_ATGM",
			"spag_BRDM2_HQ"
			};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_main","cba_main","safp_mi24vm","rhs_c_a2port_car","spag_main","spag_common"};
		author = "Spagistan Development Team";
		url = "SPAGLINK";
		VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"

class Extended_Init_EventHandlers
{
    class Spag_SupplyCrate
    {
        init = "_this call spag_fnc_addUnpackAction";
    };
};

class CfgFunctions
{
    class Spag
    {
        class Supply
        {
            file = "\z\spag\addons\vehicles\functions";

            class addUnpackAction {};
        };
    };
};
