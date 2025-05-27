class UZAF {
    name = "Uzbek Armed Forces";

    class Infantry {
        name = "Infantry";

        class UZAF_infantry_fire_team_lmg {
            name = "Fire Team (LMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_fire_team_gpmg {
            name = "Fire Team (GPMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_fire_team_mk {
            name = "Fire Team (MK)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Marksman_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_fire_team_gl {
            name = "Fire Team (GL)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Grenadier_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
        };

        class UZAF_infantry_fire_team_lat {
            name = "Fire Team (LAT)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_sentry_gl {
            name = "Sentry (GL)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Grenadier_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_mat_team {
            name = "MAT Team";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Anti_tank_RPG_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_tank_Assistant_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_manpad_team {
            name = "MANPAD Team";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_antiair.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_air_9K38_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_air_9K38_01";
            };
        };

        class UZAF_infantry_section_lmg {
            name = "Section (LMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_section_gpmg {
            name = "Section (GPMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_tank_RPG_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class ua_kzh_I_Sentry_LAT {
            name = "Sentry (LAT)";
            side = 0;
            faction = "ua_kazakhstan";
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_section_gpmg_mat {
            name = "Section (GPMG/MAT)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_tank_RPG_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_tank_Assistant_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_sentry {
            name = "Sentry";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_sentry_lmg {
            name = "Sentry (LMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_sentry_gpmg {
            name = "Sentry (GPMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
        };

        class UZAF_infantry_sentry_mk {
            name = "Sentry (MK)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Marksman_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_infantry_border_guard_section {
            name = "Border Guard Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Officer_Field_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
        };

        class UZAF_infantry_border_guard_team {
            name = "Border Guard Team";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Officer_Field_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
        };

        class UZAF_infantry_border_guard_patrol {
            name = "Border Guard Patrol";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Border_Guard_01";
            };
        };

    };

    class SpecOps {
        name = "SpecOps";

        class UZAF_specops_fire_team_lmg {
            name = "Fire Team (LMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_specops_fire_team_gpmg {
            name = "Fire Team (GPMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_specops_fire_team_mk {
            name = "Fire Team (MK)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Marksman_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_specops_fire_team_demo {
            name = "Fire Team (Demo)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Engineer_03";
            };
        };

        class UZAF_specops_fire_team_medic {
            name = "Fire Team (Medic)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Medic_02";
            };
        };

        class UZAF_specops_patrol_lat {
            name = "Patrol (LAT)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
        };

        class UZAF_specops_section_lmg {
            name = "Section (LMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Engineer_03";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Medic_02";
            };
        };

        class UZAF_specops_section_lmg_gpmg {
            name = "Section (LMG/GPMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Engineer_03";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Medic_02";
            };
        };

        class UZAF_specops_section_gpmg {
            name = "Section (GPMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Engineer_03";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Medic_02";
            };
        };

        class UZAF_specops_section_lmg_mk {
            name = "Section (LMG/MK)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Engineer_03";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Marksman_03";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Medic_02";
            };
        };

        class UZAF_specops_section_gpmg_mk {
            name = "Section (GPMG/MK)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Engineer_03";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Marksman_03";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Medic_02";
            };
        };

        class UZAF_specops_patrol {
            name = "Patrol";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_specops_patrol_lmg {
            name = "Patrol (LMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_specops_patrol_gpmg {
            name = "Patrol (GPMG)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

    };

    class Motorized {
        name = "Motorized";

        class UZAF_motorized_lmg_team_uaz {
            name = "LMG Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
        };

        class UZAF_motorized_gpmg_team_uaz {
            name = "GPMG Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_mk_team_uaz {
            name = "MK Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Marksman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_manpad_team_uaz {
            name = "MANPAD Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_air_9K38_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_gl_team_uaz {
            name = "GL Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Grenadier_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_lat_team_uaz {
            name = "LAT Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_mat_team_uaz {
            name = "MAT Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_tank_RPG_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_tank_Assistant_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_gpmg_section_uaz {
            name = "GPMG Section (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-7,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit2 {
                position[] = {-5,-7,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit3 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit4 {
                position[] = {15,-17,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit5 {
                position[] = {-15,-17,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit6 {
                position[] = {20,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit7 {
                position[] = {-20,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit8 {
                position[] = {25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit9 {
                position[] = {-20,-32,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
        };

        class UZAF_motorized_lmg_section_uaz {
            name = "LMG Section (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-7,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit2 {
                position[] = {-5,-7,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit3 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit4 {
                position[] = {-10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit5 {
                position[] = {15,-17,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit6 {
                position[] = {-15,-17,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit7 {
                position[] = {20,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit8 {
                position[] = {25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit9 {
                position[] = {-20,-32,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
        };

        class UZAF_motorized_gpmg_section_ural {
            name = "GPMG Section (Ural)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {-5,-7,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit1 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit2 {
                position[] = {15,-17,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit3 {
                position[] = {-15,-17,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit4 {
                position[] = {20,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit5 {
                position[] = {-20,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit6 {
                position[] = {25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit7 {
                position[] = {-25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Ural_4320_01";
            };
            class Unit8 {
                position[] = {25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
        };

        class UZAF_motorized_lmg_section_ural {
            name = "LMG Section (Ural)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {-5,-7,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit1 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit2 {
                position[] = {15,-17,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit3 {
                position[] = {-15,-17,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit4 {
                position[] = {20,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit5 {
                position[] = {-20,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit6 {
                position[] = {25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit7 {
                position[] = {-25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Ural_4320_01";
            };
            class Unit8 {
                position[] = {25,-27,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
        };

        class UZAF_motorized_lmg_team_matv_unarmed {
            name = "LMG Team (M-ATV Unarmed)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_Unarmed_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit3 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_lmg_team_matv_crows_m2 {
            name = "LMG Team (M-ATV CROWS/M2)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_CROWS_M2_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
        };

        class UZAF_motorized_gpmg_team_matv_unarmed {
            name = "GPMG Team (M-ATV Unarmed)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_Unarmed_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit3 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_motorized_gpmg_team_matv_crows_m2 {
            name = "GPMG Team (M-ATV CROWS/M2)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_CROWS_M2_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
        };

    };

    class Motorized_MTP {
        name = "Motorized Infantry (MTP)";

        class UZAF_motorized_mtp_sf_lmg_team_uaz {
            name = "SF LMG Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_motorized_mtp_sf_gpmg_team_uaz {
            name = "SF GPMG Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_motorized_mtp_sf_mk_team_uaz {
            name = "SF MK Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_Open_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Marksman_03";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_motorized_mtp_sf_lat_team_uaz {
            name = "SF LAT Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_motorized_mtp_sf_demo_team_uaz {
            name = "SF Demo Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Engineer_03";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
        };

        class UZAF_motorized_mtp_sf_gpmg_team_matv_unarmed {
            name = "SF GPMG Team (M-ATV Unarmed)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_Unarmed_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
        };

        class UZAF_motorized_mtp_sf_gpmg_team_matv_crows_m2 {
            name = "SF GPMG Team (M-ATV CROWS/M2)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_CROWS_M2_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_02";
            };
        };

        class UZAF_motorized_mtp_sf_lmg_team_matv_unarmed {
            name = "SF LMG Team (M-ATV Unarmed)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_Unarmed_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
        };

        class UZAF_motorized_mtp_sf_lmg_team_matv_crows_m2 {
            name = "SF LMG Team (M-ATV CROWS/M2)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MATV_CROWS_M2_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_03";
            };
        };

        class UZAF_motorized_mtp_sf_demo_team_uaz_copy_1 {
            name = "SF Medic Team (UAZ)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_UAZ_3151_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_03";
            };
            class Unit2 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_LAT_01";
            };
            class Unit3 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Assaulter_AK_105_01";
            };
            class Unit4 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Medic_02";
            };
        };

    };

    class Support {
        name = "Support";

        class UZAF_support_sapper_team {
            name = "Sapper Team";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Engineer_01";
            };
            class Unit2 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit3 {
                position[] = {-5,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Engineer_01";
            };
        };

    };

    class Mechanized {
        name = "Mechanized";

        class UZAF_mechanized_gpmg_section_btr_80 {
            name = "GPMG Section (BTR-80)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_BTR_80_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
        };

        class UZAF_mechanized_gpmg_section_btr_70 {
            name = "GPMG Section (BTR-70)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_BTR_70_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Anti_tank_RPG_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
        };

        class UZAF_mechanized_lmg_section_btr_70 {
            name = "LMG Section (BTR-70)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_BTR_70_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_mechanized_lmg_section_btr_80 {
            name = "LMG Section (BTR-80)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_BTR_80_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit8 {
                position[] = {25,-25,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_mechanized_gpmg_section_bmp2 {
            name = "GPMG Section (BMP2)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_BMP_2_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Machinegunner_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

        class UZAF_mechanized_lmg_section_bmp2 {
            name = "LMG Section (BMP2)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_BMP_2_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Section_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_RPG_18_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Team_Leader_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Autorifleman_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AKM_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Rifleman_AK_74_01";
            };
        };

    };

    class Armored {
        name = "Armored";

        class UZAF_armored_t72b_section {
            name = "T-72B Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_T72B_obr_1985g_01";
            };
            class Unit1 {
                position[] = {10,-17,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_T72B_obr_1984g_01";
            };
        };

        class UZAF_armored_t80b_section {
            name = "T-80B Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_T80B_01";
            };
            class Unit1 {
                position[] = {7,-14,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_T80B_01";
            };
        };

    };

    class Artillery {
        name = "Artillery";

        class UZAF_artillery_2s1_section_direct_fire {
            name = "2S1 Section (Direct Fire)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_2S1_Direct_Fire_02";
            };
            class Unit1 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_2S1_Direct_Fire_02";
            };
        };

        class UZAF_artillery_2a18m_d30a_at_section {
            name = "2A18M (D-30A) AT Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_2A18M_D30A_AT_01";
            };
            class Unit1 {
                position[] = {9,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_2A18M_D30A_AT_01";
            };
        };

        class UZAF_artillery_podnos_section {
            name = "Podnos Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_2B14_1Podnos_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_2B14_1Podnos_01";
            };
        };

        class UZAF_artillery_bm_21_section {
            name = "BM-21 Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_BM_21_01";
            };
            class Unit1 {
                position[] = {5,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_BM_21_01";
            };
        };

        class UZAF_artillery_2s3m1_section {
            name = "2S3M1 Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_2S3M1_01";
            };
            class Unit1 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_2S3M1_01";
            };
        };

        class UZAF_artillery_2s3m1_section_direct_fire {
            name = "2S3M1 Section (Direct Fire)";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_2S3M1_Direct_Fire_01";
            };
            class Unit1 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_2S3M1_Direct_Fire_01";
            };
        };

        class UZAF_artillery_2a18m_d30a_section {
            name = "2A18M (D-30A) Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_2A18M_D30A_02";
            };
            class Unit1 {
                position[] = {9,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_2A18M_D30A_02";
            };
        };

        class UZAF_artillery_2s1_section {
            name = "2S1 Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_2S1_01";
            };
            class Unit1 {
                position[] = {10,-12,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_2S1_01";
            };
        };

        class UZAF_artillery_zu_23_2section {
            name = "ZU-23-2 Section";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_ZU_23_2_01";
            };
            class Unit1 {
                position[] = {6,-9,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_ZU_23_2_01";
            };
            class Unit2 {
                position[] = {-6,-9,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_V2_01";
            };
        };

    };

    class Naval {
        name = "Naval";

    };

    class Air {
        name = "Air";

        class UZAF_air_mig_29s_wing {
            name = "MiG-29S Wing";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_MiG_29S_01";
            };
            class Unit1 {
                position[] = {17,-29,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_MiG_29S_01";
            };
        };

        class UZAF_air_su_25_wing {
            name = "Su-25 Wing";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Su_25_01";
            };
            class Unit1 {
                position[] = {22,-23,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Su_25_01";
            };
        };

        class UZAF_air_mi_35_wing {
            name = "Mi-35 Wing";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Mi_35_01";
            };
            class Unit1 {
                position[] = {23,-30,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Mi_35_01";
            };
        };

        class UZAF_air_mi_171sh_wing {
            name = "Mi-171Sh Wing";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Mi_171Sh_01";
            };
            class Unit1 {
                position[] = {31,-38,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Mi_171Sh_01";
            };
        };

        class UZAF_air_mi_8mtv_3wing {
            name = "Mi-8MTV-3 Wing";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_Mi_8MTV_3_01";
            };
            class Unit1 {
                position[] = {31,-38,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "UZAF_Mi_8MTV_3_01";
            };
        };

        class UZAF_air_gj_5 {
            name = "GJ-5";
            side = 0;
            faction = QUOTE(UZFACTION);
            icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "UZAF_GJ_5_01";
            };
        };

    };

    class Infantry_Para {
        name = "Infantry_Para";

    };


};