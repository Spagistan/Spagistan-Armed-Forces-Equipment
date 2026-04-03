class rhs_7ya37_1_single;
class ACE_medicalSupplyCrate_advanced;

class Spag_Empty_Crate : rhs_7ya37_1_single {
    displayName = "SAF Empty Crate";
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportItems {};
};

class Spag_Rifle_Crate : rhs_7ya37_1_single {
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

class Spag_Weap_Crate : rhs_7ya37_1_single {
    displayName = "SAF Weapons Supply Crate";
    class TransportWeapons {};
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

class Spag_Metis_Crate : rhs_7ya37_1_single {
    displayName = "SAF 9K115 Metis Ammo Crate";
    class TransportWeapons {};
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
