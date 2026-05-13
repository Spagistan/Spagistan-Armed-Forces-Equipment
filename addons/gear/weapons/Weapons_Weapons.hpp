class rhs_weap_ak74m;
class rhs_weap_ak74m_gp25;
class rhs_weap_rpk74m;

class S_weap_ak74m_ip78: rhs_weap_ak74m {
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "rhs_acc_1p78";
        };
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
        };
    };
};
class S_weap_ak74m_gp25_ip78: rhs_weap_ak74m_gp25 {
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "rhs_acc_1p78";
        };
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
        };
    };
};

class S_weap_rpk_ip78: rhs_weap_rpk74m {
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "rhs_acc_1p78";
        };
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
        };
    };
};

class rhs_Metis_Base {
    ace_overpressure_priority = 1;
    ace_overpressure_angle = 1;    // Cone in which the damage is applied (in degrees from the muzzle of the cannon towards the side)
    ace_overpressure_range = 10;    // Range in meters in which the damage is applied
    ace_overpressure_damage = 2; // Damage multiplier
    ace_overpressure_offset = 0;    // Offset from the projectile origin forwards, to where the overpressure should originate from
};
