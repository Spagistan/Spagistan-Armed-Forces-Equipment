If (!Local Player) ExitWith {};
Private ["_SU35"];
_SU35 = vehicle player; 
       
_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_CSAT_S_co.paa"];      
_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_CSAT_S_co.paa"];
_SU35 animate ["paint_scheme_switch",0.5];
disableSerialization;
_ui = uiNamespace getVariable "SU35_skins_Display";
(_ui displayCtrl 2501) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
(_ui displayCtrl 2502) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_on.paa";
(_ui displayCtrl 2503) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
(_ui displayCtrl 2504) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
