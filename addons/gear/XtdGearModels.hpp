class xtdGearModels
    {
        class CfgWeapons
        {
            class spag_tee
            {
                label = "Combat Uniform (Spagpat/Tee)";
                options[] = {"Variant"};
                class Variant
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Olive", "Telnyashka"
                    };
                };
            };
            class spag_sweater
            {
                label = "Combat Uniform (Spagpat/Sweater)";
                options[] = {"Variant"};
                class Variant
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Standard", "Winter", "Mixed 1", "Mixed 2"
                    };
                };
            };
            class sporka
            {
                label = "Gorka-R (Spagpat)";
                options[] = {"Variant"};
                class Variant
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Full", "Half", "Winter", "Mix"
                    };
                };
            };

            /*
            class M97_RHS_SAF
            {
                label = "M97";
                options[] = {"Camo", "Extras"};
                class Camo
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Winter"
                    };
                };
                class Extras
                {
                    values[] =
                    {
                        "Tan ESS"
                    };
                };
            }; */
        };
    };
