private ["_Unit", "_SU35", "_Paintscheme", "_Weapon_station_1", "_Weapon_station_2", "_Weapon_station_3", "_Weapon_station_4", "_Weapon_station_5", "_Weapon_station_6", "_Weapon_station_7", "_Weapon_station_8", "_Weapon_station_9", "_Weapon_station_10", "_Weapon_station_11", "_Weapon_station_12", "_Hull_number_1", "_Hull_number_2", "_Hull_number_3"];

//lets get all the variables from module init to set up our plane as expected
_Unit = _this select 0;
_Paintscheme = _this select 1;
_Weapon_station_1 = _this select 2;
_Weapon_station_2 = _this select 3;

_Weapon_station_3 = _this select 4;
_Weapon_station_4 = _this select 5;
_Weapon_station_5 = _this select 6;
_Weapon_station_6 = _this select 7;
_Weapon_station_7 = _this select 8;
_Weapon_station_8 = _this select 9;
_Weapon_station_9 = _this select 10;
_Weapon_station_10 = _this select 11;
_Weapon_station_11 = _this select 12;
_Weapon_station_12 = _this select 13;
_Hull_number_1 = _this select 14;
_Hull_number_2 = _this select 15;
_Hull_number_3 = _this select 16;

//checks to make sure the plane is actualy JS_JC_SU35 type and we have captured the plane not the driver before proceeding
if (_Unit isKindOf "Man") then {_SU35 = vehicle _Unit} else {_SU35 = _Unit};
if ((typeOf _SU35) != "JS_JC_SU35") ExitWith {};

//dummy animation status check to ensure that this code is executed after initial plane init code
//putting the execution of this code on hold untill our main init has been executed
WaitUntil {_SU35 animationphase "init_switch" > 0.5};


//PAINTSCHEMES SETUP
if (_Paintscheme == 1) then
{
	_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_CSAT_D_co.paa"];
	_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_CSAT_D_co.paa"];
	_SU35 animate ["paint_scheme_switch",0];

};

if (_Paintscheme == 2) then
{
	_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_CSAT_S_co.paa"];
	_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_CSAT_S_co.paa"];
	_SU35 animate ["paint_scheme_switch",0.5];

};

if (_Paintscheme == 3) then
{
	_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_co.paa"];
	_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_co.paa"];
	_SU35 animate ["paint_scheme_switch",1];

};

if (_Paintscheme == 4) then
{
	_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_SKY_co.paa"];
	_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_sky_co.paa"];
	_SU35 animate ["paint_scheme_switch",0.25];

};

//WEAPON LOADOUT SETUP
SU35_dynamic_loadoutscript = [_SU35, _Weapon_station_1, _Weapon_station_2, _Weapon_station_3, _Weapon_station_4, _Weapon_station_5, _Weapon_station_6, _Weapon_station_7, _Weapon_station_8, _Weapon_station_9, _Weapon_station_10, _Weapon_station_11, _Weapon_station_12] execvm "js_jc_su35\scripts\LOADOUTS\SU35_instant_loadouts.sqf";

//SET HULL NUMBER ON DEMAND
if (_Hull_number_1 == 10) then
{
	_random_1 = floor random 9;
	_Hull_number_1_texture = (format ["\js_jc_su35\data\numbers\B%1_ca.paa",_random_1]);
	_SU35 setObjectTextureGlobal [6,_Hull_number_1_texture];
	_SU35 setObjectTextureGlobal [11,_Hull_number_1_texture];
}
else
{
	_Hull_number_1_texture = (format ["\js_jc_su35\data\numbers\B%1_ca.paa",_Hull_number_1]);
	_SU35 setObjectTextureGlobal [6,_Hull_number_1_texture];
	_SU35 setObjectTextureGlobal [11,_Hull_number_1_texture];
};

if (_Hull_number_2 == 10) then
{
	_random_2 = floor random 9;
	_Hull_number_2_texture = (format ["\js_jc_su35\data\numbers\B%1_ca.paa",_random_2]);
	_SU35 setObjectTextureGlobal [7,_Hull_number_2_texture];
	_SU35 setObjectTextureGlobal [10,_Hull_number_2_texture];
}
else
{
	_Hull_number_2_texture = (format ["\js_jc_su35\data\numbers\B%1_ca.paa",_Hull_number_2]);
	_SU35 setObjectTextureGlobal [7,_Hull_number_2_texture];
	_SU35 setObjectTextureGlobal [10,_Hull_number_2_texture];
};

if (_Hull_number_3 == 10) then
{
	_random_3 = floor random 9;
	_Hull_number_3_texture = (format ["\js_jc_su35\data\numbers\B%1_ca.paa",_random_3]);
	_SU35 setObjectTextureGlobal [8,_Hull_number_3_texture];
	_SU35 setObjectTextureGlobal [9,_Hull_number_3_texture];
}
else
{
	_Hull_number_3_texture = (format ["\js_jc_su35\data\numbers\B%1_ca.paa",_Hull_number_3]);
	_SU35 setObjectTextureGlobal [8,_Hull_number_3_texture];
	_SU35 setObjectTextureGlobal [9,_Hull_number_3_texture];
};



Exit;
