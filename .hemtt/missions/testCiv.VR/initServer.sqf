/*
{
    _x disableAI "ANIM";
    _x disableAI "MOVE";
    _X disableAI "RADIOPROTOCOL";
    _x switchMove "AmovPercMstpSnonWnonDnon_exercisePushup";
    _x addEventHandler [ "AnimDone", {
        params[ "_unit", "_anim" ];
            if ( _anim == "AmovPercMstpSnonWnonDnon_exercisePushup" ) then {
                _unit playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
                //_worldPos = _unit modelToWorld [0.03,-0.1,0];
                //_unit setPosWorld _worldPos;
                };
            }
        ];
} forEach [willie1, willie2, willie3, willie4, willie5, willie6, willie7, willie8, willie9, willie10, willie11, willie12];
*/
firstPlatoon = createGroup [independent, false];
firstPlatoon setGroupIdGlobal["1st Platoon"];
publicVariable "firstPlatoon";

if (isServer) then
{
    waitUntil { time > 0 };

    private _date = systemTime select [0,5];
    private _datesec = systemTime select 5;
    // _date set [3, 8]; // Set hour to 08:00
    setDate _date;
    skipTime ((_datesec / 3600) - 15) ; // Sets the time down to the second. Also, sets the time to 15 hours behind UTC.
};

[independent, -1, [["Land_BagFence_Short_F",5, "Sandbags"],
["Land_BagFence_End_F",3, "Sandbags"],
["Land_BagBunker_Small_F",19, "Sandbags"],
["Land_CzechHedgehog_01_new_F",10],
["Land_ClothShelter_01_F",9,"Camo Nets"],
["Land_CamoNet_EAST_EP1",11, "Camo Nets"],
["Land_CamoNetVar_EAST_EP1",11, "Camo Nets"]
]] call ace_fortify_fnc_registerObjects;
