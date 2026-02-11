if (hasInterface) then{
	[]spawn {
		waitUntil {!isNull (findDisplay 46)};
		FH_positionSelecting = false;	
		
		//Creates event handlers to cancel placement
		findDisplay 46 displayAddEventHandler ["MouseButtonDown",{
			params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];
			if (FH_positionSelecting) then{
				FH_positionSelecting = false;
			};
		}];
		
		findDisplay 46 displayAddEventHandler ["KeyDown",{
			params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
			if (FH_positionSelecting) then{
				switch _key do{
					case 18:{
						[]spawn ffa_func_initializeFoxhole; 
						FH_positionSelecting = false;
					};
					case 19:{
						FH_positionSelecting = false;
					};
				};
				_key == 18 || _key == 19;
				
			};
		}];
		
		//Create the original ace self interaction
		_actionSelfCondition = {
			if ('ACE_EntrenchingTool' in items _player && FH_positionSelecting == false) exitWith {true};
			if (true) exitWith {false};
		};

		_actionSelf = ["startFoxhole","Dig Foxhole","",{remoteExec ['ffa_func_positionSelect', _player]},_actionSelfCondition,{},[],"",3.5] call ace_interact_menu_fnc_createAction;

		["CAManBase",1,["ACE_SelfActions","ACE_Equipment"],_actionSelf,true] call ace_interact_menu_fnc_addActionToClass;
	};
};