//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned on
//to enable this feature in missions init put: SU35_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 3 auxilary tanks equipped and full
sleep 1;
private ["_SU35","_weapon_fired","_ammo_fired","_External_fuel","_Fuel_tank_count"];
_SU35 = _this select 0;
_weapon_fired = _this select 1;
_ammo_fired = _this select 4;


If (_weapon_fired == "js_w_SU35_fueltank_holder") 

Then 
{
		_External_fuel = _SU35 animationPhase "auxtank_switch";
		_Fuel_tank_count = {_x == "js_m_SU35_wing_tank_x1"} count magazines _SU35;

		If (_External_fuel > 0.33) Then 
		{
			_SU35 animate ["auxtank_switch",(_External_fuel -0.33)];
		};
		If (_External_fuel <= 0.33) Then 
		{
			_SU35 animate ["auxtank_switch",0.0];
		};
};
		

Exit;
	
	

 

