if (!Local Player) ExitWith {};  
private _SU35 = vehicle player;

closeDialog 0;

sleep 0.01;
CreateDialog "SU35_LOADOUTS_UI";

{
  private _pylonSuffix = _x;
  private _pylon = format ["pylon%1", _pylonSuffix];
  private _getCompatibles = getArray (configfile >> "CfgVehicles" >> typeof _SU35 >> "Components" >> "TransportPylonsComponent" >> "Pylons" >> _pylon >> "hardpoints");
  private _validPylonMags = JS_JC_SU35_list_allPylonMags select {!((getarray (configfile >> "CfgMagazines" >> _x >> "hardpoints") arrayIntersect _getCompatibles) isEqualTo [])};
  private _displayNames = _validPylonMags apply {getText (configfile >> "CfgMagazines" >> _x >> "displayName")};

  private _lbId = 3100 + _pylonSuffix;
  lbClear _lbId;
  {
    private _magazineName = _displayNames select _forEachIndex;
    private _magazineMod = configSourceMod (configFile >> "CfgMagazines" >> _x);
    private _magazineSuffixArray = modParams [_magazineMod, ["name"]];
    if (count _magazineSuffixArray > 0) then {
      _magazineName = format ["%1 (%2)", _magazineName, _magazineSuffixArray select 0];
    };
    lbAdd [_lbId, _magazineName];
    lbSetData [_lbId, _forEachIndex, _x];
  } forEach _validPylonMags;
} forEach [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];
/**  

           {lbAdd[3101,_x]} forEach [  
             	"EMPTY",
             	"R-73 Archer"
           ];

           {lbAdd[3102,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer"
            ];

           {lbAdd[3103,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder"
            ];

           {lbAdd[3104,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder"
            ];

           {lbAdd[3105,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"KH-29 Kedge",
		"KAB-500L",
		"S8 Rockets[x2]"
            ];

           {lbAdd[3106,_x]} forEach [
               	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"KH-29 Kedge",
		"KAB-500L",
		"S8 Rockets[x2]"
            ];

           {lbAdd[3107,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"KAB-500L",
		"KH-29 Kedge"
            ];

           {lbAdd[3108,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"KAB-500L",
		"KH-29 Kedge"
            ];

           {lbAdd[3109,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"S8 Rockets[x1]"
            ];

           {lbAdd[3110,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"S8 Rockets[x1]"
            ];

           {lbAdd[3111,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"KH-29 Kedge",
		"KAB-500L"
            ];

           {lbAdd[3112,_x]} forEach [
              	"EMPTY",
              	"R-73 Archer",
	      	"R-77 Adder",
		"KH-29 Kedge",
		"KAB-500L"
            ];


         	((uiNamespace getVariable "myDisplay") displayCtrl 3101) lbSetCurSel 1;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3102) lbSetCurSel 1;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3103) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3104) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3105) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3106) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3107) lbSetCurSel 3;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3108) lbSetCurSel 3;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3109) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3110) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 3;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3112) lbSetCurSel 3;


		//((uiNamespace getVariable "myDisplay") displayCtrl 3112) ctrlSetEventHandler ["LBSelChanged","[vehicle player]Spawn SU35_LOADOUT_RESTRICTIONS_3112"];
**/
      
WaitUntil {!Dialog};

_SU35 animate ["service_menu_switch",0];
