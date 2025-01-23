////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:11:58 2025 : 'file' last modified on Wed Jan 22 17:40:24 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class spag_gear
	{
		name = "gear";
		units[] = {"TFAR_SPAG_mr3000","S_KitBag_Spag"};
		weapons[] = {"S_Helmet_SPAGPAT","S_Helmet_SPAGPAT_black_ess","S_Helmet_SPAGPAT_black_ess_bare","S_PatrolCap_SPAGPAT","U_S_Uniform_SPAGPAT","U_S_Uniform_Neck_SPAGPAT"};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common"};
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
	class TFAR_mr3000;
	class B_Kitbag_rgr;
	class TFAR_SPAG_mr3000: TFAR_mr3000
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Taepodong/Kalthramis";
		displayName = "MR3000 BWMOD [SPAGPAT]";
		descriptionShort = "Spagistan-camo LR Radio";
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\pack\MR3000_SPAGPAT_ca.paa"};
	};
	class S_KitBag_Spag: B_Kitbag_rgr
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Taepodong/Kalthramis";
		generalMacro = "S_KitBag_Spag";
		displayName = "Kitbag (Spagpat)";
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\pack\kit_ca.paa"};
	};
	class spagbag: S_KitBag_Spag
	{
		displayName = "(DEPRICATED) Kitbag (Spagpat)";
		scope = 1;
		scopeArsenal = 1;
	};
	class rhssaf_soldier_un_desert_base;
	class rhssaf_soldier_army_para_digital_base;
	class O_officer_F;
	class I_Soldier_base_F;
	class I_officer_F;
	class B_soldier_F;
	class I_Story_Officer_01_F;
	class U_S_SPAGPAT: rhssaf_soldier_army_para_digital_base
	{
		uniformClass = "U_S_Uniform_SPAGPAT";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\uniforms\m10_d_spag_shirt"};
	};
	class U_S_Neck_SPAGPAT: rhssaf_soldier_un_desert_base
	{
		uniformClass = "U_S_Uniform_Neck_SPAGPAT";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\uniforms\m10_d_spag_scarf"};
	};
	class Custom_Uniform_TShirt: O_officer_F
	{
		author = "Kal";
		scope = 1;
		displayName = "Custom Combat Life Saver";
		uniformClass = "Custom_Camo_TShirt";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\uniforms\officer_spc_co"};
	};
	class spag_turk: U_S_SPAGPAT
	{
		displayName = "(Depricated) Spagistan Combat Uniform";
		scope = 1;
		scopeArsenal = 1;
	};
};
class CfgWeapons
{
	class rhssaf_helmet_m97_woodland;
	class rhssaf_helmet_m97_black_nocamo_black_ess;
	class rhssaf_helmet_m97_black_nocamo_black_ess_bare;
	class rhssaf_helmet_m97_woodland_black_ess;
	class rhssaf_helmet_m97_woodland_black_ess_bare;
	class rhsusf_patrolcap_ucp;
	class RHSSAF_beret_para;
	class RHSSAF_beret_green;
	class S_Helmet_SPAGPAT: rhssaf_helmet_m97_woodland
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Taepodong/Kalthramis";
		allowedslots[] = {701,801,901};
		displayName = "Combat Helm (SPAGPAT)";
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\hats\m97_canvas_d_spag_co.paa"};
		descriptionShort = "Spagistan Helmet";
	};
	class S_Helmet_SPAGPAT_black_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Kalthramis";
		allowedslots[] = {701,801,901};
		displayName = "Combat Helm (SPAGPAT/Black/ESS)";
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\hats\m97_canvas_d_spag_co.paa","\z\spag\addons\gear\data\hats\rhssaf_m97_ess_black_co.paa"};
	};
	class S_Helmet_SPAGPAT_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Kalthramis";
		allowedslots[] = {701,801,901};
		displayName = "Combat Helm (Spagpat/Black ESS/Bare)";
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\hats\m97_canvas_d_spag_co.paa","\z\spag\addons\gear\data\hats\rhssaf_m97_ess_black_co.paa"};
	};
	class S_PatrolCap_SPAGPAT: rhsusf_patrolcap_ucp
	{
		displayName = "Patrol Cap (Spagpat)";
		scope = 2;
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\hats\PatrolCap_SPAGPAT_ca.paa"};
	};
	class S_beret_red_SPAGPAT: RHSSAF_beret_para
	{
		displayName = "Beret (Red/Spagistan)";
		hiddenselectionsTextures[] = {"\z\spag\addons\gear\data\hats\beret_red_spag"};
	};
	class S_beret_green_SPAGPAT: RHSSAF_beret_green
	{
		displayName = "Beret (Green/Spagistan)";
		hiddenselectionsTextures[] = {"\z\spag\addons\gear\data\hats\beret_green_spag"};
	};
	class S_beret_red_NONE: RHSSAF_beret_para
	{
		displayName = "Beret (Red/Plain)";
		hiddenselectionsTextures[] = {"\z\spag\addons\gear\data\hats\beret_red"};
	};
	class S_beret_green_NONE: RHSSAF_beret_green
	{
		displayName = "Beret (Green/Plain)";
		hiddenselectionsTextures[] = {"\z\spag\addons\gear\data\hats\beret_green"};
	};
	class spag_helmet: S_Helmet_SPAGPAT
	{
		displayName = "(DEPRICATED) Combat Helmet (Spagistan)";
		scope = 1;
		scopeArsenal = 1;
	};
	class ItemInfo;
	class ItemCore;
	class VestItem;
	class rhssaf_vest_md12_digital;
	class S_Vest_SPAGPAT: rhssaf_vest_md12_digital
	{
		displayName = "Ballistic Vest (Spagpat)";
		author = "Taepodong";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\vests\m12_SPAGPAT_ca.paa"};
	};
	class m12_spag: S_Vest_SPAGPAT
	{
		displayName = "(DEPRICATED) Ballistic Vest (Spagpat)";
		scope = 1;
		scopeArsenal = 1;
	};
	class UniformItem;
	class rhssaf_uniform_m10_digital_summer;
	class rhssaf_uniform_m10_digital_desert;
	class U_I_OfficerUniform;
	class U_S_Uniform_SPAGPAT: rhssaf_uniform_m10_digital_summer
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Taepodong/Kalthramis";
		displayName = "Combat Uniform (Spagpat)";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\uniforms\m10_d_spag_shirt"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_S_SPAGPAT";
			containerClass = "Supply60";
			mass = 40;
		};
	};
	class U_S_Uniform_Neck_SPAGPAT: rhssaf_uniform_m10_digital_desert
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Taepodong/Kalthramis";
		displayName = "Combat Uniform (Spagpat/Neck)";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\z\spag\addons\gear\data\uniforms\m10_d_spag_shirt"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "U_S_Neck_SPAGPAT";
			containerClass = "Supply60";
			mass = 40;
		};
	};
	class Custom_Camo_TShirt: U_I_OfficerUniform
	{
		scope = 1;
		scopeArsenal = 1;
		displayName = "Custom Camo (T-Shirt)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Custom_Uniform_TShirt";
			containerClass = "Supply30";
			mass = 35;
		};
	};
	class spag_tsk: U_S_Uniform_SPAGPAT
	{
		displayName = "(Depricated) Spagistan Combat Uniform";
		scope = 1;
		scopeArsenal = 1;
	};
};
