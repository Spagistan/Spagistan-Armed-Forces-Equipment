////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:11:58 2025 : 'file' last modified on Wed Jan 22 17:40:24 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_
#include "\z\spag\addons\gear\script_component.hpp"

class CfgPatches
{
	class spag_gear
	{
		name = "gear";
		units[] = {"TFAR_SPAG_mr3000","S_KitBag_Spag"};
		weapons[] = {"S_Helmet_SPAGPAT","S_Helmet_SPAGPAT_black_ess","S_Helmet_SPAGPAT_black_ess_bare",
						"S_PatrolCap_SPAGPAT","U_S_Uniform_SPAGPAT","U_S_Uniform_Neck_SPAGPAT", "U_S_Uniform_Telnyashka_SPAGPAT",
						"U_S_Uniform_Gorka_SPAGPAT"};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common"};
		author = "Spagistan Development Team";
		authors[] = {"Taepodong","Kalthramis"};
		url = "SPAGLINK";
		version = "1.5.9.1";
		versionStr = "1.5.9.1";
		versionAr[] = {1,5,9,1};
	};
};

#include "Vehicles.hpp"
#include "Weapons.hpp"
