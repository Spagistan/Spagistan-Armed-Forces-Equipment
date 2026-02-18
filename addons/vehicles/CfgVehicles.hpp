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

class CfgVehicles
{
	#include "cfgs\CfgVehicles.hpp"

};


#undef backpack_xx
#undef mag_xx
#undef weap_xx
#undef item_xx
#undef VEHICLEINVENTORY
