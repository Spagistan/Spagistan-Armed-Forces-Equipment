//TODO: scrollaction to swap out AR ammo type
//TODO: on window rolled down, increase tfar talking audio
//TODO: re-add cargo on back of truck:
//			init = "if (!(is3Den)) then {_crate = createSimpleObject ['O_CargoNet_01_ammo_F', position (_this select 0)]; _crate disableCollisionWith (_this select 0); _crate attachTo [(_this select 0), [0,0-.745,-0.1]]; };";


#define HUMMVSETTINGS scope = 2;\
scopeCurator = 2;\
side = 2;\
author = "RHS/Kalthramis";\
editorCategory = "Spagistan_Catagory";\
faction = QUOTE(SPAGFACTION);\
tf_hasLRradio = 1;\
tf_RadioType = "TFAR_anprc155_coyote";\
tf_isolatedAmount = 0.5;\
tf_RadioType_api = "TFAR_anprc155_coyote";\
tf_encryptionCode = "_independent";\
tf_hasLRradio_api = 1;\
tf_isolatedAmount_api = 0.3;

#define HUMMVSUNIVERSAL QPATHTOF(data\hmmwv\hmv_base_d_spag_co),\
	QPATHTOF(data\hmmwv\m998_interior_d_co),\
	QPATHTOF(data\hmmwv\A2_parts_D_co),\
	QPATHTOF(data\hmmwv\wheel_wranglermt_d_co),\
	QPATHTOF(data\hmmwv\m998_mainbody_d_co),\
	QPATHTOF(data\hmmwv\gratting_d_co),\
	QPATHTOF(data\hmmwv\tile_exmetal_d_co),\
	""

#define HUMMVSUNIVERSALARMED QPATHTOF(data\hmmwv\hmv_base_d_spag_co), \
	QPATHTOF(data\hmmwv\m998_interior_d_co), \
	QPATHTOF(data\hmmwv\A2_parts_D_co), \
	QPATHTOF(data\hmmwv\wheel_wranglermt_d_co), \
	QPATHTOF(data\hmmwv\m998_mainbody_d_co), \
	QPATHTOF(data\hmmwv\gratting_d_co), \
	QPATHTOF(data\hmmwv\tile_exmetal_d_co), \
	QPATHTOF(data\hmmwv\hmv_metalTop_d_spag_co), \
	QPATHTOF(data\hmmwv\mk64mount_d_co), \
	QPATHTOF(data\hmmwv\hmv_unarmed_decal), \
	""

#define HUMMVSUNIVERSALSOFT(STUFF) QPATHTOF(data\hmmwv\hmv_base_d_spag_co), \
	QPATHTOF(data\hmmwv\m998_interior_d_co), \
	QPATHTOF(data\hmmwv\A2_parts_D_co), \
	QPATHTOF(data\hmmwv\wheel_wranglermt_d_co), \
	QPATHTOF(data\hmmwv\m998_mainbody_d_co), \
	QPATHTOF(data\hmmwv\gratting_d_co), \
	QPATHTOF(data\hmmwv\m998_interior_wood_d_co), \
	QPATHTOF(data\hmmwv\##STUFF), \
	QPATHTOF(data\hmmwv\hmv_unarmed_decal), \
	""


#define REQURIEDANIMS class longlights_hide	{\
		source = "user";\
		animPeriod = 0.000001;\
		initPhase = 1;\
	};\
	class shortlights_hide: longlights_hide { initPhase = 0; };\
	class lights_hide: longlights_hide { initPhase = 0; };\
	class light_bo {\
		source = "user";\
		animPeriod = 0.4;\
		initPhase = 1;\
	};\
	class  hide_A2_Parts: light_bo {\
		initPhase = 0;\
		displayName = "Hide A2 Parts";\
	};\
	class Hide_Snorkel: light_bo {\
		displayName = "Hide Snorkel";\
	};\
	class  hide_CIP: light_bo {\
		displayName = "Hide CIP";\
	};\
	class  hide_BFT: light_bo {\
		displayName = "Hide BFT";\
	};\
	class hide_Antenna: light_bo {\
		initPhase = 0;\
		displayName = "Hide Antenna";\
	};\
	class  Hide_A2Bumper: light_bo {\
		displayName = "Hide A2 Bumper";\
	};\
	class Door_LF {\
		source="door";\
		animPeriod = 0.5;\
		sound = "RHS_HMMWV_Door";\
		soundPosition = "door_1_axis";\
	};\
	class Door_RF: Door_LF {\
		soundPosition = "door_2_axis";\
	};\
	class trunk {\
		source = "user";\
		animPeriod = 1.1;\
		initPhase = 0;\
	};\
	class ani_window_1 {\
		source = "door";\
		animPeriod = 0.8;\
		initPhase = 0;\
	};\
	class  ani_window_2: ani_window_1 {	};\
	class  ani_window_3: ani_window_1 {	};\
	class  ani_window_4: ani_window_1 { };

#define BACKDOORS class Door_LB: Door_LF {\
		soundPosition = "door_3_axis";\
	};\
	class Door_RB: Door_LF {\
		soundPosition = "door_4_axis";\
	};

//Parents
/* class AnimationSources;
	class EventHandlers; */
