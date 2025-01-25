/*
 * Author: Kalthramis
 * Sets TFAR's starting settings
 *
 * Arguments:
 *	None
 * Return Value:
 *  None
 *
 * Public: No
 * Clientside: yes
 * Serverside: yes
 */
 #include "script_component.hpp"

// GLOBALS
TF_defaultEastRiflemanRadio = "TFAR_anprc148jem";
TF_defaultEastBackpack = "TFAR_SPAG_mr3000";

// OVERRIDE
TFAR_defaultFrequencies_sr_east = ["100"];
TFAR_defaultFrequencies_sr_independent = ["100"];


0 enableChannel [true, false];  //Global - Text Only
1 enableChannel false; //Side
2 enableChannel false; //Command
3 enableChannel [true, false]; //Group
4 enableChannel false; //Vehicle
5 enableChannel [true, false]; //Direct
setCurrentChannel 0; //Change to Global


//TFAR_fnc_setAdditionalLrStereo

// VOLUMES
/* if(isNil "TF_speakerDistance") then {
	TF_speakerDistance = 50;
} */

/* 100 call TFAR_fnc_setVoiceVolume;*/
/* player setVariable ["tf_globalVolume", 1];
player setVariable ["tf_voiceVolume", 1, true]; */


//TO CHECK IN MISSIONS:
	//TF_speak_volume_meters
	//TF_max_voice_volume
