	If (!Local Player) ExitWith {};
    	Private ["_SU35"];
    	_SU35 = vehicle player; 

	SU35_dynamic_loadoutscript = _SU35 execvm "js_jc_su35\scripts\LOADOUTS\SU35_empty_loadout.sqf";
	closeDialog 0;
