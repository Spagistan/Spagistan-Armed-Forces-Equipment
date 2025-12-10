#include "script_component.hpp"

class CfgPatches
{
	class spag_gear
	{
		name = "gear";
		units[] = {
			"TFAR_SPAG_mr3000",
			"TFAR_SPAG_Air_mr3000",
			"S_KitBag_Spag",
			"S_Tubitak_Spag",
			"S_KitBag_Rifleman",
			"S_KitBag_Spag_Grenadier",
			"S_KitBag_Spag_CLS",
			"S_KitBag_Spag_PLM",
			"TFAR_SPAG_mr3000_SL",
			"NG_KitBag_Rifleman",
			};
		weapons[] = {
			"S_Helmet_SPAGPAT",
			"S_Helmet_SPAGPAT_black_ess",
			"S_Helmet_SPAGPAT_black_ess_bare",
			"S_Helmet_SPAGPAT_tan_ess",
			"S_Helmet_Olive_tan_ess",
			"S_Helmet_SPAGPAT_tan_ess_bare",
			"S_PatrolCap_SPAGPAT",
			"U_S_Uniform_SPAGPAT",
			"U_S_Uniform_Neck_SPAGPAT",
			"U_S_Uniform_Winter_SPAGPAT",
			"U_S_Uniform_Winter_Mix1_SPAGPAT",
			"U_S_Uniform_Winter_Mix2_SPAGPAT",
			"U_S_Uniform_Gorka_Winter_SPAGPAT",
			"U_S_Uniform_Gorka_Full_SPAGPAT",
			"U_S_Uniform_Telnyashka_SPAGPAT",
			"U_S_Uniform_Gorka_SPAGPAT",
			};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common"};
		author = "Spagistan Development Team";
		authors[] = {"Taepodong","Kalthramis"};
		url = "SPAGLINK";
		VERSION_CONFIG;

	};
};
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

