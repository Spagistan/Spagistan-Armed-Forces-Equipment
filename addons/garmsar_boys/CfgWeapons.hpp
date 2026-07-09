class cfgWeapons {
    class mortar_82mm;
    class rhs_weap_2b14 : mortar_82mm{
        class Single1;
        class Single2;
        class Single3;
    };
    class spag_weap_2b14: rhs_weap_2b14
    {
	magazines[] = {
        "rhs_mag_3vo18_10",
		"rhs_mag_3vs25m_10",
		"rhs_mag_53_va_832a_10",
		"rhs_mag_d832du_10",
        "spag_mag_3vo18_10_garmsar"
        };

        class Single1: Single1{
            artilleryDispersion = 8;
        };
        class Single2: Single2{
            artilleryDispersion = 8;
        };
        class Single3: Single3{
            artilleryDispersion = 8;
        };
    };
};
