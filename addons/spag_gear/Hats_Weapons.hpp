//CfgWeapons -> Hats
class rhssaf_helmet_m97_woodland;
class rhssaf_helmet_m97_black_nocamo_black_ess;
class rhssaf_helmet_m97_black_nocamo_black_ess_bare;
class rhssaf_helmet_m97_woodland_black_ess;
class rhssaf_helmet_m97_woodland_black_ess_bare;
class rhsusf_patrolcap_ucp;
class RHSSAF_beret_para;
class RHSSAF_beret_green;

//15:39:48 Warning Message: Cannot load texture z\spag\addons\equipment\uniforms\m10_spagpat_ca.
//15:40:15 Warning Message: No entry 'bin\config.bin/CfgWeapons/U_S_Uniform_SPAGPAT/ItemInfo.containerClass
// HELMETS

class S_Helmet_SPAGPAT: rhssaf_helmet_m97_woodland
{
  scope = 2;
  scopeArsenal = 2;
  author = "Taepodong/Kalthramis";
  allowedSlots[] = {701,801,901};
  displayName = "Combat Helm (SPAGPAT)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co)};
  descriptionShort = "Spagistan Helmet";
};

class S_Helmet_SPAGPAT_black_ess: rhssaf_helmet_m97_woodland_black_ess
{
  scope = 2;
  scopeArsenal = 2;
  author = "Kalthramis";
  allowedSlots[] = {701,801,901};
  displayName = "Combat Helm (SPAGPAT/Black/ESS)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co), QPATHTOF(data\hats\rhssaf_m97_ess_black_co)};
};

class S_Helmet_SPAGPAT_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
{
  scope = 2;
  scopeArsenal = 2;
  author = "Kalthramis";
  allowedSlots[] = {701,801,901};
  displayName = "Combat Helm (Spagpat/Black ESS/Bare)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\hats\m97_canvas_d_spag_co), QPATHTOF(data\hats\rhssaf_m97_ess_black_co)};
};
// HATS
class S_PatrolCap_SPAGPAT: rhsusf_patrolcap_ucp
{
	//dexterity = 3.1
    displayName = "Patrol Cap (Spagpat)";
    scope = 2;
    hiddenSelectionsTextures[] = {QPATHTOF(data\hats\PatrolCap_SPAGPAT_ca)};
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



//  BACKWARDS COMPATIBILITY

class spag_helmet: S_Helmet_SPAGPAT	{ displayName = "(DEPRECATED) Combat Helmet (Spagistan)"; scope = 1; scopeArsenal = 1; };
