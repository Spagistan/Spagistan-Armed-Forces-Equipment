//dynamic loadout selection/rearming script for SU35 E/F
//created by John_Spartan
//to execute use followning examples for various weapon presets, call this script via unit init line in editor or via instance of mission script
//
//SU35_loadoutscript = [this,_station_1,_station_2,_station_3,_station_4,_station_5,_station_6,_station_7,_station_8,_station_9,_station_10,_station_11,_station_12] execvm "js_jc_su35\scripts\LOADOUTS\SU35_dynamic_loadouts.sqf";
//SU35 - MR:  SU35_dynamic_loadoutscript = [_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1"] execvm "js_jc_su35\scripts\LOADOUTS\SU35_dynamic_loadouts.sqf";
//SU35 - CAS; SU35_dynamic_loadoutscript = [_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_S8_rocketpod_x2", "js_m_su35_S8_rocketpod_x2", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1"] execvm "js_jc_su35\scripts\LOADOUTS\SU35_dynamic_loadouts.sqf";
//SU35 - CAP: SU35_dynamic_loadoutscript = [_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1"] execvm "js_jc_su35\scripts\LOADOUTS\SU35_dynamic_loadouts.sqf";
//SU35 - TANKER: not availible/will be updated

params [["_SU35", ObjNull]];

if (isNull _SU35) exitWith {};

private _SU35_pilot = driver _SU35;
private _SU35_WSO = gunner _SU35;
private _default_sleep_time = 3;
private _sleep_time = 3;		//time to wait/delay before loading every next magazine
private _SU35_stop_speed = 1;

//rearming switch check to prevent two instances of rearming script executed at once [waitting until first instance is finished/executed]
WaitUntil {(_SU35 animationPhase "rearming_done_switch") == 1};

_SU35 selectWeapon "js_w_su35_master_arms_safe";
_SU35 animate ["rearming_done_switch",0];

_station_1 = _this select 1;
_station_2 = _this select 2;
_station_3 = _this select 3;
_station_4 = _this select 4;
_station_5 = _this select 5;
_station_6 = _this select 6;
_station_7 = _this select 7;
_station_8 = _this select 8;
_station_9 = _this select 9;
_station_10 = _this select 10;
_station_11 = _this select 11;
_station_12 = _this select 12;



if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//remove any default loadout weapons and magazines first
// _SU35 removeWeapon "js_w_su35_r73Laucher";
// _SU35 removeWeapon "js_w_su35_r77Laucher";
// _SU35 removeWeapon "js_w_su35_kh29Launcher";
_SU35 removeWeapon "js_w_su35_s8Laucher";
// _SU35 removeWeapon "js_w_su35_kab500lLaucher";
_SU35 removeWeapon "js_w_su35_fueltank_holder";

// TeTeT: most likely obsolete due to setPylonLoadOut
// _SU35 removeMagazines "js_m_su35_r73_x1";
// _SU35 removeMagazines "js_m_su35_r77_x1";
// _SU35 removeMagazines "js_m_su35_kh29_x1";
_SU35 removeMagazines "js_m_su35_S8_rocket_x1";
_SU35 removeMagazines "js_m_su35_S8_rocketpod_x1";
_SU35 removeMagazines "js_m_su35_S8_rocketpod_x2";
// _SU35 removeMagazines "js_m_su35_kab500l_x1";
_SU35 removeMagazines "js_m_su35_wing_tank_x1";
_SU35 removeMagazines "js_m_su35_buddypod_x1";
_SU35 removeMagazines "js_m_su35_empty";
_SU35 removeMagazines "js_m_su35_fake_empty";

{ _SU35 removeWeaponGlobal _x; } foreach (weapons _SU35 - [ "js_w_su35_master_arms_safe", "CMFlareLauncher", "js_w_su35_gsh30", "Laserdesignator_pilotCamera" ]);
// clean pylons
{
	_SU35 setPylonLoadOut [_x, "", true];
} forEach ["pylon1", "pylon2", "pylon3", "pylon4", "pylon5", "pylon6", "pylon7", "pylon8", "pylon9", "pylon10", "pylon11", "pylon12"];


//add new magazines first and in right sequence so the proxies are loaded properly for specified loadout

