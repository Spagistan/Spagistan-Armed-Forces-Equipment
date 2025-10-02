/*
	FILE: fnc_init.sqf

	Name: tbd_mortars_82mm_fnc_init

	Author(s):
		ilbinek

	Description:
		Initializes the 82mm box

	Parameters:
        _box   - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this] call tbd_mortars_82mm_fnc_init;

	Public:
		No

    0 - Empty
    1 - HE Shells
    2 - Smoke Shells
    3 - Illumination Shells
*/

#include "..\script_component.hpp"

params ["_box"];

_box setVariable ["top", false, true];
_box animateSource ["top_source", 0, 0.2];

if (typeOf _box == QUOTE(TBD_MORTAR_82mm_BOX_HE)) then {
    // set all 12 slots as he
    for "_i" from 1 to 5 do {
        private _n = format ["round_%1", _i];
        _box setVariable[_n, 1, true];
        _box animateSource [format ["mine_%1_source", _i], 0];
        _box animateSource [format ["mine_smoke_%1_source", _i], 1];
        _box animateSource [format ["mine_illum_%1_source", _i], 1];
        _box animateSource [format ["mine_heat_%1_source", _i], 1];
    };
};

if (typeOf _box == QUOTE(TBD_MORTAR_82mm_BOX_SMOKE)) then {
    // set all 12 slots as smoke
    for "_i" from 1 to 5 do {
        _box setVariable[format ["round_%1", _i], 2, true];
        _box animateSource [format ["mine_%1_source", _i], 1];
        _box animateSource [format ["mine_smoke_%1_source", _i], 0];
        _box animateSource [format ["mine_illum_%1_source", _i], 1];
        _box animateSource [format ["mine_heat_%1_source", _i], 1];
    };
};

if (typeOf _box == QUOTE(TBD_MORTAR_82mm_BOX_ILLUM)) then {
    // set all 12 slots as illum
    for "_i" from 1 to 5 do {
        _box setVariable[format ["round_%1", _i], 3, true];
        _box animateSource [format ["mine_%1_source", _i], 1];
        _box animateSource [format ["mine_smoke_%1_source", _i], 1];
        _box animateSource [format ["mine_illum_%1_source", _i], 0];
        _box animateSource [format ["mine_heat_%1_source", _i], 1];
    };
};

if (typeOf _box == QUOTE(TBD_MORTAR_82mm_BOX_CUMUL)) then {
    // set all 12 slots as illum
    for "_i" from 1 to 5 do {
        _box setVariable[format ["round_%1", _i], 4, true];
        _box animateSource [format ["mine_%1_source", _i], 1];
        _box animateSource [format ["mine_smoke_%1_source", _i], 1];
        _box animateSource [format ["mine_illum_%1_source", _i], 1];
        _box animateSource [format ["mine_heat_%1_source", _i], 0];

    };
};
