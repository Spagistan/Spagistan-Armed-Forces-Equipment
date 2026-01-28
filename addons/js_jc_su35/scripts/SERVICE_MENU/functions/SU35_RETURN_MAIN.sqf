If (!Local Player) ExitWith {};  
Private "_SU35";
_SU35 = vehicle player;

closeDialog 0;

sleep 0.01;

if 
(
	((_SU35 distance (nearestObject [_SU35, "O_Truck_03_ammo_F"]) < 25) and (damage (nearestObject [_SU35, "O_Truck_03_ammo_F"]) < 1) and (player == driver _SU35) and (_SU35 animationPhase "service_menu_switch" < 0.5) and (speed _SU35 < 1))
	or
	((_SU35 distance (nearestObject [_SU35, "Land_Hangar_F"]) < 55) and (damage (nearestObject [_SU35, "Land_Hangar_F"]) < 1) and (player == driver _SU35) and (_SU35 animationPhase "service_menu_switch" < 0.5) and (speed _SU35 < 1))
	or
	((_SU35 distance (nearestObject [_SU35, "Land_TentHangar_V1_F"]) < 55) and (damage (nearestObject [_SU35, "Land_TentHangar_V1_F"]) < 1) and (player == driver _SU35) and (_SU35 animationPhase "service_menu_switch" < 0.5) and (speed _SU35 < 1))
	or
	((_SU35 distance (nearestObject [_SU35, "O_Truck_02_Ammo_F"]) < 25) and (damage (nearestObject [_SU35, "O_Truck_02_Ammo_F"]) < 1) and (player == driver _SU35) and (_SU35 animationPhase "service_menu_switch" < 0.5) and (speed _SU35 < 1))
) 

then {CreateDialog "SU35_MAIN_UI";} else {CreateDialog "SU35_MAIN_RESTRICTED_UI";};


Exit;