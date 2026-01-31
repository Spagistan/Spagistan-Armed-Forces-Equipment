If (!Local Player) ExitWith {};  
Private "_SU35";
_SU35 = vehicle player;

closeDialog 0;

sleep 0.01;
_SU35_current_skin = (_SU35 animationphase "paint_scheme_switch");
CreateDialog "SU35_SKINS_UI";

sleep 0.01;

disableSerialization;
if (_SU35 animationphase "paint_scheme_switch" <= 0.1) then 
{
	_ui = uiNamespace getVariable "SU35_skins_Display";
	(_ui displayCtrl 2501) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_on.paa";
	(_ui displayCtrl 2502) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2503) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2504) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
};

if ((_SU35 animationphase "paint_scheme_switch" < 0.26) and (_SU35 animationphase "paint_scheme_switch" > 0.2)) then 
{
	_ui = uiNamespace getVariable "SU35_skins_Display";
	(_ui displayCtrl 2501) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2502) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2503) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_on.paa";
	(_ui displayCtrl 2504) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
};

if ((_SU35 animationphase "paint_scheme_switch" < 0.56) and (_SU35 animationphase "paint_scheme_switch" > 0.45)) then 
{
	_ui = uiNamespace getVariable "SU35_skins_Display";
	(_ui displayCtrl 2501) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2502) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_on.paa";
	(_ui displayCtrl 2503) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2504) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
};

if ((_SU35 animationphase "paint_scheme_switch" == 1)) then 
{
	_ui = uiNamespace getVariable "SU35_skins_Display";
	(_ui displayCtrl 2501) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2502) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2503) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_off.paa";
	(_ui displayCtrl 2504) ctrlSetText "\js_jc_su35\ui\SU35_GUI_button_tickbox_on.paa";
};

WaitUntil {!Dialog};
_SU35 animate ["service_menu_switch",0];
