#define _ARMA_
#include "script_component.hpp"
class CfgPatches
{
	class spag_vehicles
	{
		name = "vehicles";
		units[] = {"BMP_Spagpat","BTR_Spagpat","hummv_d_SPAGPAT","hummv_d_SPAGPAT_ar","hummv_d_SPAGPAT_gl","hummv_d_SPAGPAT_troop","hummv_d_SPAGPAT_WPSS","hummv_d_SPAGPAT_softF","hummv_d_SPAGPAT_softH","hummv_d_SPAGPAT_open","m113_spagpat","mi8t_spagpat","SU25_Spagpat","RHS_Su25SM_vvs_DonkeyPunched"};
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

#include "CfgVehicles.hpp"