_SU35 = _this select 0;	
_Pilot = driver _SU35;

if ((!isengineon _SU35)) ExitWith {};
if (_SU35 animationphase "eject_switch" > 0.01) ExitWith {};
_SU35 animate ["eject_switch",1];

_SU35 animate ["r_canopy_hide",1];
_SU35 animate ["ejection_seat_hide",1];
_Canopy = "JS_JC_SU35_canopy" createvehicle [0,0,1000];
_Canopy attachTo [_SU35,[0.0,-0.72,0.6],"actionarea"];
_Ejection_Seat = "JS_JC_SU35ejection_seat" createvehicle [0,0,1000];
_Ejection_Seat attachTo [_SU35,[-0.5,0.12,0.35],"actionarea"];

sleep 0.1;

_eject_pitch_bank = _SU35 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_SU35 = vectordir _SU35;
_velocity_SU35 = velocity _SU35;
_eject_boost = 15;
_eject_pos=_SU35 modeltoworld (_SU35 selectionposition "eject_pos");
_eject_dirpos=_SU35 modeltoworld (_SU35 selectionposition "eject_canopy_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_SU35_new=velocity _SU35;
_eject_dirpos=_SU35 modeltoworld (_SU35 selectionposition "eject_dir");
detach _Canopy;
_Canopy setpos _eject_dirpos;
[_Canopy, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Canopy setvelocity [(_eject_velocity select 0) + (_velocity_SU35_new select 0),(_eject_velocity select 1) + (_velocity_SU35_new select 1),(_eject_velocity select 2) + (_velocity_SU35_new select 2)];

sleep 0.5;

_SU35 setVelocity [(velocity _SU35 select 0)+1,(velocity _SU35 select 1)*1.0,(velocity _SU35 select 2)*1.0];
moveOut _Pilot;
WaitUntil {(vehicle _Pilot) != _SU35};
_Pilot moveindriver _Ejection_Seat;
WaitUntil {(vehicle _Pilot) == _Ejection_Seat};
_Ejection_Seat lock 2;

_eject_pitch_bank = _SU35 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_SU35 = vectordir _SU35;
_velocity_SU35 = velocity _SU35;
_eject_boost = 35;
_eject_pos=_SU35 modeltoworld (_SU35 selectionposition "eject_pos");
_eject_dirpos=_SU35 modeltoworld (_SU35 selectionposition "eject_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_SU35_new=velocity _SU35;
_eject_dirpos=_SU35 modeltoworld (_SU35 selectionposition "eject_dir");
[_SU35, _Ejection_Seat] execVM "\js_jc_SU35\scripts\FX\SU35_FX_ejection.sqf";
detach _Ejection_Seat;
_Ejection_Seat setpos _eject_dirpos;
[_Ejection_Seat, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Ejection_Seat setvelocity [(_eject_velocity select 0) + (_velocity_SU35_new select 0),(_eject_velocity select 1) + (_velocity_SU35_new select 1),(_eject_velocity select 2) + (_velocity_SU35_new select 2)];

sleep 1.0;

while {(alive _Pilot)} do 
{
	_Pos_Ejection_Seat = getPos _Ejection_Seat;
	If ((_Pos_Ejection_Seat select 2) < 300) exitWith {};
	sleep 0.5;
			
};

_Ejection_Seat lock 0;
_eject_pitch_bank = _Ejection_Seat call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_Ejection_Seat setvelocity [1,1,1];
sleep 0.01;
moveOut _Pilot;
WaitUntil {(vehicle _Pilot) != _Ejection_Seat};

_Parachute = "JS_JC_SU35_Steerable_Parachute" createvehicle getpos _Pilot;
_Parachute setdir (getdir _Pilot);
_Parachute setpos  (getpos _Pilot);
[_Parachute, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Pilot moveindriver _Parachute;
_SU35 animate ["auxtank_switch",0];
_SU35 setfuel 0;
_Ejection_Seat lock 2;
_SU35 lock 2;


sleep 10;

WaitUntil {((getpos _Ejection_Seat) select 2) <=5};
sleep 5;
deletevehicle _Canopy;
deletevehicle _Ejection_Seat;



Exit;
	