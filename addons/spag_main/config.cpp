////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:12:29 2025 : 'file' last modified on Wed Jan 22 17:40:24 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_
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
