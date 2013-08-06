class CfgPatches
{
	class FLAY_FireGeom
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class Thing;
	class FLAY_FireGeom: Thing
	{
		scope=2;
		displayName = "FireGeom";
		model="\FLAY\FLAY_FireGeom\FLAY_FireGeom.p3d";
		mapSize = 10;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0,CA)"};
	};
	
	class FLAY_FireGeom_Red: FLAY_FireGeom
	{
		scope=2;
		displayName = "FireGeom [RED]";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0,0,0.2,CA)"};
	};
	
	class FLAY_FireGeom_Green: FLAY_FireGeom
	{
		scope=2;
		displayName = "FireGeom [GREEN]";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,1,0,0.2,CA)"};
	};		
	
	class FLAY_FireGeom_Blue: FLAY_FireGeom
	{
		scope=2;
		displayName = "FireGeom [BLUE]";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,1,0.2,CA)"};
	};
	
	class Static;
	class FLAY_Line: Static
	{
		scope = 2;
		displayName = "Line";
		model = "FLAY\FLAY_FireGeom\FLAY_Line.p3d";
		hiddenSelections[] = {"camo"};
		class AnimationSources
		{
			class L0
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class R0
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class L1: L0 {};
			class R1: R0 {};
			class RY: R0 {};
			class RX: R0 {};
		};
	};		
};
