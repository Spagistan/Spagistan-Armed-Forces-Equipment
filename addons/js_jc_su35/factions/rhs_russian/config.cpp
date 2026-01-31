class CfgPatches {
    class su35_rhs_russian {
        addonRootClass = "JS_JC_SU35";
        units[] = {"JS_JC_SU35_rhs"};
        requiredAddons[] = {"JS_JC_SU35", "rhs_air"};
        name = "SU35 RHS Russian Faction Support (VVS Camo)";
        skipWhenMissingDependencies = 1;
        weapons[] = {};
    };
};
class CfgVehicles {
    class JS_JC_SU35;
    class JS_JC_SU35_rhs: JS_JC_SU35 {
        faction = "rhs_faction_vvs_c";
        hiddenSelectionsTextures[] = {
            "\js_jc_su35\data\Su35_hull_co.paa",
            "\js_jc_su35\data\Su35_misc_co.paa",
            "\js_jc_su35\data\Su35_cockpit1_co.paa",
            "\js_jc_su35\data\su35_cockpit2_co.paa",
            "\js_jc_su35\data\Su35_glass_ca.paa",
            "\js_jc_su35\data\Su35_ladder_co.paa",
            "\js_jc_su35\data\su35_clear_ca.paa",
            "\js_jc_su35\data\su35_clear_ca.paa",
            "\js_jc_su35\data\su35_clear_ca.paa",
            "\js_jc_su35\data\su35_clear_ca.paa",
            "\js_jc_su35\data\su35_clear_ca.paa",
            "\js_jc_su35\data\su35_clear_ca.paa",
            "",
            "",
            "\js_jc_su35\data\su35_engine_fire_ca.paa",
            "\js_jc_su35\data\su35_engine_fire_ca.paa",
            "\js_jc_su35\data\su35_afterburner_ca.paa",
            "\js_jc_su35\data\su35_afterburner_ca.paa",
            ""
        };
        class textureSources {
            class RussianAFGreyDigital {
                displayName = "Russian AF Grey DIGITAL";
                author = "John_Spartan & Saul";
                textures[] = {"\js_jc_su35\data\Su35_hull_co.paa", "\js_jc_su35\data\Su35_misc_co.paa"};
                faction = "rhs_faction_vvs_c";
            };
            class RussianAFSkyBlue {
                displayName = "Russian AF Sky Blue";
                author = "John_Spartan & Saul";
                textures[] = {"\js_jc_su35\data\Su35_hull_SKY_co.paa", "\js_jc_su35\data\Su35_misc_sky_co.paa"};
                faction = "rhs_faction_vvs_c";
            };
        };
        textureList[] = {"RussianAFGreyDigital", 1, "RussianAFSkyBlue", 0};
    };
};
