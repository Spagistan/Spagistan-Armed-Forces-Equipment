#define SCALEFACTOR 4
#define GRID_X( gridType, gridScale, num ) ( pixelW * gridType * ((( num ) * ( gridScale )) / SCALEFACTOR )) 
#define GRID_Y( gridType, gridScale, num ) ( pixelH * gridType * ((( num ) * ( gridScale )) / SCALEFACTOR )) 
 
#define GRID_SCALE 8


if (hasInterface) then{
FH_positionSelecting = true;
_flag = objNull;



getTerrainInfo params ["", "", "_cellsize", "_resolution"];
FH_positions = [];
_pos = getposATL Player;
_pos apply { floor (_x / _cellsize) } params ["_x0", "_y0"];
for "_x" from ((_x0 - 5) max 0) to ((_x0 + 5) min _resolution) do
{
	for "_y" from ((_y0 - 5) max 0) to ((_y0 + 5) min _resolution) do
	{
		private _p1 = [_x, _y] vectorMultiply _cellsize;
		_p1 set [2, 0.1];		
		FH_positions pushBackUnique _p1;
	};
};

//Creates instruction text 
_txt1 = text "E";
_txt1 setAttributes ["color", "#00CC00", "size", "0.6"];
_txt2 = text " to dig foxhole ";
_txt2 setAttributes ["size", "0.6"];
_txt3 = text "R";
_txt3 setAttributes ["color", "#CC0000", "size", "0.6"];
_txt4 = text " to cancel dig ";
_txt4 setAttributes ["size", "0.6"];
_instructionText = composeText[_txt1, _txt2, _txt3, _txt4];



distCheck = {
	params ["_flag","_instructionText"];
	_nearestPos = [FH_positions, getposATL Player] call BIS_fnc_nearestPosition;
	
	//Checks to see if position is valid
	_building = nearestBuilding _nearestPos;
	//if ((isOnRoad _nearestPos) || ((_nearestPos distance _building) < 10) || ((_nearestPos distance markerpos "base0") < 1000)) exitWith {Hint "Too close to building or road"; FH_positionSelecting = false; deleteVehicle _flag};
	if ((isOnRoad _nearestPos) || ((_nearestPos distance _building) < 10) || ((_nearestPos distance markerpos "base0") < 1000)) exitWith {hint localize "STR_FFA_trench_Off";; FH_positionSelecting = false; deleteVehicle _flag};
	//Shows intruction text on screen
	[_instructionText,
		safeZoneXAbs + GRID_X( pixelGridNoUIScale, GRID_SCALE, 15 ),  
		safeZoneY + GRID_Y( pixelGridNoUIScale, GRID_SCALE, 25 ),  
		0.3, 0, 0, 0] spawn BIS_fnc_dynamicText;
	
	//Checks if the flag exists already and if it does move it to the correct position. If not then create it and add the action.
	if (getposATL _flag isEqualTo [0,0,0]) then{
		_flag = createVehicle ["Land_Shovel_F", _nearestPos, [], 0, "CAN_COLLIDE"];
	}else{
		if !(getposATL _flag isEqualTo _nearestPos) then{
			_flag setPosATL _nearestPos;
		};
	};
	
	foxholeOrigin = _nearestPos;
	
	//Rotates the flag (Shovel) so that it is properly orientated
	_flag enableSimulation false;
	_sPos = GetPosATL _flag;
	_sPos2 = _sPos vectorAdd [0,0,0.4];
	_flag setPosATL _sPos2;
	_flag setVectorDirAndUp [[0,1,-90],[0,0,1]];
	
	sleep 0.5;
	//deleteVehicle _flag;
	if (FH_positionSelecting == false) exitWith {deleteVehicle _flag};
	[_flag,_instructionText]call distCheck;
};

[_flag,_instructionText] spawn distCheck;

};




