//These macros are used to create a class with a given name and properties.
//_xx_ is the prefix used for the class name.
//The class has a single property (backpack, magazine, etc.) and a single value.
//The argument a is the name of the property and b is the value of that property.
//For example, backpack_xx(rhs_rpg_empty, 2) would expand to:
//class _xx_rhs_rpg_empty {backpack = rhs_rpg_empty; count = 2;};

#define backpack_xx(a,b) class _xx_##a {backpack = QUOTE(a); count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = QUOTE(a); count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = QUOTE(a); count = b;}
#define item_xx(a,b) class _xx_##a {name = QUOTE(a); count = b;}

#define VEHICLEINVENTORY class TransportBackpacks\
	{\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_ak74m,2);\
		weap_xx(rhs_weap_rpg75,2);\
		weap_xx(rhs_weap_igla,1);\
		weap_xx(rhs_weap_rpg7,1);\
	};\
	class TransportMagazines\
	{\
		mag_xx(rhs_mag_9k38_rocket,4);\
		mag_xx(rhs_rpg7_PG7VS_mag,6);\
		mag_xx(rhs_rpg7_type69_airburst_mag,4);\
		mag_xx(rhs_rpg7_TBG7V_mag,2);\
		mag_xx(grcb_30Rnd_545x39_7N24_AK,20);\
		mag_xx(grcb_60Rnd_545x39_7N24,10);\
		mag_xx(rhs_VOG25,20);\
		mag_xx(rhs_GRD40_white,10);\
		mag_xx(rhssaf_mag_br_m75,10);\
		mag_xx(rhssaf_mag_brd_m83_white,10);\
		mag_xx(cigs_morley_cigpack,1);\
		mag_xx(rhs_250Rnd_762x54mmR_7N26,2);\
	};\
	class TransportItems\
	{\
		item_xx(ACE_Clacker,1);\
		item_xx(DemoCharge_Remote_Mag,1);\
		item_xx(rhs_acc_pgo7v3,2);\
		item_xx(ACE_wirecutter,1);\
		item_xx(ACE_elasticBandage,20);\
		item_xx(ACE_packingBandage,20);\
		item_xx(ACE_morphine,5);\
		item_xx(ACE_epinephrine,5);\
		item_xx(ACE_tourniquet,5);\
		item_xx(ACE_splint,5);\
		item_xx(ACE_EarPlugs,3);\
		item_xx(ACE_suture,20);\
		item_xx(ACE_salineIV_500,5);\
	};

	#define SPAG_BTR40_CONFIG\
	scope = 2;\
	scopeCurator = 2;\
	side = 2;\
	author = "A. Dan";\
	editorCategory = "Spagistan_Category";\
	editorSubcategory = "EdSubcat_APCs";\
	faction = QUOTE(SPAGFACTION);\
	tf_hasLRradio = 1;\
	tf_RadioType = "TFAR_anprc155_coyote";\
	tf_isolatedAmount = 1;\
	tf_RadioType_api = "TFAR_anprc155_coyote";\
	tf_encryptionCode = "_independent";\
	tf_hasLRradio_api = 1;\
	tf_isolatedAmount_api = 0.3;\
	crew = "S_Soldier_Armor";\
	hiddenSelections[]=\
		{\
			"Camo",\
			"n1",\
			"n2",\
			"n3"\
		};\
		hiddenSelectionsTextures[]=\
		{\
			"z\spag\addons\vehicles\data\BTR40\Spag_BTR40.paa",\
			"PRACS_SLA_common\nums\no_ca.paa",\
			"PRACS_SLA_common\nums\no_ca.paa",\
			"PRACS_SLA_common\nums\no_ca.paa"\
		};\

class CfgVehicles
{
	#include "cfgs\CfgVehicles.hpp"

};


#undef backpack_xx
#undef mag_xx
#undef weap_xx
#undef item_xx
