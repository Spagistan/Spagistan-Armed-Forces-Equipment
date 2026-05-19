class ACE_Tags {
    class cogBlack {
        displayName = "Cog";  // Name of your tag being displayed in the interaction menu
        requiredItem = "ACE_SpraypaintBlack";  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = {"z\spag\addons\common\data\cogBlack.paa"};  // List of texture variations (one is randomly selected when tagging)
        icon = "z\spag\addons\common\data\cogBlack.paa";  // Icon being displayed in the interaction menu
        tagModel = "ace_tagging_texture1m"; // Optional: The 3D Model that will be spawned with the texture on it, can either be CfgVehicles classname or P3D file path.
        condition = "true"; // Optional: Condition for the Spraytag Action. Needs to return bool.
    };
        class cogWhite {
        displayName = "Cog";
        requiredItem = "ACE_SpraypaintWhite";
        textures[] = {"z\spag\addons\common\data\cogWhite.paa"};
        icon = "z\spag\addons\common\data\cogWhite.paa";
        tagModel = "ace_tagging_texture1m";
        condition = "true";
    };
        class cogBlue {
        displayName = "Cog";
        requiredItem = "ACE_SpraypaintBlue";
        textures[] = {"z\spag\addons\common\data\cogBlue.paa"};
        icon = "z\spag\addons\common\data\cogBlue.paa";
        tagModel = "ace_tagging_texture1m";
        condition = "true";
    };
        class cogRed {
        displayName = "Cog";
        requiredItem = "ACE_SpraypaintRed";
        textures[] = {"z\spag\addons\common\data\cogRed.paa"};
        icon = "z\spag\addons\common\data\cogRed.paa";
        tagModel = "ace_tagging_texture1m";
        condition = "true";
    };
        class cogGreen {
        displayName = "Cog";
        requiredItem = "ACE_SpraypaintGreen";
        textures[] = {"z\spag\addons\common\data\cogGreen.paa"};
        icon = "z\spag\addons\common\data\cogGreen.paa";
        tagModel = "ace_tagging_texture1m";
        condition = "true";
    };
        class cogYellow {
        displayName = "Cog";
        requiredItem = "ACE_SpraypaintYellow";
        textures[] = {"z\spag\addons\common\data\cogYellow.paa"};
        icon = "z\spag\addons\common\data\cogYellow.paa";
        tagModel = "ace_tagging_texture1m";
        condition = "true";
    };
};
