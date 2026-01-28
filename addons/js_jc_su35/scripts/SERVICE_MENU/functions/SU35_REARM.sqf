_SU35 = vehicle player;
_SU35_pilot = driver _SU35;
_SU35_WSO = gunner _SU35;
_default_sleep_time = 3;
_i = 0;
_sleep_time = 3;		
_SU35_stop_speed = 1;
	If (!Local Player) ExitWith {};

closeDialog 0;

while {alive _SU35} do 
{
	_i=_i +1;
	if ((_i>=12)) exitWith {_SU35 setVehicleAmmo 1; if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming complete...", "PLAIN DOWN",0.3];};};
	if (speed _SU35 > _SU35_stop_speed) exitWith {if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
	sleep _sleep_time;
	if ((player == _SU35_pilot) or (player == _SU35_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};
	
};