class rhsusf_hmmwe_base;
	class rhsusf_m1025_d: rhsusf_hmmwe_base
	{
		class AnimationSources;
	};
	class rhsusf_m1025_d_m2: rhsusf_hmmwe_base {
		class AnimationSources;
	};
	class rhsusf_m1025_d_mk19: rhsusf_hmmwe_base {
		class AnimationSources;
	};
	class rhsusf_m998_d_2dr_fulltop: rhsusf_hmmwe_base {
		class AnimationSources;
	};
	class rhsusf_m998_d_4dr_fulltop: rhsusf_hmmwe_base {
		class AnimationSources
		{
			class longlights_hide	{
					source = "user";
					animPeriod = 0.000001;
					initPhase = 1;
				};
				class shortlights_hide: longlights_hide { initPhase = 0; };
				class lights_hide: longlights_hide { initPhase = 0; };
				class light_bo {
					source = "user";
					animPeriod = 0.4;
					initPhase = 1;
				};
		};
	};
	class rhsusf_m998_d_4dr_halftop: rhsusf_hmmwe_base {
		class AnimationSources;
	};
	class rhsusf_m998_d_4dr: rhsusf_hmmwe_base {
		class AnimationSources;
	};


class hummv_d_SPAGPAT: rhsusf_m1025_d
{
	HUMMVSETTINGS
	VEHICLEINVENTORY
	HiddenSelectionsTextures[] = {
		QPATHTOF(data\hmmwv\hmv_base_d_spag_co),
		QPATHTOF(data\hmmwv\m998_interior_d_co),
		QPATHTOF(data\hmmwv\A2_parts_D_co),
		QPATHTOF(data\hmmwv\wheel_wranglermt_d_co),
		QPATHTOF(data\hmmwv\m998_mainbody_d_co),
		QPATHTOF(data\hmmwv\gratting_d_co),
		QPATHTOF(data\hmmwv\tile_exmetal_d_co),
		QPATHTOF(data\hmmwv\hmv_metalTop_d_spag_co),
		QPATHTOF(data\hmmwv\hmv_unarmed_decal),
		"" };
	class textureSources
	{
		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = { SPAG_F };
			textures[] = { HUMMVSUNIVERSAL };
		};
	};
	class AnimationSources: AnimationSources {
		REQURIEDANIMS
		BACKDOORS
	};
};

class hummv_d_SPAGPAT_ar: rhsusf_m1025_d_m2 //ar
{
	HUMMVSETTINGS
	VEHICLEINVENTORY
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALARMED };
	class textureSources
	{
		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALARMED };
		};
	};

	class AnimationSources: AnimationSources {
		REQURIEDANIMS
		BACKDOORS
	};
};


class hummv_d_SPAGPAT_gl: rhsusf_m1025_d_mk19 //gl
{
	HUMMVSETTINGS
	VEHICLEINVENTORY
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALARMED };
	class textureSources
	{
		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALARMED };
		};
	};

	class AnimationSources: AnimationSources {
		REQURIEDANIMS
		BACKDOORS
	};
};

class hummv_d_SPAGPAT_troop: rhsusf_m998_d_2dr_fulltop //troop Transport
{
	HUMMVSETTINGS
	/* VEHICLEINVENTORY */
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_2drcargo_d_co) };
	class textureSources
	{
		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = {  HUMMVSUNIVERSALSOFT(m998_2drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		REQURIEDANIMS
		class  hide_frontTop: light_bo
		{
			displayName = "Hide Frontop";
			initPhase = 0;
		};
		class  hide_backTop: light_bo
		{
			initPhase = 0;
			displayName = "Hide Canopy";
		};
	};
};

class hummv_d_SPAGPAT_WPSS: hummv_d_SPAGPAT_troop //WEAPON SQUAD Transport Version
{
	displayName = "M10 Cargo";
	memoryPointsGetInCargo[] = {"pos_cargo_RF"};
	memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir"};
	editorPreview = QPATHTOF(data\EditorPreviews\custom_hummv_cargo.jpg);
	maximumLoad = 2200;
	ace_cargo_space = 7;
	transportSoldier = 1;
	fuelConsumptionRate = 0.015;

	class AnimationSources: AnimationSources
	{
		REQURIEDANIMS
		class  hide_backTop: light_bo
		{
			initPhase = 1;
		};
	};
};

class hummv_d_SPAGPAT_softF: rhsusf_m998_d_4dr_fulltop //softop full
{
	HUMMVSETTINGS
	/* VEHICLEINVENTORY */
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
	class textureSources
	{
		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		REQURIEDANIMS
		BACKDOORS
	};
};

class hummv_d_SPAGPAT_softH: rhsusf_m998_d_4dr_halftop //softop half
{
	HUMMVSETTINGS
	/* VEHICLEINVENTORY */
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
	class textureSources
	{
		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		REQURIEDANIMS
		class hide_frontTop: light_bo
		{
			source = "user";
			displayName = "Hide Frontop";
			initPhase = 0;
		};
		class hide_middleTop: light_bo
		{
			source = "user";
			displayName = "Hide Middletop";
			initPhase = 1;
		};
		class hide_backTop: light_bo
		{
			initPhase = 1;
			displayName = "Hide Backtop";
		};
	};
};

class hummv_d_SPAGPAT_open: rhsusf_m998_d_4dr //open
{
	HUMMVSETTINGS
	/* VEHICLEINVENTORY */
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
	class textureSources
	{
		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = {  HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		REQURIEDANIMS
		BACKDOORS
		class hide_frontTop: light_bo
		{
			initPhase = 1;
			displayName = "Hide Frontop";
		};
		class hide_middleTop: light_bo
		{
			initPhase = 0;
			displayName = "Hide Middletop";
		};
		class hide_backTop: light_bo
		{
			initPhase = 1;
			displayName = "Hide Backtop";
		};
	};
};
