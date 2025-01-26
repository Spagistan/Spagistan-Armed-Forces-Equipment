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