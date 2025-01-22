/*
 * Author: Kalthramis
 * Disable simulation for all players. Call it from the server
 *
 * Example:
 * [] remoteExec [QFUNC(freezePlayers), 2]
 *
 * Public: Yes
 */
{
	_x enableSimulationGlobal false;
} forEach allPlayers;
