class Extended_PreStart_EventHandlers
{
	class spag_TFAR
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\tfar\XEH\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class spag_TFAR
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\tfar\XEH\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class spag_TFAR
	{
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\tfar\XEH\XEH_postInit.sqf'";
	};
	class SetupTFARStuff
	{
		init = "call compile preprocessFileLineNumbers '\z\spag\addons\tfar\functions\fnc_TFARSetup.sqf'";
	};
};
