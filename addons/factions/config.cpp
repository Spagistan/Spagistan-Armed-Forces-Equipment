#include "\z\spag\addons\factions\script_component.hpp"

class CfgPatches
{
	class spag_Factions
	{
		name = "Factions";
		units[] = {
			"S_Soldier_Base",
			};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common","spag_vehicles","spag_gear"};
		author = "Spagistan Development Team";
		authors[] = {"Spagistan Development Team"};
		url = "SPAGLINK";
		VERSION_CONFIG;
	};
};
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"


class CfgWorlds {
	#include "identities.hpp"
};
