////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:10:00 2025 : 'file' last modified on Wed Jan 22 17:39:46 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class spag_common
	{
		name = "common";
		units[] = {"Spag_ModuleEnding_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main"};
		author = "Spagistan Development Team";
		authors[] = {"Taepodong","Kalthramis"};
		url = "SPAGLINK";
		version = "1.5.9.1";
		versionStr = "1.5.9.1";
		versionAr[] = {1,5,9,1};
	};
};
class CfgFactionClasses
{
	class SPAG_F
	{
		displayName = "Spagistan";
		priority = 5;
		side = 2;
		icon = "\z\spag\addons\common\gui\Spag_Flag_Square_ca.paa";
		flag = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
	};
};
class CfgMarkers
{
	class flag_Spagistan
	{
		scope = 1;
		scopeEditor = 2;
		scopeCurator = 1;
		name = "Spagistan";
		icon = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
		texture = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
		size = 25;
		shadow = 1;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
};
class CfgEditorCategories
{
	class Spagistan_Catagory
	{
		displayName = "Spagistan";
		faction = "SPAG_F";
	};
};
class CfgUnitInsignia
{
	class Spagistan_Insignia
	{
		displayName = "Spagistan";
		author = "Kalthramis";
		texture = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
		textureVehicle = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
	};
};
class Extended_PreStart_EventHandlers
{
	class spag_common
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\common\XEH\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class spag_common
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\common\XEH\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class spag_common
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\common\XEH\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase;
		class ModuleDescription;
	};
	class Spag_ModuleEnding_F: Module_F
	{
		author = "Kalthramis";
		scope = 2;
		scopeCurator = 2;
		category = "MissionFlow";
		displayName = "End Mission (Spagistan)";
		icon = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
		portrait = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
		function = "spag_common_fnc_moduleEndMission";
		isGlobal = 1;
		isTriggerActivated = 0;
		curatorCanAttach = 1;
		curatorCost = 0;
		class Arguments{};
		class ModuleDescription: ModuleDescription
		{
			description = "Ends the mission with extra details - disables simulation for all players.";
			sync[] = {};
		};
	};
};
