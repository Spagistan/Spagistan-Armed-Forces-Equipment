//CfgVehicles -> Backpacks

class TFAR_mr3000;
class B_Kitbag_rgr;

//HiddenSelectionsTextures[] =
//c1 setObjectTexture [0, "#(rgb,8,8,3)color(0,0,1,1)"]
//0{"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",   YES
//1"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",  //inside
//2"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa", //wheels
//3"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
//4"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
//5"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
//6"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
//7"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa", //outside
//8"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
//9"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};

class TFAR_SPAG_mr3000: TFAR_mr3000
{
  scope = 2;
  scopeArsenal = 2;
  author = "Taepodong/Kalthramis";
  displayName = "MR3000 BWMOD [SPAGPAT]";
  descriptionShort = "Spagistan-camo LR Radio";
  hiddenSelectionsTextures[] = { QPATHTOF(data\pack\MR3000_SPAGPAT_ca.paa) };
};

class S_KitBag_Spag: B_Kitbag_rgr
{
  scope = 2;
  scopeArsenal = 2;
  author = "Taepodong/Kalthramis";
  generalMacro = "S_KitBag_Spag";
  displayName = "Kitbag (Spagpat)";
  /* picture = "\A3\weapons_f\ammoboxes\bags\ui\icon_B_C_Compact_dgtl_ca.paa"; */
  /* hiddenSelections[] = { "camo"	}; */
  hiddenSelectionsTextures[] = { QPATHTOF(data\pack\kit_ca.paa) };
  /* maximumLoad = 280;
  mass = 50; */
};


//  BACKWARDS COMPATIBILITY
class spagbag: S_KitBag_Spag	{ displayName = "(DEPRICATED) Kitbag (Spagpat)"; scope = 1; scopeArsenal = 1; };
