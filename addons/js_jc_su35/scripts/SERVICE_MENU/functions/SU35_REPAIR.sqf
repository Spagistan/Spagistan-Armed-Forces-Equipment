	_SU35 = vehicle player;
	_SU35_pilot = driver _SU35;
	_SU35_WSO = gunner _SU35;
	_default_sleep_time = 3;
	_sleep_time = 3;		
	_SU35_stop_speed = 1;
	_damage_SU35 = damage _SU35;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	if (speed _SU35 > _SU35_stop_speed) exitWith {if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Repairing canceled...", "PLAIN DOWN",0.3];};};
	if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Repairing...", "PLAIN DOWN",0.3];};

	while {alive _SU35} do 
	{
	
		_damage_SU35 = damage _SU35;
		_SU35 Setdamage (_damage_SU35 - 0.015);	
		If ((_damage_SU35 < 0.01) and (player == _SU35_pilot) or (player == _SU35_WSO)) exitWith {titleText ["Repairing complete...", "PLAIN DOWN",0.6];};
		if (speed _SU35 > _SU35_stop_speed) exitWith {if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Repairing canceled...", "PLAIN DOWN",0.3];};};
		if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Repairing...", "PLAIN DOWN",0.3];};
		sleep _sleep_time;
	};