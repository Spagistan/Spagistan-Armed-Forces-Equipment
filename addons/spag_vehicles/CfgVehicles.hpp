#define backpack_xx(a,b) class _xx_##a {backpack = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#define VEHICLEINVENTORY class TransportBackpacks\
	{\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_ak74m, 2);\
		weap_xx(rhs_weap_rpg26, 4);\
	};\
	class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_545x39_7N22_AK, 20);\
		mag_xx(rhs_200rnd_556x45_m_saw, 12);\
		mag_xx(rhs_VG40TB, 10);\
		mag_xx(rhs_VOG25p, 10);\
		mag_xx(rhs_VOG25, 20);\
		mag_xx(rhs_GDM40, 40);\
		mag_xx(rhs_mag_rdg2_white, 30);\
		mag_xx(rhs_mag_rgo, 15);\
		mag_xx(murshun_cigs_cigpack, 4);\
		mag_xx(murshun_cigs_lighter, 4);\
	};\
	class TransportItems\
	{\
		item_xx(ACE_elasticBandage, 20);\
		item_xx(ACE_quikclot, 20);\
		item_xx(ACE_EarPlugs, 4);\
		item_xx(ACE_EntrenchingTool, 2);\
	};

/* #define VEHICLEINVENTORY class TransportBackpacks\
	{\
	};\
	class TransportWeapons\
	{\
	};\
	class TransportMagazines\
	{\
	};\
	class TransportItems\
	{\
	};  */

//MI-8MT
class CfgVehicles
{
	#include "CfgBMP.hpp"
	#include "CfgBTR.hpp"
	#include "CfgHmmwv.hpp"
	#include "CfgM113.hpp"
	#include "CfgMI8.hpp"
	#include "CfgSU25.hpp"
	#include "CfgUral.hpp"
};


#undef backpack_xx(a,b)
#undef mag_xx(a,b)
#undef weap_xx(a,b)
#undef item_xx(a,b)
#undef VEHICLEINVENTORY
