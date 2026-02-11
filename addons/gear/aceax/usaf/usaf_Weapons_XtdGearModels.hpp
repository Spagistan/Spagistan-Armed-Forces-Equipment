// Uniforms Start
		class Army_Combat_Uniforms_RHS
		{
			options[] = { "Camo" };
			label = "Army Combat Uniform";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"OCP",
				"OEF-CP",
				"UCP",
				"UCP-IR Flag",
				"UCP-D"
				};
			};

		};

		class Combat_Uniforms_RHS
		{
			options[] = { "Division", "Camo" };
			label = "Combat Uniform";
			class Division
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"101st Air.",
				"82nd Air.",
				"10th Moun.",
				"1st Cav.",
				};
			};
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"OCP",
				"UCP"
				};
			};

		};

		class MARPAT_RHS
		{
			options[] = { "Camo" };
			label = "FROG MARPAT";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"D",
				"WD"
				};
			};

		};

		class G3_Uniforms_RHS
		{
			options[] = { "Camo" };
			label = "G3 Uniform";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"BLK",
				"TAN",
				"MC",
				"M81",
				"RGR",
				"AOR2"
				};
			};

		};

		// Uniforms Start

		// Vests Start

		class MBAV_RHS
		{
			options[] = { "Loadout" };
			label = "MBAV";
			class Loadout
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Grenadier",
				"Light",
				"Gunner",
				"Medic",
				"Rifleman"
				};
			};
		};

		class Plateframe_RHS
		{
			options[] = { "Loadout" };
			label = "Plateframe";
			class Loadout
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Grenadier",
				"Light",
				"Gunner",
				"Marksman",
				"Medic",
				"Rifleman",
				"Team Leader"
				};
			};
		};

		class SPC_RHS
		{
			options[] = { "Loadout" };
			label = "SPC";
			class Loadout
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Corpsman",
				"Crewman",
				"IAR",
				"Light",
				"Gunner",
				"Marksman",
				"Patchless",
				"wo P w Rad",
				"Rifleman",
				"Scout Sniper",
				"Squad Leader",
				"Team Leader"
				};
			};
		};

		class IOTV_RHS
		{
			options[] = { "Loadout", "Camo" };
			label = "IOTV";
			class Loadout
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Grenadier",
				"Medic",
				"Repair",
				"Rifleman",
				"SAW",
				"Squad Leader",
				"Team Leader"
				};
			};
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"OEF-CP",
				"UCP"
				};
			};
		};

		class SPCS_RHS
		{
			options[] = { "Loadout", "Camo", "Alt" };
			label = "SPCS";
			class Loadout
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Grenadier",
				"Medic",
				"Crewman",
				"Rifleman",
				"SAW",
				"Gunner",
				"Sniper",
				"Squad Leader",
				"Team Leader"
				};
			};
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"OEF-CP",
				"UCP"
				};
			};
			class Alt
			{
				alwaysSelectable = 0;
				values[] = {
				"Yes",
				"No"
				};
			};
		};

		// Vests End

		// Binos Start

		class Lerca_RHS
		{
			options[] = { "Camo" };
			label = "Lerca";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"BLK",
				"TAN"
				};
			};
		};

		class M24Binos_RHS
		{
			options[] = { "ARD" };
			label = "M24";
			class ARD
			{
				alwaysSelectable = 1;
				values[] = {
				"Yes",
				"No"
				};
			};
		};

		// Binos End

		// Secondaries Start

		class MP7A2Folded_RHS
		{
			options[] = { "Camo" };
			label = "MP7A2 Folded";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"AOR1",
				"AOR1 WHT",
				"DESERT"
				};
			};
		};

		// Secondaries End

		// Launchers Start

		class LM136_RHS
		{
			options[] = { "Ammo" };
			label = "M136";
			class Ammo
			{
				alwaysSelectable = 1;
				values[] = {
				"HEAT",
				"HEDP",
				"HP"
				};
			};
		};

		class LSMAW_RHS
		{
			options[] = { "Camo" };
			label = "SMAW";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"BLK",
				"OD"
				};
			};
		};

		// Launchers End

		// Helmets Start

		class ProTech_RHS
		{
			options[] = { "Extras" };
			label = "Pro-Tech";
			class Extras
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"ESS",
				"Rhino",
				"Rhi w ESS",
				};
			};
		};

		class UtilCap_RHS
		{
			options[] = { "Camo" };
			label = "Utility Cap";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"MARPAT-D",
				"MARPAT-WD"
				};
			};
		};

		class PatrCap_RHS
		{
			options[] = { "Camo" };
			label = "Patrol Cap";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"OEF-CP",
				"UCP"
				};
			};
		};

		class ACH_RHS
		{
			options[] = { "Extras", "Camo" };
			label = "ACH";
			class Extras
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"ESS",
				"Headset",
				"Head ESS",
				"Early",
				"Early Rhi",
				"Alt",
				"ESS Alt",
				"Head Alt",
				"Netting",
				"Norotos",
				"Head ESS Alt"
				};
			};
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"OD",
				"D",
				"Semi-Arid",
				"TAN",
				"WD",
				"DCU",
				"M81",
				"OEF-CP",
				"UCP"
				};
			};
		};

		class ACVCH_RHS
		{
			options[] = { "Extras", "Camo" };
			label = "ACVC-H";
			class Extras
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Alt",
				"ESS"
				};
			};
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"OD",
				"TAN"
				};
			};
		};

		class BooHat_RHS
		{
			options[] = { "Camo" };
			label = "Booniehat";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"MARPAT-D",
				"MARPAT-WD",
				"M81",
				"OEF-CP",
				"UCP"
				};
			};
		};

		class LWH_RHS
		{
			options[] = { "Camo", "Extras" };
			label = "LWH";
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"MARPAT-D",
				"MARPAT-WD",
				"M1942"
				};
			};
			class Extras
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"ESS",
				"Headset",
				"Blk ESS",
				"Head ESS",
				"Head ESS BLK",
				};
			};
		};

		class MICH2000_RHS
		{
			options[] = { "Extras", "Camo" };
			label = "MICH 2000";
			class Extras
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Alt",
				"Headset",
				"Alt HS",
				"Norotos",
				"Nor Alt",
				"Nor Alt HS",
				"Nor ARC",
				"Nor ARC Alt",
				"Nor ARC Alt HS",
				"Nor ARC HS",
				"Nor HS"
				};
			};
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"OD",
				"Semi-Arid",
				"TAN",
				"MARPAT-D",
				"MARPAT-WD"
				};
			};
		};

		class FASTB_RHS
		{
			options[] = { "Extras", "Camo" };
			label = "FAST";
			class Extras
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Alt",
				"Headset",
				"HS CAM",
				"HS NSW",
				"HS NSW CAM"
				};
			};
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"AOR1",
				"AOR2",
				"BLK",
				"COY",
				"RGR",
				"MC COV",
				"MC PNT",
				"PAINT",
				"RGR COV",
				"URBAN TAN"
				};
			};
		};

		class FASTM_RHS
		{
			options[] = { "Extras", "Camo" };
			label = "FAST Maritime";
			class Extras
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Headset"
				};
			};
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"RGR",
				"URBAN TAN"
				};
			};
		};


		//HGU Helmets Start

		class HGU_RHS
		{
			options[] = { "Visor", "Camo", "Mask", "Design" };
			label = "HGU";
			class Visor
			{
				changeingame = 1;
				changedelay = 0.5;
				alwaysSelectable = 1;
				values[] = {
				"Up",
				"Down"
				};
			};
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"White",
				"Black",
				"Green",
				"Olive",
				"Pink",
				"SAF",
				"Tan",
				"USA"
				};
			};
			class Mask
			{
				alwaysSelectable = 0;
				values[] = {
				"Yes",
				"No"
				};
			};
			class Design
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Skull",
				"Moustache",
				"Smiley"
				};
			};
		};

		class Bowman_RHS
		{
			options[] = { "Cap" };
			label = "Bowman";
			class Cap
			{
				alwaysSelectable = 1;
				values[] = {
				"Yes",
				"No"

				};
			};
		};
		//HGU Helmets End

		// Helmets End



		// Weapons Start

		class M107_RHS
		{
			options[] = { "Camo" };
			label = "M107";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Desert",
				"Woodland"
				};
			};
		};

		class SOCOM16_RHS
		{
			options[] = { "Rail" };
			label = "SOCOM 16";
			class Rail
			{
				alwaysSelectable = 1;
				values[] = {
				"Yes",
				"No"
				};
			};
		};

		class SCARH_RHS
		{
			options[] = { "Camo", "Variant" };
			label = "SCAR-H";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"TAN",
				"USA"
				};
			};
			class Variant
			{
				alwaysSelectable = 1;
				values[] = {
				"CQC",
				"LB",
				"STD"
				};
			};
		};

		class MP7A2PRM_RHS
		{
			options[] = { "Camo" };
			label = "MP7A2";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"AOR1",
				"Desert",
				"Winter"
				};
			};
		};

		class MK11MOD0_RHS
		{
			options[] = { "Camo", "Variant" };
			label = "MK11";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Desert",
				"Woodland"
				};
			};
			class Variant
			{
				alwaysSelectable = 1;
				values[] = {
				"STD",
				"EC"
				};
			};
		};

		class M590A1_RHS
		{
			options[] = { "Barrel" };
			label = "M590A1";
			class Barrel
			{
				alwaysSelectable = 1;
				values[] = {
				"Short",
				"Long"
				};
			};
		};

		class M4A1PIP_RHS
		{
			options[] = { "Camo", "Stock", "UBGL" };
			label = "M4A1 PIP";
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Desert",
				"Woodland"
				};
			};
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"Magpull"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M203",
				"M203S",
				"M320"
				};
			};
		};

		class M4A1_RHS
		{
			options[] = { "Stock", "UBGL" };
			label = "M4A1";
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"Magpull"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M203",
				"M203S",
				"M320"
				};
			};
		};

		class M40A5_RHS
		{
			options[] = { "Camo" };
			label = "M40A5";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"OD",
				"Desert",
				"Woodland"
				};
			};
		};

		class M27IAR_RHS
		{
			options[] = { "Grip" };
			label = "M27 IAR";
			class Grip
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"KAC"
				};
			};
		};

		class M24SWS_RHS
		{
			options[] = { "Camo" };
			label = "M24 SWS";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Desert",
				"Woodland"
				};
			};
		};

		class M2010ESR_RHS
		{
			options[] = { "Camo" };
			label = "M2010 ESR";
			class Camo
			{
				alwaysSelectable = 1;
				values[] = {
				"None",
				"Desert",
				"Woodland",
				"Semi Arid"
				};
			};
		};

		class MK18mod1_RHS
		{
			options[] = {
			"Stock",
			"UBGL",
			"Camo",
			"Rail"
			};
			label = "MK18";
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"SOPMOD"
				};
			};
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Desert",
				"Woodland"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M320"
				};
			};
			class Rail
			{
				alwaysSelectable = 0;
				values[] = {
				"Black",
				"STD"
				};
			};
		};

		class M4_RHS
		{
			options[] = { "Stock", "UBGL", "Carryhandle" };
			label = "M4";
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"Magpull"
				};
			};
			class Carryhandle
			{
				alwaysSelectable = 0;
				values[] = {
				"No",
				"Yes"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M203",
				"M203S",
				"M320"
				};
			};
		};

		class M4A1BII_RHS
		{
			options[] = {
			"Stock",
			"UBGL",
			"Camo",
			"Rail"
			};
			label = "M4A1 Block II";
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"SOPMOD"
				};
			};
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Desert",
				"Woodland"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M203"
				};
			};
			class Rail
			{
				alwaysSelectable = 0;
				values[] = {
				"Black",
				"STD"
				};
			};
		};

		class M16A4_RHS
		{
			options[] = { "Stock", "UBGL", "Carryhandle" };
			label = "M16A4";
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"IMOD"
				};
			};
			class Carryhandle
			{
				alwaysSelectable = 0;
				values[] = {
				"No",
				"Yes"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M203"
				};
			};
		};

		class HK416D10_RHS
		{
			options[] = { "Camo", "Stock", "UBGL" };
			label = "HK416 D10";
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Desert",
				"Woodland"
				};
			};
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"SOPMOD"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M320"
				};
			};
		};

		class HK416D145_RHS
		{
			options[] = { "Camo", "Stock", "UBGL" };
			label = "HK416 D14.5";
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"D Grass",
				"D Net",
				"WL Grass",
				"WL Net"
				};
			};
			class UBGL
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"M320"
				};
			};
		};

		class M14_RHS
		{
			options[] = { "Camo", "Variant" };
			label = "M14";
			class Camo
			{
				alwaysSelectable = 0;
				values[] = {
				"None",
				"Desert",
				"Fiberglass",
				"Woodland"
				};
			};
			class Variant
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"RIS",
				"Rail"
				};
			};
		};

		class M240BG_RHS
		{
			options[] = { "Variant" };
			label = "M240";
			class Variant
			{
				alwaysSelectable = 0;
				values[] = {
				"M240B",
				"M240G"
				};
			};
		};


		class M249PIPRIS_RHS
		{
			options[] = { "Barrel", "Stock" };
			label = "M249 PIP RIS";
			class Barrel
			{
				alwaysSelectable = 0;
				values[] = {
				"Short",
				"Long"
				};
			};
			class Stock
			{
				alwaysSelectable = 0;
				values[] = {
				"STD",
				"LCBA",
				"Para",
				"Savit"
				};
			};
		};
		// Weapons End
