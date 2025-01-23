////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 18:13:01 2025 : 'file' last modified on Wed Jan 22 17:40:25 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class spag_vehicles
	{
		name = "vehicles";
		units[] = {"BMP_Spagpat","BTR_Spagpat","hummv_d_SPAGPAT","hummv_d_SPAGPAT_ar","hummv_d_SPAGPAT_gl","hummv_d_SPAGPAT_troop","hummv_d_SPAGPAT_WPSS","hummv_d_SPAGPAT_softF","hummv_d_SPAGPAT_softH","hummv_d_SPAGPAT_open","m113_spagpat","mi8t_spagpat","SU25_Spagpat"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"spag_main","spag_common"};
		author = "Spagistan Development Team";
		authors[] = {"Kalthramis"};
		url = "SPAGLINK";
		version = "1.5.9.1";
		versionStr = "1.5.9.1";
		versionAr[] = {1,5,9,1};
	};
};
class CfgVehicles
{
	class rhsgref_cdf_bmp1;
	class BMP_Spagpat: rhsgref_cdf_bmp1
	{
		displayName = "SPAG bmp";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 1;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\bmp\bmp_1_spagpat.paa","\z\spag\addons\vehicles\data\bmp\bmp_2_spagpat.paa","\z\spag\addons\vehicles\data\bmp\bmp_3_spagpat.paa","\z\spag\addons\vehicles\data\bmp\bmp_4_spagpat.paa","\z\spag\addons\vehicles\data\bmp\bmp_5_spagpat.paa","\z\spag\addons\vehicles\data\bmp\bmp_6_spagpat.paa",""};
	};
	class rhsgref_cdf_btr60;
	class BTR_Spagpat: rhsgref_cdf_btr60
	{
		displayName = "SPAG bmp";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 1;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		hiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\btr\btr_spag","\z\spag\addons\vehicles\data\btr\btr60_details_co"};
	};
	class rhsusf_hmmwe_base;
	class rhsusf_m1025_d: rhsusf_hmmwe_base
	{
		class AnimationSources;
	};
	class rhsusf_m1025_d_m2: rhsusf_hmmwe_base
	{
		class AnimationSources;
	};
	class rhsusf_m1025_d_mk19: rhsusf_hmmwe_base
	{
		class AnimationSources;
	};
	class rhsusf_m998_d_2dr_fulltop: rhsusf_hmmwe_base
	{
		class AnimationSources;
	};
	class rhsusf_m998_d_4dr_fulltop: rhsusf_hmmwe_base
	{
		class AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
		};
	};
	class rhsusf_m998_d_4dr_halftop: rhsusf_hmmwe_base
	{
		class AnimationSources;
	};
	class rhsusf_m998_d_4dr: rhsusf_hmmwe_base
	{
		class AnimationSources;
	};
	class hummv_d_SPAGPAT: rhsusf_m1025_d
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 0.5;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\tile_exmetal_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_metalTop_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
		class textureSources
		{
			class Spagpat
			{
				displayName = "Spagpat";
				factions[] = {"SPAG_F"};
				textures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\tile_exmetal_d_co",""};
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
			class Door_LB: Door_LF
			{
				soundPosition = "door_3_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_4_axis";
			};
		};
	};
	class hummv_d_SPAGPAT_ar: rhsusf_m1025_d_m2
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 0.5;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\tile_exmetal_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_metalTop_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\mk64mount_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
		class textureSources
		{
			class Spagpat
			{
				displayName = "Spagpat";
				factions[] = {"SPAG_F"};
				textures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\tile_exmetal_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_metalTop_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\mk64mount_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
			class Door_LB: Door_LF
			{
				soundPosition = "door_3_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_4_axis";
			};
		};
	};
	class hummv_d_SPAGPAT_gl: rhsusf_m1025_d_mk19
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 0.5;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\tile_exmetal_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_metalTop_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\mk64mount_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
		class textureSources
		{
			class Spagpat
			{
				displayName = "Spagpat";
				factions[] = {"SPAG_F"};
				textures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\tile_exmetal_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_metalTop_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\mk64mount_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
			class Door_LB: Door_LF
			{
				soundPosition = "door_3_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_4_axis";
			};
		};
	};
	class hummv_d_SPAGPAT_troop: rhsusf_m998_d_2dr_fulltop
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 0.5;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_2drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
		class textureSources
		{
			class Spagpat
			{
				displayName = "Spagpat";
				factions[] = {"SPAG_F"};
				textures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_2drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
			class hide_frontTop: light_bo
			{
				displayName = "Hide Frontop";
				initPhase = 0;
			};
			class hide_backTop: light_bo
			{
				initPhase = 0;
				displayName = "Hide Canopy";
			};
		};
	};
	class hummv_d_SPAGPAT_WPSS: hummv_d_SPAGPAT_troop
	{
		displayName = "M10 Cargo";
		memoryPointsGetInCargo[] = {"pos_cargo_RF"};
		memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir"};
		editorPreview = "\z\spag\addons\vehicles\data\EditorPreviews\custom_hummv_cargo.jpg";
		maximumLoad = 2200;
		ace_cargo_space = 7;
		transportSoldier = 1;
		fuelConsumptionRate = 0.015;
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
			class hide_backTop: light_bo
			{
				initPhase = 1;
			};
		};
	};
	class hummv_d_SPAGPAT_softF: rhsusf_m998_d_4dr_fulltop
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 0.5;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_4drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
		class textureSources
		{
			class Spagpat
			{
				displayName = "Spagpat";
				factions[] = {"SPAG_F"};
				textures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_4drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
			class Door_LB: Door_LF
			{
				soundPosition = "door_3_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_4_axis";
			};
		};
	};
	class hummv_d_SPAGPAT_softH: rhsusf_m998_d_4dr_halftop
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 0.5;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_4drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
		class textureSources
		{
			class Spagpat
			{
				displayName = "Spagpat";
				factions[] = {"SPAG_F"};
				textures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_4drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
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
	class hummv_d_SPAGPAT_open: rhsusf_m998_d_4dr
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 0.5;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		HiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_4drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
		class textureSources
		{
			class Spagpat
			{
				displayName = "Spagpat";
				factions[] = {"SPAG_F"};
				textures[] = {"\z\spag\addons\vehicles\data\hmmwv\hmv_base_d_spag_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_d_co","\z\spag\addons\vehicles\data\hmmwv\A2_parts_D_co","\z\spag\addons\vehicles\data\hmmwv\wheel_wranglermt_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_mainbody_d_co","\z\spag\addons\vehicles\data\hmmwv\gratting_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_interior_wood_d_co","\z\spag\addons\vehicles\data\hmmwv\m998_4drcargo_d_co","\z\spag\addons\vehicles\data\hmmwv\hmv_unarmed_decal",""};
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class light_bo
			{
				source = "user";
				animPeriod = 0.4;
				initPhase = 1;
			};
			class hide_A2_Parts: light_bo
			{
				initPhase = 0;
				displayName = "Hide A2 Parts";
			};
			class Hide_Snorkel: light_bo
			{
				displayName = "Hide Snorkel";
			};
			class hide_CIP: light_bo
			{
				displayName = "Hide CIP";
			};
			class hide_BFT: light_bo
			{
				displayName = "Hide BFT";
			};
			class hide_Antenna: light_bo
			{
				initPhase = 0;
				displayName = "Hide Antenna";
			};
			class Hide_A2Bumper: light_bo
			{
				displayName = "Hide A2 Bumper";
			};
			class Door_LF
			{
				source = "door";
				animPeriod = 0.5;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_axis";
			};
			class trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase = 0;
			};
			class ani_window_1
			{
				source = "door";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class ani_window_2: ani_window_1{};
			class ani_window_3: ani_window_1{};
			class ani_window_4: ani_window_1{};
			class Door_LB: Door_LF
			{
				soundPosition = "door_3_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_4_axis";
			};
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
	class rhsusf_m113d_usarmy_unarmed;
	class m113_spagpat: rhsusf_m113d_usarmy_unarmed
	{
		displayName = "M113 Spagistan (Unarmed)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 1;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		hiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\M113 APC\m113_1_spagpat","\z\spag\addons\vehicles\data\M113 APC\m113a3_02_d_co","\z\spag\addons\vehicles\data\M113 APC\m113a3_03_d_ca","\z\spag\addons\vehicles\data\M113 APC\m113a3_int03_d_co"};
	};
	class RHS_mi8AMT_vdv;
	class mi8t_spagpat: RHS_mi8AMT_vdv
	{
		displayName = "Mi-8 (Unarmed/Spagpat)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 1;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		hiddenselectionstextures[] = {"\z\spag\addons\vehicles\data\MI8\mi8_body_spag","\z\spag\addons\vehicles\data\MI8\mi8_det_o_co","\z\spag\addons\vehicles\data\MI8\empty","\z\spag\addons\vehicles\data\MI8\\empty","\z\spag\addons\vehicles\data\MI8\empty","\z\spag\addons\vehicles\data\MI8\empty","\z\spag\addons\vehicles\data\MI8\vvs_ca"};
	};
	class RHSGREF_cdf_su25;
	class SU25_Spagpat: RHSGREF_cdf_su25
	{
		displayName = "SU-25 (Spagpat)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		author = "RHS/Kalthramis";
		editorCategory = "Spagistan_Catagory";
		faction = "Spag_F";
		tf_hasLRradio = 1;
		tf_RadioType = "TFAR_anprc155_coyote";
		tf_isolatedAmount = 1;
		tf_RadioType_api = "TFAR_anprc155_coyote";
		tf_encryptionCode = "_independent";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.3;
		class TransportBackpacks{};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N22_AK
			{
				magazine = "rhs_30Rnd_545x39_7N22_AK";
				count = 20;
			};
			class _xx_rhs_200rnd_556x45_m_saw
			{
				magazine = "rhs_200rnd_556x45_m_saw";
				count = 12;
			};
			class _xx_rhs_VG40TB
			{
				magazine = "rhs_VG40TB";
				count = 10;
			};
			class _xx_rhs_VOG25p
			{
				magazine = "rhs_VOG25p";
				count = 10;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
			class _xx_rhs_GDM40
			{
				magazine = "rhs_GDM40";
				count = 40;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine = "rhs_mag_rdg2_white";
				count = 30;
			};
			class _xx_rhs_mag_rgo
			{
				magazine = "rhs_mag_rgo";
				count = 15;
			};
			class _xx_murshun_cigs_cigpack
			{
				magazine = "murshun_cigs_cigpack";
				count = 4;
			};
			class _xx_murshun_cigs_lighter
			{
				magazine = "murshun_cigs_lighter";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
		};
		hiddenselectionstextures[] = {"\z\spag\addons\vehicles\data\SU25\su25_body1_spagpat","\z\spag\addons\vehicles\data\SU25\su25_body2_spagpat","\z\spag\addons\vehicles\data\SU25\no_ca"};
	};
};
