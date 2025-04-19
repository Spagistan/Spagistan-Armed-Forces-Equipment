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
		weap_xx(rhs_weap_rpg26,4);\
	};\
	class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_545x39_7N22_AK,20);\
		mag_xx(rhs_200rnd_556x45_m_saw,12);\
		mag_xx(rhs_VG40TB,10);\
		mag_xx(rhs_VOG25p,10);\
		mag_xx(rhs_VOG25,20);\
		mag_xx(rhs_GDM40,40);\
		mag_xx(rhs_mag_rdg2_white,30);\
		mag_xx(rhs_mag_rgo,15);\
		mag_xx(murshun_cigs_cigpack,4);\
		mag_xx(murshun_cigs_lighter,4);\
	};\
	class TransportItems\
	{\
		item_xx(ACE_elasticBandage,20);\
		item_xx(ACE_quikclot,20);\
		item_xx(ACE_EarPlugs,4);\
		item_xx(ACE_EntrenchingTool,2);\
	};

class CfgVehicles 
{
	#include "CfgBMP.hpp"
	#include "CfgBTR.hpp"
	#include "CfgHmmwv.hpp"
	#include "CfgM113.hpp"
	#include "CfgMI8.hpp"
	#include "CfgSU25.hpp"
	#include "CfgUral.hpp"
	#include "CfgYak.hpp"
	#include "CfgSU25-2.hpp"


};


#undef backpack_xx
#undef mag_xx
#undef weap_xx
#undef item_xx
#undef VEHICLEINVENTORY
