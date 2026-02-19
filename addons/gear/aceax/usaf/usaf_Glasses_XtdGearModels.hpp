// Facewear Start

		class BGlasses_RHS
		{
			options[] = { "Tint" };
			label = "Ballistic Glasses";
			class Tint
			{
				alwaysSelectable = 1;
				values[] = {
				"Clear",
				"Black",
				"Orange",
				"Yellow"
				};
			};
		};

		class BGoggles_RHS
		{
			options[] = { "Tint" };
			label = "SI Ballistic";
			class Tint
			{
				alwaysSelectable = 1;
				values[] = {
				"Clear",
				"Black",
				"Yellow"
				};
			};
		};

		class Shemagh_RHS
		{
			options[] = { "Camo", "Goggles", "PULL" };
			label = "Shemagh";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Green",
				"OD",
				"Tan",
				"White",
				};
			};
			class Goggles
			{
				alwaysSelectable = 1;
				values[] = {
				"Yes",
				"No"
				};
			};
			class PULL
			{
				changeingame = 1;
				changedelay = 0.5;
				alwaysSelectable = 1;
				values[] = {
				"UP",
				"DOWN"
				};
			};

		};
		// Facewear End
