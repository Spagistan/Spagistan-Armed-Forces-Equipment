class rhssaf_kitbag_digital;

// National Guard Backpacks

class NG_KitBag_RF : rhssaf_kitbag_digital {
  author = "CParadis/Aidan";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "NG_KitBag_RF";

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
        item_xx(ACE_packingBandage,10);

        item_xx(ACE_morphine,3);
        item_xx(ACE_epinephrine,3);
        item_xx(ACE_splint,4);
        item_xx(ACE_tourniquet,4);
        item_xx(ACE_Flashlight_XL50,1);
        item_xx(acex_intelitems_notepad,1);
        item_xx(murshun_cigs_cigpack,1);
        item_xx(murshun_cigs_lighter,1);
    };
};


class NG_KitBag_GR : rhssaf_kitbag_digital {
  author = "CParadis/Aidan";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "NG_KitBag_GR";

    class TransportMagazines {
        mag_xx(rhssaf_mag_br_m75,5);
        mag_xx(rhssaf_mag_brd_m83_white,5);
        mag_xx(rhs_VOG25,10);
        mag_xx(rhs_VOG25P,5);
        mag_xx(rhs_VG40MD,5);
        mag_xx(rhs_GRD40_White,5);
    };
    class TransportWeapons {
        weap_xx(ACE_MapTools,1);
        weap_xx(ACE_EntrenchingTool,1);
    };

    class TransportItems {
        item_xx(ACE_elasticBandage,10);
        item_xx(ACE_packingBandage,10);
        item_xx(ACE_morphine,3);
        item_xx(ACE_epinephrine,3);
        item_xx(ACE_splint,4);
        item_xx(ACE_tourniquet,4);
        item_xx(ACE_Flashlight_XL50,1);
        item_xx(acex_intelitems_notepad,1);
        item_xx(murshun_cigs_cigpack,1);
        item_xx(murshun_cigs_lighter,1);
    };
};

class NG_KitBag_AR : rhssaf_kitbag_digital {
  author = "CParadis/Aidan";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "NG_KitBag_AR";

    class TransportMagazines {
        mag_xx(rhssaf_mag_br_m75,5);
        mag_xx(rhssaf_mag_brd_m83_white,5);
        mag_xx(rhs_60Rnd_545X39_7N10_AK,5);
    };
    class TransportWeapons {
        weap_xx(ACE_MapTools,1);
        weap_xx(ACE_EntrenchingTool,1);
    };

    class TransportItems {
        item_xx(ACE_elasticBandage,10);
        item_xx(ACE_packingBandage,10);
        item_xx(ACE_morphine,3);
        item_xx(ACE_epinephrine,3);
        item_xx(ACE_splint,3);
        item_xx(ACE_tourniquet,4);
        item_xx(ACE_Flashlight_XL50,1);
        item_xx(acex_intelitems_notepad,1);
        item_xx(murshun_cigs_cigpack,1);
        item_xx(murshun_cigs_lighter,1);
    };
};

class NG_KitBag_TL : rhssaf_kitbag_digital {
  author = "CParadis/Aidan";
  scope = 1;
  scopeArsenal = 1;
  generalMacro = "NG_KitBag_TL";

    class TransportMagazines {
        mag_xx(rhssaf_mag_br_m75,5);
        mag_xx(rhssaf_mag_brd_m83_white,5);
    };
    class TransportWeapons {
        weap_xx(ACE_MapTools,1);
        weap_xx(ACE_EntrenchingTool,1);
    };

    class TransportItems {
        item_xx(ACE_elasticBandage,15);
        item_xx(ACE_packingBandage,10);
        item_xx(ACE_morphine,6);
        item_xx(ACE_epinephrine,6);
        item_xx(ACE_splint,5);
        item_xx(ACE_tourniquet,8);
        item_xx(ACE_suture,40);
        item_xx(ACE_salineIV_250,5);
        item_xx(ACE_salineIV_500,5);
        item_xx(ACE_salineIV,3);
        item_xx(ACE_surgicalKit,1);
        item_xx(ACE_Sandbag_empty,3);
        item_xx(ACE_Flashlight_XL50,1);
        item_xx(acex_intelitems_notepad,1);
        item_xx(murshun_cigs_cigpack,1);
        item_xx(murshun_cigs_lighter,1);
    };
};