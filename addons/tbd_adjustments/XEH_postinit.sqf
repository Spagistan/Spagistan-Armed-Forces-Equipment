[] spawn {
    sleep 0.01; 
    
    // --------------------------------------------------------------------------
    // 1. DEFINE YOUR VEHICLE EXTENSION CONFIGURATION
    // 
    // Format: 
    // [
    //     [
    //         "Vehicle_Regex", 
    //         ["TargetMod1_Prefix", [X, Y, Z, Rot]], 
    //         ["TargetMod2_Prefix", [X, Y, Z, Rot]], 
    //         ...
    //     ],
    //     ... (next vehicle block)
    // ]
    // --------------------------------------------------------------------------
    private _extensionConfig = [
        
        // --- 1. I_SPAGF_Ural_4320_01 ---
        [
            "I_SPAGF_Ural_4320_01.*",
            ["tbd_d20_advanced", [0, -3.35, -1.66, -0.195]], 
            ["tbd_2b9_vasilek", [0, -2.7, -1.2, 15]],  
            ["tbd_mt12_rapira", [0, -3.18, -0.62, -0.18]], 
            ["tbd_type63_advanced", [0, -3.1, -1.66, -0.457]] 
        ],
        [
            "spag_ural.*",
            ["tbd_d20_advanced", [0, -3.35, -1.66, -0.195]], 
            ["tbd_2b9_vasilek", [0, -2.7, -1.2, 15]],  
            ["tbd_mt12_rapira", [0, -3.18, -0.62, -0.18]], 
            ["tbd_type63_advanced", [0, -3.1, -1.66, -0.457]] 
        ],
        [
            "spag_kraz.*",
            ["tbd_d20_advanced", [0, -3.35, -1.66, -0.195]], 
            ["tbd_2b9_vasilek", [0, -2.7, -1.2, 15]],  
            ["tbd_mt12_rapira", [0, -3.18, -0.62, -0.18]], 
            ["tbd_type63_advanced", [0, -3.1, -1.66, -0.457]] 
        ]
    ];
    
    {
        private _vehicleConfig = _x;
        private _vehicleRegex = _vehicleConfig select 0;
        
        // Get the list of all mod-specific attachment definitions for the current vehicle
        private _modSpecificConfigs = _vehicleConfig select [1, (count _vehicleConfig) - 1];

        // Loop through each target mod defined for this vehicle
        {
            private _modPrefix = _x select 0;
            private _posAndRot = _x select 1; // [X, Y, Z, Rot]

            // Convert [X, Y, Z, Rot] into the final required list format: [Regex, [X, Y, Z], Rot]
            private _newEntry = [
                _vehicleRegex, 
                _posAndRot select [0, 3], // Takes [X, Y, Z]
                _posAndRot select 3       // Takes Rot
            ];

            // Construct the full global variable name (e.g., tbd_2b9_vasilek_towingList)
            private _targetVarName = format ["%1_towingList", _modPrefix];
            
            // Get the existing list (defaults to [] if the mod isn't loaded)
            private _existingList = missionNamespace getVariable [_targetVarName, []];
            
            // Check if the list was successfully initialized by the base mod (count > 0)
            if (count _existingList > 0) then {
                
                // Add the specific towing entry to the mod's list
                _existingList pushBack _newEntry; 
                
                // Write the modified list back to the mission namespace globally
                missionNamespace setVariable [_targetVarName, _existingList, true];
                
                // Optional: Log successful extension
                // diag_log format ["Extended %1 with vehicle %2", _targetVarName, _vehicleRegex];
            };
            
        } forEach _modSpecificConfigs;
    } forEach _extensionConfig;

    diag_log format ["Universal Towing extension completed. Processed %1 vehicle configurations.", count _extensionConfig];
};
