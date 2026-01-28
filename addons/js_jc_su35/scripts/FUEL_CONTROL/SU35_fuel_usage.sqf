//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned off
//to enable this feature in missions init put: SU35_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 3 auxilary tanks equipped and full

private ["_SU35","_SU35_pilot", "_SU35_WSO","_Internal_fuel", "_External_fuel","_Afterburner"];
_SU35 = _this select 0;
_SU35_pilot = driver _SU35;
_SU35_WSO = gunner _SU35;

while {(alive _SU35)} do 
{

	_Internal_fuel = fuel _SU35;
	_External_fuel = _SU35 animationPhase "auxtank_switch";
	_Afterburner = _SU35 animationphase "ab_switch";
	_refueling_in_progress = _SU35 animationphase "refueling_switch";

	If ((_External_fuel > 0.05) && (isengineon _SU35) && (_Afterburner <= 0.1) && (_refueling_in_progress <=0.1)) Then 
	{
		_SU35 setfuel 1;
		_SU35 animate ["auxtank_switch",(_External_fuel -0.0003)];
	};

	If ((_External_fuel > 0.05) && (isengineon _SU35) && (_Afterburner >= 0.1) && (_refueling_in_progress <=0.1)) Then 
	{
		_SU35 setfuel 1;
		_SU35 animate ["auxtank_switch",(_External_fuel -0.001)];
	};

	If ((_External_fuel > 0.05) && (isengineon _SU35) && (_Afterburner <= 0.1) && (_refueling_in_progress >0.1)) Then 
	{
		_SU35 setfuel 1;
		_SU35 animate ["auxtank_switch",(_External_fuel -0.008)];
	};

	If ((_External_fuel > 0.05) && (isengineon _SU35) && (_Afterburner >= 0.1) && (_refueling_in_progress >0.1)) Then 
	{
		_SU35 setfuel 1;
		_SU35 animate ["auxtank_switch",(_External_fuel -0.0076)];
	};

	If ((_External_fuel < 0.05) && (isengineon _SU35) && (_Afterburner <= 0.1) && (_refueling_in_progress >0.1)) Then 
	{
		_SU35 animate ["auxtank_switch",(_External_fuel -0.008)];
	};

	If ((_External_fuel < 0.05) && (isengineon _SU35) && (_Afterburner >= 0.1) && (_refueling_in_progress >0.1)) Then 
	{
		_SU35 animate ["auxtank_switch",(_External_fuel -0.0075)];
	};
		
	sleep 1;
	

 
};
