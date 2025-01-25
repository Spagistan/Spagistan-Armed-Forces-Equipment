//CfgWeapons entries for Uniforms

class UniformItem;
class rhssaf_uniform_m10_digital_summer;
class rhssaf_uniform_m10_digital_desert;
class U_I_OfficerUniform;

//U_S_UNIFORM_SPAGPAT MISSIONG ITEMINFO.CONTAINERCLASS

class U_S_Uniform_SPAGPAT: rhssaf_uniform_m10_digital_summer
{
	scope = 2;
	scopeArsenal = 2;
	author = "Taepodong/Kalthramis";
	displayName = "Combat Uniform (Spagpat)";
	hiddenSelections[] = {"camo","Insignia"};
    hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_shirt)}; //this texture defines the texture when the object is on the ground
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "U_S_SPAGPAT";
		//uniformClass = "rhssaf_soldier_army_digital_base";
		containerClass = "Supply60";
		mass = 40;
	};
};


class U_S_Uniform_Telnyashka_SPAGPAT: rhssaf_uniform_m10_digital_summer
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	author = "Taepodong/Kalthramis";
	displayName = "Combat Uniform (Spagpat/Telnyashka)";
	hiddenSelections[] = {"camo","Insignia"};
    hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_shirt) }; //this texture defines the texture when the object is on the ground
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "U_S_TEL_SPAGPAT";
		//uniformClass = "rhssaf_soldier_army_digital_base"; 
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
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\m10_d_spag_shirt)};
	
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "U_S_Neck_SPAGPAT";
		containerClass = "Supply60";
		mass = 40;
	};
};


/* DEPRECATED class SpagUniformTest: U_OG_leader
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Custom Camo";
	picture = "-";
	class ItemInfo : UniformItem {
		uniformClass = "Custom_Uniform";
		containerClass = "Supply50";
		mass = 50;
	};
}; */

class Custom_Camo_TShirt: U_I_OfficerUniform
{
	scope = 1;
	scopeArsenal = 1;
	displayName = "Custom Camo (T-Shirt)";

	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "Custom_Uniform_TShirt";
		containerClass = "Supply30";
		mass = 35;
	};
};

/* DEPRECATED
class U_OG_leader: Uniform_Base
{
	author = "Bohemia Interactive";
	scope = 1;
	displayName = "Guerilla Uniform";
	picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_ig_leader_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"A3\characters_f_beta\indep\data\officer_spc_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "O_G_Soldier_TL_F";
		containerClass = "Supply40";
		mass = 40;
	};
};
*/

// cfgWeapons line : 73,722
// cfgvehicles line : 229,903
//  BACKWARDS COMPATIBILITY
class spag_tsk: U_S_Uniform_SPAGPAT	{displayName = "(Depricated) Spagistan Combat Uniform"; scope = 1; scopeArsenal = 1; };
