_SU35 = _this select 0;
If (!Local _SU35) ExitWith {};
_i = 1;

_SU35 animate ["afterburner_left_userhide",0];
_SU35 animate ["afterburner_right_userhide",0];
_SU35 setObjectTextureGlobal [14, "\js_jc_SU35\data\SU35_engine_fire_high_ca.paa"];
_SU35 setObjectTextureGlobal [15, "\js_jc_SU35\data\SU35_engine_fire_high_ca.paa"];

_SU35 animate ["afterburner_left_strech",1];
_SU35 animate ["afterburner_right_strech",1];

_SU35 animate ["MFD_L_scr_1_l_eng_AB",0];
_SU35 animate ["MFD_L_scr_1_r_eng_AB",0];
_SU35 animate ["MFD_l_scr_1_3_N2_100",0];
_SU35 animate ["MFD_l_scr_1_3_N1_100",0];
_SU35 animate ["MFD_l_scr_1_3_AB_on",0];
_SU35 animate ["MFD_l_scr_1_3_N2_50",1];
_SU35 animate ["MFD_l_scr_1_3_N1_50",1];
_SU35 animate ["MFD_l_scr_1_3_AB_off",1];

for "_x" from 1 to 8 do
{

	_engine_nozzle_left_pos = (format ["engine_nozzle_l_%1",_i]);
	_engine_nozzle_right_pos = (format ["engine_nozzle_r_%1",_i]);

	_SU35 animate [_engine_nozzle_left_pos,1];
	_SU35 animate [_engine_nozzle_right_pos,1];
	_i= _i +1;

};




Exit;
