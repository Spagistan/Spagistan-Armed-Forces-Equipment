//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned on
//to enable this feature in missions init put: SU35_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 3 auxilary tanks equipped and full

private ["_SU35","_Fuel_tank_count", "_Initial_fuel","_External_fuel","_loadout"];
_SU35 = _this select 0;
_Fuel_tank_count = {_x == "PylonRack_Wing_Tank_JS_SU35_x1"} count magazines _SU35;
_Initial_fuel = fuel _SU35;
_External_fuel = _SU35 animationPhase "auxtank_switch";
_loadout = magazines _SU35;


If ((_Fuel_tank_count == 0) and (_Initial_fuel > 0.9)) Then
{
	_SU35 animate ["auxtank_switch",0];
};

If ((_Fuel_tank_count == 1) and (_Initial_fuel > 0.9)) Then
{
	_SU35 animate ["auxtank_switch",0.33];
};

If ((_Fuel_tank_count == 2) and (_Initial_fuel > 0.9)) Then
{
	_SU35 animate ["auxtank_switch",0.66];
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

Exit;
