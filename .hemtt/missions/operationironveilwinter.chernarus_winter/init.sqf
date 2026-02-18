ffa_func_Cover = compile preprocessFileLineNumbers "Foxholes\fn_Cover.sqf";
ffa_func_digFoxhole = compile preprocessFileLineNumbers "Foxholes\fn_digFoxhole.sqf";
ffa_func_initializeFoxhole = compile preprocessFileLineNumbers "Foxholes\fn_initializeFoxhole.sqf";
ffa_func_positionSelect = compile preprocessFileLineNumbers "Foxholes\fn_positionSelect.sqf";
ffa_func_userInput = compile preprocessFileLineNumbers "Foxholes\fn_userInput.sqf";
call ffa_func_userInput;
saf_fnc_vicFactoryInit = compile preprocessFileLineNumbers "VicFactory\vicfactory_initialize.sqf";
call saf_fnc_vicFactoryInit;
saf_fnc_vicLoadout = compile preprocessFileLineNumbers "VicFactory\vic_loadout.sqf";
saf_fnc_itemFactory = compile preprocessFileLineNumbers "item_factory1.sqf";
call saf_fnc_itemFactory;

//This is part of the bomber drone nerf
if (isServer) then {
    addMissionEventHandler ["EntityCreated", {
        params ["_entity"];

        if (_entity isKindOf "PIKE_I_UAV_01_bomb") then {
            _entity disableNVGEquipment true;
            _entity disableTIEquipment true;
            
        };
    }];
};