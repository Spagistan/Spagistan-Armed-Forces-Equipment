// Written by TeTeT
// adjust loadout depending on incoming string

// Obsolete, no longer maintained

params [["_SU35", ObjNull], ["_loadout", "empty"]];

switch (_loadout) do {

	case 'default': {
		[_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1"] call js_jc_fnc_SU35_instantLoadouts;
	};
	case "empty": {
		[_SU35, "js_m_su35_empty", "js_m_su35_empty","js_m_su35_empty","js_m_su35_empty","js_m_su35_empty","js_m_su35_empty", "js_m_su35_empty", "js_m_su35_empty", "js_m_su35_empty", "js_m_su35_empty", "js_m_su35_empty", "js_m_su35_empty"] call js_jc_fnc_SU35_instantLoadouts;
	};

	case "mr": {
		[_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1"] call js_jc_fnc_SU35_instantLoadouts;
	};

	case "cas": {
		[_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_S8_rocketpod_x2", "js_m_su35_S8_rocketpod_x2", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1"] call js_jc_fnc_SU35_instantLoadouts;
	};

	case "cap": {
		[_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1"] call js_jc_fnc_SU35_instantLoadouts;
	};

	case "tanker": {
		[_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_wing_tank_x1", "js_m_su35_wing_tank_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_empty", "js_m_su35_buddypod_x1"] call js_jc_fnc_SU35_instantLoadouts;
	};

};

_SU35;
