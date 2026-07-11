class ACE_FortifyToken;
class CBA_MiscItem_ItemInfo;

class spag_FortifyToken : ACE_FortifyToken {
    author = "ACE Team/Spagistan Mod Team" ;
    displayName = "Building Materials";
    descriptionShort = "Materials to build with the fortify tool.";
    scopeArsenal = 2;
    picture = QPATHTOF(data\items\buildMat);
    class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
};
/*
class InventoryItem_Base_F;
class wallet_Uzbek: ItemCore
{
    scope=2;
	scopeCurator=2;
    author="Spagistan Mod Team";
    displayName="Wallet, Uzbek";
	editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_Wallet_01_F.jpg";
    model = "\a3\Props_F_Orange\Items\Documents\Wallet_01_F.p3d";
    editorSubcategory = "EdSubcat_InventoryItems";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\items\uzbek_wallet)};
    class ItemInfo : InventoryItem_Base_F
    {
    mass = 4;
    };
};
*/
