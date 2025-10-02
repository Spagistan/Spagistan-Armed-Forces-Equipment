


class CfgMagazineWells {
	class PK_762x54R {
		RHS_Magazines[] += {
			"rhssaf_250Rnd_762x54R"
		};
	};
};

class CfgWeapons {
	class rhs_weap_pkp;
	class rhs_weap_pkp_changed : rhs_weap_pkp {
		magazines[] += {
			"rhssaf_250Rnd_762x54R"
		};
	};
};
