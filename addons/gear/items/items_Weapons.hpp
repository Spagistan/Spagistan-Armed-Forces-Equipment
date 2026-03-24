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
