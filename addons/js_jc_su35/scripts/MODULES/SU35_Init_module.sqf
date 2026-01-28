private ["_logic", "_units", "_activated", "_Paintscheme", "_Weapon_station_1", "_Weapon_station_2", "_Weapon_station_3", "_Weapon_station_4", "_Weapon_station_5", "_Weapon_station_6", "_Weapon_station_7", "_Weapon_station_8", "_Weapon_station_9", "_Weapon_station_10", "_Weapon_station_11", "_Weapon_station_12", "_Hull_number_1", "_Hull_number_2", "_Hull_number_3"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_units = [_this,1,[],[[]]] call BIS_fnc_param;
_activated = [_this,2,true,[true]] call BIS_fnc_param;
_Paintscheme = _logic getVariable "Paintscheme_init";

_Weapon_station_1 = _logic getVariable "Weapon_station_1_init";

_Weapon_station_2 = _logic getVariable "Weapon_station_2_init";

_Weapon_station_3 = _logic getVariable "Weapon_station_3_init";

_Weapon_station_4 = _logic getVariable "Weapon_station_4_init";

_Weapon_station_5 = _logic getVariable "Weapon_station_5_init";

_Weapon_station_6 = _logic getVariable "Weapon_station_6_init";

_Weapon_station_7 = _logic getVariable "Weapon_station_7_init";

_Weapon_station_8 = _logic getVariable "Weapon_station_8_init";

_Weapon_station_9 = _logic getVariable "Weapon_station_9_init";

_Weapon_station_10 = _logic getVariable "Weapon_station_10_init";

_Weapon_station_11 = _logic getVariable "Weapon_station_11_init";

_Weapon_station_12 = _logic getVariable "Weapon_station_12_init";

_Hull_number_1 = _logic getVariable "Hull_number_1";

_Hull_number_2 = _logic getVariable "Hull_number_2";

_Hull_number_3 = _logic getVariable "Hull_number_3";


if (_activated) then 
{
	{[_x,_Paintscheme,_Weapon_station_1,_Weapon_station_2,_Weapon_station_3,_Weapon_station_4,_Weapon_station_5,_Weapon_station_6,_Weapon_station_7,_Weapon_station_8,_Weapon_station_9,_Weapon_station_10,_Weapon_station_11,_Weapon_station_12,_Hull_number_1,_Hull_number_2,_Hull_number_3] Spawn JS_JC_fnc_SU35_Exec_module;} foreach _units;	 
};

true

