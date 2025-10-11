//CfgWeapons -> vests

  //please remember to test LODs
//class ItemInfo;
class ItemCore;
class VestItem;
class rhssaf_vest_md12_digital;

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
//tan helmets

class S_Vest_SPAGPAT: rhssaf_vest_md12_digital
{
  displayName = "Ballistic Vest (Spagpat)";
  scope = 2;
  author = "Taepodong";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\vests\m12_SPAGPAT_ca)};
};

class S_Vest_SPAGPAT_AIR: rhssaf_vest_md12_digital
{
  displayName = "Ballistic Vest (Spagpat - Air)";
  scope = 2;
  author = "Taepodong";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\vests\m12_SPAGPAT_AIR_ca)};
};



//  BACKWARDS COMPATIBILITY

class m12_spag: S_Vest_SPAGPAT { displayName = "(DEPRICATED) Ballistic Vest (Spagpat)"; scope = 1; scopeArsenal = 1; };
