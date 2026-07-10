class PRACS_SLA_MTLB_AMB;

class SPAG_MTLB_AMB : PRACS_SLA_MTLB_AMB {
	side=2;
	editorCategory = "Spagistan_Category";
	faction=QUOTE(SPAGFACTION);
	crew = "I_Spagistan_NG_Crewman_01";
    hiddenSelections[]=
	{
		"camo1",
		"n1",
		"n2",
		"n3"
	};
	hiddenSelectionsTextures[]=
	{
		"z\spag\addons\vehicles\data\MTLB\Spag_MTLB_AMB.paa",
		"rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa",
		"rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa",
		"rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa"
	};
	rhs_decalParameters[]={};
};
