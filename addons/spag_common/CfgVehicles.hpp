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