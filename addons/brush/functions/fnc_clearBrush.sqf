#include "script_component.hpp"
/*
* Author: Ampersand, johnb43
* Destroy a bush or place a grass cutter.
*
* Arguments:
* 0: Unit trying to clear brush <OBJECT>
* If unit is a player, unit must be local.
*
* Return Value:
* Object that was cut down, grass cutter or objNull if nothing was found <OBJECT>
*
* Example:
* [player] call abc_main_fnc_clearBrush
*/

params ["_unit"];

// Check if unit is a player
private _startPos = if (isPlayer _unit) then {
    AGLToASL positionCameraToWorld [0, 0, 0]
} else {
    eyePos _unit
};

// Check 2m in front of unit if there is an object
private _intersections = lineIntersectsSurfaces [_startPos, _startPos vectorAdd ((getCameraViewDirection _unit) vectorMultiply 2), _unit];

if (_intersections isEqualTo []) exitWith {objNull};

(_intersections # 0) params ["_intersectPosASL", "", "_intersectObj", "_parentObject"];

// Play gesture
["ace_common_playActionNow", [_unit, "ace_gestures_cover"], _unit] call CBA_fnc_targetEvent;

// If terrain, spawn grass cutter
if (isNull _intersectObj && {isNull _parentObject}) then {
    private _existing = _intersectPosASL nearestObject "Land_ClutterCutter_small_F";
    private _distance = 1;
    private _cutter = "Land_ClutterCutter_small_F";

    _intersectPosASL = ASLToAGL _intersectPosASL;

    if (!isNull _existing) then {
        _distance = _existing distance _intersectPosASL;
    };

    if (_distance < 0.5) then {
        _cutter = "Land_ClutterCutter_medium_F";
    };

    createVehicle [_cutter, _intersectPosASL, [], 0, "CAN_COLLIDE"]
} else {
    // If not terrain, check for bushes
    if ((nearestTerrainObjects [_intersectObj, ["Bush"], 0]) isNotEqualTo []) then {
        // Destroy bush
        _intersectObj setDamage [1, true, _unit];

        _intersectObj
    } else {
        objNull
    };
};
