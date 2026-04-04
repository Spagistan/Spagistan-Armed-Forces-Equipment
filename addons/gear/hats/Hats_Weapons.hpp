//CfgWeapons -> Hats
class rhssaf_helmet_m97_woodland;
class rhssaf_helmet_m97_black_nocamo_black_ess;
class rhssaf_helmet_m97_black_nocamo_black_ess_bare;
class rhssaf_helmet_m97_olive_nocamo;
class rhssaf_helmet_m97_olive_nocamo_black_ess;
class rhssaf_helmet_m97_olive_nocamo_black_ess_bare;
class rhssaf_helmet_m97_woodland_black_ess;
class rhssaf_helmet_m97_woodland_black_ess_bare;
class rhsusf_patrolcap_ucp;
class RHSSAF_beret_para;
class RHSSAF_beret_green;
class H_Hat_Tan;
class HeadgearItem;

//15:39:48 Warning Message: Cannot load texture z\spag\addons\equipment\uniforms\m10_spagpat_ca.
//15:40:15 Warning Message: No entry 'bin\config.bin/CfgWeapons/U_S_Uniform_SPAGPAT/ItemInfo.containerClass
// HELMETS

class S_Helmet_SPAGPAT: rhssaf_helmet_m97_woodland
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co)};
  descriptionShort = "Spagistan Helmet";
};

class S_Helmet_SPAGPAT_black_ess: rhssaf_helmet_m97_woodland_black_ess
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat/Black ESS)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co), QPATHTOF(data\hats\rhssaf_m97_ess_black_co)};
};

class S_Helmet_SPAGPAT_tan_ess: rhssaf_helmet_m97_woodland_black_ess
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat/Tan ESS)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co), QPATHTOF(data\hats\rhssaf_m97_ess_tan_co)};
};

class S_Helmet_SPAGPAT_tan_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat/Tan ESS/Bare)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co), QPATHTOF(data\hats\rhssaf_m97_ess_tan_co)};
};

class S_Helmet_SPAGPAT_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat/Black ESS/Bare)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co), QPATHTOF(data\hats\rhssaf_m97_ess_black_co)};
};

class S_Helmet_Olive_tan_ess: rhssaf_helmet_m97_olive_nocamo_black_ess
{
  scope = 2;
  scopeArsenal = 2;
  author = "Red Hammer Studios";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Olive/Tan ESS)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\rhssaf_m97_nocamo_co), QPATHTOF(data\hats\rhssaf_m97_ess_tan_co)};
};

class S_Helmet_Olive_tan_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess_bare
{
  scope = 2;
  scopeArsenal = 2;
  author = "Red Hammer Studios";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Olive/Tan ESS/Bare)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\rhssaf_m97_nocamo_co), QPATHTOF(data\hats\rhssaf_m97_ess_tan_co)};
};

class S_Helmet_Winter: rhssaf_helmet_m97_olive_nocamo
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Winter)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\rhssaf_m97_winter_co)};
};

class S_Helmet_SPAGPAT_Winter: rhssaf_helmet_m97_woodland
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat Winter)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_winter_co)};
  descriptionShort = "Spagistan Helmet";
};

class S_Helmet_SPAGPAT_Winter_black_ess: rhssaf_helmet_m97_woodland_black_ess
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat Winter/Black ESS)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_winter_co), QPATHTOF(data\hats\rhssaf_m97_ess_black_co)};
  descriptionShort = "Spagistan Helmet";
};
class S_Helmet_SPAGPAT_Winter_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat Winter/Black ESS/Bare)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_winter_co), QPATHTOF(data\hats\rhssaf_m97_ess_black_co)};
  descriptionShort = "Spagistan Helmet";
};

class S_Helmet_SPAGPAT_Winter_tan_ess: rhssaf_helmet_m97_woodland_black_ess
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat Winter/Tan ESS)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_winter_co), QPATHTOF(data\hats\rhssaf_m97_ess_tan_co)};
  descriptionShort = "Spagistan Helmet";
};
class S_Helmet_SPAGPAT_Winter_tan_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
{
  scope = 2;
  scopeArsenal = 2;
  author = "Spagistan Mod Team";
  allowedSlots[] = {701,801,901};
  displayName = "M97 (Spagpat Winter/Tan ESS/Bare)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_winter_co), QPATHTOF(data\hats\rhssaf_m97_ess_tan_co)};
  descriptionShort = "Spagistan Helmet";
};

// HATS
class S_PatrolCap_SPAGPAT: rhsusf_patrolcap_ucp
{
    displayName = "Patrol Cap (Spagpat)";
    scope = 2;
    hiddenSelectionsTextures[] = {QPATHTOF(data\hats\PatrolCap_SPAGPAT_ca)};
};

class S_PatrolCap_SPAGPAT_AIR: rhsusf_patrolcap_ucp
{
    displayName = "Patrol Cap (Spagpat Air)";
    scope = 2;
    hiddenSelectionsTextures[] = {QPATHTOF(data\hats\PatrolCap_SPAGPATAIR_ca)};
};


class S_beret_red_SPAGPAT: RHSSAF_beret_para
{
	displayName = "Beret (Red/Spagistan)";
  scope = 2;
	hiddenselectionsTextures[] = {QPATHTOF(data\hats\beret_red_spag)};
};

class S_beret_green_SPAGPAT: RHSSAF_beret_green
{
	displayName = "Beret (Green/Spagistan)";
  scope = 2;
	hiddenselectionsTextures[] = {QPATHTOF(data\hats\beret_green_spag)};
};

class S_beret_red_NONE: RHSSAF_beret_para
{
	displayName = "Beret (Red/Plain)";
  scope = 2;
	hiddenselectionsTextures[] = {QPATHTOF(data\hats\beret_red)};
};

class S_beret_green_NONE: RHSSAF_beret_green
{
	displayName = "Beret (Green/Plain)";
  scope = 2;
	hiddenselectionsTextures[] = {QPATHTOF(data\hats\beret_green)};
};

class S_Pakol: H_Hat_Tan
{
	author="Spagistan Mod Team";
	scope=2;
	displayName="Pakol hat";
	model= "\po_factions_me\amil\pakol";
  hiddenSelections[]= {"Camo"};
	hiddenSelectionsTextures[]= {"\po_factions_me\amil\loc_opfor03_1_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass= 20;
    uniformmodel= "\po_factions_me\amil\pakol";
		modelSides[]={3,1};
		hiddenSelections[]= {"Camo"};

    class HitpointsProtectionInfo
		  {
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
      };
	};
};

class S_Turban: S_Pakol
{
	displayName="Turban";
	model= "\po_factions_me\amil\turban_2";
  hiddenSelections[]= {"Camo"};
	hiddenSelectionsTextures[]= {"\po_factions_me\amil\loc_opfor01_2_co.paa"};

	class ItemInfo: HeadgearItem
	{
		uniformmodel= "\po_factions_me\amil\turban_2";
		modelSides[]={3,1};
		hiddenSelections[]= {"Camo"};

    class HitpointsProtectionInfo
		  {
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
      };
	};
};
//  BACKWARDS COMPATIBILITY

class spag_helmet: S_Helmet_SPAGPAT	{ displayName = "(DEPRECATED) Combat Helmet (Spagistan)"; scope = 1; scopeArsenal = 1; };
