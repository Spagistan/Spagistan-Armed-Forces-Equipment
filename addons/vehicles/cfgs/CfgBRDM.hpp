class rhsgref_BRDM2;
class rhsgref_BRDM2_ATGM;
class rhsgref_BRDM2_HQ;

class spag_BRDM2: rhsgref_BRDM2 {
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Cars";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "I_Spagistan_NG_Crewman_01";
    hiddenSelections[] = {"camo1","camo2","camo3","n1","n2","n3","i1"};
	hiddenselectionstextures[] =
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
    VEHICLEINVENTORY
};

class spag_BRDM2_ATGM: rhsgref_BRDM2_ATGM {
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Cars";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "I_Spagistan_NG_Crewman_01";
    hiddenSelections[] = {"camo1","camo2","camo3","n1","n2","n3","i1"};
	hiddenselectionstextures[] =
		{
			"z\spag\addons\vehicles\data\BRDM\BRDM2_ATGM_3tone_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
    VEHICLEINVENTORY
};

class spag_BRDM2_HQ: rhsgref_BRDM2_HQ {
    editorCategory = "Spagistan_Category";
    editorSubcategory = "EdSubcat_Cars";
    side = 2;
    faction = QUOTE(SPAGFACTION);
    crew = "I_Spagistan_NG_Crewman_01";
    hiddenSelections[] = {"camo1","camo2","camo3","n1","n2","n3","i1"};
    hiddenselectionstextures[] =
        {
            "\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
            "\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
            "\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
        };
    VEHICLEINVENTORY
};
