// https://community.bistudio.com/wiki/Modules
/* #include "script_component.hpp" */
#include "script_component.hpp"

params ["_logic", "_activated"];

/* systemChat "hellooo";
diag_log "helloooo"; */
/* hint "im a thing!"; */

[] remoteExec [QFUNC(freezePlayers), 2];

systemChat "Ending mission.";

sleep 3;
["end1", true, true, false] remoteExecCall ["BIS_fnc_endMission"];
playMusic "YorYor";
