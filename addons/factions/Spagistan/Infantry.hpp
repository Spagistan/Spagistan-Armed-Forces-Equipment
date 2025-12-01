#include "loadout_macros.hpp"

class I_G_Soldier_base_F;
class I_G_Soldier_F;

class S_Soldier_Base: I_G_Soldier_base_F
{
	scope = 1;
    scopeCurator = 1;
	BASE_SPAGISTAN_CONFIG
	backpack = "S_KitBag_SPAG_Rifleman";
	weapons[] = {
		"S_weap_ak74m_ip78",
		"rhs_weap_makarov_pm"
	};
	respawnWeapons[] = {
		"S_weap_ak74m_ip78",
		"rhs_weap_makarov_pm"
	};

	items[] = {
		"ACE_microDAGR",
		ITEM_5("ACE_CableTie"),
		"ACE_EarPlugs",
		"ACE_MapTools",
    	"ACE_EntrenchingTool",
		"ACE_Fortify"
	};
	respawnItems[] = {
		"ACE_microDAGR",
		ITEM_2("ACE_CableTie"),
		"ACE_EarPlugs",
		"ACE_MapTools",
    	"ACE_EntrenchingTool",
		"ACE_Fortify"
	};
	magazines[] = {
		ITEM_5("grcb_60Rnd_545x39_7N24"),
		"rhs_mag_9x18_8_57N181S",
		"cigs_morley_cigpack",
		"cigs_lighter"

	};
	respawnMagazines[] = {
		ITEM_5("grcb_60Rnd_545x39_7N24"),
		"rhs_mag_9x18_8_57N181S",
		"murshun_cigs_cigpack",
		"murshun_cigs_lighter"
	};
	linkedItems[] = {
		"S_Vest_SPAGPAT",
		"rhs_1PN138",
		"S_Helmet_SPAGPAT",
		"rhs_pdu4",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"TFAR_anprc148jem",

	};
	respawnLinkedItems[] = {
		"S_Vest_SPAGPAT",
		"rhs_1PN138",
		"S_Helmet_SPAGPAT",
		"rhs_pdu4",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"TFAR_anprc148jem",
	};
};


class S_Soldier_Rifleman: S_Soldier_Base {
	rank = "Private";
	role = "Rifleman";
	displayName = "Rifleman";
	scope = 2;
    scopeCurator = 2;
};

class S_Soldier_Grenadier: S_Soldier_Base {
	rank = "Private";
	displayName = "Grenadier";
	scope = 2;
    scopeCurator = 2;
	backpack = "S_KitBag_Spag_Grenadier";
	weapons[] = {
		"S_weap_ak74m_gp25_ip78",
		"rhs_weap_makarov_pm"
	};
	respawnWeapons[] = {
		"S_weap_ak74m_gp25_ip78",
		"rhs_weap_makarov_pm"
	};
};

class S_Soldier_CLS: S_Soldier_Base {
	rank = "Private";
	displayName = "Combat Life Saver";
	scope = 2;
    scopeCurator = 2;
	backpack = "S_Kitbag_Spag_CLS";
	attendant = 1;
};

class S_Soldier_AR: S_Soldier_Base {
	rank = "Private";
	displayName = "Automatic Rifleman";
	scope = 2;
    scopeCurator = 2;

	weapons[] = {
		"S_weap_rpk_ip78",
		"rhs_weap_makarov_pm"
	};
	respawnWeapons[] = {
		"S_weap_rpk_ip78",
		"rhs_weap_makarov_pm"
	};
};

class S_Soldier_TL: S_Soldier_Base {
	rank = "Corporal";
	displayName = "Team Leader";
	scope = 2;
    scopeCurator = 2;
};

class S_Soldier_SL: S_Soldier_Base {
	rank = "Sergeant";
	displayName = "Squad Leader";
	scope = 2;
    scopeCurator = 2;
	backpack = "TFAR_SPAG_mr3000_SL";
};

class S_Soldier_PL: S_Soldier_Base {
	rank = "Lieutenant";
	displayName = "Platoon Leader";
	scope = 2;
    scopeCurator = 2;
	backpack = "TFAR_SPAG_mr3000_SL";

};

class S_Soldier_PLS: S_Soldier_Base {
	rank = "Lieutenant";
	displayName = "Platoon Sergeant";
	scope = 2;
    scopeCurator = 2;
	backpack = "TFAR_SPAG_mr3000_SL";

};

class S_Soldier_PLM: S_Soldier_Base {
	rank = "Private";
	displayName = "Platoon Medic";
	scope = 2;
    scopeCurator = 2;
	attendant = 1;
	backpack = "S_Kitbag_PLM";
};

class S_Soldier_Armor: S_Soldier_Base {
	rank = "Private";
	displayName = "Armor Crewman";
	scope = 2;
    scopeCurator = 2;
	engineer = 1;

};

class S_Soldier_Pilot: S_Soldier_Base {
	rank = "Private";
	displayName = "Air Crewman";
	scope = 2;
    scopeCurator = 2;
	engineer = 1;

};
