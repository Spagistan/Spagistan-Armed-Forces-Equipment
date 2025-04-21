#include "script_component.hpp"

class CfgPatches
{
	class spag_gear
	{
		name = "gear";
		units[] = {
			"TFAR_SPAG_mr3000",
			"S_KitBag_Spag",
			"S_KitBag_Rifleman",
			};
		weapons[] = {
			"S_Helmet_SPAGPAT",
			"S_Helmet_SPAGPAT_black_ess",
			"S_Helmet_SPAGPAT_black_ess_bare",
			"S_PatrolCap_SPAGPAT",
			"U_S_Uniform_SPAGPAT",
			"U_S_Uniform_Neck_SPAGPAT", 
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
