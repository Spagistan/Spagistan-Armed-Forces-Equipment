#include "script_component.hpp"

class CfgPatches
{
	class spag_TFAR
	{
		name = "TFAR";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common"};
		author = "Spagistan Development Team";
		authors[] = {"Kalthramis"};
		url = "SPAGLINK";
		VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"