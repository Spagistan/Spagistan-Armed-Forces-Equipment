if (isServer) then {
	if ((uniform _this == "LOP_U_TAK_Civ_Fatigue_01")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\civilians\data\tak_civil01_1_co.paa", 
		"\po_factions_me\civilians\data\tak_civil01_2_co.paa",
		"\po_factions_me\civilians\data\tak_civil01_3_co.paa",
		"\po_factions_me\civilians\data\tak_civil01_4_co.paa",
		"\po_factions_me\civilians\data\tak_civil01_5_co.paa"] select _rnd1];
	};	
	if ((uniform _this == "LOP_U_TAK_Civ_Fatigue_02")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\civilians\data\tak_civil02_1_co.paa", 
		"\po_factions_me\civilians\data\tak_civil02_2_co.paa",
		"\po_factions_me\civilians\data\tak_civil02_3_co.paa",
		"\po_factions_me\civilians\data\tak_civil02_4_co.paa",
		"\po_factions_me\civilians\data\tak_civil02_5_co.paa"] select _rnd1];
	};		
	if ((uniform _this == "LOP_U_TAK_Civ_Fatigue_03")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\civilians\data\tak_civil03_1_co.paa", 
		"\po_factions_me\civilians\data\tak_civil03_2_co.paa",
		"\po_factions_me\civilians\data\tak_civil03_3_co.paa",
		"\po_factions_me\civilians\data\tak_civil03_4_co.paa",
		"\po_factions_me\civilians\data\tak_civil03_5_co.paa"] select _rnd1];
	};		
	if ((uniform _this == "LOP_U_TAK_Civ_Fatigue_03")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_me\civilians\data\tak_civil06_1_co.paa", 
		"\po_factions_me\civilians\data\tak_civil06_2_co.paa",
		"\po_factions_me\civilians\data\tak_civil06_3_co.paa",
		"\po_factions_me\civilians\data\tak_civil06_4_co.paa",
		"\po_factions_me\civilians\data\tak_civil06_5_co.paa"] select _rnd1];
	};	
	removeHeadgear _this;
	_hat = [
		"LOP_H_Pakol",
		"LOP_H_Pakol",
		"LOP_H_Turban",
		"H_Cap_blu",
		"H_Cap_surfer",
		"H_Cap_red",
		"H_Cap_blk",
		"",
		""
	];
	_count = count _hat;
	_this addHeadgear (_hat select floor random _count);
};
