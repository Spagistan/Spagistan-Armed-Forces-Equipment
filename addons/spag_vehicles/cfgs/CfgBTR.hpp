

//white btr
/* hiddenSelectionsTextures[] = {"\po_factions_fic\un\Data\btr60_body_un_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"};
// black BTR
hiddenSelectionsTextures[] = {
	"\po_factions_me\ists\Data\btr60_body_ists_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"
}; */

class rhsgref_cdf_btr60;
class BTR_Spagpat: rhsgref_cdf_btr60
{
	displayName = "SPAG BTR";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "RHS/Kalthramis";
	editorSubcategory = "EdSubcat_APCs";
	editorCategory = "Spagistan_Category";
	faction = QUOTE(SPAGFACTION);
	tf_hasLRradio = 1;
	tf_RadioType = "TFAR_anprc155_coyote";
	tf_isolatedAmount = 1;
	tf_RadioType_api = "TFAR_anprc155_coyote";
	tf_encryptionCode = "_independent";
	tf_hasLRradio_api = 1;
	tf_isolatedAmount_api = 0.3;
	VEHICLEINVENTORY
	hiddenSelectionsTextures[] = {QPATHTOF(data\btr\btr_spag), QPATHTOF(data\btr\btr60_details_co)};
};
