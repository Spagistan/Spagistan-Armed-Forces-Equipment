// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgWeapons.hpp"
class CfgAmmo
{
    class rhs_ammo_3vo18;
    class tbd_ammo_120mm_he_cluster;

    class spag_ammo_82mm_he_cluster:tbd_ammo_120mm_he_cluster{
        submunitionAmmo = "rhs_ammo_VOG30";
    };
    class spag_ammo_3vo18_garmsar : rhs_ammo_3vo18
    {
        model = "\A3\Weapons_f\empty.p3d";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        mixed_shells[] =
        {
            "rhs_ammo_3vo18",55,
            "rhs_ammo_d832du",25,
            "spag_ammo_82mm_he_cluster",20
        };
    };
};

class CfgMagazines
{
    class rhs_mag_3vo18_10;

    class spag_mag_3vo18_10_garmsar : rhs_mag_3vo18_10
    {
        displayName = "82mm (Mixed)";
        ammo = "spag_ammo_3vo18_garmsar";
    };
};


class CfgFunctions
{
    class spag
    {
        class mortar
        {
            file = "\z\spag\addons\garmsar_boys\functions";

            class randomShell {};
        };
    };
};

class Extended_FiredBIS_EventHandlers
{
    class I_Spag_Cadet_Mortar
    {
        class spag
        {
            firedBIS = "_this call spag_fnc_randomShell;";
        };
    };
};
