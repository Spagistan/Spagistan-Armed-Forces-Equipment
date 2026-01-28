//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned off
//to enable this feature in missions init put: SU35_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 5 auxilary tanks equipped and full
//This loop is responsible for additional HUD icons to visualy display external tank status on HUD

// TeTeT: hotfix for Eden
if (is3DEN) exitWith {};

sleep 3;
_SU35 = _this select 0;


while {(alive _SU35)} do
{
	if ((player == driver _SU35) or (player == gunner _SU35))


	then
	{
		disableSerialization;
		_ui = uiNamespace getVariable "HUD";
		_Internal_fuel = fuel _SU35;
		_External_fuel = _SU35 animationPhase "auxtank_switch";
		_ui_External_fuel_progress = _ui displayctrl 9910;

		_ui_External_fuel_progress progressSetPosition _External_fuel;

		If (_SU35 animationphase "ab_switch" > 0.0001) Then {(_ui displayCtrl 9908) ctrlSetText "js_jc_su35\ui\SU35_Toggles_AfterBurner_ON_ca.paa";} else {(_ui displayCtrl 9908) ctrlSetText "js_jc_su35\ui\SU35_Toggles_clear_ca.paa";};



	};

	sleep 0.5;

};

Exit;