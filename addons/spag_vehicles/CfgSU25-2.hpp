	class DefaultVehicleSystemsDisplayManagerLeft
	{
		class Components;
	};
	class DefaultVehicleSystemsDisplayManagerRight
	{
		class Components;
	};
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;

	class RHS_Su25SM_vvs;
	class RHS_Su25SM_vvs_DonkeyPunched : RHS_Su25SM_vvs
	{
		scope = 2;
		displayname = "Su-25 VVS Balanced";
		author = "DirtySanchez/DPCG";
		faction = "rhs_faction_vvs";
		hiddenselectionstextures[] = {
			QPATHTOF(\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_co.paa),
			QPATHTOF(\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_co.paa),
			QPATHTOF(a3\data_f\clear_empty.paa),
			QPATHTOF(a3\data_f\clear_empty.paa),
			QPATHTOF(a3\data_f\clear_empty.paa),
			QPATHTOF(a3\data_f\clear_empty.paa),
			QPATHTOF(rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa)
			};
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		driverCanSee = "1+2+4+8+16";
		laserScanner = 1;
		showAllTargets = 4;
		LockDetectionSystem = 8 + 4;
		incomingMissileDetectionSystem = "8+16";
		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.1, 0.5, 0.0074999998};
		airFrictionCoefs2[] = {0.001, 0.0049999999, 6.7000001e-005};
		acceleration = 420;
		weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_klen_ps", "rhs_weap_GSh302",
					"Laserdesignator_pilotCamera"};
		magazines[] = {"rhs_lasermag", "rhs_mag_gsh30_bt_250", "Laserbatteries"};
		attenuationEffectType = "PlaneAttenuation";
		soundIncommingMissile[] = {
			QPATHTOF(\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4),
			0.39810717, 1};
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				side = "left";
				boneName = "Wheel_1";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
				suspTravelDirection[] = {0, -1, 0};
				steering = 1;
				width = 0.16;
				mass = 100;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 5000;
				maxHandBrakeTorque = 10000;
				maxCompression = 0.2105;
				maxDroop = 0.015;
				sprungMass = 4066;
				springStrength = 56600;
				springDamperRate = 215569.59;
				longitudinalStiffnessPerUnitGravity = 4000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			class Wheel_1_fake : Wheel_1
			{
			};
			class Wheel_2 : Wheel_1
			{
				boneName = "Wheel_2";
				steering = 0;
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				width = 0.28;
				mass = 125;
				maxBrakeTorque = 20000;
				maxHandBrakeTorque = 20000;
				longitudinalStiffnessPerUnitGravity = 5000;
				springDamperRate = 220569.59;
				sprungMass = 6652;
				springStrength = 151000;
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
			};
			class Wheel_3 : Wheel_2
			{
				boneName = "Wheel_3";
				side = "right";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(75 / 120)";
					minFov = "(75 / 120)";
					maxFov = "(75 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG"};
					gunnerOpticsModel = QPATHTOF(\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d);
					opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
				};
				class Medium : Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(14.4 / 120)";
					minFov = "(14.4 / 120)";
					maxFov = "(14.4 / 120)";
					gunnerOpticsModel = QPATHTOF(\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d);
				};
				class Narrow : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(4.8 / 120)";
					minFov = "(4.8 / 120)";
					maxFov = "(4.8 / 120)";
					gunnerOpticsModel = QPATHTOF(\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d);
				};
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 25;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						animDirection = "PilotCamera_V";
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						animDirection = "PilotCamera_V";
					};
					class AntiRadiationSensorComponent : SensorTemplateAntiRadiation
					{
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
					};
					class NVSensorComponent : SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000, 16000, 24000, 4000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	};
