params [
    "_vehicle",
    "_weapon",
    "_muzzle",
    "_mode",
    "_ammo",
    "_magazine",
    "_projectile"
];

if (!local _projectile) exitWith {};

[_vehicle, _ammo, _projectile] spawn
{
    params ["_vehicle", "_ammo", "_projectile"];

    uiSleep 0.2;

    if (isNull _projectile) exitWith {};

    private _cfg = configFile >> "CfgAmmo" >> _ammo;
    private _weights = getArray (_cfg >> "mixed_shells");

    private _choice = selectRandomWeighted _weights;

    private _pos = getPosASL _projectile;
    private _vel = velocity _projectile;
    private _dir = vectorDir _projectile;
    private _up = vectorUp _projectile;
    private _instigator = gunner _vehicle;

    deleteVehicle _projectile;

    private _shell = createVehicle [_choice, _pos, [], 0, "CAN_COLLIDE"];

    _shell setPosASL _pos;
    _shell setVectorDirAndUp [_dir, _up];
    _shell setVelocity _vel;

    _shell setShotParents [_vehicle, _instigator];
};
