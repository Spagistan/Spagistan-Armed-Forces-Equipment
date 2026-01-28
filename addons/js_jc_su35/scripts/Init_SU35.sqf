//CAPTURING THE UNIT THAT WE ARE PLAYING WITH
params [["_SU35", ObjNull]];

if (isNull _SU35) exitWith {};

// TeTeT: not needed for dynamic loadout anylonger
//ADD MISSING ROCKET POD FILLERS [FAKE MAGAZINES] TO FILL EXTRA 120 PROXIES
//_SU35 addMagazines ["js_m_su35_empty", 120];

//INITIATE DUMMY ANIMATIONS USED IN SCRIPTS
_SU35 animate ["rearming_done_switch",1];
_SU35 animate ["eject_switch",0];
_SU35 animate ["r_canopy_hide",0];
_SU35 animate ["ejection_seat_hide",0];
_SU35 animate ["init_switch",0];
_SU35 animate ["Mirrors_pip_hide",1];
_SU35 animate ["refueling_switch",0];

//INITIATE MFCD controls
[_SU35] spawn JS_JC_fnc_SU35_MFD_control;

// TeTeT: Hopefully no longer needed
//WORKAROUND TO kick in GEOMETRY
// _SU35 setVelocity [(velocity _SU35 select 0)+1,(velocity _SU35 select 1),(velocity _SU35 select 2)];

//RANDOM HULL NUMBERS
_SU35_hull_number_1 = 0;
_SU35_hull_number_2 = floor random 4;
_SU35_hull_number_3 = floor random 9;
_SU35 setObjectTextureGlobal [6,"\js_jc_su35\data\numbers\B0_ca.paa"];
_SU35 setObjectTextureGlobal [7,["\js_jc_su35\data\numbers\B0_ca.paa","\js_jc_su35\data\numbers\B1_ca.paa","\js_jc_su35\data\numbers\B2_ca.paa","\js_jc_su35\data\numbers\B3_ca.paa","\js_jc_su35\data\numbers\B4_ca.paa"] select _SU35_hull_number_2];
_SU35 setObjectTextureGlobal [8,["\js_jc_su35\data\numbers\B1_ca.paa","\js_jc_su35\data\numbers\B2_ca.paa","\js_jc_su35\data\numbers\B3_ca.paa","\js_jc_su35\data\numbers\B4_ca.paa","\js_jc_su35\data\numbers\B5_ca.paa","\js_jc_su35\data\numbers\B6_ca.paa","\js_jc_su35\data\numbers\B7_ca.paa","\js_jc_su35\data\numbers\B8_ca.paa","\js_jc_su35\data\numbers\B9_ca.paa"] select _SU35_hull_number_3];
_SU35 setObjectTextureGlobal [11,"\js_jc_su35\data\numbers\B0_ca.paa"];
_SU35 setObjectTextureGlobal [10,["\js_jc_su35\data\numbers\B0_ca.paa","\js_jc_su35\data\numbers\B1_ca.paa","\js_jc_su35\data\numbers\B2_ca.paa","\js_jc_su35\data\numbers\B3_ca.paa","\js_jc_su35\data\numbers\B4_ca.paa"] select _SU35_hull_number_2];
_SU35 setObjectTextureGlobal [9,["\js_jc_su35\data\numbers\B1_ca.paa","\js_jc_su35\data\numbers\B2_ca.paa","\js_jc_su35\data\numbers\B3_ca.paa","\js_jc_su35\data\numbers\B4_ca.paa","\js_jc_su35\data\numbers\B5_ca.paa","\js_jc_su35\data\numbers\B6_ca.paa","\js_jc_su35\data\numbers\B7_ca.paa","\js_jc_su35\data\numbers\B8_ca.paa","\js_jc_su35\data\numbers\B9_ca.paa"] select _SU35_hull_number_3];

//FUEL CONTROL & HUD SCRIPT INIT
[_SU35] execvm "js_jc_su35\scripts\FUEL_CONTROL\SU35_fuel_hud_update.sqf";
[_SU35] execvm "js_jc_SU35\scripts\FUEL_CONTROL\SU35_fuel_init.sqf";
[_SU35] execvm "js_jc_SU35\scripts\FUEL_CONTROL\SU35_fuel_usage.sqf";
[_SU35] execvm "js_jc_SU35\scripts\FUEL_CONTROL\SU35_fuel_hud_update.sqf";
_SU35_fuel_tank_drop = _SU35 addEventHandler ["Fired", {_SU35_fuel_tank_drop = _this execVM "js_jc_SU35\scripts\FUEL_CONTROL\SU35_auxilary_fueltank_control.sqf"}];

//@RS compatability
//so far there is only one official expansion/plugin supported by original
//authors of this SU35 mod, this is a compatability solution with no dependacies
//by: John_Spartan & Saul
if ((isClass(configFile >> "CfgPatches" >> "rs_mod_for_su35")) and (typeOf _SU35 == "rs_mod_for_SU35")) then {_SU35_RS_mod_init = [_SU35] execVM "rs_mod_for_su35\scripts\rs_mod_for_su35_init.sqf";
};

