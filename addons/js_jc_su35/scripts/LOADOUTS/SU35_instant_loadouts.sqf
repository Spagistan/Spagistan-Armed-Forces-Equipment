//dynamic loadout selection/rearming script for SU35 E/F
//created by John_Spartan
//to execute use followning examples for various weapon presets, call this script via unit init line in editor or via instance of mission script
//
//SU35_loadoutscript = [this,_station_1,_station_2,_station_3,_station_4,_station_5,_station_6,_station_7,_station_8,_station_9,_station_10,_station_11,_station_12] execvm "js_jc_su35\scripts\LOADOUTS\SU35_dynamic_loadouts.sqf";
//SU35 - MR:  SU35_dynamic_loadoutscript = [_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1"] execvm "js_jc_su35\scripts\LOADOUTS\SU35_instant_loadouts.sqf";
//SU35 - CAS; SU35_dynamic_loadoutscript = [_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_S8_rocketpod_x2", "js_m_su35_S8_rocketpod_x2", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_S8_rocketpod_x1", "js_m_su35_kh29_x1", "js_m_su35_kh29_x1"] execvm "js_jc_su35\scripts\LOADOUTS\SU35_instant_loadouts.sqf";
//SU35 - CAP: SU35_dynamic_loadoutscript = [_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1"] execvm "js_jc_su35\scripts\LOADOUTS\SU35_instant_loadouts.sqf";
//SU35 - TANKER: SU35_dynamic_loadoutscript = [_SU35, "js_m_su35_r73_x1", "js_m_su35_r73_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_wing_tank_x1", "js_m_su35_wing_tank_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_r77_x1", "js_m_su35_empty", "js_m_su35_buddypod_x1"] execvm "js_jc_su35\scripts\LOADOUTS\SU35_instant_loadouts.sqf";

_SU35 = _this select 0;		//name of the unit we are playing with
_SU35_pilot = driver _SU35;
_SU35_WSO = gunner _SU35;



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



//remove any default loadout weapons and magazines first
_SU35 removeWeapon "js_w_su35_r73Laucher";
_SU35 removeWeapon "js_w_su35_r77Laucher";
_SU35 removeWeapon "js_w_su35_kh29Launcher";
_SU35 removeWeapon "js_w_su35_s8Laucher";
_SU35 removeWeapon "js_w_su35_kab500lLaucher";
_SU35 removeWeapon "js_w_su35_fueltank_holder";

_SU35 removeMagazines "js_m_su35_r73_x1";
_SU35 removeMagazines "js_m_su35_r77_x1";
_SU35 removeMagazines "js_m_su35_kh29_x1";
_SU35 removeMagazines "js_m_su35_S8_rocket_x1";
_SU35 removeMagazines "js_m_su35_S8_rocketpod_x1";
_SU35 removeMagazines "js_m_su35_S8_rocketpod_x2";
_SU35 removeMagazines "js_m_su35_kab500l_x1";
_SU35 removeMagazines "js_m_su35_wing_tank_x1";
_SU35 removeMagazines "js_m_su35_buddypod_x1";
_SU35 removeMagazines "js_m_su35_empty";
_SU35 removeMagazines "js_m_su35_fake_empty";

//add new magazines first and in right sequence so the proxies are loaded properly for specified loadout

//WEAPON STATION - 1
_SU35 addMagazine _station_1;
_SU35 addMagazine _station_2;
_SU35 addMagazine _station_3;
_SU35 addMagazine _station_4;
_SU35 addMagazine _station_5;
_SU35 addMagazine _station_6;
_SU35 addMagazine _station_7;
_SU35 addMagazine _station_8;
_SU35 addMagazine _station_9;
_SU35 addMagazine _station_10;
_SU35 addMagazine _station_11;
_SU35 addMagazine _station_12;


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
if (("js_m_su35_r73_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_r73Laucher";};
if (("js_m_su35_r77_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_r77Laucher";};
if (("js_m_su35_kh29_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_kh29Launcher";};
if (("js_m_su35_kab500l_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_kab500lLaucher";};
if (("js_m_su35_wing_tank_x1" in _loadout)) then {_SU35 addWeapon "js_w_su35_fueltank_holder";};
if (_Rocket_Pod_count > 0) then {_SU35 addWeapon "js_w_su35_s8Laucher";};

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
_SU35 animate ["rearming_done_switch",1];
Exit;