//dynamic loadout selection/rearming script for SU35
//created by John_Spartan


sleep 0.5;
params ["_SU35"];

{ _SU35 removeWeaponGlobal _x; } foreach (weapons _SU35 - [ "js_w_su35_master_arms_safe", "CMFlareLauncher", "js_w_su35_gsh30", "Laserdesignator_pilotCamera" ]);
// clean pylons
{
	_SU35 setPylonLoadOut [_x, "", true];

} forEach ["pylon1", "pylon2", "pylon3", "pylon4", "pylon5", "pylon6", "pylon7", "pylon8", "pylon9", "pylon10"];

_SU35 animate ["rearming_done_switch",0];
_SU35 selectWeapon "js_w_su35_master_arms_safe";

//remove any default loadout weapons and magazines first
// _SU35 removeWeapon "js_w_su35_r73Laucher";
// _SU35 removeWeapon "js_w_su35_r77Laucher";
// _SU35 removeWeapon "js_w_su35_kh29Launcher";
// _SU35 removeWeapon "js_w_su35_s8Laucher";
// _SU35 removeWeapon "js_w_su35_kab500lLaucher";
_SU35 removeWeapon "js_w_su35_fueltank_holder";

// _SU35 removeMagazines "js_m_su35_r73_x1";
// _SU35 removeMagazines "js_m_su35_r77_x1";
// _SU35 removeMagazines "js_m_su35_kh29_x1";
// _SU35 removeMagazines "js_m_su35_S8_rocket_x1";
// _SU35 removeMagazines "js_m_su35_S8_rocketpod_x1";
// _SU35 removeMagazines "js_m_su35_S8_rocketpod_x2";
// _SU35 removeMagazines "js_m_su35_kab500l_x1";
_SU35 removeMagazines "js_m_su35_wing_tank_x1";
_SU35 removeMagazines "js_m_su35_buddypod_x1";
_SU35 removeMagazines "js_m_su35_empty";
_SU35 removeMagazines "js_m_su35_fake_empty";

_SU35 setVehicleAmmo 1;
_SU35 animate ["auxtank_switch",0];
_SU35 animate ["rearming_done_switch",1];

Exit;
