class RHS_mi8AMT_vdv;

class mi8t_spagpat: RHS_mi8AMT_vdv {
	displayName = "Mi-8 (Unarmed/Spagpat)";
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
		QPATHTOF(data\MI8\mi8_body_spag),
		QPATHTOF(data\MI8\mi8_det_o_co),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\vvs_ca)
	};
};
