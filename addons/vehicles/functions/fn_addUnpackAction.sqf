params ["_crate"];

if (!hasInterface) exitWith {};

_crate addAction
[
    "Unpack Crates",
    {
        params ["_target", "_caller"];

        [
            "Unpacking...",
            10,
            {true},
            {
                params ["_args"];
                _args params ["_target"];
                private _dropCrate1 = createVehicle
                [
                    "Spag_Med_crate",
                    getPosATL _target,
                    [],
                    0,
                    "CAN_COLLIDE"
                ];
				_dropCrate1 setVectorDirAndUp [vectorDir _target, vectorUp _target ];
				deleteVehicle _target;
                private _spawnDropPos2 = _dropCrate1 modelToWorld [0,0.2,0];
				private _dropCrate2 = createVehicle
				[
					"Spag_Weap_crate",
					_spawnDropPos2,
					[],
                    0,
                    "CAN_COLLIDE"
				];
				_dropCrate2 setVectorDirAndUp [vectorDir _dropCrate1, vectorUp _dropCrate1];
            },
            {},
            [_target]
        ] call CBA_fnc_progressBar;
    },
	1.5,
	true,
	true,
	"",
	"true",
	5
];
