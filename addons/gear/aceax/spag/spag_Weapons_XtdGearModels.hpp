            class spag_tee
            {
                label = "M10 (SPAG/Tee)";
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
                label = "M10 (SPAG/Sweater)";
                options[] = {"Variant"};
                class Variant
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Spagpat", "Winter", "Mixed 1", "Mixed 2"
                    };
                };
            };
            class sporka
            {
                label = "Gorka-R (SPAG)";
                options[] = {"Variant", "Gloves"};
                class Variant
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Full", "Half", "Winter", "Mix"
                    };
                };
                class Gloves
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Yes", "No"
                    };
                };
            };

            class spag_helm
            {
                label = "M97 (SPAG)";
                options[] = {"Camo", "Extras"};
                class Camo
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Spagpat", "Spagpat Winter"
                    };
                };
                class Extras
                {
				    alwaysSelectable = 1;
				    values[] =
                    {
				        "None",
				        "ESS Cov",
				        "Tan ESS Cov",
				        "ESS",
				        "Tan ESS"
				    };
                };
            };
            class spag_cap
            {
                label = "Patrol Cap (SPAG)";
                options[] = {"Variant"};
                class Variant
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Spagpat", "Spagpat Air"
                    };
                };
            };
            class spag_beret
            {
                label = "Beret (SPAG)";
                options[] = {"Color", "Flash"};
                class Color
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Green", "Red"
                    };
                };
                class Flash
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Yes", "No"
                    };
                };
            };
            class spag_vest
            {
                label = "M-12 Vest (SPAG)";
                options[] = {"Variant"};
                class Variant
                {
                    alwaysSelectable = 1;
                    values[] =
                    {
                        "Spagpat", "Spagpat Air"
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
