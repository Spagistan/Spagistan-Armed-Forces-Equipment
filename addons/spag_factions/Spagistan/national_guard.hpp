

class NG_Soldier_Base: I_G_Soldier_base_F
{
    author = "CParadis/Aidan";
    _generalMacro = "Spagistan_Unit";
    faction = QUOTE(NGFACTION);
    editorCategory = "Spagistan_Category";
    side = 2;
    uniformClass = "U_S_Uniform_SPAGPAT";
    rank = "Private";
    linkedItems[] = {
        "rhssaf_vest_md12_digital",
        "rhssaf_helmet_m97_olive_nocamo",
        "rhs_pdu4",		
        "ItemMap", 
        "ItemCompass", 
        "ItemWatch", 
        "TFAR_anprc148jem", 
    };   
    respawnLinkedItems[] = {
        "rhssaf_vest_md12_digital",
        "rhssaf_helmet_m97_olive_nocamo",
        "rhs_pdu4",		
        "ItemMap", 
        "ItemCompass", 
        "ItemWatch", 
        "TFAR_anprc148jem", 
    };   
        
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
        ITEM_2("ACE_CableTie"),
        ITEM_2("ACE_EarPlugs"),
    };
    respawnItems[] = {
        "ACE_microDAGR", 
        ITEM_2("ACE_CableTie"),
        ITEM_2("ACE_EarPlugs"),
    };
    magazines[] = {
        ITEM_10("RHS_30Rnd_545x39_7N10_AK"),
        "rhs_mag_9x18_8_57N181S",
    };
    respawnMagazines[] = {
        ITEM_10("RHS_30Rnd_545x39_7N10_AK"),
        "rhs_mag_9x18_8_57N181S",
    };
};

class NG_Soldier_Rifleman: NG_Soldier_Base {
    scope = 2;
    scopeCurator = 2;
    rank = "Private";
    role = "Rifleman";
    displayName = "Rifleman";
    backpack = "NG_KitBag_Rifleman";
    weapons[] = {
        "S_weap_ak74m_ip78",
        "rhs_weap_makarov_pm",
        "rhs_weap_rpg75",
    };

    respawnWeapons[] = {
        "S_weap_ak74m_ip78",
        "rhs_weap_makarov_pm",
        "rhs_weap_rpg75",
    };

};

class NG_Soldier_Grenadier: NG_Soldier_Base {
    scope = 2;
    scopeCurator = 2;
    rank = "Private";
    role = "Rifleman";
    displayName = "Rifleman";
    backpack = "NG_KitBag_Rifleman";
    // Add GP25 AK74
    weapons[] = {
        "S_weap_ak74m_ip78",
        "rhs_weap_makarov_pm",
    };

    respawnWeapons[] = {
        "S_weap_ak74m_ip78",
        "rhs_weap_makarov_pm",
    };

};

class NG_Soldier_AR: NG_Soldier_Base {
    scope = 2;
    scopeCurator = 2;
    rank = "Private";
    role = "Automatic Rifleman";
    displayName = "Automatic Rifleman";
    backpack = "NG_KitBag_Rifleman";
    // Add RPK74m
    weapons[] = {
        "S_weap_ak74m_ip78",
        "rhs_weap_makarov_pm",
    };

    respawnWeapons[] = {
        "S_weap_ak74m_ip78",
        "rhs_weap_makarov_pm",
    };

};

class NG_Soldier_TeamLeader: NG_Soldier_Base {
    scope = 2;
    scopeCurator = 2;
    rank = "Corporal";
    role = "Team Leader";
    displayName = "Team Leader";
    backpack = "NG_KitBag_Rifleman";

    linkedItems[] = {
        "rhssaf_vest_md12_digital",
        "rhssaf_helmet_m97_olive_nocamo",
        "rhs_pdu4",		
        "ItemMap", 
        "ItemCompass", 
        "ItemWatch", 
        "TFAR_anprc148jem", 
        "rhs_1PN138", 
    };   
    
    respawnLinkedItems[] = {
        "rhssaf_vest_md12_digital",
        "rhssaf_helmet_m97_olive_nocamo",
        "rhs_pdu4",		
        "ItemMap", 
        "ItemCompass", 
        "ItemWatch", 
        "TFAR_anprc148jem", 
        "rhs_1PN138", 
    };  

};