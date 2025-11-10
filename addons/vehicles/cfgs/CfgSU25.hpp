/*
hiddenselectionstextures[] = {
	"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_cdf_co.paa",
	"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_cdf_co.paa",
	"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
}; */

class RHSGREF_cdf_su25;

class SU25_Spagpat: RHSGREF_cdf_su25
{

	displayName = "SU-25 (Spagpat)";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "RHS/Kalthramis";
	editorCategory = "Spagistan_Category";
	faction = QUOTE(SPAGFACTION);
	crew = "S_Soldier_Pilot";
	tf_hasLRradio = 1;
	tf_RadioType = "TFAR_anprc155_coyote";
	tf_isolatedAmount = 1;
	tf_RadioType_api = "TFAR_anprc155_coyote";
	tf_encryptionCode = "_independent";
	tf_hasLRradio_api = 1;
	tf_isolatedAmount_api = 0.3;
	VEHICLEINVENTORY
	hiddenselectionstextures[] = {
		QPATHTOF(data\SU25\su25_body1_spagpat),
		QPATHTOF(data\SU25\su25_body2_spagpat),
		QPATHTOF(data\SU25\no_ca)
	};
};
