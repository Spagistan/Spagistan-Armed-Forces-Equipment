#define BASE_SPAGISTAN_CONFIG\
    author = "CParadis";\
    _generalMacro = "Spagistan_Unit";\
    faction = QUOTE(SPAGFACTION);\
    editorCategory = "Spagistan_Category";\
    side = 2;\
    uniformClass = "U_S_Uniform_SPAGPAT";\

#define SPAG_MILITA_TO_CIV_CONFIG\
    side = 3;\
    scope = 2;\
    scopeCurator = 2;\
    faction = "C_SPAG_Civ";\
    editorCategory = "Spagistani_Civilian_Category";\
    attendant = 0;\
    backpack = "";\
    weapons[] = {};\
    respawnWeapons[] = {};\
    magazines[] = {};\
    respawnMagazines[] = {}; \


#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_5(a) a, a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a
#define ITEM_7(a) a, a, a, a, a, a, a
#define ITEM_8(a) a, a, a, a, a, a, a, a
#define ITEM_9(a) a, a, a, a, a, a, a, a, a
#define ITEM_10(a) a, a, a, a, a, a, a, a, a, a
#define ITEM_11(a) a, a, a, a, a, a, a, a, a, a, a
#define ITEM_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_16(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_17(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_18(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_19(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ITEM_20(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

/// Equipment list macros definition ///

#define backpack_xx(a,b) class _xx_##a {backpack = #a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = #a; count = b;}
#define item_xx(a,b) class _xx_##a {name = #a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = #a; count = b;}
