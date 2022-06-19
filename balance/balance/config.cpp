class CfgPatches
{
	class Balance
	{
		name="Balance";
		units[]={};
		weapons[]={};
		requiredVersion=2.04;
		requiredAddons[]=
		{
			"ace_realisticnames",
			"A3_Data_F_AoW_Loadorder"
		};
		author="HBTurpin";
		authors[]=
		{
			"HBTurpin"
		};
		url="";
		version="1.0.0.1";
		versionStr="1.0.0.1";
		versionAr[]={1,0,0,1};
	};
};
class CfgAmmo
{
	class B_12Gauge_Pellets_Submunition;
	
	
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class Titan_AT: CA_LauncherMagazine
	{
		mass=125;
	};
	class Titan_AP: CA_LauncherMagazine
	{
		mass=70;
	};
	class Titan_AA: CA_LauncherMagazine
	{
		mass=125;
	};
};
class CfgMagazineWells
{
};
class CfgVehicles
{
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class ItemcTab: ItemCore
	{
		mass=30;
	};
	class ItemMicroDAGR: ItemcTab
	{
		mass=5;
	};
	class ItemAndroid: ItemcTab
	{
		mass=5;
	};
	class ItemcTabHCam: ItemCore
	{
		mass=4;
	};
};
