if (hasInterface) then{
isPlayerDigging = true;
params ["_fhHolder","_areYouFilling"];

//Gets some variables from the supplied holder
_foxholeOrigin = _fhHolder getVariable "FH_foxholeOrigin";
_timeToDig = _fhHolder getVariable "FH_originalTime";
_elapsedTime = _fhHolder getVariable ["FH_elapsedTime",0];
_depth = _fhHolder getVariable "FH_originalDepth";
_depthIncrement = _fhHolder getVariable "FH_depthIncrement";
_currentDepth = _fhHolder getVariable ["FH_currentDepth",_foxholeOrigin#2];

//Sets desired depth based on conditions
_desiredDepth = 0;
if ((!_areYouFilling)&&(_elapsedTime!=0)) then{
	_timeToDig = _timeToDig - _elapsedTime;
};
if (_areYouFilling) then{
	_timeToDig = _elapsedTime;
};
if (!_areYouFilling) then{
	_desiredDepth = (_foxholeOrigin#2 - _depth);
}else{
	_desiredDepth = _foxholeOrigin#2;
};
_fhHolder setVariable ["FH_desiredDepth", _desiredDepth, true];

//Plays animation on player
player playmove "AinvPknlMstpSnonWnonDnon_medic4";

//Creates loading bar for hole and handles progress of foxhole
[_timeToDig, [], {
	//Gets the holder for the foxhole
	_fhHolder = (nearestObjects [getPosATL player, ["Helper_Base_F"], 10, false])#0;
	_foxholeOrigin = _fhHolder getVariable "FH_foxholeOrigin";
	_desiredDepth = _fhHolder getVariable "FH_desiredDepth";
	_foxholeGC = _fhHolder getVariable "FH_grassCutter";
	
	//Reset the players anim to crouching
	player playMoveNow "amovpknlmstpsraswrfldnon";
	isPlayerDigging = false;
	
	//Sets the final height in case it wasnt already
	[[[[_foxholeOrigin#0,_foxholeOrigin#1,_desiredDepth]]]] remoteExec ["setTerrainHeight", 2];
	
	//Attaches some values to the holder
	_fhHolder setVariable ["FH_Complete", true, true];
	
	//Delete the holder and grass cutter
	deleteVehicle _foxholeGC;
	if (_desiredDepth == _foxholeOrigin#2) then{
		deleteVehicle _fhHolder;
	};
}, {
	player playMoveNow "amovpknlmstpsraswrfldnon";
	isPlayerDigging = false;
	
	//Attaches some values to the holder
	_fhHolder setVariable ["FH_Complete", false, true];
	

//}, "isPlayerDigging Foxhole"] spawn ace_common_fnc_progressBar;
}, "Digging" ] spawn ace_common_fnc_progressBar;


//Digs hole incrementaly
for "_i" from 1 to _timeToDig do {
	sleep 1;
	if (isPlayerDigging) then{	
	
		//Plays sound on even loops
		if (_i % 2 == 0)then{
			playSound3D ["Foxholes\ShovelDig.ogg", objNull, false, _foxholeOrigin, 4, 1, 10];
		};
		
		if (!_areYouFilling) then{
			[[[[_foxholeOrigin#0,_foxholeOrigin#1,(_currentDepth - (_depthIncrement*_i))]]]] remoteExec ["setTerrainHeight", 2];
			_fhHolder setVariable ["FH_currentDepth", _foxholeOrigin#2 - (_depthIncrement*_i), true];
			//Tells the holder how long you've been digging for
			_fhHolder setVariable ["FH_elapsedTime", _elapsedTime + _i, true];
		}else{
			[[[[_foxholeOrigin#0,_foxholeOrigin#1,(_currentDepth + (_depthIncrement*_i))]]]] remoteExec ["setTerrainHeight", 2];
			_fhHolder setVariable ["FH_currentDepth", _currentDepth + (_depthIncrement*_i), true];
			//Tells the holder how long you've been digging for
			_fhHolder setVariable ["FH_elapsedTime", _elapsedTime - _i, true];
		};	
		
		
	};
};
};