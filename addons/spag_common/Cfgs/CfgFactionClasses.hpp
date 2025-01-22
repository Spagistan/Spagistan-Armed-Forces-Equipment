class CfgFactionClasses
{
	class SPAG_F
	 {
		displayName = "Spagistan";
		priority = 5;
		side = 2;
		icon = QPATHTOF(gui\Spag_Flag_Square_ca.paa);
		flag = QPATHTOF(gui\Spag_Flag_ca.paa);
	 };
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