// Support for Firewill AWS
// TeTeT, written by Firewill
if (isClass(configFile >> "CfgPatches" >> "FIR_AirWeaponSystem_US")) then {
	_SU35 setVariable ["TGT_POD","yes",true];

	_SU35 setVariable ["ITGT_GRIDTYPE","8D",true];
	_SU35 setVariable ["ITGT_C_DATA",[],true];

	_SU35 setVariable ["ITGT_DATA_1",[]];
	_SU35 setVariable ["ITGT_DATA_2",[]];
	_SU35 setVariable ["ITGT_DATA_3",[]];
	_SU35 setVariable ["ITGT_DATA_4",[]];
	_SU35 setVariable ["ITGT_DATA_5",[]];

	_SU35 setVariable ["ITGT_NEW","no",true];
	_SU35 setVariable ["ITGT_TYPE","GPS",true];
	_SU35 setVariable ["ITGT_LSR","none",true];

	_SU35 setVariable ["ITGT_LSR_SET","no",true];
	_SU35 setVariable ["ITGT_TGT_SET","no",true];

	_SU35 setVariable ["ITGT_C_MARKER","none"];
	_SU35 setVariable ["ITGT_MARKER_1","none"];
	_SU35 setVariable ["ITGT_MARKER_2","none"];
	_SU35 setVariable ["ITGT_MARKER_3","none"];
	_SU35 setVariable ["ITGT_MARKER_4","none"];
	_SU35 setVariable ["ITGT_MARKER_5","none"];

	_SU35 setVariable ["ECMJAMMER","yes",true];
};

// TeTeT: do that on any client
// Original code by Grumpy Old Man for Aircraft Loadout! All credits to him
JS_JC_SU35_list_allPylonMags = ("count( getArray (_x >> 'hardpoints')) > 0" configClasses (configfile >> "CfgMagazines")) apply {configname _x};
//sort pylon mags for LB
JS_JC_SU35_list_allPylonMags = JS_JC_SU35_list_allPylonMags apply {[gettext (configfile >> "CfgMagazines" >> _x >> "displayName"),_x]};
JS_JC_SU35_list_allPylonMags sort true;
JS_JC_SU35_list_allPylonMags = JS_JC_SU35_list_allPylonMags apply {_x select 1};
JS_JC_SU35_list_validDispNames = JS_JC_SU35_list_allPylonMags apply {getText (configfile >> "CfgMagazines" >> _x >> "displayName")};
// end of Grumpy Old Man code


//DUMMY ANIM USED TO CHECK HAS THIS CODE RUN BEFORE EXECUTING ANY OTHER CODE AFFECTING SAME DEFINITIONS
_SU35 animate ["init_switch",1];

private _ehName = "JS_JC_SU35_AB_EH";
//LOOP TO MONITOR USER PIP SETTINGS [WE DONT WANT UGLY BLACK SCREEN IF NO PIP] AND MAKE SURE AI EJECTS IF PLANE HIT
while {alive _SU35} do {

	if (local _SU35) then {
		if (isPipEnabled and _SU35 animationphase "Mirrors_pip_hide" > 0.0001) then {
			_SU35 animate ["Mirrors_pip_hide", 0];
		};
		if (!isPipEnabled and _SU35 animationphase "Mirrors_pip_hide" < 0.0001) then {
			_SU35 animate ["Mirrors_pip_hide", 1];
		};
		if ((damage _SU35 > 0.85) and (player != driver _SU35)) then {
			[_SU35] spawn JS_JC_fnc_SU35_Ejection;
		};
		if (airplaneThrottle _SU35 > 0.9 && (_SU35 animationphase "ab_switch") != -1) then {
			_SU35 animate ["ab_switch", 1, true];
			private _SU35_AB_EH = [_ehName, "onEachFrame", "JS_JC_fnc_SU35_FX_Afterburner", [_SU35, 1500]] call BIS_fnc_addStackedEventHandler;
			[_SU35] spawn JS_JC_fnc_SU35_FX_Afterburner_anim_start;
		} else {
			if ((!isEngineOn _SU35 || !alive _SU35 || (airplaneThrottle _SU35) <= 0.9) && (_SU35 animationPhase "ab_switch") == 1) then {
				// Remove the stacked event handler
				[_ehName, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;

				// Throttle setting is lower than 90% but afterburner is still on. end exhaust animation and flip the ab switch
				_SU35 animate ["ab_switch", 0, true];

				// Reset the lastframe counter to 0 to avoid a massive force when the AB is reapplied
				_SU35 setVariable ["JS_JC_AB_frametime", 0];

				[_SU35] spawn JS_JC_fnc_SU35_FX_Afterburner_anim_end;
			};

		};
	};
	sleep 1;
};

_SU35;