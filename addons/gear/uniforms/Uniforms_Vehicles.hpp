//CfgVehicle bases and groundholders for Uniforms


//russian vests are 乇乂ㄒ尺卂 ㄒ卄丨匚匚


// UNIFORMS
/* class SoldierGB ;
class rhssaf_soldier_m10_base: SoldierGB
{
	hiddenSelectionsTextures = {"camo1","camo2","camo3","insignia"};
}; */
/* class Item_Base_F; */

//rhssaf_soldier_m10_base
class I_Soldier_base_F; // for AAF uniform
class I_officer_F;
class B_soldier_F;
class I_Story_Officer_01_F;
class Civilian_F;
class rhssaf_soldier_army_para_digital_base;
class U_S_SPAGPAT: rhssaf_soldier_army_para_digital_base
{
  /* nakedUniform = "U_BasicBody"; */
  side = 2;
  scope = 2;
  uniformClass = "U_S_Uniform_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_shirt) };
};

class U_S_TEL_SPAGPAT: rhssaf_soldier_army_para_digital_base
{
  /* nakedUniform = "U_BasicBody"; */
  side = 2;
  scope = 2;
  uniformClass = "U_S_Uniform_Telnyashka_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_telnyashka) };
};

class rhssaf_soldier_un_desert_base;
class U_S_Neck_SPAGPAT: rhssaf_soldier_un_desert_base
{
  /* nakedUniform = "U_BasicBody"; */
  side = 2;
  scope = 2;
  uniformClass = "U_S_Uniform_Neck_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\m10_d_spag_scarf)};
};

class U_S_Winter_SPAGPAT: rhssaf_soldier_un_desert_base
{
  /* nakedUniform = "U_BasicBody"; */
  side = 2;
  scope = 2;
  uniformClass = "U_S_Uniform_Winter_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\m10_d_spag_winter)};
};

class U_S_Winter_Mix1_SPAGPAT: rhssaf_soldier_un_desert_base
{
  /* nakedUniform = "U_BasicBody"; */
  side = 2;
  scope = 2;
  uniformClass = "U_S_Uniform_Winter_Mix1_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\m10_d_spag_winter_mix1)};
};

class U_S_Winter_Mix2_SPAGPAT: rhssaf_soldier_un_desert_base
{
  /* nakedUniform = "U_BasicBody"; */
  side = 2;
  scope = 2;
  uniformClass = "U_S_Uniform_Winter_Mix2_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\m10_d_spag_winter_mix2)};
};

/* class U_S_OfficerGeur: O_G_Soldier_TL_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Taepodong/Kalthramis";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_S_Uniform_OfficerGeur";
	modelSides[] = {0, 1, 2, 3};
	hiddenSelections[] = { "camo" };

	hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\officer_spc_co) };
}; */

class O_officer_F;
class Custom_Uniform_TShirt: O_officer_F {
	author = "Kal";
  	side = 2;
  	scope = 2;
	displayName = "Custom Combat Life Saver";
	uniformClass = "Custom_Camo_TShirt";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] =  { QPATHTOF(data\uniforms\officer_spc_co) };
};

// UNIFORM GROUND HOLDERS

/* class Item_S_Uniform_SPAGPAT: Item_Base_F
{
	class TransportItems
	{
		class S_Uniform_SPAGPAT
		{
			name = "S_Uniform_SPAGPAT";
			count =  1;
		};
	};
}; */


class rhs_vdv_gorka_r_g_gloves_rifleman;
class rhs_vdv_gorka_r_g_rifleman;

class U_S_Gorka_SPAGPAT: rhs_vdv_gorka_r_g_gloves_rifleman
{
        author="Muz";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka)};
};

class U_S_Gorka_Winter_Mix_SPAGPAT: rhs_vdv_gorka_r_g_gloves_rifleman
{
        author="Dan";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_Winter_Mix_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka_winter_mix)};
};

class U_S_Gorka_Winter_Full_SPAGPAT: rhs_vdv_gorka_r_g_gloves_rifleman
{
        author="Dan";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_Winter_Full_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka_winter_full)};
};

class U_S_Gorka_Full_SPAGPAT: rhs_vdv_gorka_r_g_gloves_rifleman
{
        author="Dan";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_Full_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka_full)};
};
//BARE HANDS GORKA
class U_S_Gorka_Hands_SPAGPAT: rhs_vdv_gorka_r_g_rifleman
{
        author="Muz";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_Hands_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka)};
};

class U_S_Gorka_Winter_Mix_Hands_SPAGPAT: rhs_vdv_gorka_r_g_rifleman
{
        author="Dan";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_Winter_Mix_Hands_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka_winter_mix)};
};

class U_S_Gorka_Winter_Full_Hands_SPAGPAT: rhs_vdv_gorka_r_g_rifleman
{
        author="Dan";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_Winter_Full_Hands_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka_winter_full)};
};

class U_S_Gorka_Full_Hands_SPAGPAT: rhs_vdv_gorka_r_g_rifleman
{
        author="Dan";
		side = 2;
		scope = 2;
        uniformClass="U_S_Uniform_Gorka_Full_Hands_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka_full)};
};

class S_Civilian1: Civilian_F
{
		author="Dan";
		scope=2;
		side=3;
		uniformClass="S_Uniform_Civ1";
		model="\po_factions_me\Civilians\tak_civil01.p3d";
		hiddenSelections[]= {"Camo"};
		hiddenSelectionsTextures[]={"\po_factions_me\Civilians\tak_civil01_3_co.paa"};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"po_factions_me\Civilians\Tak_civil01.rvmat",
				"po_factions_me\Civilians\W1_Tak_civil01.rvmat",
				"po_factions_me\Civilians\W2_Tak_civil01.rvmat"
			};
		};
	};

class S_Civilian2: Civilian_F
{
		author="Dan";
		scope=2;
		side=3;
		uniformClass="S_Uniform_Civ2";
		model="\po_factions_me\Civilians\tak_civil02.p3d";
		hiddenSelections[]= {"Camo"};
		hiddenSelectionsTextures[]={"\po_factions_me\Civilians\tak_civil02_5_co.paa"};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"po_factions_me\Civilians\Tak_civil02.rvmat",
				"po_factions_me\Civilians\W1_Tak_civil02.rvmat",
				"po_factions_me\Civilians\W2_Tak_civil02.rvmat"
			};
		};
	};

class S_Civilian3: Civilian_F
{
		author="Dan";
		scope=2;
		side=3;
		uniformClass="S_Uniform_Civ3";
		model="\po_factions_me\Civilians\tak_civil06.p3d";
		hiddenSelections[]= {"Camo"};
		hiddenSelectionsTextures[]={"\po_factions_me\Civilians\tak_civil06_3_co.paa"};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"po_factions_me\Civilians\Tak_civil06.rvmat",
				"po_factions_me\Civilians\W1_Tak_civil06.rvmat",
				"po_factions_me\Civilians\W2_Tak_civil06.rvmat"
			};
		};
	};
	/*class spag_tanktop_green: ua_combatuniform_tubitak_tanktop_soldier
	{
		uniformClass="ua_combatuniform_tubitak_tanktop";
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ua_equipment\unif\data\I_E_Soldier_01_TankTop_TUR_TLF_CO.paa",
			"ua_equipment\unif\data\I_I_Soldier_01_TUR_TLF_CO.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
		};
	};
*/

//  BACKWARDS COMPATIBILITY
class spag_turk: U_S_SPAGPAT { displayName = "(Depricated) Spagistan Combat Uniform";  scope = 1; side = 1;	scopeArsenal = 1; };
