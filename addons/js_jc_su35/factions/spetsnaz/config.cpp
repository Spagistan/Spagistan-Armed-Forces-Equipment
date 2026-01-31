class CfgPatches {
    class su35_spetsnaz {
        addonRootClass = "JS_JC_SU35";
        units[] = {"JS_JC_SU35_spetsnaz"};
        requiredAddons[] = {"JS_JC_SU35"};
        name = "SU35 Spetsnaz Faction Support (Contact)";
        skipWhenMissingDependencies = 1;
        weapons[] = {};
    };
};
class CfgVehicles {
    class JS_JC_SU35;
    class JS_JC_SU35_spetsnaz: JS_JC_SU35 {
        faction = "OPF_R_F";
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
                faction = "OPF_R_F";
            };
            class RussianAFSkyBlue {
                displayName = "Russian AF Sky Blue";
                author = "John_Spartan & Saul";
                textures[] = {"\js_jc_su35\data\Su35_hull_SKY_co.paa", "\js_jc_su35\data\Su35_misc_sky_co.paa"};
                faction = "OPF_R_F";
            };
        };
        textureList[] = {"RussianAFGreyDigital", 1, "RussianAFSkyBlue", 0};
    };
};
