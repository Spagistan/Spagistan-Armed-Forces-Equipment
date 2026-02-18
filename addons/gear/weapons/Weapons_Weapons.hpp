class rhs_weap_ak74m;
class rhs_weap_ak74m_gp25;
class rhs_weap_rpk74m;
class rhs_weap_ak103;
class rhs_weap_ak103_npz;
class rhs_weap_ak103_folded;
class rhs_weap_ak103_gp25;
class rhs_weap_ak103_gp25_npz;
class rhs_weap_ak103_zenitco01;
class rhs_weap_ak103_zenitco01_folded;
class rhs_weap_ak103_zenitco01_npz;
class rhs_weap_ak103_zenitco01_b33;
class rhs_weap_ak104;
class rhs_weap_ak104_npz;
class rhs_weap_ak104_folded;
class rhs_weap_ak104_zenitco01: rhs_weap_ak104
{
};


class rhs_weap_ak104_zenitco01_npz: rhs_weap_ak104_zenitco01
	{
		scopeArsenal=2;
		displayName="AK-104 (Zenitco/B-13)";
	};
	class rhs_weap_ak104_zenitco01_b33: rhs_weap_ak104_zenitco01
	{
	};
	class rhs_weap_ak105;
	class rhs_weap_ak105_npz;
	class rhs_weap_ak105_folded;
	class rhs_weap_ak105_zenitco01: rhs_weap_ak105
	{
	};
	class rhs_weap_ak105_zenitco01_npz: rhs_weap_ak105_zenitco01
	{
		scopeArsenal=2;
		displayName="AK-105 (Zenitco/B-13)";
	};
	class rhs_weap_ak105_zenitco01_b33: rhs_weap_ak105_zenitco01
	{
	};
	class rhs_weap_ak74m;
	class rhs_weap_ak74m_npz;
	class rhs_weap_ak74m_folded;
	class rhs_weap_ak74m_gp25: rhs_weap_ak74m
	{
	};
	class rhs_weap_ak74m_gp25_npz: rhs_weap_ak74m_gp25
	{
	};
	class rhs_weap_ak74m_zenitco01: rhs_weap_ak74m
	{
	};
	class rhs_weap_ak74m_zenitco01_npz: rhs_weap_ak74m_zenitco01
	{
		scopeArsenal=2;
		displayName="AK-74M (Zenitco/B-13)";
	};
	class rhs_weap_ak74m_zenitco01_b33: rhs_weap_ak74m_zenitco01
	{
	};
	class bcb_weap_ak103_zenitco01_tan: rhs_weap_ak103_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco, Tan)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_folded_tan";
		rhs_npz="bcb_weap_ak103_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_tan_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_tan_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_tan_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_tan";
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak103_zenitco01_folded_tan: rhs_weap_ak103_zenitco01_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco Folded, Tan)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_tan";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_folded_tan_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_folded_tan_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_folded_tan_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_folded_tan";
	};
	class bcb_weap_ak103_zenitco01_tan_grip1: bcb_weap_ak103_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_tan_afg: bcb_weap_ak103_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_folded_tan_grip1: bcb_weap_ak103_zenitco01_folded_tan
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_folded_tan_afg: bcb_weap_ak103_zenitco01_folded_tan
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_tan_npz: rhs_weap_ak103_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		displayName="AK-103 (Zenitco/B-13, Tan)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="rhs_weap_ak103_zenitco01";
		baseWeapon="bcb_weap_ak103_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_tan_npz_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_tan_npz_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_tan_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_npz_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak103_zenitco01_tan_npz_grip1: bcb_weap_ak103_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_tan_npz_afg: bcb_weap_ak103_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_tan_b33: rhs_weap_ak103_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_b33_ca.paa";
		displayName="AK-103 (Zenitco/B-33, Tan)";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak103_zenitco01_b33";
		baseWeapon="bcb_weap_ak103_zenitco01_tan_b33";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_tan_b33_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_tan_b33_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_tan_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_b33_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak103_zenitco01_tan_b33_grip1: bcb_weap_ak103_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_tan_b33_afg: bcb_weap_ak103_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_tan: rhs_weap_ak104_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_ca.paa";
		displayName="AK-104 (Zenitco, Tan)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK104_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="bcb_weap_ak104_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_tan_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_tan_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_tan_grip1";
		baseWeapon="bcb_weap_ak104_zenitco01_tan";
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak104_zenitco01_tan_grip1: bcb_weap_ak104_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_tan_afg: bcb_weap_ak104_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_tan_npz: rhs_weap_ak104_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_npz_ca.paa";
		displayName="AK-104 (Zenitco/B-13, Tan)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK104_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="rhs_weap_ak104_zenitco01";
		baseWeapon="bcb_weap_ak104_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_tan_npz_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_tan_npz_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_tan_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_npz_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak104_zenitco01_tan_npz_grip1: bcb_weap_ak104_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_tan_npz_afg: bcb_weap_ak104_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_tan_b33: rhs_weap_ak104_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_b33_ca.paa";
		displayName="AK-104 (Zenitco/B-33, Tan)";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK104_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak104_zenitco01_b33";
		baseWeapon="bcb_weap_ak104_zenitco01_tan_b33";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_tan_b33_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_tan_b33_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_tan_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_b33_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak104_zenitco01_tan_b33_grip1: bcb_weap_ak104_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_tan_b33_afg: bcb_weap_ak104_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_tan: rhs_weap_ak105_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName="AK-105 (Zenitco, Tan)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK105_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="bcb_weap_ak105_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_tan_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_tan_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_tan_grip1";
		baseWeapon="bcb_weap_ak105_zenitco01_tan";
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak105_zenitco01_tan_grip1: bcb_weap_ak105_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_tan_afg: bcb_weap_ak105_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_tan_npz: rhs_weap_ak105_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName="AK-105 (Zenitco/B-13, Tan)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK105_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="rhs_weap_ak105_zenitco01";
		baseWeapon="bcb_weap_ak105_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_tan_npz_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_tan_npz_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_tan_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_npz_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak105_zenitco01_tan_npz_grip1: bcb_weap_ak105_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_tan_npz_afg: bcb_weap_ak105_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_tan_b33: rhs_weap_ak105_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_b33_ca.paa";
		displayName="AK-105 (Zenitco/B-33, Tan)";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK105_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak105_zenitco01_b33";
		baseWeapon="bcb_weap_ak105_zenitco01_tan_b33";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_tan_b33_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_tan_b33_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_tan_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_b33_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak105_zenitco01_tan_b33_grip1: bcb_weap_ak105_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_tan_b33_afg: bcb_weap_ak105_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_tan: rhs_weap_ak74m_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		displayName="AK-74M (Zenitco, Tan)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74m_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_tan_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_tan_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_tan_grip1";
		baseWeapon="bcb_weap_ak74m_zenitco01_tan";
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_grip1: bcb_weap_ak74m_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_afg: bcb_weap_ak74m_zenitco01_tan
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_npz: rhs_weap_ak74m_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		displayName="AK-74M (Zenitco/B-13, Tan)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74m_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="rhs_weap_ak74m_zenitco01";
		baseWeapon="bcb_weap_ak74m_zenitco01_tan_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_tan_npz_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_tan_npz_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_tan_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_npz_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_npz_grip1: bcb_weap_ak74m_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_npz_afg: bcb_weap_ak74m_zenitco01_tan_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_b33: rhs_weap_ak74m_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_b33_ca.paa";
		displayName="AK-74M (Zenitco/B-33, Tan)";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74m_co.paa",
			"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak74m_zenitco01_b33";
		baseWeapon="bcb_weap_ak74m_zenitco01_tan_b33";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_tan_b33_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_tan_b33_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_tan_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_b33_spray";
			Finish="ZENITCO TAN";
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_b33_grip1: bcb_weap_ak74m_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_tan_b33_afg: bcb_weap_ak74m_zenitco01_tan_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_t_spray: rhs_weap_ak103
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak103_folded_t_spray";
		rhs_npz="bcb_weap_ak103_t_spray_npz";
		baseWeapon="bcb_weap_ak103_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak103_npz_t_spray: rhs_weap_ak103_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (B-13, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak103_t_spray";
		baseWeapon="bcb_weap_ak103_npz_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak103_folded_t_spray: rhs_weap_ak103_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Folded, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak103_t_spray";
		baseWeapon="bcb_weap_ak103_folded_t_spray";
	};
	class bcb_weap_ak103_gp25_t_spray: rhs_weap_ak103_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_npz_t_spray";
		baseWeapon="bcb_weap_ak103_gp25_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak103_gp25_npz_t_spray: rhs_weap_ak103_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25/B-13, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_t_spray";
		baseWeapon="bcb_weap_ak103_gp25_npz_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak103_zenitco01_t_spray: rhs_weap_ak103_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_folded_t_spray";
		rhs_npz="bcb_weap_ak103_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak103_zenitco01_folded_t_spray: rhs_weap_ak103_zenitco01_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco Folded, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_t_spray";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_folded_t_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_folded_t_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_folded_t_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_folded_t_spray";
	};
	class bcb_weap_ak103_zenitco01_t_spray_grip1: bcb_weap_ak103_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t_spray_afg: bcb_weap_ak103_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_folded_t_spray_grip1: bcb_weap_ak103_zenitco01_folded_t_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_folded_t_spray_afg: bcb_weap_ak103_zenitco01_folded_t_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_t_spray_npz: rhs_weap_ak103_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		displayName="AK-103 (Zenitco/B-13, Desert Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="rhs_weap_ak103_zenitco01";
		baseWeapon="bcb_weap_ak103_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak103_zenitco01_t_spray_npz_grip1: bcb_weap_ak103_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t_spray_npz_afg: bcb_weap_ak103_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t_spray_b33: rhs_weap_ak103_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_b33_ca.paa";
		displayName="AK-103 (Zenitco/B-33, Desert Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak103_zenitco01_b33";
		baseWeapon="bcb_weap_ak103_zenitco01_t_spray_b33";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_b33_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak103_zenitco01_t_spray_b33_grip1: bcb_weap_ak103_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t_spray_b33_afg: bcb_weap_ak103_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_t_spray: rhs_weap_ak104
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak104_folded_t_spray";
		rhs_npz="bcb_weap_ak104_t_spray_npz";
		baseWeapon="bcb_weap_ak104_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak104_npz_t_spray: rhs_weap_ak104_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (B-13, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak104_t_spray";
		baseWeapon="bcb_weap_ak104_npz_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak104_folded_t_spray: rhs_weap_ak104_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Folded, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak104_t_spray";
		baseWeapon="bcb_weap_ak104_folded_t_spray";
	};
	class bcb_weap_ak104_zenitco01_t_spray: rhs_weap_ak104_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_ca.paa";
		displayName="AK-104 (Zenitco, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak104_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t_spray_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t_spray_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t_spray_grip1";
		baseWeapon="bcb_weap_ak104_zenitco01_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_grip1: bcb_weap_ak104_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_afg: bcb_weap_ak104_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_npz: rhs_weap_ak104_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_npz_ca.paa";
		displayName="AK-104 (Zenitco/B-13, Desert Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="rhs_weap_ak104_zenitco01";
		baseWeapon="bcb_weap_ak104_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_npz_grip1: bcb_weap_ak104_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_npz_afg: bcb_weap_ak104_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_b33: rhs_weap_ak104_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_b33_ca.paa";
		displayName="AK-104 (Zenitco/B-33, Desert Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak104_zenitco01_b33";
		baseWeapon="bcb_weap_ak104_zenitco01_t_spray_b33";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_b33_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_b33_grip1: bcb_weap_ak104_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t_spray_b33_afg: bcb_weap_ak104_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_t_spray: rhs_weap_ak105
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak105_folded_t_spray";
		rhs_npz="bcb_weap_ak105_t_spray_npz";
		baseWeapon="bcb_weap_ak105_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak105_npz_t_spray: rhs_weap_ak105_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (B-13, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak105_t_spray";
		baseWeapon="bcb_weap_ak105_npz_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak105_folded_t_spray: rhs_weap_ak105_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Folded, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak105_t_spray";
		baseWeapon="bcb_weap_ak105_folded_t_spray";
	};
	class bcb_weap_ak105_zenitco01_t_spray: rhs_weap_ak105_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName="AK-105 (Zenitco, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak105_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t_spray_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t_spray_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t_spray_grip1";
		baseWeapon="bcb_weap_ak105_zenitco01_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_grip1: bcb_weap_ak105_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_afg: bcb_weap_ak105_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_npz: rhs_weap_ak105_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName="AK-105 (Zenitco/B-13, Desert Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="rhs_weap_ak105_zenitco01";
		baseWeapon="bcb_weap_ak105_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_npz_grip1: bcb_weap_ak105_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_npz_afg: bcb_weap_ak105_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_b33: rhs_weap_ak105_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_b33_ca.paa";
		displayName="AK-105 (Zenitco/B-33, Desert Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak105_zenitco01_b33";
		baseWeapon="bcb_weap_ak105_zenitco01_t_spray_b33";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_b33_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_b33_grip1: bcb_weap_ak105_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t_spray_b33_afg: bcb_weap_ak105_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_t_spray: rhs_weap_ak74m
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_folded_t_spray";
		rhs_npz="bcb_weap_ak74m_t_spray_npz";
		baseWeapon="bcb_weap_ak74m_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak74m_npz_t_spray: rhs_weap_ak74m_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (B-13, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_t_spray";
		baseWeapon="bcb_weap_ak74m_npz_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak74m_folded_t_spray: rhs_weap_ak74m_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Folded, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_t_spray";
		baseWeapon="bcb_weap_ak74m_folded_t_spray";
	};
	class bcb_weap_ak74m_gp25_t_spray: rhs_weap_ak74m_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_npz_t_spray";
		baseWeapon="bcb_weap_ak74m_gp25_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak74m_gp25_npz_t_spray: rhs_weap_ak74m_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25/B-13, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_t_spray";
		baseWeapon="bcb_weap_ak74m_gp25_npz_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray: rhs_weap_ak74m_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		displayName="AK-74M (Zenitco, Desert Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t_spray_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t_spray_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t_spray_grip1";
		baseWeapon="bcb_weap_ak74m_zenitco01_t_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_grip1: bcb_weap_ak74m_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_afg: bcb_weap_ak74m_zenitco01_t_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_npz: rhs_weap_ak74m_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		displayName="AK-74M (Zenitco/B-13, Desert Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="rhs_weap_ak74m_zenitco01";
		baseWeapon="bcb_weap_ak74m_zenitco01_t_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_npz_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_npz_grip1: bcb_weap_ak74m_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_npz_afg: bcb_weap_ak74m_zenitco01_t_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_b33: rhs_weap_ak74m_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_b33_ca.paa";
		displayName="AK-74M (Zenitco/B-33, Desert Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak74m_zenitco01_b33";
		baseWeapon="bcb_weap_ak74m_zenitco01_t_spray_b33";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_b33_spray";
			Finish="DESERT 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_b33_grip1: bcb_weap_ak74m_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t_spray_b33_afg: bcb_weap_ak74m_zenitco01_t_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_t2_spray: rhs_weap_ak103
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_folded_t2_spray";
		rhs_npz="bcb_weap_ak103_t2_spray_npz";
		baseWeapon="bcb_weap_ak103_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak103_npz_t2_spray: rhs_weap_ak103_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (B-13, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak103_t2_spray";
		baseWeapon="bcb_weap_ak103_npz_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak103_folded_t2_spray: rhs_weap_ak103_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Folded, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_t2_spray";
		baseWeapon="bcb_weap_ak103_folded_t2_spray";
	};
	class bcb_weap_ak103_gp25_t2_spray: rhs_weap_ak103_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_npz_t2_spray";
		baseWeapon="bcb_weap_ak103_gp25_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak103_gp25_npz_t2_spray: rhs_weap_ak103_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25/B-13, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_t2_spray";
		baseWeapon="bcb_weap_ak103_gp25_npz_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak103_zenitco01_t2_spray: rhs_weap_ak103_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_folded_t2_spray";
		rhs_npz="bcb_weap_ak103_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t2_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t2_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak103_zenitco01_folded_t2_spray: rhs_weap_ak103_zenitco01_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco Folded, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_t2_spray";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_folded_t2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_folded_t2_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_folded_t2_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_folded_t2_spray";
	};
	class bcb_weap_ak103_zenitco01_t2_spray_grip1: bcb_weap_ak103_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t2_spray_afg: bcb_weap_ak103_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_folded_t2_spray_grip1: bcb_weap_ak103_zenitco01_folded_t2_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_folded_t2_spray_afg: bcb_weap_ak103_zenitco01_folded_t2_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_t2_spray_npz: rhs_weap_ak103_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		displayName="AK-103 (Zenitco/B-13, Desert Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="rhs_weap_ak103_zenitco01";
		baseWeapon="bcb_weap_ak103_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak103_zenitco01_t2_spray_npz_grip1: bcb_weap_ak103_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t2_spray_npz_afg: bcb_weap_ak103_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t2_spray_b33: rhs_weap_ak103_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_b33_ca.paa";
		displayName="AK-103 (Zenitco/B-33, Desert Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak103_zenitco01_b33";
		baseWeapon="bcb_weap_ak103_zenitco01_t2_spray_b33";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_b33_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak103_zenitco01_t2_spray_b33_grip1: bcb_weap_ak103_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t2_spray_b33_afg: bcb_weap_ak103_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_t2_spray: rhs_weap_ak104
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak104_folded_t2_spray";
		rhs_npz="bcb_weap_ak104_t2_spray_npz";
		baseWeapon="bcb_weap_ak104_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak104_npz_t2_spray: rhs_weap_ak104_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (B-13, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak104_t2_spray";
		baseWeapon="bcb_weap_ak104_npz_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak104_folded_t2_spray: rhs_weap_ak104_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Folded, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak104_t2_spray";
		baseWeapon="bcb_weap_ak104_folded_t2_spray";
	};
	class bcb_weap_ak104_zenitco01_t2_spray: rhs_weap_ak104_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_ca.paa";
		displayName="AK-104 (Zenitco, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak104_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t2_spray_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t2_spray_grip1";
		baseWeapon="bcb_weap_ak104_zenitco01_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_grip1: bcb_weap_ak104_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_afg: bcb_weap_ak104_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_npz: rhs_weap_ak104_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_npz_ca.paa";
		displayName="AK-104 (Zenitco/B-13, Desert Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="rhs_weap_ak104_zenitco01";
		baseWeapon="bcb_weap_ak104_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_npz_grip1: bcb_weap_ak104_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_npz_afg: bcb_weap_ak104_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_b33: rhs_weap_ak104_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_b33_ca.paa";
		displayName="AK-104 (Zenitco/B-33, Desert Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak104_zenitco01_b33";
		baseWeapon="bcb_weap_ak104_zenitco01_t2_spray_b33";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_b33_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_b33_grip1: bcb_weap_ak104_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t2_spray_b33_afg: bcb_weap_ak104_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_t2_spray: rhs_weap_ak105
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak105_folded_t2_spray";
		rhs_npz="bcb_weap_ak105_t2_spray_npz";
		baseWeapon="bcb_weap_ak105_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak105_npz_t2_spray: rhs_weap_ak105_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (B-13, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak105_t2_spray";
		baseWeapon="bcb_weap_ak105_npz_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak105_folded_t2_spray: rhs_weap_ak105_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Folded, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak105_t2_spray";
		baseWeapon="bcb_weap_ak105_folded_t2_spray";
	};
	class bcb_weap_ak105_zenitco01_t2_spray: rhs_weap_ak105_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName="AK-105 (Zenitco, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak105_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t2_spray_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t2_spray_grip1";
		baseWeapon="bcb_weap_ak105_zenitco01_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_grip1: bcb_weap_ak105_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_afg: bcb_weap_ak105_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_npz: rhs_weap_ak105_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName="AK-105 (Zenitco/B-13, Desert Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="rhs_weap_ak105_zenitco01";
		baseWeapon="bcb_weap_ak105_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_npz_grip1: bcb_weap_ak105_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_npz_afg: bcb_weap_ak105_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_b33: rhs_weap_ak105_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_b33_ca.paa";
		displayName="AK-105 (Zenitco/B-33, Desert Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak105_zenitco01_b33";
		baseWeapon="bcb_weap_ak105_zenitco01_t2_spray_b33";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_b33_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_b33_grip1: bcb_weap_ak105_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t2_spray_b33_afg: bcb_weap_ak105_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_t2_spray: rhs_weap_ak74m
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_folded_t2_spray";
		rhs_npz="bcb_weap_ak74m_t2_spray_npz";
		baseWeapon="bcb_weap_ak74m_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak74m_npz_t2_spray: rhs_weap_ak74m_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (B-13, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_t2_spray";
		baseWeapon="bcb_weap_ak74m_npz_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak74m_folded_t2_spray: rhs_weap_ak74m_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Folded, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_t2_spray";
		baseWeapon="bcb_weap_ak74m_folded_t2_spray";
	};
	class bcb_weap_ak74m_gp25_t2_spray: rhs_weap_ak74m_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_npz_t2_spray";
		baseWeapon="bcb_weap_ak74m_gp25_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak74m_gp25_npz_t2_spray: rhs_weap_ak74m_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25/B-13, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_t2_spray";
		baseWeapon="bcb_weap_ak74m_gp25_npz_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray: rhs_weap_ak74m_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		displayName="AK-74M (Zenitco, Desert Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t2_spray_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t2_spray_grip1";
		baseWeapon="bcb_weap_ak74m_zenitco01_t2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_grip1: bcb_weap_ak74m_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_afg: bcb_weap_ak74m_zenitco01_t2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_npz: rhs_weap_ak74m_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		displayName="AK-74M (Zenitco/B-13, Desert Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="rhs_weap_ak74m_zenitco01";
		baseWeapon="bcb_weap_ak74m_zenitco01_t2_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_npz_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_npz_grip1: bcb_weap_ak74m_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_npz_afg: bcb_weap_ak74m_zenitco01_t2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_b33: rhs_weap_ak74m_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_b33_ca.paa";
		displayName="AK-74M (Zenitco/B-33, Desert Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak74m_zenitco01_b33";
		baseWeapon="bcb_weap_ak74m_zenitco01_t2_spray_b33";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_b33_spray";
			Finish="DESERT 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_b33_grip1: bcb_weap_ak74m_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t2_spray_b33_afg: bcb_weap_ak74m_zenitco01_t2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_t3_spray: rhs_weap_ak103
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak103_folded_t3_spray";
		rhs_npz="bcb_weap_ak103_t3_spray_npz";
		baseWeapon="bcb_weap_ak103_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak103_npz_t3_spray: rhs_weap_ak103_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (B-13, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak103_t3_spray";
		baseWeapon="bcb_weap_ak103_npz_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak103_folded_t3_spray: rhs_weap_ak103_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Folded, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak103_t3_spray";
		baseWeapon="bcb_weap_ak103_folded_t3_spray";
	};
	class bcb_weap_ak103_gp25_t3_spray: rhs_weap_ak103_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_npz_t3_spray";
		baseWeapon="bcb_weap_ak103_gp25_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak103_gp25_npz_t3_spray: rhs_weap_ak103_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25/B-13, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_t3_spray";
		baseWeapon="bcb_weap_ak103_gp25_npz_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak103_zenitco01_t3_spray: rhs_weap_ak103_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_folded_t3_spray";
		rhs_npz="bcb_weap_ak103_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t3_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t3_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t3_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak103_zenitco01_folded_t3_spray: rhs_weap_ak103_zenitco01_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco Folded, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_t3_spray";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_folded_t3_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_folded_t3_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_folded_t3_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_folded_t3_spray";
	};
	class bcb_weap_ak103_zenitco01_t3_spray_grip1: bcb_weap_ak103_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t3_spray_afg: bcb_weap_ak103_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_folded_t3_spray_grip1: bcb_weap_ak103_zenitco01_folded_t3_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_folded_t3_spray_afg: bcb_weap_ak103_zenitco01_folded_t3_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_t3_spray_npz: rhs_weap_ak103_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		displayName="AK-103 (Zenitco/B-13, Desert Spray 3)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="rhs_weap_ak103_zenitco01";
		baseWeapon="bcb_weap_ak103_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t3_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t3_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t3_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak103_zenitco01_t3_spray_npz_grip1: bcb_weap_ak103_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t3_spray_npz_afg: bcb_weap_ak103_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t3_spray_b33: rhs_weap_ak103_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_b33_ca.paa";
		displayName="AK-103 (Zenitco/B-33, Desert Spray 3)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak103_zenitco01_b33";
		baseWeapon="bcb_weap_ak103_zenitco01_t3_spray_b33";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_t3_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_t3_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_t3_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_b33_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak103_zenitco01_t3_spray_b33_grip1: bcb_weap_ak103_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_t3_spray_b33_afg: bcb_weap_ak103_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_t3_spray: rhs_weap_ak104
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak104_folded_t3_spray";
		rhs_npz="bcb_weap_ak104_t3_spray_npz";
		baseWeapon="bcb_weap_ak104_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak104_npz_t3_spray: rhs_weap_ak104_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (B-13, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak104_t3_spray";
		baseWeapon="bcb_weap_ak104_npz_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak104_folded_t3_spray: rhs_weap_ak104_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Folded, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak104_t3_spray";
		baseWeapon="bcb_weap_ak104_folded_t3_spray";
	};
	class bcb_weap_ak104_zenitco01_t3_spray: rhs_weap_ak104_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_ca.paa";
		displayName="AK-104 (Zenitco, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak104_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t3_spray_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t3_spray_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t3_spray_grip1";
		baseWeapon="bcb_weap_ak104_zenitco01_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_grip1: bcb_weap_ak104_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_afg: bcb_weap_ak104_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_npz: rhs_weap_ak104_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_npz_ca.paa";
		displayName="AK-104 (Zenitco/B-13, Desert Spray 3)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="rhs_weap_ak104_zenitco01";
		baseWeapon="bcb_weap_ak104_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t3_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t3_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t3_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_npz_grip1: bcb_weap_ak104_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_npz_afg: bcb_weap_ak104_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_b33: rhs_weap_ak104_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_b33_ca.paa";
		displayName="AK-104 (Zenitco/B-33, Desert Spray 3)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak104_zenitco01_b33";
		baseWeapon="bcb_weap_ak104_zenitco01_t3_spray_b33";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_t3_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_t3_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_t3_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_b33_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_b33_grip1: bcb_weap_ak104_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_t3_spray_b33_afg: bcb_weap_ak104_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_t3_spray: rhs_weap_ak105
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak105_folded_t3_spray";
		rhs_npz="bcb_weap_ak105_t3_spray_npz";
		baseWeapon="bcb_weap_ak105_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak105_npz_t3_spray: rhs_weap_ak105_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (B-13, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak105_t3_spray";
		baseWeapon="bcb_weap_ak105_npz_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak105_folded_t3_spray: rhs_weap_ak105_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Folded, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak105_t3_spray";
		baseWeapon="bcb_weap_ak105_folded_t3_spray";
	};
	class bcb_weap_ak105_zenitco01_t3_spray: rhs_weap_ak105_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName="AK-105 (Zenitco, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak105_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t3_spray_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t3_spray_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t3_spray_grip1";
		baseWeapon="bcb_weap_ak105_zenitco01_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_grip1: bcb_weap_ak105_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_afg: bcb_weap_ak105_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_npz: rhs_weap_ak105_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName="AK-105 (Zenitco/B-13, Desert Spray 3)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="rhs_weap_ak105_zenitco01";
		baseWeapon="bcb_weap_ak105_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t3_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t3_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t3_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_npz_grip1: bcb_weap_ak105_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_npz_afg: bcb_weap_ak105_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_b33: rhs_weap_ak105_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_b33_ca.paa";
		displayName="AK-105 (Zenitco/B-33, Desert Spray 3)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak105_zenitco01_b33";
		baseWeapon="bcb_weap_ak105_zenitco01_t3_spray_b33";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_t3_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_t3_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_t3_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_b33_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_b33_grip1: bcb_weap_ak105_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_t3_spray_b33_afg: bcb_weap_ak105_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_t3_spray: rhs_weap_ak74m
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_folded_t3_spray";
		rhs_npz="bcb_weap_ak74m_t3_spray_npz";
		baseWeapon="bcb_weap_ak74m_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak74m_npz_t3_spray: rhs_weap_ak74m_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (B-13, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_t3_spray";
		baseWeapon="bcb_weap_ak74m_npz_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak74m_folded_t3_spray: rhs_weap_ak74m_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Folded, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_t3_spray";
		baseWeapon="bcb_weap_ak74m_folded_t3_spray";
	};
	class bcb_weap_ak74m_gp25_t3_spray: rhs_weap_ak74m_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_npz_t3_spray";
		baseWeapon="bcb_weap_ak74m_gp25_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak74m_gp25_npz_t3_spray: rhs_weap_ak74m_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25/B-13, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_t3_spray";
		baseWeapon="bcb_weap_ak74m_gp25_npz_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray: rhs_weap_ak74m_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		displayName="AK-74M (Zenitco, Desert Spray 3)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t3_spray_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t3_spray_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t3_spray_grip1";
		baseWeapon="bcb_weap_ak74m_zenitco01_t3_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_grip1: bcb_weap_ak74m_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_afg: bcb_weap_ak74m_zenitco01_t3_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_npz: rhs_weap_ak74m_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		displayName="AK-74M (Zenitco/B-13, Desert Spray 3)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="rhs_weap_ak74m_zenitco01";
		baseWeapon="bcb_weap_ak74m_zenitco01_t3_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t3_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t3_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t3_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_npz_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_npz_grip1: bcb_weap_ak74m_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_npz_afg: bcb_weap_ak74m_zenitco01_t3_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_b33: rhs_weap_ak74m_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_b33_ca.paa";
		displayName="AK-74M (Zenitco/B-33, Desert Spray 3)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_t3_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_t3_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_t3_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak74m_zenitco01_b33";
		baseWeapon="bcb_weap_ak74m_zenitco01_t3_spray_b33";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_t3_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_t3_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_t3_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_b33_spray";
			Finish="DESERT 3";
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_b33_grip1: bcb_weap_ak74m_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_t3_spray_b33_afg: bcb_weap_ak74m_zenitco01_t3_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_w_spray: rhs_weap_ak103
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak103_folded_w_spray";
		rhs_npz="bcb_weap_ak103_w_spray_npz";
		baseWeapon="bcb_weap_ak103_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak103_npz_w_spray: rhs_weap_ak103_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (B-13, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak103_w_spray";
		baseWeapon="bcb_weap_ak103_npz_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak103_folded_w_spray: rhs_weap_ak103_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Folded, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak103_w_spray";
		baseWeapon="bcb_weap_ak103_folded_w_spray";
	};
	class bcb_weap_ak103_gp25_w_spray: rhs_weap_ak103_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_npz_w_spray";
		baseWeapon="bcb_weap_ak103_gp25_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak103_gp25_npz_w_spray: rhs_weap_ak103_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25/B-13, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_w_spray";
		baseWeapon="bcb_weap_ak103_gp25_npz_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak103_zenitco01_w_spray: rhs_weap_ak103_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_folded_w_spray";
		rhs_npz="bcb_weap_ak103_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_w_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_w_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_w_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak103_zenitco01_folded_w_spray: rhs_weap_ak103_zenitco01_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco Folded, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_w_spray";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_folded_w_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_folded_w_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_folded_w_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_folded_w_spray";
	};
	class bcb_weap_ak103_zenitco01_w_spray_grip1: bcb_weap_ak103_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w_spray_afg: bcb_weap_ak103_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_folded_w_spray_grip1: bcb_weap_ak103_zenitco01_folded_w_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_folded_w_spray_afg: bcb_weap_ak103_zenitco01_folded_w_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_w_spray_npz: rhs_weap_ak103_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		displayName="AK-103 (Zenitco/B-13, Woodland Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="rhs_weap_ak103_zenitco01";
		baseWeapon="bcb_weap_ak103_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_w_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_w_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_w_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak103_zenitco01_w_spray_npz_grip1: bcb_weap_ak103_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w_spray_npz_afg: bcb_weap_ak103_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w_spray_b33: rhs_weap_ak103_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_b33_ca.paa";
		displayName="AK-103 (Zenitco/B-33, Woodland Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak103_zenitco01_b33";
		baseWeapon="bcb_weap_ak103_zenitco01_w_spray_b33";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_w_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_w_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_w_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_b33_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak103_zenitco01_w_spray_b33_grip1: bcb_weap_ak103_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w_spray_b33_afg: bcb_weap_ak103_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_w_spray: rhs_weap_ak104
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak104_folded_w_spray";
		rhs_npz="bcb_weap_ak104_w_spray_npz";
		baseWeapon="bcb_weap_ak104_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak104_npz_w_spray: rhs_weap_ak104_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (B-13, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak104_w_spray";
		baseWeapon="bcb_weap_ak104_npz_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak104_folded_w_spray: rhs_weap_ak104_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Folded, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak104_w_spray";
		baseWeapon="bcb_weap_ak104_folded_w_spray";
	};
	class bcb_weap_ak104_zenitco01_w_spray: rhs_weap_ak104_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_ca.paa";
		displayName="AK-104 (Zenitco, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak104_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_w_spray_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_w_spray_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_w_spray_grip1";
		baseWeapon="bcb_weap_ak104_zenitco01_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_grip1: bcb_weap_ak104_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_afg: bcb_weap_ak104_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_npz: rhs_weap_ak104_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_npz_ca.paa";
		displayName="AK-104 (Zenitco/B-13, Woodland Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="rhs_weap_ak104_zenitco01";
		baseWeapon="bcb_weap_ak104_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_w_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_w_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_w_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_npz_grip1: bcb_weap_ak104_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_npz_afg: bcb_weap_ak104_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_b33: rhs_weap_ak104_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_b33_ca.paa";
		displayName="AK-104 (Zenitco/B-33, Woodland Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak104_zenitco01_b33";
		baseWeapon="bcb_weap_ak104_zenitco01_w_spray_b33";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_w_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_w_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_w_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_b33_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_b33_grip1: bcb_weap_ak104_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w_spray_b33_afg: bcb_weap_ak104_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_w_spray: rhs_weap_ak105
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak105_folded_w_spray";
		rhs_npz="bcb_weap_ak105_w_spray_npz";
		baseWeapon="bcb_weap_ak105_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak105_npz_w_spray: rhs_weap_ak105_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (B-13, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak105_w_spray";
		baseWeapon="bcb_weap_ak105_npz_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak105_folded_w_spray: rhs_weap_ak105_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Folded, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak105_w_spray";
		baseWeapon="bcb_weap_ak105_folded_w_spray";
	};
	class bcb_weap_ak105_zenitco01_w_spray: rhs_weap_ak105_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName="AK-105 (Zenitco, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak105_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_w_spray_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_w_spray_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_w_spray_grip1";
		baseWeapon="bcb_weap_ak105_zenitco01_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_grip1: bcb_weap_ak105_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_afg: bcb_weap_ak105_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_npz: rhs_weap_ak105_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName="AK-105 (Zenitco/B-13, Woodland Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="rhs_weap_ak105_zenitco01";
		baseWeapon="bcb_weap_ak105_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_w_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_w_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_w_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_npz_grip1: bcb_weap_ak105_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_npz_afg: bcb_weap_ak105_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_b33: rhs_weap_ak105_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_b33_ca.paa";
		displayName="AK-105 (Zenitco/B-33, Woodland Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak105_zenitco01_b33";
		baseWeapon="bcb_weap_ak105_zenitco01_w_spray_b33";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_w_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_w_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_w_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_b33_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_b33_grip1: bcb_weap_ak105_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w_spray_b33_afg: bcb_weap_ak105_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_w_spray: rhs_weap_ak74m
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_folded_w_spray";
		rhs_npz="bcb_weap_ak74m_w_spray_npz";
		baseWeapon="bcb_weap_ak74m_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak74m_npz_w_spray: rhs_weap_ak74m_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (B-13, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_w_spray";
		baseWeapon="bcb_weap_ak74m_npz_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak74m_folded_w_spray: rhs_weap_ak74m_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Folded, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_w_spray";
		baseWeapon="bcb_weap_ak74m_folded_w_spray";
	};
	class bcb_weap_ak74m_gp25_w_spray: rhs_weap_ak74m_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_npz_w_spray";
		baseWeapon="bcb_weap_ak74m_gp25_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak74m_gp25_npz_w_spray: rhs_weap_ak74m_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25/B-13, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_w_spray";
		baseWeapon="bcb_weap_ak74m_gp25_npz_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray: rhs_weap_ak74m_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		displayName="AK-74M (Zenitco, Woodland Spray 1)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_w_spray_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_w_spray_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_w_spray_grip1";
		baseWeapon="bcb_weap_ak74m_zenitco01_w_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_grip1: bcb_weap_ak74m_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_afg: bcb_weap_ak74m_zenitco01_w_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_npz: rhs_weap_ak74m_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		displayName="AK-74M (Zenitco/B-13, Woodland Spray 1)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="rhs_weap_ak74m_zenitco01";
		baseWeapon="bcb_weap_ak74m_zenitco01_w_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_w_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_w_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_w_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_npz_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_npz_grip1: bcb_weap_ak74m_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_npz_afg: bcb_weap_ak74m_zenitco01_w_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_b33: rhs_weap_ak74m_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_b33_ca.paa";
		displayName="AK-74M (Zenitco/B-33, Woodland Spray 1)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak74m_zenitco01_b33";
		baseWeapon="bcb_weap_ak74m_zenitco01_w_spray_b33";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_w_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_w_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_w_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_b33_spray";
			Finish="WOODLAND 1";
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_b33_grip1: bcb_weap_ak74m_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w_spray_b33_afg: bcb_weap_ak74m_zenitco01_w_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_w2_spray: rhs_weap_ak103
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_folded_w2_spray";
		rhs_npz="bcb_weap_ak103_w2_spray_npz";
		baseWeapon="bcb_weap_ak103_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak103_npz_w2_spray: rhs_weap_ak103_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (B-13, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak103_w2_spray";
		baseWeapon="bcb_weap_ak103_npz_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak103_folded_w2_spray: rhs_weap_ak103_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_ca.paa";
		displayName="AK-103 (Folded, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_w2_spray";
		baseWeapon="bcb_weap_ak103_folded_w2_spray";
	};
	class bcb_weap_ak103_gp25_w2_spray: rhs_weap_ak103_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_npz_w2_spray";
		baseWeapon="bcb_weap_ak103_gp25_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak103_gp25_npz_w2_spray: rhs_weap_ak103_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_gp25_npz_ca.paa";
		displayName="AK-103 (GP-25/B-13, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak103_gp25_w2_spray";
		baseWeapon="bcb_weap_ak103_gp25_npz_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_gp25_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak103_zenitco01_w2_spray: rhs_weap_ak103_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_folded_w2_spray";
		rhs_npz="bcb_weap_ak103_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_w2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_w2_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_w2_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak103_zenitco01_folded_w2_spray: rhs_weap_ak103_zenitco01_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName="AK-103 (Zenitco Folded, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak103_zenitco01_w2_spray";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_folded_w2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_folded_w2_spray_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_folded_w2_spray_grip1";
		baseWeapon="bcb_weap_ak103_zenitco01_folded_w2_spray";
	};
	class bcb_weap_ak103_zenitco01_w2_spray_grip1: bcb_weap_ak103_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w2_spray_afg: bcb_weap_ak103_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_folded_w2_spray_grip1: bcb_weap_ak103_zenitco01_folded_w2_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_folded_w2_spray_afg: bcb_weap_ak103_zenitco01_folded_w2_spray
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"
		};
		scope=1;
	};
	class bcb_weap_ak103_zenitco01_w2_spray_npz: rhs_weap_ak103_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		displayName="AK-103 (Zenitco/B-13, Woodland Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="rhs_weap_ak103_zenitco01";
		baseWeapon="bcb_weap_ak103_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_w2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_w2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_w2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak103_zenitco01_w2_spray_npz_grip1: bcb_weap_ak103_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w2_spray_npz_afg: bcb_weap_ak103_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w2_spray_b33: rhs_weap_ak103_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_b33_ca.paa";
		displayName="AK-103 (Zenitco/B-33, Woodland Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak103_zenitco01_b33";
		baseWeapon="bcb_weap_ak103_zenitco01_w2_spray_b33";
		rhs_grip1_change="bcb_weap_ak103_zenitco01_w2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak103_zenitco01_w2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak103_zenitco01_w2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak103_zenitco01_b33_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak103_zenitco01_w2_spray_b33_grip1: bcb_weap_ak103_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak103_zenitco01_w2_spray_b33_afg: bcb_weap_ak103_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_w2_spray: rhs_weap_ak104
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak104_folded_w2_spray";
		rhs_npz="bcb_weap_ak104_w2_spray_npz";
		baseWeapon="bcb_weap_ak104_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak104_npz_w2_spray: rhs_weap_ak104_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (B-13, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak104_w2_spray";
		baseWeapon="bcb_weap_ak104_npz_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak104_folded_w2_spray: rhs_weap_ak104_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_ca.paa";
		displayName="AK-104 (Folded, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak104_w2_spray";
		baseWeapon="bcb_weap_ak104_folded_w2_spray";
	};
	class bcb_weap_ak104_zenitco01_w2_spray: rhs_weap_ak104_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_ca.paa";
		displayName="AK-104 (Zenitco, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak104_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_w2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_w2_spray_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_w2_spray_grip1";
		baseWeapon="bcb_weap_ak104_zenitco01_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_grip1: bcb_weap_ak104_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_afg: bcb_weap_ak104_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_npz: rhs_weap_ak104_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_npz_ca.paa";
		displayName="AK-104 (Zenitco/B-13, Woodland Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="rhs_weap_ak104_zenitco01";
		baseWeapon="bcb_weap_ak104_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_w2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_w2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_w2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_npz_grip1: bcb_weap_ak104_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_npz_afg: bcb_weap_ak104_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_b33: rhs_weap_ak104_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak104_zenitco01_b33_ca.paa";
		displayName="AK-104 (Zenitco/B-33, Woodland Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak104_zenitco01_b33";
		baseWeapon="bcb_weap_ak104_zenitco01_w2_spray_b33";
		rhs_grip1_change="bcb_weap_ak104_zenitco01_w2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak104_zenitco01_w2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak104_zenitco01_w2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak104_zenitco01_b33_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_b33_grip1: bcb_weap_ak104_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak104_zenitco01_w2_spray_b33_afg: bcb_weap_ak104_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_w2_spray: rhs_weap_ak105
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak105_folded_w2_spray";
		rhs_npz="bcb_weap_ak105_w2_spray_npz";
		baseWeapon="bcb_weap_ak105_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak105_npz_w2_spray: rhs_weap_ak105_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (B-13, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak105_w2_spray";
		baseWeapon="bcb_weap_ak105_npz_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak105_folded_w2_spray: rhs_weap_ak105_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_ca.paa";
		displayName="AK-105 (Folded, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak105_w2_spray";
		baseWeapon="bcb_weap_ak105_folded_w2_spray";
	};
	class bcb_weap_ak105_zenitco01_w2_spray: rhs_weap_ak105_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName="AK-105 (Zenitco, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak105_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_w2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_w2_spray_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_w2_spray_grip1";
		baseWeapon="bcb_weap_ak105_zenitco01_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_grip1: bcb_weap_ak105_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_afg: bcb_weap_ak105_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_npz: rhs_weap_ak105_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName="AK-105 (Zenitco/B-13, Woodland Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="rhs_weap_ak105_zenitco01";
		baseWeapon="bcb_weap_ak105_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_w2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_w2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_w2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_npz_grip1: bcb_weap_ak105_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_npz_afg: bcb_weap_ak105_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_b33: rhs_weap_ak105_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_b33_ca.paa";
		displayName="AK-105 (Zenitco/B-33, Woodland Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak105_zenitco01_b33";
		baseWeapon="bcb_weap_ak105_zenitco01_w2_spray_b33";
		rhs_grip1_change="bcb_weap_ak105_zenitco01_w2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak105_zenitco01_w2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak105_zenitco01_w2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak105_zenitco01_b33_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_b33_grip1: bcb_weap_ak105_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak105_zenitco01_w2_spray_b33_afg: bcb_weap_ak105_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_w2_spray: rhs_weap_ak74m
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_folded_w2_spray";
		rhs_npz="bcb_weap_ak74m_w2_spray_npz";
		baseWeapon="bcb_weap_ak74m_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak74m_npz_w2_spray: rhs_weap_ak74m_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (B-13, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_w2_spray";
		baseWeapon="bcb_weap_ak74m_npz_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak74m_folded_w2_spray: rhs_weap_ak74m_folded
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		displayName="AK-74M (Folded, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_fold="bcb_weap_ak74m_w2_spray";
		baseWeapon="bcb_weap_ak74m_folded_w2_spray";
	};
	class bcb_weap_ak74m_gp25_w2_spray: rhs_weap_ak74m_gp25
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_npz_w2_spray";
		baseWeapon="bcb_weap_ak74m_gp25_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak74m_gp25_npz_w2_spray: rhs_weap_ak74m_gp25_npz
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_npz_ca.paa";
		displayName="AK-74M (GP-25/B-13, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_gp25_w2_spray";
		baseWeapon="bcb_weap_ak74m_gp25_npz_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_gp25_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray: rhs_weap_ak74m_zenitco01
	{
		scope=2;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		displayName="AK-74M (Zenitco, Woodland Spray 2)";
		author="simpel";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="bcb_weap_ak74m_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_w2_spray_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_w2_spray_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_w2_spray_grip1";
		baseWeapon="bcb_weap_ak74m_zenitco01_w2_spray";
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_grip1: bcb_weap_ak74m_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_afg: bcb_weap_ak74m_zenitco01_w2_spray
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_npz: rhs_weap_ak74m_zenitco01_npz
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		displayName="AK-74M (Zenitco/B-13, Woodland Spray 2)";
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="rhs_weap_ak74m_zenitco01";
		baseWeapon="bcb_weap_ak74m_zenitco01_w2_spray_npz";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_w2_spray_npz_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_w2_spray_npz_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_w2_spray_npz_grip1";
		rhsusf_acc_anpeq15=1;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_npz_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_npz_grip1: bcb_weap_ak74m_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_npz_afg: bcb_weap_ak74m_zenitco01_w2_spray_npz
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_b33: rhs_weap_ak74m_zenitco01_b33
	{
		author="simpel";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_b33_ca.paa";
		displayName="AK-74M (Zenitco/B-33, Woodland Spray 2)";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\weapons\ak_shared\ak104_w2_co.paa),
			QPATHTOF(data\weapons\ak_shared\ak105_barrel_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_01_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_zenitko_02_w2_co.paa),
			QPATHTOF(data\weapons\zenitco\rhs_b33_w2_co.paa)
		};
		rhs_npz="";
		weaponInfoType="rhs_rscOptics_ak74m_zenitco01_b33";
		baseWeapon="bcb_weap_ak74m_zenitco01_w2_spray_b33";
		rhs_grip1_change="bcb_weap_ak74m_zenitco01_w2_spray_b33_grip1";
		rhs_grip2_change="bcb_weap_ak74m_zenitco01_w2_spray_b33_afg";
		rhs_grip3_change="bcb_weap_ak74m_zenitco01_w2_spray_b33_grip1";
		rhsusf_acc_anpeq15=1;
		rhsusf_acc_t1=0;
		class XtdGearInfo
		{
			model="bcb_ak74m_zenitco01_b33_spray";
			Finish="WOODLAND 2";
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_b33_grip1: bcb_weap_ak74m_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"
		};
	};
	class bcb_weap_ak74m_zenitco01_w2_spray_b33_afg: bcb_weap_ak74m_zenitco01_w2_spray_b33
	{
		scope=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"
		};
	};


class S_weap_ak74m_ip78: rhs_weap_ak74m {
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "rhs_acc_1p78";
        };
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
        };
    };
};
class S_weap_ak74m_gp25_ip78: rhs_weap_ak74m_gp25 {
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "rhs_acc_1p78";
        };
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
        };
    };
};

class S_weap_rpk_ip78: rhs_weap_rpk74m {
    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "rhs_acc_1p78";
        };
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
        };
    };
};
