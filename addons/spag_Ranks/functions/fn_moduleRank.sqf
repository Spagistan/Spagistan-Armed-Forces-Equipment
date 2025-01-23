private _logic 		= _this param [0,objNull,[objNull]];
private _units 		= _this param [1,[],[[]]];
private _activated 	= _this param [2,true,[true]];

if (_activated) then
{
	//--- Extract the user defined module arguments
	_rank = _logic getVariable ["Value",""];

	if (_rank != "") then
	{
		{
			[vehicle _x, _rank] call bis_fnc_setrank;
		}
		forEach _units;
	}
	else
	{
		"_rank is empty" call BIS_fnc_error;
	};
};

true