// Rewritten by TeTeT based on code from GOM
If (!Local Player) ExitWith {};

private _plane = vehicle player; 
private _armament = [];
private _dynLoadout = [_plane];

{
  private _pylonSuffix = _x;
  private _pylon = format ["pylon%1", _pylonSuffix];
  private _lbIndex = 3100 + _pylonSuffix;

  private _loadout = lbdata [_lbIndex, lbCursel _lbIndex];
  _armament pushBack [_pylon, _loadout, true];
  _plane setPylonLoadOut [_x, "", true];
  _dynLoadout pushBack _loadout;
} forEach [1,2,3,4,5,6,7,8,9,10,11,12];

closeDialog 0;

_dynLoadout execVM "js_jc_su35\scripts\LOADOUTS\SU35_dynamic_loadouts.sqf";
_plane;