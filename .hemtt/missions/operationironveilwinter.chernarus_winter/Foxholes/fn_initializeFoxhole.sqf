if (hasInterface) then{
foxholeOrigin = ATLToASL foxholeOrigin;

/* _depth = parseNumber J3FF_FHdepth; //How deep in meters should the hole be? (CBA)
_diamater = 1; //What is the diameter of the hole? (PLACEHODLER)
_timeToDig = parseNumber J3FF_FHdig; //How long does it take to dig the hole? (CBA)
_timeToCover = parseNumber J3FF_FHcover; */

_depth = 1.3; //How deep in meters should the hole be? (CBA)
_diamater = 1; //What is the diameter of the hole? (PLACEHODLER)
_timeToDig = 50; //How long does it take to dig the hole? (CBA)
_timeToCover = 5;


//Get the FH_positions for camoflauge to be created 
_Fh_CamoPositions = [];
for "_i" from 1 to 4 do {
	_p = [FH_positions, foxholeOrigin] call BIS_fnc_nearestPosition;
	FH_positions deleteAt (FH_positions find _p);
	_p2 = [FH_positions, foxholeOrigin] call BIS_fnc_nearestPosition;
	_Fh_CamoPositions pushBackUnique _p2;
};

//Create FoxHole Holder to store information and allow interaction
_fhHolder = createVehicle ["Helper_Base_F", ((ASLToATL foxholeOrigin) vectorAdd [0,0,1]), [], 0, "CAN_Collide"];
//Attaches some base values to the holder
_fhHolder setVariable ["FH_originalDepth", _depth, true];
_fhHolder setVariable ["FH_originalDiameter", _diamater, true];
_fhHolder setVariable ["FH_originalTime", _timeToDig, true];
_fhHolder setVariable ["FH_timeToCover", _timeToCover, true];
_fhHolder setVariable ["FH_areYouFilling", false, true];
_fhHolder setVariable ["FH_foxholeOrigin", foxholeOrigin, true];
_fhHolder setVariable ["FH_foxholeCamoPositions", _Fh_CamoPositions, true];
_fhHolder setVariable ["FH_CoverAdded", false, true];

//Creates a function containing interactions so it can be executed on all clients
FhAddInteractions = {
	params ["_fhHolder"];
	//Creates conditions for actions to use
	_conditionContinue ={
		params ["_target","_player"];
		_complete = _target getVariable ["FH_Complete", false];
		if (("ACE_EntrenchingTool" in items _player)&&(_complete==False)) exitWith {true};
		//if ((J3FF_FHcustomItem)&&("J3FF_FoxholeTool" in items _player)&&(_complete==False)) exitWith {true};
		if (true) exitWith {false};
	};
	_conditionAddCover ={
		params ["_target","_player"];
		_coverAdded = _target getVariable ["FH_CoverAdded", false];
		if (_coverAdded == false) exitWith {true};
		if (true) exitWith {false};
	};
	_conditionRemoveCover ={
		params ["_target","_player"];
		_coverAdded = _target getVariable ["FH_CoverAdded", false];
		if (_coverAdded) exitWith {true};
		if (true) exitWith {false};
	};

	//Create interactions for the holder
	_actionFill = ["fillFoxhole","Fill in Foxhole","",{[_target,true]spawn ffa_func_digFoxhole},_conditionContinue,{},[],"",3.5] call ace_interact_menu_fnc_createAction;
	_actionDig = ["digFoxhole","Continue Digging Foxhole","",{[_target,false]spawn ffa_func_digFoxhole},_conditionContinue,{},[],"",3.5] call ace_interact_menu_fnc_createAction;
	_actionAddCover = ["addCover","Add Concealment","",{[_target,true]spawn ffa_func_Cover},_conditionAddCover,{},[],"",3.5] call ace_interact_menu_fnc_createAction;
	_actionRemoveCover = ["removeCover","Remove Concealment","",{[_target,false]spawn ffa_func_Cover},_conditionRemoveCover,{},[],"",3.5] call ace_interact_menu_fnc_createAction;
	//Adds the actions to the object
	[_fhHolder, 0, ["ACE_MainActions"], _actionFill] spawn ace_interact_menu_fnc_addActionToObject;
	[_fhHolder, 0, ["ACE_MainActions"], _actionDig] spawn ace_interact_menu_fnc_addActionToObject;
	[_fhHolder, 0, ["ACE_MainActions"], _actionAddCover] spawn ace_interact_menu_fnc_addActionToObject;
	[_fhHolder, 0, ["ACE_MainActions"], _actionRemoveCover] spawn ace_interact_menu_fnc_addActionToObject;
};
//Adds the interactions to all clients
[_fhHolder] remoteExec ["FhAddInteractions", 0, true];

_depthIncrement = _depth / _timeToDig;
_fhHolder setVariable ["FH_depthIncrement", _depthIncrement, true];

//Spawns a grass cutter
_gc = createVehicle ["Land_ClutterCutter_large_F", ASLToATL foxholeOrigin, [], 0, "CAN_Collide"];
_fhHolder setVariable ["FH_grassCutter", _gc, true];

[_fhHolder,false] spawn ffa_func_digFoxhole;


};