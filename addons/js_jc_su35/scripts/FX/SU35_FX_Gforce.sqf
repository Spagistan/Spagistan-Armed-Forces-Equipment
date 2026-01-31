_plane = _this;

_g_force_effect = ppEffectCreate ["radialBlur", 450];
_g_force_effect ppEffectEnable false;
	
	
while {(alive _plane)} do 
{

if (player == driver _plane) then 
{

	_g_force = _plane animationPhase "g_meter";
//	hintsilent format["G-force %1",_g_force];

	if (_g_force >= 5) then 
	{
		_g_force_effect ppEffectEnable true;
		_g_force_effect ppEffectAdjust [0.01,0.01,0.15,0.15];
		_g_force_effect ppEffectCommit 1;
	} 

	else 
	{
		_g_force_effect ppEffectAdjust [0.005,0.005,0.075,0.075];
		sleep 0.1;
		_g_force_effect ppEffectAdjust [0,0,0,0];
		_g_force_effect ppEffectEnable false;
		_g_force_effect ppEffectCommit 5;
	};
	



};
	
sleep 0.5;




};
