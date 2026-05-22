class CfgFactionClasses
{
	class Spag_F
	 {
		displayName = "Spagistan Armed Forces";
		priority = 5;
		side = 2;
		icon = QPATHTOF(gui\Spag_Flag_Square_ca.paa);
		flag = QPATHTOF(gui\Spag_Flag_ca.paa);
		ace_nametags_rankIcons[] = {
			"z\spag\addons\ranks\data\blank.paa",
			"z\spag\addons\ranks\data\med.paa",
			"z\spag\addons\ranks\data\eng.paa",
			"z\spag\addons\ranks\data\TL.paa",
			"z\spag\addons\ranks\data\SL.paa",
			"z\spag\addons\ranks\data\PSG.paa",
			"z\spag\addons\ranks\data\PL.paa"

		};
	 };

	// class SPAG_NG
	//  {
	// 	displayName = "Spagistan National Guard";
	// 	priority = 6;
	// 	side = 2;
	// 	icon = QPATHTOF(gui\Spag_Flag_Square_ca.paa);
	// 	flag = QPATHTOF(gui\Spag_Flag_ca.paa);
	//  };

	// class SPAG_GC
	//  {
	// 	displayName = "Spagistan Garmsar Cadets";
	// 	priority = 7;
	// 	side = 2;
	// 	icon = QPATHTOF(gui\Spag_Flag_Square_ca.paa);
	// 	flag = QPATHTOF(gui\Spag_Flag_ca.paa);
	//  };

	// class O_UZAF {
	// 	displayName = "Armed Forces of the Republic of Uzbekistan";
	// 	priority = 8;
	// 	side = 2;
	// 	icon = "";
	// 	flag = "";
	// };

};


//TODO: CfgGroups is important for ALiVE compatability and should be identical to the above
// class CfgGroups
// {
	// West // Note side number 1 == West
	// BLU_F // Note faction name matches the name in CfgFactionClasses
		// Armored // Note all these group categories are using standard naming convention
		// Infantry
			// BUS_InfSquad
				// faction = "BLU_F";
				// name = "Rifle Squad";
				// side = 1; // Note this is important
		// Mechanized
		// Motorized
		// SpecOps
		// Support
// };
