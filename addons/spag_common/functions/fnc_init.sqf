_time = time + 1;
waituntil {!([] call bis_fnc_isLoading) && time > _time};
