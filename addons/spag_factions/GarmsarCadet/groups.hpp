 class SpagistanGC {
    name = "Spagistan Garmsar Cadets";

    class Infantry {
        name = "Infantry";

        class i_spagf_infantry_garmsar_cadet_squad {
            name = "Garmsar Cadet Squad";
            side = 2;
            faction = QUOTE(GCFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Sergeant_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
        };

        class i_spagf_infantry_garmsar_cadet_team {
            name = "Garmsar Cadet Team ";
            side = 2;
            faction = QUOTE(GCFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Sergeant_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
        };

    };

    class SpecOps {
        name = "Special Forces";

    };

    class Motorized {
        name = "Motorized Infantry";

        class i_spagf_motorized_garmsar_truck_team {
            name = "Garmsar Truck Team ";
            side = 2;
            faction = QUOTE(GCFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Boys_Truck_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 2;
                vehicle = "I_SPAGF_Garsmar_Sergeant_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Cadet_01";
            };
        };

    };

    class Motorized_MTP {
        name = "Motorized Infantry (MTP)";

    };

    class Support {
        name = "Support Infantry";

    };

    class Mechanized {
        name = "Mechanized Infantry";

    };

    class Armored {
        name = "Armor";

    };

    class Artillery {
        name = "Artillery";

        class i_spagf_artillery_garmsar_mortar_section {
            name = "Garmsar Mortar Section ";
            side = 2;
            faction = QUOTE(GCFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Boys_Mortar_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "I_SPAGF_Garmsar_Boys_Mortar_01";
            };
        };

    };

    class Naval {
        name = "Naval";

    };

    class Air {
        name = "Air";

    };


};