//WEAPON STATION - 1
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_1;
_SU35 setPylonLoadOut ["pylon1", _station_1, true];
// TeTeT: totally unclear why 1 to 18, copied from F/A-18
for "_i" from 1 to 18 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=131;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_1 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 2
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_2;
_SU35 setPylonLoadOut ["pylon2", _station_2, true];
for "_i" from 1 to 17 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=130;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_2 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 3
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_3;
_SU35 setPylonLoadOut ["pylon3", _station_3, true];
for "_i" from 1 to 16 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=129;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_3 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 4
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_4;
_SU35 setPylonLoadOut ["pylon4", _station_4, true];
for "_i" from 1 to 15 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=128;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_4 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 5
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_5;
_SU35 setPylonLoadOut ["pylon5", _station_5, true];
for "_i" from 1 to 14 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=127;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_5 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 6
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_6;
_SU35 setPylonLoadOut ["pylon6", _station_6, true];
for "_i" from 1 to 13 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=126;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_6 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 7
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_7;
_SU35 setPylonLoadOut ["pylon7", _station_7, true];
for "_i" from 1 to 12 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=125;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_7 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 8
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_8;
_SU35 setPylonLoadOut ["pylon8", _station_8, true];
for "_i" from 1 to 11 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=124;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_8 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 9
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_9;
_SU35 setPylonLoadOut ["pylon9", _station_9, true];
for "_i" from 1 to 10 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=123;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_9 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 10
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_10;
_SU35 setPylonLoadOut ["pylon10", _station_10, true];
for "_i" from 1 to 9 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=122;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_10 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 11
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_11;
_SU35 setPylonLoadOut ["pylon11", _station_11, true];
for "_i" from 1 to 8 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=121;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_11 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//WEAPON STATION - 12
_SU35 removeMagazines "js_m_SU35_fake_empty";
// _SU35 addMagazine _station_12;
_SU35 setPylonLoadOut ["pylon12", _station_12, true];
for "_i" from 1 to 7 do {_SU35 addMagazine "js_m_su35_fake_empty";};
_f=120;
_SU35 addMagazines ["js_m_SU35_fake_empty", _f];
if (_station_12 == "js_m_SU35_empty") then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;};
sleep _sleep_time;
if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

//add actual amunition for previously created fake S8 rocket pods
//even mumber proxies are on the left side, noneven numbers on the right
//station 5 and 6 [proxies 13 to 52 and 53 to 92]
//station 9 and 10 [proxies 93 to 112 and 113 to 132]

_Rocket_Pod_countx1 = {_x == "js_m_su35_S8_rocketpod_x1"} count magazines _SU35;
_Rocket_Pod_countx2 = {_x == "js_m_su35_S8_rocketpod_x2"} count magazines _SU35;
_Rocket_Pod_count = (_Rocket_Pod_countx1 + _Rocket_Pod_countx2);

if (_Rocket_Pod_count == 0) then
{

		_f = 120;
		_SU35 removeMagazines "js_m_SU35_fake_empty";
		_SU35 addMagazines ["js_m_su35_empty", _f];

};

if (_Rocket_Pod_count == 4) then
{

		_f = 120;
		_SU35 removeMagazines "js_m_SU35_fake_empty";
		_SU35 addMagazines ["js_m_su35_S8_rocket_x1", _f];

};

