class Extended_PreStart_EventHandlers {
    class ADDON {
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\common\XEH_preStart.sqf'";
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\common\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
		init = "call compile preProcessFileLineNumbers '\z\spag\addons\common\XEH_postInit.sqf'";
    };
};
