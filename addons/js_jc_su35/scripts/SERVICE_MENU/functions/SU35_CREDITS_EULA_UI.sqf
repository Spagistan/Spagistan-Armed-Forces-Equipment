If (!Local Player) ExitWith {};  
Private "_SU35";
_SU35 = vehicle player;

closeDialog 0;

sleep 0.01;
CreateDialog "SU35_CREDITS_EULA_UI";

disableSerialization;
_control_support = ((uiNamespace getVariable "myDisplay") displayCtrl 1611);
_control_support htmlLoad "js_jc_su35\ui\SU35_link_SUPPORT.html";

Exit;