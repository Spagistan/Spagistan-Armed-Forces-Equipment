class CfgMagazines {
	class rhs_100Rnd_762x54mmR_7N26;

	class rhs_250Rnd_762x54mmR_7N26 : rhs_100Rnd_762x54mmR_7N26 {
		descriptionShort = "Caliber: 7.62x54mmR AP<br />Rounds: 250<br />Every 5 Rounds: 1x 7T2 Tracer<br />Used in: PKM, PKP";
		displayName = "250rnd PKM 7N26";
		count = 250;
		mass = 100;
	};
};

class CfgWeapons {
	class rhs_weap_pkm {
		magazines[] += { "rhs_250Rnd_762x54mmR_7N26" };
	};
	class rhs_weap_pkp {
		magazines[] += { "rhs_250Rnd_762x54mmR_7N26" };
	};
};
