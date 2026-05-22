#include "script_component.hpp"
/*
Author: Ampersand, johnb43
Check if a local unit can destroy bush or cut grass.

* Arguments:
* 0: Unit trying to clear brush <OBJECT>
* If unit is a player, unit must be local.
*
* Return Value:
* If unit can clear brush <BOOL>

* Example:
* [player] call abc_main_fnc_canClearBrush
*/

params ["_unit"];

if (!alive _unit) exitWith {false};
if !([_unit, objNull, ["isNotDragging", "isNotCarrying", "isNotSwimming"]] call ace_common_fnc_canInteractWith) exitWith {false};

if (
    ClearBrush_requireEntrenchingTool &&
    {!(_unit call ace_trenches_fnc_hasEntrenchingTool)}
) exitWith {false};

// Check if unit is a player
private _isPlayer = isPlayer _unit;

if (_isPlayer && {!local _unit}) exitWith {false};

private _startPos = if (_isPlayer) then {
    AGLToASL positionCameraToWorld [0, 0, 0]
} else {
    eyePos _unit
};

// Check 2m in front of unit if there is an object
private _intersections = lineIntersectsSurfaces [_startPos, _startPos vectorAdd ((getCameraViewDirection _unit) vectorMultiply 2), _unit];

if (_intersections isEqualTo []) exitWith {false};

(_intersections # 0) params ["_intersectPosASL", "", "_intersectObj", "_parentObject"];

// Terrain
if (isNull _intersectObj && {isNull _parentObject}) exitWith {true};

// If not terrain, check for bushes
(nearestTerrainObjects [_intersectObj, ["Bush"], 0]) isNotEqualTo []
