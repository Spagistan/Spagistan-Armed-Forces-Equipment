player createDiarySubject ["Spagistan Handbook", "Spagistan Handbook"];

if(hasInterface) then {
[] spawn {
waitUntil {!isNull player && alive player && time > 0};
disableUserInput true;
private _loadScreenMusic = ["MGS4RebelRest", "SCBMilitia"];
playMusic selectRandom _loadScreenMusic;
cutText ["<t size='2.0' font='EtelkaMonospacePro'>Rasman Airbase, Spagistan</t><br/>", "BLACK IN", 9, true, true];
uiSleep 18;
[player] joinSilent firstPlatoon;
player assignTeam (player getVariable ["spag_TeamColor", "MAIN"]);
player selectWeapon "SAFE";
disableUserInput false;

// Diary records get added in REVERSE ORDER. "PGO-7V3 Reticle Guide (RPG-7V2)" will appear at the bottom, and "Fire Team Formations" will appear at the top.

player createDiaryRecord ["Spagistan Handbook",
["5 Paragraph Order (OPORD)",
"<img image='img\OPORD.jpg' width='367' height='314'/><br/>"
]];

player createDiaryRecord ["Spagistan Handbook",
["Fire Support Briefs",
"Call for Fire
<img image='img\CFF.jpg' width='367' height='491'/><br/>
<br/>
CAS 5-Line (Basic)
<img image='img\CAS5lineSimple.jpg' width='367' height='399'/><br/>
<br/>
CAS 5-Line (Advanced)
<img image='img\ADVCAS5line.jpg' width='367' height='261'/><br/>
<br/>"
]];


player createDiaryRecord ["Spagistan Handbook",
["PGO-7V3 Reticle Guide (RPG-7V2)",
"<img image='img\rpg_guide.paa' width='367' height='367'/><br/>
                                                 Bottom edge of sight picture"
]];

player createDiaryRecord ["Spagistan Handbook",
["Identification Cards",
"Tanks
<img image='img\roadwheels.jpg' width='367' height='338'/><br/>
<br/>
Armoured Vehicles
<img image='img\idenfication.jpg' width='367' height='157'/><br/>
<br/>"
]];

player createDiaryRecord ["Spagistan Handbook",
["Urban Movement Techniques",
"Enter Building/Clear Room
<img image='img\urbanRoom.jpg' width='367' height='266'/><br/>
<br/>
Rolling 'T'
<img image='img\urbanRoll.jpg' width='367' height='306'/><br/>"
]];

player createDiaryRecord ["Spagistan Handbook",
["Movement Techniques",
"Squad Traveling
<img image='img\moveTravel.jpg' width='367' height='266'/><br/>
<br/>
Squad Traveling Overwatch
<img image='img\moveOverwatch.jpg' width='367' height='301'/><br/>
<br/>
Bounding Overwatch <br/>
During bounding overwatch, the squad can employ either of two methods of this technique: alternate bounds or successive bounds. In the alternate and successive bound techniques, the overwatching elements cover the bounding elements from covered, concealed positions with good observation and fields of fire against possible enemy positions. Overwatching elements can immediately support the bounding elements with fires if the bounding elements make contact. Unless they make contact en route, the bounding elements move via covered and concealed routes into the next set of support by fire positions. The length of the bound is based on the terrain and
the range of overwatching weapons.
<img image='img\moveBound.jpg' width='367' height='124'/><br/>
<br/>
Comparison of Movement Techniques
<img image='img\moveTable.jpg' width='367' height='120'/><br/>"
]];

player createDiaryRecord ["Spagistan Handbook",
["Squad Formations",
"Squad Column
<img image='img\squadColumn.jpg' width='367' height='221'/><br/>
<br/>
Squad Line
<img image='img\squadLine.jpg' width='367' height='112'/><br/>
<br/>
Squad File
<img image='img\squadFile.jpg' width='367' height='211'/><br/>
<br/>
Comparison of Squad Formations
<img image='img\squadCompare.jpg' width='367' height='234'/><br/>"
]];

player createDiaryRecord ["Spagistan Handbook",
["Fire Team Formations",
"Fire Team Wedge
<img image='img\fireWedge.jpg' width='367' height='115'/><br/>
<br/>
Fire Team Column/File
<img image='img\fireFile.jpg' width='367' height='165'/><br/>
<br/>
Comparison of Fire Team Formations
<img image='img\fireTable.jpg' width='367' height='156'/><br/>"
]];
};
};
