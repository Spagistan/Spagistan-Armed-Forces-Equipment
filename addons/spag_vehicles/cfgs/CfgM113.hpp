

/* hiddenSelectionsTextures[] = {
	"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
	"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
	"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
	"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
}; */

class rhsusf_m113d_usarmy_unarmed;
class m113_spagpat: rhsusf_m113d_usarmy_unarmed {
	displayName = "M113 Spagistan (Unarmed)";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "RHS/Kalthramis";
	editorCategory = "Spagistan_Catagory";
	faction = QUOTE(SPAGFACTION);
	tf_hasLRradio = 1;
	tf_RadioType = "TFAR_anprc155_coyote";
	tf_isolatedAmount = 1;
	tf_RadioType_api = "TFAR_anprc155_coyote";
	tf_encryptionCode = "_independent";
	tf_hasLRradio_api = 1;
	tf_isolatedAmount_api = 0.3;
	VEHICLEINVENTORY

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\M113 APC\m113_1_spagpat),
		QPATHTOF(data\M113 APC\m113a3_02_d_co),
		QPATHTOF(data\M113 APC\m113a3_03_d_ca),
		QPATHTOF(data\M113 APC\m113a3_int03_d_co)
	};
};
