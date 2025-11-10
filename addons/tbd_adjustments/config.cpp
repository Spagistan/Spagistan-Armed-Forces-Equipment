#include "script_component.hpp"

class CfgPatches
{
	class tbd_adjustments
	{
		name = "vehicles";
		units[] = {
			"spag_152mm_box_he",
			"spag_152mm_box_dpicm",
			"spag_152mm_box_laser",
			"spag_82mm_box_he",
			"spag_82mm_box_smoke",
			"spag_82mm_box_illum",
			"spag_82mm_box_cumul",
			"spag_107mm_box_he"
			};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"TBD_MORTARS_main"};
		author = "Spagistan Development Team";
		authors[] = {"Cédric Paradis"};
		url = "SPAGLINK";
		VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"
class Extended_PreInit_EventHandlers
{
	class spag_tbd_adjustments
	{
		init = "call compile preprocessFileLineNumbers '\z\spag\addons\tbd\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class spag_tbd_adjustments
	{
		init = "call compile preprocessFileLineNumbers '\z\spag\addons\tbd\XEH_postInit.sqf'";
	};
};
