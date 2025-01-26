
//SoldierGB
class I_G_Soldier_base_F;
class I_G_Soldier_F;
/* {
	author = "Bohemia Interactive";
	_generalMacro = "I_G_Soldier_base_F";
	expansion = 1;
	identityTypes[] = {"LanguageGRE_F", "Head_Greek", "G_GUERIL_default"};
	faceType = "Man_A3";
	side = 2;
	faction = "IND_G_F";
	genericNames = "GreekMen";
	vehicleClass = "Men";
	editorSubcategory = "EdSubcat_Personnel";
	portrait = "";
	picture = "";
	icon = "iconMan";
	accuracy = 3.9;
	threat[] = {1, 0.1, 0.1};
	camouflage = 1.1;
	minFireTime = 10;
	cost = 100000;
	model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
	modelSides[] = {2, 3};
	nakedUniform = "U_BasicBody";
	uniformClass = "U_IG_Guerilla1_1";
	canCarryBackPack = 1;
	scope = 0;
	scopeCurator = 0;
	class Wounds
	{
		tex[] = {};
		mat[] = {"A3\Characters_F\Civil\Data\c_cloth1.rvmat", "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2.rvmat", "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth3.rvmat", "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4.rvmat", "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", "a3\characters_f_epb\blufor\data\clothing1_dirty.rvmat", "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", "A3\characters_f\civil\data\c_poloshirt.rvmat", "A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", "A3\characters_f\common\data\coveralls.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Civil\Data\hunter.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "a3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "a3\characters_f_gamma\guerrilla\data\ig_guerrilla2_1.rvmat", "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat", "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat", "a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "a3\characters_f_epb\guerrilla\data\ig_guerrilla4_1.rvmat", "A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat", "A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat", "a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1.rvmat", "A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat", "A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat", "a3\characters_f_beta\indep\data\officer.rvmat", "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat", "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
	};
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
	items[] = {"FirstAidKit"};
	respawnitems[] = {"FirstAidKit"};
	weapons[] = {"arifle_TRG21_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_TRG21_F", "Throw", "Put"};
	magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_blue", "Chemlight_blue"};
	respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_blue", "Chemlight_blue"};
	linkedItems[] = {"V_Chestrig_oli", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"V_Chestrig_oli", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
}; */
//[[],[],["rhs_weap_tt33","","","",["rhs_mag_762x25_8",8],[],""],["rhs_uniform_m88_patchless",[]],["rhs_vest_pistol_holster",[["HandGrenade",2,1]]],[],"rhssaf_beret_green","",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]]
class S_Soldier_Base: I_G_Soldier_base_F
{
	author = "Kalthramis";
	/* editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg"; */
	_generalMacro = "Spagistan_Unit";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	role = "Rifleman";
	displayName = "Rifleman";
	/* hiddenSelections[] = {"Camo", "Insignia"}; */
	/* hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa", "a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"}; */
	uniformClass = "U_S_Uniform_SPAGPAT";
	backpack = "S_KitBag_SPAG";

	weapons[] = {"Throw", "Put" };
	//items[] = { QUOTE(item_xx(ACE_elasticBandage, 20)), QUOTE(item_xx(ACE_quikclot, 20)), "ACE_EarPlugs", "ACE_Flashlight_XL50", "ACE_MapTools", "ACE_Epinephrine",	QUOTE(item_xx(ACE_morphine, 4)), QUOTE(item_xx(ACE_Tourniquet, 4)), "ACE_EntrenchingTool" };
	respawnItems[] = {};
	//magazines[] = { QUOTE(mag_xx(RHS_30Rnd_545x39_7N22_AK, 20)), QUOTE(mag_xx(RHS_mag_RGO, 4)), QUOTE(mag_xx(RHS_mag_rdg2_black, 10)) };
	respawnMagazines[] = {};
	linkedItems[] = { "S_Vest_SPAGPAT", "rhs_1PN138", "S_Helmet_SPAGPAT", "rhs_PDU4", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc148jem", "ItemGPS"};
	respawnLinkedItems[] = { };
};

class S_Soldier_Survivor: I_G_Soldier_F {
	author = "Kalthramis";
	/* editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg"; */
	_generalMacro = "Spagistan_Survivor";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	faction = QUOTE(SPAGFACTION);
	editorCategory = "Spagistan_Catagory";
	role = "Soldier";
	displayName = "Spagistan Soldier";
	/* nakedUniform = "U_BasicBody";
	uniformClass = "U_Rangemaster"; */
	modelSides[] = {0, 1, 2, 3};

	backpack = "";
/* [[],[],[],["U_BG_Guerilla1_1",[]],[],[],"","",[],["","","","","",""]] */
//[[],[],["rhs_weap_tt33","","","",["rhs_mag_762x25_8",8],[],""],["rhs_uniform_m88_patchless",[]],["rhs_vest_pistol_holster",[["HandGrenade",2,1]]],[],"RHSSAF_beret_green","",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]]
	magazines[] = {};
	respawnMagazines[] = {};
	weapons[] = {"Throw", "Put"};
	/* respawnWeapons[]  */
	items[] = {"ACE_EarPlugs", "ACE_Flashlight_XL50", "ACE_MapTools", "ACE_Epinephrine" };
	respawnItems[] = {};
	linkedItems[] = {"rhs_PDU4", "ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc148jem", "ItemGPS"};
};

class S_Soldier_PVT: S_Soldier_Survivor {
	rank = "Private";
	/* add[] = {{"uniform", "rhs_uniform_m88_patchless"}}; */
	displayName = "Private";
};

class S_Soldier_PFC: S_Soldier_Survivor {
	rank = "Private";
	displayName = "Private First Class";
};

// class S_Soldier_CPL: S_Soldier_Survivor {
// 	rank = "Corporal";
// 	displayName = "Corporal";
// };

// class S_Soldier_SGT: S_Soldier_Survivor {
// 	rank = "Sergeant";
// 	displayName = "Sergeant";
// };

// class S_Soldier_SSG: S_Soldier_Survivor {
// 	rank = "Sergeant";
// 	displayName = "Staff Sergeant";
// };

// class S_Soldier_SFC: S_Soldier_Survivor {
// 	rank = "Sergeant";
// 	displayName = "Sergeant first Class";
// };

// class S_Soldier_MSG: S_Soldier_Survivor {
// 	rank = "Sergeant";
// 	displayName = "Master Sergeant";
// };

// class S_Soldier_SGM: S_Soldier_Survivor {
// 	rank = "Sergeant";
// 	displayName = "Sergeant Major";
// };

// class S_Soldier_2LT: S_Soldier_Survivor {
// 	rank = "Lieutenant";
// 	displayName = "Second Lieutenant";
// };

// class S_Soldier_1LT: S_Soldier_Survivor {
// 	rank = "Lieutenant";
// 	displayName = "First Lieutenant";
// };

// class S_Soldier_CPT: S_Soldier_Survivor {
// 	rank = "Captain";
// 	displayName = "Captain";
// };

// class S_Soldier_MAJ: S_Soldier_Survivor {
// 	rank = "Major";
// 	displayName = "Major";
// };

// class S_Soldier_COL: S_Soldier_Survivor {
// 	rank = "Colonel";
// 	displayName = "Colonel";
// };

// class S_Soldier_GEN: S_Soldier_Survivor {
// 	rank = "Colonel";
// 	displayName = "General";
// };
