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


class rhssaf_soldier_army_para_digital_base;
class U_S_SPAGPAT: rhssaf_soldier_army_para_digital_base
{
  /* nakedUniform = "U_BasicBody"; */
  uniformClass = "U_S_Uniform_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_shirt) };
};

class U_S_TEL_SPAGPAT: rhssaf_soldier_army_para_digital_base
{
  /* nakedUniform = "U_BasicBody"; */
  uniformClass = "U_S_Uniform_Telnyashka_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_telnyashka) };
};

class rhssaf_soldier_un_desert_base;
class U_S_Neck_SPAGPAT: rhssaf_soldier_un_desert_base
{
  /* nakedUniform = "U_BasicBody"; */
  uniformClass = "U_S_Uniform_Neck_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\m10_d_spag_scarf)};
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
	scope = 1;
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
class U_S_Gorka_SPAGPAT: rhs_vdv_gorka_r_g_gloves_rifleman
{
        author="Muz";
        scope=2;
        uniformClass="U_S_Uniform_Gorka_SPAGPAT";
        hiddenSelections[] = {"camo1","Insignia"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\gorka)};
};

//  BACKWARDS COMPATIBILITY
class spag_turk: U_S_SPAGPAT { displayName = "(Depricated) Spagistan Combat Uniform";  scope = 1;	scopeArsenal = 1; };
