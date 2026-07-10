class RHS_mi8AMT_vdv;
class RHS_Mi8AMTSh_vvsc;

class mi8t_spagpat: RHS_mi8AMT_vdv {
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "RHS/Kalthramis";
	editorCategory = "Spagistan_Category";
	editorSubcategory = "EdSubcat_Helicopters";
	faction = QUOTE(SPAGFACTION);
	crew = "I_spag_NG_Pilot_Heli";
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
		"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\sang_ca)
		};
		class ace_cargo
		{
            class cargo
			{
                class Spag_SupplyCrate {
                    type = "Spag_SupplyCrate";
                    amount = 1;
                };
            };
        };
		rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaYellow']"};
	};

class spag_Mi8AMTSh: RHS_Mi8AMTSh_vvsc {
	scope = 2;
	scopeCurator = 2;
	side = 2;
	author = "RHS/Spagistan Mod Team";
	editorCategory = "Spagistan_Category";
	editorSubcategory = "EdSubcat_Helicopters";
	faction = QUOTE(SPAGFACTION);
	crew = "I_spag_NG_Pilot_Heli";
	tf_hasLRradio = 1;
	tf_RadioType = "TFAR_anprc155_coyote";
	tf_isolatedAmount = 1;
	tf_RadioType_api = "TFAR_anprc155_coyote";
	tf_encryptionCode = "_independent";
	tf_hasLRradio_api = 1;
	tf_isolatedAmount_api = 0.3;
	VEHICLEINVENTORY
hiddenselectionstextures[] =
	{
		QPATHTOF(data\MI8\mi17_body_spag),
		"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\empty),
		QPATHTOF(data\MI8\sang_ca)
	};
	rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaYellow']"};
};
