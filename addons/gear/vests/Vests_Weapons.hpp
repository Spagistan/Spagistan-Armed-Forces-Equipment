class ItemCore;
class VestItem;
class rhssaf_vest_md12_digital;
class rhs_6b45
{
	class ItemInfo;
};
class rhs_6b45_off: rhs_6b45
{
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
	};
};

/* class S_Vest_SPAGPAT: rhssaf_vest_md12_digital_desert
{
 _generalMacro = "S_Vest_SPAGPAT";
 displayName = "Ballistic Vest (SPAGPAT)";
 author = "Taepodong/Kalthramis";
  picture = "\rhssaf\addons\rhssaf_c_gear\vests\icon_md98_digital_ca.paa";
  model = "rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
  hiddenSelections[] = { "camo" };
 hiddenSelectionsTextures[] = { QPATHTOF(data\vests\m12_SPAGPAT_ca.paa) };
 descriptionShort = "Spagistan Vest";
 scope = 2;
 scopeArsenal = 2;

  class ItemInfo: ItemInfo
 {
   containerClass = "Supply100";
   mass = 70;
	uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
	hiddenSelections[] = {"camo"};
   hiddenSelectionsTextures[] = { QPATHTOF(data\vests\m12_SPAGPAT_ca.paa) };
 };
 class ItemInfo : VestItem
 {
   hiddenSelections[] = {"camo"};
   uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
   containerClass = "Supply100";
   mass = 70;
 };
}; */

class S_Vest_SPAGPAT: rhssaf_vest_md12_digital
{
  displayName = "M-12 Vest (Spagpat)";
  scope = 2;
  author = "Spagistan Mod Team";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\vests\m12_SPAGPAT_ca)};
};

class S_Vest_SPAGPAT_AIR: rhssaf_vest_md12_digital
{
  displayName = "M-12 Vest (Spagpat Air)";
  scope = 2;
  author = "Spagistan Mod Team";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\vests\m12_SPAGPAT_AIR_ca)};
};

	class spag_6b45: rhs_6b45
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_ca.paa";
		displayName="6B45 (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_desert_6b45";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa"
		};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="Slick";
			camo="SPAGPAT";
		};
	};
	class rhs_6b45_holster;
	class spag_6b45_holster: rhs_6b45_holster
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_holster_ca.paa";
		displayName="6B45 Holster (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_holster";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_118.paa"
		};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="Holster";
			camo="SPAGPAT";
		};
	};
	class rhs_6b45_light;
	class spag_6b45_light: rhs_6b45_light
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_light_ca.paa";
		displayName="6B45 Light (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_low";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_117.paa"
		};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="Light";
			camo="SPAGPAT";
		};
	};
	class rhs_6b45_mg;
	class spag_6b45_mg: rhs_6b45_mg
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_mg_ca.paa";
		displayName="6B45 Machinegunner (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_PK";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_117.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_118.paa"
		};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="Ammo pouch";
			camo="SPAGPAT";
		};
	};
	class spag_6b45_off: rhs_6b45_off
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_off_ca.paa";
		displayName="6B45 Squad Leader (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_off";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_117.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_118.paa",
			"z\spag\addons\gear\data\vests\spag_azart_co.paa"
		};
		class ItemInfo: ItemInfo
			{
				hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
				hiddenSelectionsTextures[]=
				{
					"z\spag\addons\gear\data\vests\spag_6b45.paa",
					"z\spag\addons\gear\data\vests\spag_pouchs_117.paa",
					"z\spag\addons\gear\data\vests\spag_pouchs_118.paa",
					"z\spag\addons\gear\data\vests\spag_azart_co.paa"
				};
			};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="SW Radio";
			camo="SPAGPAT";
		};
	};
	class rhs_6b45_rifleman;
	class spag_6b45_rifleman: rhs_6b45_rifleman
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_rifleman_ca.paa";
		displayName="6B45 Rifleman 1 (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_var";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_117.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_118.paa"
		};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="Rifle";
			camo="SPAGPAT";
		};
	};
	class rhs_6b45_rifleman_2;
	class spag_6b45_rifleman_2: rhs_6b45_rifleman_2
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_rifleman_2_ca.paa";
		displayName="6B45 Rifleman 2 (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_shovel";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_117.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_118.paa"
		};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="Rifle alt";
			camo="SPAGPAT";
		};
	};
	class rhs_6b45_grn;
	class spag_6b45_vog: rhs_6b45_grn
	{
		author="Spagistan Mod Team";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_grn_ca.paa";
		displayName="6B45 Grenadier (SPAGPAT)";
		model="rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_VOG";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\spag\addons\gear\data\vests\spag_6b45.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_117.paa",
			"z\spag\addons\gear\data\vests\spag_pouchs_118.paa"
		};
		class XtdGearInfo
		{
			model="spag_6b45";
			loadout="VOG";
			camo="SPAGPAT";
		};
	};

//  BACKWARDS COMPATIBILITY

class m12_spag: S_Vest_SPAGPAT { displayName = "(DEPRICATED) Ballistic Vest (Spagpat)"; scope = 1; scopeArsenal = 1; };
