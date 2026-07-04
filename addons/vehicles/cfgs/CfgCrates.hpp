class rhs_7ya37_1_single;
class ACE_medicalSupplyCrate_advanced;
class I_supplyCrate_F;
class VirtualReammoBox_camonet_F;

class Spag_Empty_Crate : rhs_7ya37_1_single {
    displayName = "SAF Empty Crate";
    scope = 2;
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportItems {};
};

class Spag_Rifle_Crate : Spag_Empty_Crate {
    displayName = "SAF Rifle Supply Crate";
    class TransportWeapons {
        weap_xx(rhs_weap_ak74m,2);
        weap_xx(rhs_weap_rpg75,2);
    };
    class TransportMagazines {
        mag_xx(grcb_30Rnd_545x39_7N24_AK,2);
        mag_xx(grcb_60Rnd_545x39_7N24,10);
        mag_xx(rhs_VOG25,20);
        mag_xx(rhs_GRD40_white,10);
        mag_xx(rhssaf_mag_br_m75,10);
        mag_xx(rhssaf_mag_brd_m83_white,10);
        mag_xx(cigs_morley_cigpack,1);
    };
    class TransportItems {
        item_xx(ACE_elasticBandage,20);
        item_xx(ACE_packingBandage,20);
        item_xx(ACE_morphine,5);
        item_xx(ACE_epinephrine,5);
        item_xx(ACE_tourniquet,5);
        item_xx(ACE_splint,5);
        item_xx(ACE_EarPlugs,3);
        item_xx(ACE_suture,20);
        item_xx(ACE_salineIV_500,5);
    };
};

class Spag_Weap_Crate : Spag_Empty_Crate {
    displayName = "SAF Weapons Supply Crate";
    class TransportMagazines {
        mag_xx(rhs_250Rnd_762x54mmR_7N26,4);
        mag_xx(rhs_rpg7_PG7VS_mag,6);
        mag_xx(rhs_rpg7_type69_airburst_mag,3);
        mag_xx(rhs_rpg7_TBG7V_mag,3);
        mag_xx(cigs_morley_cigpack,1);
    };
    class TransportItems {
        item_xx(ACE_EarPlugs,3);
        item_xx(ACE_canteen,1);
    };
};

class Spag_Metis_Crate : Spag_Empty_Crate {
    displayName = "SAF 9K115 Metis Ammo Crate";
    scope = 2;
    class TransportMagazines {
        mag_xx(ace_compat_rhs_afrf3_mag_9M131M,12);
        mag_xx(ace_compat_rhs_afrf3_mag_9M131F,6);
        mag_xx(cigs_morley_cigpack,1);
    };
        class TransportItems {
        item_xx(ACE_EarPlugs,3);
    };
};

class Spag_Med_Crate : ACE_medicalSupplyCrate_advanced {
    displayName = "SAF Medical Supply Crate";
    scope = 2;
    class TransportWeapons {};
    class TransportItems {
        item_xx(ACE_elasticBandage,75);
        item_xx(ACE_packingBandage,75);
        item_xx(ACE_quikclot,75);
        item_xx(ACE_bodyBag,5);
        item_xx(ACE_CableTie,25);
        item_xx(ACE_morphine,25);
        item_xx(ACE_epinephrine,25);
        item_xx(ACE_salineIV,40);
        item_xx(ACE_salineIV_500,40);
        item_xx(ACE_tourniquet,16);
        item_xx(ACE_splint,16);
        item_xx(ACE_EarPlugs,3);
        item_xx(ACE_suture,200);
        item_xx(ACE_surgicalKit,4);
        item_xx(ACE_painkillers,15);
    };
    class TransportMagazines {
        mag_xx(cigs_morley_cigpack,1);
    };
};

class Spag_Drone_Crate : Spag_Empty_Crate {
    displayName = "SAF Drone Supply Crate";
    class TransportItems {
        item_xx(ItemMavic3,2);
        item_xx(Item_Crocus_AP,1);
        item_xx(Item_Crocus_AT,5);
        };
        class TransportMagazines {
        mag_xx(rhs_VOG25,20);
        mag_xx(rhs_VG40SZ,3);
        mag_xx(rhs_GRD40_white,1);
    };
};

class Spag_SupplyCrate: I_supplyCrate_F {
    displayName = "Supply Box (SAF)";
    hiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\Objects\spag_Supplydrop_CO.paa"};
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportItems {};
    class TransportBackpacks {};
    disableInventory = 1;
    maximumLoad = 0;
    ace_cargo_hasCargo = 0;
    ace_cargo_size = 6;
    ace_cargo_canLoad = 1;
    ace_cargo_noRename = 1;
};

class Spag_arsenal : VirtualReammoBox_camonet_F {
    scope = 2;
    displayName = "SAF Arsenal";
    model = "\ca\weapons\AmmoBoxes\USSpecialWeapons.p3d";
    ace_cargo_hasCargo = 1;
    ace_cargo_space = 20;
    ace_cargo_canLoad = 0;
    ace_rearm_defaultSupply = 1200;
    VEHICLEINVENTORY
    class ace_cargo {
        class cargo {
            class Spag_Empty_Crate {
                type = "Spag_Empty_Crate";
                amount = 1;
            };
            class Spag_Rifle_Crate {
                type = "Spag_Rifle_Crate";
                amount = 1;
            };
            class Spag_Weap_Crate {
                type = "Spag_Weap_Crate";
                amount = 1;
            };
            class Spag_Metis_Crate {
                type = "Spag_Metis_Crate";
                amount = 1;
            };
            class Spag_Med_Crate {
                type = "Spag_Med_Crate";
                amount = 1;
            };
            class Spag_Drone_Crate {
                type = "Spag_Drone_Crate";
                amount = 1;
            };
        };
    };
};
