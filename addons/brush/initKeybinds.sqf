#include "script_component.hpp"
["Brush Clearing", QGVAR(brushClearing), "Clear Brush", {
    private _player = ACE_player;

    // Clear brush if possible
    if (_player call FUNC(canClearBrush)) then {
        _player call FUNC(clearBrush);
    };
}, {}, [-1, [false, false, false]]] call CBA_fnc_addKeybind; // UNBOUND
