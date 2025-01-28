////////////////////////////////////////////////////////////////////
//DeRap: APR_GLSMOKE_Deflection_RHS\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jan 28 17:05:51 2025 : 'file' last modified on Mon Oct 21 04:01:46 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class APR_GLSMOKE_Deflection_RHS
	{
		name = "APR GLSMOKE Deflection RHS";
		author = "Apricot_ale";
		requiredVersion = 2.18;
		skipWhenMissingDependencies = 1;
		requiredAddons[] = {"APR_GLSMOKE_Deflection","rhs_c_weapons"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class rhs_g_vog25;
	class rhs_g_vg40md_white: rhs_g_vog25
	{
		simulation = "shotSmoke";
		deflecting = 3;
		deflectionSlowDown = 0.28;
	};
	class rhs_g_vg40md_green: rhs_g_vg40md_white
	{
		simulation = "shotSmoke";
		deflecting = 3;
		deflectionSlowDown = 0.28;
	};
	class rhs_g_vg40md_red: rhs_g_vg40md_white
	{
		simulation = "shotSmoke";
		deflecting = 3;
		deflectionSlowDown = 0.28;
	};
};
class cfgMods
{
	author = "Apricot_ale";
	timepacked = "1729530106";
};
