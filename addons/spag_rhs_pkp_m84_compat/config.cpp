#include "script_component.hpp"
class CfgPatches {
	class rhs_pkp_m84_compat {
		units[] = {};
		weapons[] = {
			"rhs_weap_pkp"
		};
		requiredAddons[] = {"rhs_c_weapons", "rhssaf_c_weapons"};
		author = "D. Ank";
		VERSION_CONFIG;
	};
};

#include "spag_rhs_pkp_m84_compat.hpp"
