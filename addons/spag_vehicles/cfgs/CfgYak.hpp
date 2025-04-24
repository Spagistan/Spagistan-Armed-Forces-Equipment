class O_Plane_CAS_02_dynamicLoadout_F;

class YAK130_Spagpat: O_Plane_CAS_02_dynamicLoadout_F
{

	displayName = "Yak-130 (Spagpat)";
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "A. Dan";
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
	hiddenselectionstextures[] = {
		QPATHTOF(data\Yak\cas02_ext01_SAF27),
        QPATHTOF(data\Yak\cas02_ext02_SAF27),
	};
	class textureSources {
		class clown {
			displayName = "Clown";
			author = "A. Dan";
			textures[] = {
				QPATHTOF(data\Yak\cas02_ext01_clown),
				QPATHTOF(data\Yak\cas02_ext02_clown), 
			};
			factions[] = {QUOTE(SPAGFACTION)};
		};
	};
};
