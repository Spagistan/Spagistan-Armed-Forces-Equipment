//Weapons Start

		class L1A1_RHS_GREF
		{
			options[] = { "Material" };
			label = "L1A1";
			class Material
			{
				alwaysSelectable = 1;
				values[] = {
				"Polymer",
				"Wood"
				};
			};
		};

		class Mosin_RHS_GREF
		{
			options[] = { "Rail" };
			label = "Mosin Nagant M38";
			class Rail
			{
				alwaysSelectable = 1;
				values[] = {
				"No",
				"Yes"
				};
			};
		};

		class SAVZ58P_RHS_GREF
		{
			options[] = {
			"Material",
			"Rail",
			"Variant"
			};
			label = "Sa vz.";
			class Material
			{
				alwaysSelectable = 1;
				values[] = {
				"Wood",
				"Plastic"
				};
			};
			class Rail
			{
				alwaysSelectable = 1;
				values[] = {
				"No",
				"Yes"
				};
			};
			class Variant
			{
				alwaysSelectable = 1;
				values[] = {
				"Sa vz. 58P",
				"Sa vz. 58V"
				};
			};
		};

		class VHSD2_RHS_GREF
		{
			options[] = { "Scope", "UBGL" };
			label = "VHS-D2";
			class Scope
			{
				alwaysSelectable = 1;
				values[] = {
				"No",
				"Yes"
				};
			};
			class UBGL
			{
				alwaysSelectable = 1;
				values[] = {
				"No",
				"Yes"
				};
			};
		};

		//Weapons End


		//Vests Start

		class OTV_RHS_GREF
		{
			options[] = { "Camo" };
			label = "OTV";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Digi WL",
				"Khaki"
				};
			};
		};

		class 6B23_RHS_GREF
		{
			options[] = { "Camo", "Loadout" };
			label = "6B23";
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"TTsKO Digi",
				"Khaki",
				"TTsKO Moun",
				"TTsKO For"
				};
			};
			class Loadout
			{
				alwaysSelectable = 0;
				values[] = {
				"Medic",
				"NCO",
				"Officer",
				"Rifleman",
				"Sniper",
				"Utility"
				};
			};
		};

		//Vests End


		//Uniforms Start

		class Guerilla_RHS_GREF
		{
			options[] = { "Camo" };
			label = "Guerilla Uniform";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Tan Liz",
				"Tan Liz Oli"
				};
			};
		};

		class M10_RHS_GREF
		{
			options[] = { "Camo" };
			label = "M10";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Mountain",
				"Oxblood",
				"Urban"
				};
			};
		};

		class M88_RHS_GREF
		{
			options[] = { "Camo" };
			label = "M88";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"VSR",
				"Forest",
				"Mountain",
				"Urban"
				};
			};
		};

		class M93_RHS_GREF
		{
			options[] = { "Camo" };
			label = "M93";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"3CD",
				"Alpenflage",
				"Altis Liz",
				"Altis Liz Oli",
				"DPM",
				"DPM Oli",
				"ERDL",
				"Flecktam Jack",
				"Flecktam",
				"OG-107",
				"OG-107/ERDL",
				"Olive",
				"Tiger Stripe",
				"Urban Reed",
				"WL",
				"WL Oli"
				};
			};
		};

		//Uniforms End


		//Helmet Start

		class FC_RHS_GREF
		{
			options[] = { "Camo" };
			label = "Field Cap";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Digi WL",
				"Forest",
				"Mountain",
				"Urban"
				};
			};
		};

		class KaskaK93_RHS_GREF
		{
			options[] = { "Camo" };
			label = "Kaska K93";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Digi WL",
				"Forest",
				"Mountain",
				"Urban"
				};
			};
		};

		class M1_RHS_GREF
		{
			options[] = { "Camo" };
			label = "M1";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Desert",
				"ERDL",
				"Liner",
				"Mitchell",
				"OG-107",
				"OG-107 Alt",
				"Painted",
				"Painted Alt"
				};
			};
		};

		class M40_RHS_GREF
		{
			options[] = { "Camo", "Strap" };
			label = "M40";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Black",
				"Painted",
				"Winter"
				};
			};
			class Strap
			{
				alwaysSelectable = 1;
				values[] = {
				"Chin",
				"Up"
				};
			};
		};

		class M42_RHS_GREF
		{
			options[] = { "Camo", "Strap" };
			label = "M42";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Black",
				"Painted",
				"Winter"
				};
			};
			class Strap
			{
				alwaysSelectable = 1;
				values[] = {
				"Chin",
				"Up"
				};
			};
		};

		class M42Cov_RHS_GREF
		{
			options[] = { "Camo" };
			label = "M42 Covered";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"Mouse Grey",
				"Splitter 31",
				"Sumpf 44",
				"Winter"
				};
			};
		};

		class M43_RHS_GREF
		{
			options[] = { "Move" };
			label = "M43";
			class Move
			{
				changeingame = 1;
				changedelay = 0.5;
				alwaysSelectable = 1;
				values[] = {
				"Cap Straight",
				"Cap Sideways"
				};
			};
		};

		class PAGST_RHS_GREF
		{
			options[] = { "Camo" };
			label = "PAGST";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"3CD",
				"3CD Rhino",
				"Altis Liz",
				"ERDL",
				"ERDL Rhino",
				"Flecktam",
				"Olive",
				"Press",
				"UN",
				"WL",
				"WL Rhino"
				};
			};
		};

		class SSh68_RHS_GREF
		{
			options[] = { "Camo" };
			label = "SSh-68";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"EMR S",
				"Digi WL",
				"Forest",
				"Mountain",
				"Urban",
				"UN",
				"VSR"
				};
			};
		};

		//Helmet End
