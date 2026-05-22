class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(clearBrush) {
                    displayName = "Clear Brush";
                    condition = QUOTE(_player call FUNC(canClearBrush));
                    // Wait a frame to handle "Do When releasing action menu key" option
                    statement = QUOTE([ARR_2({_this call FUNC(clearBrush)},_player)] call CBA_fnc_execNextFrame);
                    exceptions[] = {};
                    showDisabled = 0;
                    icon = "\a3\modules_f\data\hideterrainobjects\icon32_ca.paa";
                };
            };
        };
    };
};
