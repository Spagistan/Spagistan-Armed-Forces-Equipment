//Script loop created to control MFCD's on SU35
//created by: John_Spartan
// modified by TeTeT

params [["_SU35", ObjNull]];

if (isNull _SU35) exitWith {};

/**
switch (worldName) do {
	case "Stratis": { _SU35 setObjectTextureGlobal [12, "\js_jc_su35\data\displays\SU35_mfcd_map_stratis.paa"];
					  _SU35 setObjectTextureGlobal [13, "\js_jc_su35\data\displays\su35_mfcd_ca.paa"]; };
	case "Altis": { _SU35 setObjectTextureGlobal [12, "\js_jc_su35\data\displays\SU35_mfcd_map_altis.paa"];
				    _SU35 setObjectTextureGlobal [13, "\js_jc_su35\data\displays\su35_mfcd_ca.paa"]; };
	case "Tanoa": { _SU35 setObjectTextureGlobal [12, "\js_jc_su35\data\displays\SU35_mfcd_map_tanoa.paa"];
				    _SU35 setObjectTextureGlobal [13, "\js_jc_su35\data\displays\su35_mfcd_ca.paa"]; };
};
**/
// Support for terrain picture maps
/*if (worldName in ["Sara", "SaraLite", "Sara_dbe1", "Porto", "Chernarus", "Utes", "Takistan",
                  "Zargabad", "Desert_E", "Shapur_BAF", "ProvingGrounds_PMC", "Woodland_ACR", "Bootcamp_ACR",
                  "Mountains_ACR", "Chernarus_Summer"] ) then {
*/
private _map = getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap");
_SU35 setObjectTextureGlobal [12, _map];
_SU35 setObjectTextureGlobal [13, "\js_jc_su35\data\displays\english\su35_mfcd_ca.paa"];
/*};*/

while {alive _SU35} do
{
	if ((player == driver _SU35) and (isengineon _SU35)) then
	{
		_world_size = [] call BIS_fnc_mapSize;

		_gridPosX = [(getpos _SU35) select 0,0] call BIS_fnc_cutDecimals;
		_gridPosY = [(getpos _SU35) select 1,0] call BIS_fnc_cutDecimals;

		_map_anim_x = _gridPosX/_world_size;
		_map_anim_y = _gridPosY/_world_size;

		_SU35 animate ["MFD_Displays_Map_miniplane_animX",_map_anim_x];
		_SU35 animate ["MFD_Displays_Map_miniplane_animY",_map_anim_y];

		//hintsilent format["WORLD SIZE: %1\nPOSX: %2\nPOSY: %3\nMAP ANIM X:%4\nMAP ANIM Y:%5",_world_size,_gridPosX,_gridPosY,_map_anim_x,_map_anim_y];

	};

	sleep 0.1;
};

