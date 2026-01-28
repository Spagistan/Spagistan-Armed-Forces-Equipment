//script to simulate mid air refueling from "buddy pod" 
//created by Franzee
//modified by John_Spartan

// private ["_SU35_TANKER","_SU35_CLIENT","_sensor","_speed_tanker","_altitude_tanker","_refuel_probe","_refuel_drogue","_refuel_probe_pos","_refuel_drogue_pos","_Fuel_client","_vel_tanker","_vel_tanker_x","_vel_tanker_y","_vel_tanker_z"];
_SU35_TANKER = _this;
_SU35_TANKER_PILOT = driver _SU35_TANKER;
_SU35_TANKER_WSO = gunner _SU35_TANKER;

_sensor = "EmptyDetector" createVehicle [0,0,0];
_sensor attachTo [_SU35_TANKER,[0,0,0],"refuel_drogue"];

sleep 0.1;

_SU35_CLIENT = nearestobject [_sensor,"PLANE"];
_SU35_CLIENT_PILOT = driver _SU35_CLIENT;
_SU35_CLIENT_WSO = gunner _SU35_CLIENT;


if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Align refueling probe with the connetcion \n point on refueling drogue...", "PLAIN DOWN",1];};
if (_SU35_CLIENT animationphase "fuel_probe" < 0.5) exitWith {if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Refueling probe must be extended...", "PLAIN DOWN",1];};};
if (_SU35_TANKER animationphase "auxtank_switch" < 0.1) exitWith {if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Refueling not possible, \n not enough fuel left to share...", "PLAIN DOWN",1];};};
if (_SU35_TANKER animationphase "auxtank_switch" < 0.1) exitWith {if ((player == _SU35_TANKER_PILOT) or (player == _SU35_TANKER_WSO)) then {titleText ["Refueling not possible, \n not enough fuel left to share...", "PLAIN DOWN",1];};};

while {(alive _SU35_TANKER) && (alive _SU35_CLIENT) && (_SU35_CLIENT animationphase "fuel_probe" > 0.5) && (_SU35_TANKER animationphase "fuel_drogue" > 0.5)} do 
{
	
	
	_speed_tanker = speed _SU35_TANKER;
	_altitude_tanker = getPosASL _SU35_TANKER select 2;

	_refuel_probe = _SU35_CLIENT selectionposition "refuel_probe";
	_refuel_drogue = _SU35_TANKER selectionposition "refuel_drogue";
	_refuel_probe_pos = _SU35_CLIENT ModelToWorld _refuel_probe;
	_refuel_drogue_pos = _SU35_TANKER ModelToWorld _refuel_drogue;
	_distance = _refuel_probe_pos distance _refuel_drogue_pos;

	If (_distance < 7) exitWith {};
 
	sleep 0.5;
};

switch (typeOf _SU35_CLIENT) do 
{
		case "JS_JC_SU35": {_SU35_CLIENT attachTo [_SU35_TANKER,[0.7,-7.40,-0.47],"refuel_drogue"];};
		
};

if ((player == _SU35_TANKER_PILOT) or (player == _SU35_TANKER_WSO)) then {titleText ["Fuel probe attached, initiating fuel transfer...", "PLAIN DOWN",1];};
if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Fuel probe attached, initiating fuel transfer...", "PLAIN DOWN",1];};

_SU35_TANKER animate ["refueling_switch",1];

while {(alive _SU35_TANKER) && (alive _SU35_CLIENT) && (_SU35_CLIENT animationphase "fuel_probe" > 0.5) && (_SU35_TANKER animationphase "fuel_drogue" > 0.5)} do 
{
	
	_Fuel_client = fuel _SU35_CLIENT;
	_SU35_CLIENT setfuel (_Fuel_client + 0.01);
	_Fuel_TANKER = _SU35_TANKER animationPhase "auxtank_switch";
	
	If (_Fuel_client > 0.98) exitWith 
	{
		if ((player == _SU35_TANKER_PILOT) or (player == _SU35_TANKER_WSO)) then {titleText ["Refueling complete...", "PLAIN DOWN",1];};
		if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Refueling complete...", "PLAIN DOWN",1];};
		_SU35_TANKER animate ["refueling_switch",0];
	};
	
	If (_Fuel_TANKER < 0.1) exitWith 
	{
		if ((player == _SU35_TANKER_PILOT) or (player == _SU35_TANKER_WSO)) then {titleText ["Refueling canceled, \n not enough fuel left to share...", "PLAIN DOWN",1];};
		if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Refueling canceled, \n not enough fuel left to share...", "PLAIN DOWN",1];};
		_SU35_TANKER animate ["refueling_switch",0];
	};

	_vel_tanker = velocity _SU35_TANKER;
	_vel_tanker_x = _vel_tanker select 0;
	_vel_tanker_y = _vel_tanker select 1;
	_vel_tanker_z = _vel_tanker select 2;

	If (_vel_tanker_x > 350) exitWith 
	{
		if ((player == _SU35_TANKER_PILOT) or (player == _SU35_TANKER_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		_SU35_TANKER animate ["refueling_switch",0];
	};
	If (_vel_tanker_y > 350) exitWith 
	{
		if ((player == _SU35_TANKER_PILOT) or (player == _SU35_TANKER_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		_SU35_TANKER animate ["refueling_switch",0];
	};

	If (_vel_tanker_z > 350) exitWith 
	{
		if ((player == _SU35_TANKER_PILOT) or (player == _SU35_TANKER_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		if ((player == _SU35_CLIENT_PILOT) or (player == _SU35_CLIENT_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",1];};
		_SU35_TANKER animate ["refueling_switch",0];
	};
	sleep 1;
};


sleep 1;
detach _SU35_CLIENT;
_SU35_TANKER animate ["fuel_drogue",0];
_SU35_TANKER animate ["refueling_switch",0];
_SU35_CLIENT animate ["fuel_probe",0];
deletevehicle _sensor;
exit;

