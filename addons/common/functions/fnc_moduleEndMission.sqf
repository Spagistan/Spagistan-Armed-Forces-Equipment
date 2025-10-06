// https://community.bistudio.com/wiki/Modules
/* #include "script_component.hpp" */
#include "script_component.hpp"

params ["_logic", "_activated"];

/* systemChat "hellooo";
diag_log "helloooo"; */
/* hint "im a thing!"; */

[] remoteExec [QFUNC(freezePlayers), 2];

systemChat "---Ending mission";

sleep 4;

["end1"] remoteExec ["bis_fnc_endMissionServer", 0];
