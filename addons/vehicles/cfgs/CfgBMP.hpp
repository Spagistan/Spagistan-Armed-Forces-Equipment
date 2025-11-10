
class rhsgref_cdf_bmp1;
class rhsgref_cdf_bmp2;
class rhsgref_cdf_bmp2d;
class rhs_Ob_681_2;



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
	displayName = "BMP 1";
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
};

class S_BMP2_Spagpat: rhsgref_cdf_bmp2
{
	displayName = "BMP 2";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "Canadian";
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
};

class S_BMP2D_Spagpat: rhsgref_cdf_bmp2d
{
	displayName = "BMP 2D";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "Canadian";
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
};

 class I_SPAGF_SPAG_Objyekt_681_01 : rhs_Ob_681_2 {
        author = "Canadian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Objyekt-681";
		editorCategory = "Spagistan_Category";
		editorSubcategory = "EdSubcat_APCs";
        side = 2;
        faction = QUOTE(SPAGFACTION);
        crew = "S_Soldier_Armor";
		VEHICLEINVENTORY
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 1;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		HiddenSelectionsTextures[] = {QPATHTOF(data\bmp\bmp_1_spagpat.paa), QPATHTOF(data\bmp\bmp_2_spagpat.paa),
			 QPATHTOF(data\bmp\bmp_3_spagpat.paa), QPATHTOF(data\bmp\bmp_4_spagpat.paa),
	QPATHTOF(data\bmp\bmp_5_spagpat.paa), QPATHTOF(data\bmp\bmp_6_spagpat.paa),
		  };
    };
