class CfgPatches
{
	class Balance
	{
		name="Balance";
		units[]={
			
		};
		weapons[]={
			"rhs_weap_m32_secondary",
		};
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
	//class B_12Gauge_Pellets_Submunition;
	
	
};
class CfgMagazines
{
	//class CA_Magazine;
	//class CA_LauncherMagazine;
	//class Titan_AT: CA_LauncherMagazine
	//{
	//	mass=105;
	//};
	//class Titan_AP: CA_LauncherMagazine
	//{
	//	mass=70;
	//};
	//class Titan_AA: CA_LauncherMagazine
	//{
	//	mass=105;
	//};
	
	

	class rhsusf_mag_6Rnd_M585_white;
	class rhsusf_mag_6Rnd_HuntIR : rhsusf_mag_6Rnd_M585_white {
		displayName = "6rnd. GL HuntIR Round";
		displayNameShort = "HuntIR";
		descriptionShort = "Type: HuntIR<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		ammo = "F_HuntIR";
		scope = 2;
		mass = 24;
		picture = "\z\ace\addons\huntir\data\m_m1070_ca.paa";
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
	class InventoryItem_Base_F;
	
	class rhs_weap_m32;
	class rhs_weap_m32_secondary: rhs_weap_m32
	{
		type=2;
		//handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_M32.rtm"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m320.rtm"};
		magazines[] = {"rhsusf_mag_6Rnd_HuntIR","rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M433_HEDP","rhsusf_mag_6Rnd_M397_HET","rhsusf_mag_6Rnd_M576_Buckshot","rhsusf_mag_6Rnd_m4009","rhsusf_mag_6Rnd_M583A1_white","rhsusf_mag_6Rnd_m661_green","rhsusf_mag_6Rnd_m662_red","rhsusf_mag_6Rnd_M713_red","rhsusf_mag_6Rnd_M714_white","rhsusf_mag_6Rnd_M715_green","rhsusf_mag_6Rnd_M716_yellow","rhsusf_mag_6Rnd_M781_Practice"};
	}; 
	
	
	class ItemCore;
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
