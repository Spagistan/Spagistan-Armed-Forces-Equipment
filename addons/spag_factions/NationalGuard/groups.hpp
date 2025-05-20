
class SpagistanNG {
    name = "Spagistan National Guard";

    class Infantry {
        name = "Infantry";
        
        class Fireteam {

            faction = QUOTE(NGFACTION);
            name = "Fireteam";
            side = 2;
            
            class unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 2;
                vehicle = "NG_Soldier_TeamLeader";
            };
            class unit1 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "NG_Soldier_AR";
            };
            class unit2 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "NG_Soldier_Grenadier";
            };
            class unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 2;
                vehicle = "NG_Soldier_Rifleman";
            };

        };
    };
};
