#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_trenches", "ace_gestures"};
        author = "Ampersand";
        authors[] = {"Ampersand"};
        url = "https://github.com/ampersand38/Brush-Clearing";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgVersioning.hpp"
