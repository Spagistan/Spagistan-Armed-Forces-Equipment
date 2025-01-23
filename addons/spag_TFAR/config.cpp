////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:12:53 2025 : 'file' last modified on Wed Jan 22 17:40:24 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

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
		version = "1.5.9.1";
		versionStr = "1.5.9.1";
		versionAr[] = {1,5,9,1};
	};
};
class Extended_PreStart_EventHandlers
{
	class spag_TFAR
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\TFAR\XEH\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class spag_TFAR
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\TFAR\XEH\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class spag_TFAR
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\TFAR\XEH\XEH_postInit.sqf'";
	};
	class SetupTFARStuff
	{
		init = "call compile preprocessFileLineNumbers '\z\spag\addons\TFAR\functions\fnc_TFARSetup.sqf'";
	};
};
