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
  side = 2;
  scopeArsenal = 2;
  author = "Taepodong/Kalthramis";
  displayName = "MR3000 BWMOD (Spagpat)";
  descriptionShort = "Spagistan-camo LR Radio";
  hiddenSelectionsTextures[] = { QPATHTOF(data\pack\MR3000_SPAGPAT_ca) };
};

class S_KitBag_Spag: B_Kitbag_rgr
{
  scope = 2;
  side = 2;
  scopeArsenal = 2;
  author = "Taepodong/Kalthramis";
  generalMacro = "S_KitBag_Spag";
  displayName = "Kitbag (Spagpat)";
  /* picture = "\A3\weapons_f\ammoboxes\bags\ui\icon_B_C_Compact_dgtl_ca.paa"; */
  /* hiddenSelections[] = { "camo"	}; */
  hiddenSelectionsTextures[] = { QPATHTOF(data\pack\kit_ca) };
  /* maximumLoad = 280;
  mass = 50; */
};


class S_KitBag_Spag_Rifleman: S_KitBag_Spag
{

  author = "Taepodong/Kalthramis";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "S_KitBag_Spag_Rifleman";
  class TransportMagazines {
    mag_xx(rhssaf_mag_br_m75,5);
    mag_xx(rhssaf_mag_brd_m83_white,5);
  };
  class TransportWeapons {
    weap_xx(ACE_MapTools,1);
    weap_xx(ACE_EntrenchingTool,1);
  };

  class TransportItems {
    item_xx(ACE_elasticBandage,30);
    item_xx(ACE_morphine,4);
    item_xx(ACE_epinephrine,4);
    item_xx(ACE_splint,4);
    item_xx(ACE_tourniquet,4);
    item_xx(ACE_Flashlight_XL50,1);
    item_xx(acex_intelitems_notepad,1);
    item_xx(murshun_cigs_cigpack,1);
    item_xx(murshun_cigs_lighter,1);
  };

};

class TFAR_SPAG_mr3000_SL : TFAR_SPAG_mr3000 {

    author = "Taepodong/Kalthramis";
    scope = 1;
    scopeArsenal = 1;
    generalMacro = "TFAR_SPAG_mr3000_SL";

    class TransportMagazines {
      mag_xx(rhssaf_mag_br_m75,5);
      mag_xx(rhssaf_mag_brd_m83_white,5);
    };
    class TransportWeapons {
      weap_xx(ACE_MapTools,1);
      weap_xx(ACE_EntrenchingTool,1);
    };

    class TransportItems {
      item_xx(ACE_elasticBandage,30);
      item_xx(ACE_morphine,4);
      item_xx(ACE_epinephrine,4);
      item_xx(ACE_splint,4);
      item_xx(ACE_tourniquet,4);
      item_xx(ACE_Flashlight_XL50,1);
      item_xx(acex_intelitems_notepad,1);
      item_xx(murshun_cigs_cigpack,1);
      item_xx(murshun_cigs_lighter,1);
    };
};
//  BACKWARDS COMPATIBILITY
class spagbag: S_KitBag_Spag	{ displayName = "(DEPRECATED) Kitbag (Spagpat)"; scope = 1; side = 2; scopeArsenal = 1; };
