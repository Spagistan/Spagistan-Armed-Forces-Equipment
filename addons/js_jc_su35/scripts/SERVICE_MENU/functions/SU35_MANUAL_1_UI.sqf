If (!Local Player) ExitWith {};  
Private "_SU35";
_SU35 = vehicle player;

closeDialog 0;

sleep 0.01;
CreateDialog "SU35_MANUAL_1_UI";

disableSerialization;
_control_forums = ((uiNamespace getVariable "myDisplay") displayCtrl 1613);
_control_support = ((uiNamespace getVariable "myDisplay") displayCtrl 1614);
_control_forums htmlLoad "js_jc_SU35\ui\SU35_link_FEEDBACK.html";
_control_support htmlLoad "js_jc_SU35\ui\SU35_link_SUPPORT.html";

Exit;	

