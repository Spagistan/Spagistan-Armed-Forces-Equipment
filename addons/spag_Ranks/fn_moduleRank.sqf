private _logic 		= _this param [0,objnull,[objnull]];
private _units 		= _this param [1,[],[[]]];
private _activated 	= _this param [2,true,[true]];

if (_activated) then
{
	//--- Extract the user defined module arguments
	_rank = _logic getvariable ["Value",""];

	if (_rank != "") then
	{
		{
			[vehicle _x, _rank] call bis_fnc_setrank;
		}
		foreach _units;
	}
	else
	{
		"_rank is empty" call BIS_fnc_error;
	};
};

true