_time = time + 1;
waitUntil {!([] call bis_fnc_isLoading) && time > _time};
