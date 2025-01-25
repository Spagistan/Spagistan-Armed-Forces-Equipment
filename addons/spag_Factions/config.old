////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:12:07 2025 : 'file' last modified on Wed Jan 22 17:40:24 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class spag_Factions
	{
		name = "Factions";
		units[] = {"S_Soldier_Base","S_Soldier_Survivor","S_Soldier_PVT","S_Soldier_PFC","S_Soldier_CPL","S_Soldier_SGT","S_Soldier_SSG","S_Soldier_SFC","S_Soldier_MSG","S_Soldier_SGM","S_Soldier_2LT","S_Soldier_1LT","S_Soldier_CPT","S_Soldier_MAJ","S_Soldier_COL","S_Soldier_GEN"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common","spag_vehicles","spag_gear"};
		author = "Spagistan Development Team";
		authors[] = {"Taepodong","Kalthramis"};
		url = "SPAGLINK";
		version = "1.5.9.1";
		versionStr = "1.5.9.1";
		versionAr[] = {1,5,9,1};
	};
};
class CfgVehicles
{
	class I_G_Soldier_base_F;
	class I_G_Soldier_F;
	class S_Soldier_Base: I_G_Soldier_base_F
	{
		author = "Kalthramis";
		_generalMacro = "Spagistan_Unit";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		role = "Rifleman";
		displayName = "Rifleman";
		uniformClass = "U_S_Uniform_SPAGPAT";
		backpack = "S_KitBag_SPAG";
		weapons[] = {"Throw","Put"};
		items[] = {"class _xx_ACE_elasticBandage {name = ACE_elasticBandage; count = 20;}","class _xx_ACE_quikclot {name = ACE_quikclot; count = 20;}","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACE_Epinephrine","class _xx_ACE_morphine {name = ACE_morphine; count = 4;}","class _xx_ACE_Tourniquet {name = ACE_Tourniquet; count = 4;}","ACE_EntrenchingTool"};
		respawnItems[] = {};
		magazines[] = {"class _xx_RHS_30Rnd_545x39_7N22_AK {magazine = RHS_30Rnd_545x39_7N22_AK; count = 20;}","class _xx_RHS_mag_RGO {magazine = RHS_mag_RGO; count = 4;}","class _xx_RHS_mag_rdg2_black {magazine = RHS_mag_rdg2_black; count = 10;}"};
		respawnMagazines[] = {};
		linkedItems[] = {"S_Vest_SPAGPAT","rhs_1PN138","S_Helmet_SPAGPAT","rhs_PDU4","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem","ItemGPS"};
		respawnLinkedItems[] = {};
	};
	class S_Soldier_Survivor: I_G_Soldier_F
	{
		author = "Kalthramis";
		_generalMacro = "Spagistan_Survivor";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "Spag_F";
		editorCategory = "Spagistan_Catagory";
		role = "Soldier";
		displayName = "Spagistan Soldier";
		modelSides[] = {0,1,2,3};
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		weapons[] = {"Throw","Put"};
		items[] = {"ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACE_Epinephrine"};
		respawnItems[] = {};
		linkedItems[] = {"rhs_PDU4","ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem","ItemGPS"};
	};
	class S_Soldier_PVT: S_Soldier_Survivor
	{
		rank = "Private";
		displayName = "Private";
	};
	class S_Soldier_PFC: S_Soldier_Survivor
	{
		rank = "Private";
		displayName = "Private First Class";
	};
	class S_Soldier_CPL: S_Soldier_Survivor
	{
		rank = "Corporal";
		displayName = "Corporal";
	};
	class S_Soldier_SGT: S_Soldier_Survivor
	{
		rank = "Sergeant";
		displayName = "Sergeant";
	};
	class S_Soldier_SSG: S_Soldier_Survivor
	{
		rank = "Sergeant";
		displayName = "Staff Sergeant";
	};
	class S_Soldier_SFC: S_Soldier_Survivor
	{
		rank = "Sergeant";
		displayName = "Sergeant first Class";
	};
	class S_Soldier_MSG: S_Soldier_Survivor
	{
		rank = "Sergeant";
		displayName = "Master Sergeant";
	};
	class S_Soldier_SGM: S_Soldier_Survivor
	{
		rank = "Sergeant";
		displayName = "Sergeant Major";
	};
	class S_Soldier_2LT: S_Soldier_Survivor
	{
		rank = "Lieutenant";
		displayName = "Second Lieutenant";
	};
	class S_Soldier_1LT: S_Soldier_Survivor
	{
		rank = "Lieutenant";
		displayName = "First Lieutenant";
	};
	class S_Soldier_CPT: S_Soldier_Survivor
	{
		rank = "Captain";
		displayName = "Captain";
	};
	class S_Soldier_MAJ: S_Soldier_Survivor
	{
		rank = "Major";
		displayName = "Major";
	};
	class S_Soldier_COL: S_Soldier_Survivor
	{
		rank = "Colonel";
		displayName = "Colonel";
	};
	class S_Soldier_GEN: S_Soldier_Survivor
	{
		rank = "Colonel";
		displayName = "General";
	};
};
