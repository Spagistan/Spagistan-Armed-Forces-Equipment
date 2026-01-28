If (!Local Player) ExitWith {};
_SU35 = vehicle player;
Private ["_SU35"];

CreateDialog "SU35_MAIN_UI";

WaitUntil {!Dialog};
 
_SU35 animate ["service_menu_switch",0];