class SAFP_Mi24P_RUAF;
class rhsgref_mi24g_CAS;

class spag_mi24pm : SAFP_Mi24P_RUAF {
    VEHICLEINVENTORY
    side = 2;
    faction = 2;
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Helicopters";
    crew = "I_spag_NG_Pilot_Heli";
    hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2"};
    hiddenSelectionsTextures[] = {"z\spag\addons\vehicles\data\MI24\spag_mi24pm_01.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_002_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa"};
};

class spag_mi24g : rhsgref_mi24g_CAS {
    VEHICLEINVENTORY
    side = 2;
    faction = 2;
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Helicopters";
    crew = "I_spag_NG_Pilot_Heli";
    hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2"};
    hiddenSelectionsTextures[] = {"z\spag\addons\vehicles\data\MI24\spag_mi24g_01.paa","z\spag\addons\vehicles\data\MI24\spag_mi24g_02.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa"};
};