if (_Rocket_Pod_count == 2) then
{
	if ((_station_5 == "js_m_su35_S8_rocketpod_x2") and (_station_6 == "js_m_su35_S8_rocketpod_x2")) then
	{
		_f = 40;
		_i = 80;
		_SU35 removeMagazines "js_m_SU35_fake_empty";
		_SU35 addMagazines ["js_m_su35_S8_rocket_x1", _i];
		_SU35 addMagazines ["js_m_su35_empty", _f];
	};

	if ((_station_9 == "js_m_su35_S8_rocketpod_x1") and (_station_10 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_f = 40;
		_i = 80;
		_SU35 removeMagazines "js_m_SU35_fake_empty";
		_SU35 addMagazines ["js_m_su35_empty", _i];
		_SU35 addMagazines ["js_m_su35_S8_rocket_x1", _f];
	};


	if ((_station_5 == "js_m_su35_S8_rocketpod_x2") and (_station_9 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_f = 40;
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_g" from 1 to _i do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};
		for "_h" from 1 to _e do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};


	};

	if ((_station_5 == "js_m_su35_S8_rocketpod_x2") and (_station_10 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_f = 40;
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_g" from 1 to _i do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};
		for "_h" from 1 to _e do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};

	};

	if ((_station_6 == "js_m_su35_S8_rocketpod_x2") and (_station_9 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_f = 40;
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_g" from 1 to _i do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};
		for "_h" from 1 to _e do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};

	};

	if ((_station_6 == "js_m_su35_S8_rocketpod_x2") and (_station_10 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_f = 40;
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_g" from 1 to _i do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};
		for "_h" from 1 to _e do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};
	};

};

if (_Rocket_Pod_count == 3) then
{

	if ((_station_5 == "js_m_su35_S8_rocketpod_x2") and (_station_6 == "js_m_su35_S8_rocketpod_x2") and (_station_9 == "js_m_su35_S8_rocketpod_x1")) then
	{

		_i = 80;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		_SU35 addMagazines ["js_m_su35_S8_rocket_x1", _i];
		for "_h" from 1 to _e do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};
	};

	if ((_station_5 == "js_m_su35_S8_rocketpod_x2") and (_station_6 == "js_m_su35_S8_rocketpod_x2") and (_station_10 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_i = 80;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		_SU35 addMagazines ["js_m_su35_S8_rocket_x1", _i];
		for "_h" from 1 to _e do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};
	};

	if ((_station_5 == "js_m_su35_S8_rocketpod_x2") and (_station_9 == "js_m_su35_S8_rocketpod_x1") and (_station_10 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_i = 40;
		_e = 40;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_h" from 1 to _i do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};
		_SU35 addMagazines ["js_m_su35_S8_rocket_x1", _e];

	};

	if ((_station_6 == "js_m_su35_S8_rocketpod_x2") and (_station_9 == "js_m_su35_S8_rocketpod_x1") and (_station_10 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_i = 40;
		_e = 40;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_h" from 1 to _i do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};
		_SU35 addMagazines ["js_m_su35_S8_rocket_x1", _e];
	};
};


if (_Rocket_Pod_count == 1) then
{

	if ((_station_5 == "js_m_su35_S8_rocketpod_x2")) then
	{
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_h" from 1 to _i do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};
		for "_g" from 1 to _e do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_empty";};
	};

	if ((_station_6 == "js_m_su35_S8_rocketpod_x2")) then
	{
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_h" from 1 to _i do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};
		for "_g" from 1 to _e do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_empty";};
	};

	if ((_station_9 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_h" from 1 to _i do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_empty";};
		for "_g" from 1 to _e do {_SU35 addMagazine "js_m_su35_S8_rocket_x1";_SU35 addMagazine "js_m_su35_empty";};
	};

	if ((_station_10 == "js_m_su35_S8_rocketpod_x1")) then
	{
		_i = 40;
		_e = 20;

		_SU35 removeMagazines "js_m_SU35_fake_empty";
		for "_h" from 1 to _i do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_empty";};
		for "_g" from 1 to _e do {_SU35 addMagazine "js_m_su35_empty";_SU35 addMagazine "js_m_su35_S8_rocket_x1";};
	};
};





//add new weapons depending on selected loadout
_loadout = magazines _SU35;
sleep 0.5;
// if (("js_m_su35_r73_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_r73Laucher";};
// if (("js_m_su35_r77_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_r77Laucher";};
// if (("js_m_su35_kh29_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_kh29Launcher";};
// if (("js_m_su35_kab500l_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_kab500lLaucher";};
if (("js_m_su35_wing_tank_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_fueltank_holder";};
if (_Rocket_Pod_count > 0) then {_SU35 addWeapon "js_w_su35_s8Laucher";};

if (speed _SU35 > _SU35_stop_speed) exitWith {SU35_cancel_rearm_penalty = _SU35 execVM "\js_jc_SU35\scripts\LOADOUTS\SU35_empty_loadout.sqf";if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};

_Fuel_tank_count = {_x == "js_m_SU35_wing_tank_x1"} count magazines _SU35;

If (_Fuel_tank_count < 1) Then
{
	_External_fuel = _SU35 animationPhase "auxtank_switch";
	_SU35 animate ["auxtank_switch",0];
};

If (_Fuel_tank_count == 1) Then
{
	_External_fuel = _SU35 animationPhase "auxtank_switch";
	If ((_External_fuel < 0.33)) Then
	{
		_SU35 animate ["auxtank_switch",(_External_fuel + (0.33 - _External_fuel))];
	};
	If ((_External_fuel > 0.33)) Then
	{
		_SU35 animate ["auxtank_switch",0.33];
	};
};

If (_Fuel_tank_count == 2) Then
{
	_External_fuel = _SU35 animationPhase "auxtank_switch";
	If ((_External_fuel < 0.66)) Then
	{
		_SU35 animate ["auxtank_switch",(_External_fuel + (0.66 - _External_fuel))];
	};
	If ((_External_fuel > 0.66)) Then
	{
		_SU35 animate ["auxtank_switch",0.66];
	};
};

sleep 0.05;
_External_fuel = _SU35 animationPhase "auxtank_switch";

If (("PylonRack_Buddy_Pod_JS_SU35_x1" in _loadout)) Then
{

	If (_Fuel_tank_count > 1) Then
	{
		_SU35 animate ["auxtank_switch",(_External_fuel + 0.33)];
	};
	If (_Fuel_tank_count < 1) Then
	{
		_SU35 animate ["auxtank_switch",0.33];
	};

};

_SU35 setVehicleAmmo 1;

_SU35 selectWeapon "js_w_su35_master_arms_safe";
if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming complete...", "PLAIN DOWN",0.6];};
_SU35 animate ["rearming_done_switch",1];
Exit;