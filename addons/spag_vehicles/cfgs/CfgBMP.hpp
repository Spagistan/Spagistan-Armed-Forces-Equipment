
class rhsgref_cdf_bmp1;

//white un:
/* hiddenSelectionsTextures[] = {
	"\po_factions_fic\un\Data\bmp_1_un_co.paa","\po_factions_fic\un\Data\bmp_2_un_co.paa",
	"\po_factions_fic\un\Data\bmp_3_un_co.paa","\po_factions_fic\un\Data\bmp_4_un_co.paa",
	"\po_factions_fic\un\Data\bmp_5_un_co.paa","\po_factions_fic\un\Data\bmp_6_un_co.paa"
	};

//deseert:
hiddenSelectionsTextures[] = {
	"po_factions_me\IRAN\data\bmp_1_iran_co.paa","\po_factions_me\IRAN\data\bmp_2_iran_co.paa",
	"\po_factions_me\IRAN\data\bmp_3_iran_co.paa","\po_factions_me\IRAN\data\bmp_4_iran_co.paa",
	"\po_factions_me\IRAN\data\bmp_5_iran_co.paa","\po_factions_me\IRAN\data\bmp_6_iran_co.paa"
	}; */
class BMP_Spagpat: rhsgref_cdf_bmp1
{
	displayName = "SPAG bmp";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "RHS/Kalthramis";
	editorCategory = "Spagistan_Category";
	editorSubcategory = "EdSubcat_APCs";
	faction = QUOTE(SPAGFACTION);
	tf_hasLRradio = 1;
	tf_RadioType = "TFAR_anprc155_coyote";
	tf_isolatedAmount = 1;
	tf_RadioType_api = "TFAR_anprc155_coyote";
	tf_encryptionCode = "_independent";
	tf_hasLRradio_api = 1;
	tf_isolatedAmount_api = 0.3;
	VEHICLEINVENTORY
	crew = "S_Soldier_Armor";
	HiddenSelectionsTextures[] = {QPATHTOF(data\bmp\bmp_1_spagpat.paa), QPATHTOF(data\bmp\bmp_2_spagpat.paa),
		 QPATHTOF(data\bmp\bmp_3_spagpat.paa), QPATHTOF(data\bmp\bmp_4_spagpat.paa),
		 QPATHTOF(data\bmp\bmp_5_spagpat.paa), QPATHTOF(data\bmp\bmp_6_spagpat.paa),
		  };
	/* //rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa */
};
