#include "script_component.hpp"

class CfgPatches {
	class spag_main {
		name = "main";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author = "Spagistan Development Team";
		url = "units.arma3.com/unit/spagistan";
		VERSION_CONFIG;
	};
};

class CfgMods {
	class spag {
		dir = "@spag";
		name = "Spagistan Offical Modpack";
		picture = "";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "units.arma3.com/unit/spagistan";
		description = "Issue Tracker: https://github.com/cparadis777/Spagistan-Armed-Forces-Equipment/issues";
	};
};
