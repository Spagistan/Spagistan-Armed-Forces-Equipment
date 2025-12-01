class TFAR_mr3000;
class B_Kitbag_rgr;
class ua_carryall_tubitak;

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

class TFAR_SPAG_Air_mr3000: TFAR_mr3000
{
  scope = 2;
  side = 2;
  scopeArsenal = 2;
  author = "Taepodong/Kalthramis";
  displayName = "MR3000 BWMOD (Spagpat - Air)";
  descriptionShort = "Spagistan air camo LR Radio";
  hiddenSelectionsTextures[] = { QPATHTOF(data\pack\MR3000_SPAIRPAT_ca) };
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

class S_Tubitak_Spag: ua_carryall_tubitak
{
  scope = 2;
  side = 2;
  scopeArsenal = 2;
  author = "TEagle";
  generalMacro = "S_Tubitak_Spag";
  displayName = "Carryall Backpack (TUBITAK)";
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

  class TransportItems {
    item_xx(ACE_elasticBandage,20);
    item_xx(ACE_packingBandage,20);
    item_xx(ACE_quikclot,20);
    item_xx(ACE_suture,10);
    item_xx(ACE_morphine,5);
    item_xx(ACE_epinephrine,5);
    item_xx(ACE_splint,4);
    item_xx(ACE_tourniquet,4);
    item_xx(ACE_Flashlight_XL50,1);
    item_xx(acex_intelitems_notepad,1);

  };

};

class S_KitBag_Spag_Grenadier: S_KitBag_Spag
{

  author = "TEagle";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "S_KitBag_Spag_Grenadier";
  class TransportMagazines {
    mag_xx(rhssaf_mag_br_m75,5);
    mag_xx(rhssaf_mag_brd_m83_white,5);
    mag_xx(rhs_VOG25,40);
    mag_xx(rhs_GRD40_White,10);
  };

  class TransportItems {
    item_xx(ACE_elasticBandage,20);
    item_xx(ACE_packingBandage,20);
    item_xx(ACE_quikclot,20);
    item_xx(ACE_suture,10);
    item_xx(ACE_morphine,5);
    item_xx(ACE_epinephrine,5);
    item_xx(ACE_splint,4);
    item_xx(ACE_tourniquet,4);
    item_xx(ACE_Flashlight_XL50,1);
    item_xx(acex_intelitems_notepad,1);

  };

};


class S_KitBag_Spag_CLS: S_KitBag_Spag
{
  author = "TEagle";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "S_KitBag_Spag_CLS";
  class TransportMagazines {
    mag_xx(rhssaf_mag_brd_m83_white,10);
  };

  class TransportItems {
    item_xx(ACE_elasticBandage,20);
    item_xx(ACE_packingBandage,20);
    item_xx(ACE_quikclot,20);
    item_xx(ACE_suture,50);
    item_xx(ACE_morphine,5);
    item_xx(ACE_epinephrine,5);
    item_xx(ACE_splint,8);
    item_xx(ACE_tourniquet,8);
    item_xx(ACE_Flashlight_XL50,1);
    item_xx(acex_intelitems_notepad,1);
    item_xx(ACE_surgicalKit,1);
    item_xx(ACE_salineIV,8);
    item_xx(ACE_salineIV_250,4);

  };

};

class S_Kitbag_PLM: S_Tubitak_Spag
{
  author = "TEagle";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "S_KitBag_Spag_PLM";

  class TransportItems {
    item_xx(ACE_elasticBandage,50);
    item_xx(ACE_packingBandage,50);
    item_xx(ACE_quikclot,40);
    item_xx(ACE_suture,100);
    item_xx(ACE_morphine,10);
    item_xx(ACE_epinephrine,5);
    item_xx(ACE_splint,8);
    item_xx(ACE_tourniquet,8);
    item_xx(ACE_surgicalKit,1);
    item_xx(ACE_salineIV,10);
    item_xx(ACE_salineIV_500,10);
    item_xx(ACE_painkillers,2);

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

    class TransportItems {
      item_xx(ACE_elasticBandage,20);
      item_xx(ACE_packingBandage,20);
      item_xx(ACE_quikclot,20);
      item_xx(ACE_suture,10);
      item_xx(ACE_morphine,5);
      item_xx(ACE_epinephrine,5);
      item_xx(ACE_splint,4);
      item_xx(ACE_tourniquet,4);
      item_xx(ACE_Flashlight_XL50,1);
      item_xx(acex_intelitems_notepad,1);

    };
};

//  BACKWARDS COMPATIBILITY
class spagbag: S_KitBag_Spag	{ displayName = "(DEPRECATED) Kitbag (Spagpat)"; scope = 1; side = 2; scopeArsenal = 1; };
