//todo: copy radio settings on teamleads
// Ensure correct radio
this addEventHandler ["Respawn", {
	params ["_unit", "_corpse"];

	sleep 3;
	if(_corpse)

	TFAR_fnc_radiosList
	//TFAR_fnc_radiosList
}];


//keep radio?
["KeepMySW", "OnRadioOwnerSet", {
	if(_this select 0 == "correct radio") then
	{
		MYSWRADIO = _this select 1;
		["KeepMySW", "OnSpeak", player] call TFAR_fnc_removeEventHandler;
	};
}, player] call TFAR_fnc_addEventHandler;


["CheckIfMySW", "OnRadioOwnerSet", {
	_myRadios = TFAR_fnc_radiosList;

	if(_myRadios !contain MYSWRADIO) then
	{
		find the first radiio that matches our SW radio
		change its ID?
	};
}, player] call TFAR_fnc_addEventHandler;


what to do: when radio dialog is closed, save radio and settings.
when you respawn, if missing previous radio type(s), add those radios, then apply the settings.

https://github.com/michail-nikolaev/task-force-arma-3-radio/wiki/API:-Functions
