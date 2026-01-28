// Written by TeTeT
// Set the paint scheme from Eden attribute

params [["_SU35", ObjNull], ["_paintScheme", "genericnavy"]];

switch (_paintScheme) do {
	/** SU-35 **/
	case 'csatDesertHex': {
		_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_CSAT_D_co.paa"];
		_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_CSAT_D_co.paa"];
	};
	case 'csatGreyHex': {
		_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_CSAT_S_co.paa"];
		_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_CSAT_S_co.paa"];
	};
	case 'russianAFGreyDigital': {
		_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_co.paa"];
		_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_co.paa"];
	};
	case 'russianAFSkyBlue': {
		_SU35 setObjectTextureGlobal [0, "\js_jc_su35\data\Su35_hull_SKY_co.paa"];
		_SU35 setObjectTextureGlobal [1, "\js_jc_su35\data\Su35_misc_sky_co.paa"];
	};

};
