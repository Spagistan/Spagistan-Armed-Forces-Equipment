if (hasInterface) then{
params ["_fhHolder","_addingCover"];
FH_AddingCover = _addingCover;
_timeToCover = _fhHolder getVariable ["FH_timeToCover",2];

//Plays animation on player
player playmove "AinvPknlMstpSnonWnonDnon_medic4";

[_timeToCover, [], { 
	//Gets the holder for the foxhole
	_fhHolder = (nearestObjects [getPosATL player, ["Helper_Base_F"], 10, false])#0;
	_FHCoverObjects = _fhHolder getVariable ["FH_CoverObjects", []];
	_fhCamoPositions = _fhHolder getVariable ["FH_foxholeCamoPositions", []];
	
	if (FH_AddingCover) then {
		{
			_o = createSimpleObject ["a3\plants_f\clutter\c_Thistle_Thorn_Green.p3d",(ATLtoASL _x) vectorAdd [(random 0.75),(random 0.75),0.2]];
			_o2 = createSimpleObject ["a3\plants_f\clutter\c_StrPlantGreenShrub",(ATLtoASL _x) vectorAdd [(random 0.75),(random 0.75),0.2]];
			_FHCoverObjects pushBackUnique _o;
			_FHCoverObjects pushBackUnique _o2;
		} forEach _fhCamoPositions;
		_fhHolder setVariable ["FH_CoverObjects",_FHCoverObjects, true];
		_fhHolder setVariable ["FH_CoverAdded", true, true];
	}else{
		{
			deleteVehicle _x;
		} forEach _FHCoverObjects;
		_fhHolder setVariable ["FH_CoverObjects",[], true];
		_fhHolder setVariable ["FH_CoverAdded", false, true];
	};

	//Reset the players anim to crouching
	player playMoveNow "amovpknlmstpsraswrfldnon";
}, {
	player playMoveNow "amovpknlmstpsraswrfldnon";
}, "Cover"] call ace_common_fnc_progressBar;
};