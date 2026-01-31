if (!Local Player) ExitWith {};
private _SU35 = vehicle player;

SU35_dynamic_loadoutscript = [_SU35, 
					"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1"
] execvm "js_jc_su35\scripts\LOADOUTS\SU35_dynamic_loadouts.sqf";
closeDialog 0;
