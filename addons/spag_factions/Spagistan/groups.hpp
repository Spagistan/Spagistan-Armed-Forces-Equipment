
class SpagistanAF {
    name = "Spagistan Armed Forces";
    
    class Infantry {
        name = "Infantry";

        class Fireteam {

            faction = QUOTE(SPAGFACTION);
            name = "Fireteam";
            side = 2;
            
            class unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 2;
                vehicle = "S_Soldier_TL";
            };
            class unit1 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_AR";
            };
            class unit2 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_Grenadier";
            };
            class unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_Rifleman";
            };
        };

        class RifleSquad {

            faction = QUOTE(SPAGFACTION);
            name = "Rifle Squad";
            side = 2;

            class unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 2;
                vehicle = "S_Soldier_SL";
            };
            class unit1 {
                position[] = {0,15,0};
                rank = "CORPORAL";
                side = 2;
                vehicle = "S_Soldier_TL";
            };
            class unit2 {
                position[] = {5,10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_AR";
            };
            class unit3 {
                position[] = {-5,10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_Grenadier";
            };
            class unit4 {
                position[] = {-10,5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_Rifleman";
            };
            class unit5 {
                position[] = {0,-15,0};
                rank = "CORPORAL";
                side = 2;
                vehicle = "S_Soldier_TL";
            };
            class unit6 {
                position[] = {-5,-20,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_AR";
            };
            class unit7 {
                position[] = {5,-20,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_Grenadier";
            };
            class unit8 {
                position[] = {10,-25,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "S_Soldier_Rifleman";
            };


        };
    };
};
