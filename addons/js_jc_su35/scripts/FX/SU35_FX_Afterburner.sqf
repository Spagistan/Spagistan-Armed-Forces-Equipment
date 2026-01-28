//script to animate and simulate afterburners on FA-18
//to activate use "SeagullFastForward" key or useraction in action menu
//original authors: Gnat and lethal
//modified to for use on this addon by John_Spartan (with Gnat's permission)
// modified by Leshrack and TeTeT

private ["_boost","_fueldrag","_fuelUsageMultiplier","_minAbThrottle","_minAbThrust","_sleepTime","_baseForce","_forceLocation","_counterForceModifier","_counterForceLocation","_lastFrameTime","_currTime","_frametime","_throttleSetting","_frameForce","_oldFuel","_fuelDelta"];

params [["_plane", ObjNull], ["_maxspeed", 1500]];

if (isNull _plane) exitWith {};
if (!isEngineOn _plane || !alive _plane || _plane animationPhase "ab_switch" != 1) exitWith {};

_boost = 30; // Strength of Afterburner, bigger means more speed increase, UNUSED
// _maxspeed = 1250; // Maximum speed after which the ab won't have an effect anymore
_fueldrag = 2000; // Affects fuel consumption while afterburning. lower => more fuel consumption
_fuelUsageMultiplier = 30; // Magic number for fuel consumption for easier balancing. bigger => more fuel consumption
_minAbThrottle = 0.9; // Setting that determines the smallest setting above which the afterburner turns on
_minAbThrust = 0.03; // Minimum amount of ab thrust power possible
_sleepTime = 0.05; // Time to sleep between the loop; UNUSED
_baseForce = 1000; // 250; // Base force used for calculating the additional ab thrust
_counterForceModifier = 11; // 23; // divider for the counter force
_counterForceLocation = [0,9,0]; // position for the counter force

// Get the time for the last time the function ran
_lastFrameTime = _plane getVariable ["JS_JC_AB_frametime", 0];
_currTime = time;

// Set the lastframetime to current time to make the delta 0 on the fist execution. This is to avoid sudden and big force on first run or after reusing the AB
if (_lastFrameTime == 0) then {_lastFrameTime = _currTime;};

// Get the time that has passed since the last runtime
_frametime = _currTime - _lastFrameTime;

// Set the timestamp of this runtime to the plane for usage next time
_plane setVariable ["JS_JC_AB_frametime", _currTime];

// Get the intensity for AB from the throttle setting, >90 small intensity, 100 max intensity
_throttleSetting = ((airplaneThrottle _plane) - _minAbThrottle) max _minAbThrust; // gives 0.01 -> 0.10 depending on how much above _minAbThrottle the throttle is set

if ((speed _plane) < _maxspeed) then {
	// Adjust base force with thrust setting
	_frameForce = _baseForce * _throttleSetting * _frametime * 1000; // multiplying by 1000 because a single force unit is very small.

	// Add a force to the thruster location of the plane along the Y-axis of the plane
	// Suggested by Yax
	_plane addForce [_plane vectorModelToWorld [0, _frameForce, 0], getCenterOfMass _plane];
};

if ( fuel _plane > 0) then {
	_oldFuel = fuel _plane;
	_fuelDelta = (1 / _fueldrag) * (_throttleSetting * _fuelUsageMultiplier * _frametime);
	_plane setFuel (_oldFuel - _fuelDelta);
};

true;