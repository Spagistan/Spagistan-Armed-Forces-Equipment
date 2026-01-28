	_SU35 = vehicle player;
	_SU35_pilot = driver _SU35;
	_SU35_WSO = gunner _SU35;
	_default_sleep_time = 3;
	_sleep_time = 3;
	_SU35_stop_speed = 1;
	_Fuel_SU35 = fuel _SU35;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	if (speed _SU35 > _SU35_stop_speed) exitWith {if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
	if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};

	while {alive _SU35} do
	{

		_Fuel_SU35 = fuel _SU35;
		_SU35 setfuel (_Fuel_SU35 + 0.015);
		If ((_Fuel_SU35 > 0.98) and (player == _SU35_pilot) or (player == _SU35_WSO)) exitWith {titleText ["Refueling complete...", "PLAIN DOWN",0.6];};
		if (speed _SU35 > _SU35_stop_speed) exitWith {if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
		if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};
		sleep _sleep_time;
	};

	_Fuel_tank_count = {_x == "PylonRack_Wing_Tank_JS_SU35_x1"} count magazines _SU35;


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
	_loadout = magazines _SU35;
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