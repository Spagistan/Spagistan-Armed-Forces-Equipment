////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:12:07 2025 : 'file' last modified on Wed Jan 22 17:40:24 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_
#include "\z\spag\addons\factions\script_component.hpp"

class CfgPatches
{
	class spag_Factions
	{
		name = "Factions";
		units[] = {
			"S_Soldier_Base",
			"S_Soldier_Survivor",
			"S_Soldier_PVT"
			,"S_Soldier_PFC"
			,"S_Soldier_CPL",
			"S_Soldier_SGT",
			"S_Soldier_SSG",
			"S_Soldier_SFC",
			"S_Soldier_MSG",
			"S_Soldier_SGM",
			"S_Soldier_2LT",
			"S_Soldier_1LT",
			"S_Soldier_CPT",
			"S_Soldier_MAJ",
			"S_Soldier_COL",
			"S_Soldier_GEN",
			};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common","spag_vehicles","spag_gear"};
		author = "Spagistan Development Team";
		authors[] = {"Taepodong","Kalthramis"};
		url = "SPAGLINK";
		version = "1.5.9.1";
		versionStr = "1.5.9.1";
		versionAr[] = {1,5,9,1};
	};
};
#include "CfgVehicles.hpp"