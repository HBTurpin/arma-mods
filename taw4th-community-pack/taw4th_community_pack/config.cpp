class CfgPatches
{
	class TAW4th_Equipment
	{
		units[]=
		{
			"TAW4th_Equipment_Backpack",
			"TAW4th_Equipment_Backpack_Medic",

			"TAW4th_Equipment_Trooper",
			"TAW4th_Equipment_Trooper_Officer",
			"TAW4th_Equipment_Trooper_Medic",
			"TAW4th_Equipment_Trooper_Pilot",
			
			
			"TAW4th_Vehicle_V19",
			"TAW4th_Vehicle_BTLB_YWing",
			
			"TAW4th_Vehicle_LAATC",
			"TAW4th_Vehicle_LAATI_MK1",
			"TAW4th_Vehicle_LAATI_MK1_Light",
			"TAW4th_Vehicle_LAATI_MK2",
			"TAW4th_Vehicle_LAATI_MK2_Light",
			"TAW4th_Vehicle_LAATLE",
			
			"TAW4th_Vehicle_ARC170",
			"TAW4th_Vehicle_ARC170_Razor",
			"TAW4th_Vehicle_Z95",
			
			"TAW4th_Vehicle_TX130_M1",
			"TAW4th_Vehicle_TX130_M1Recon",
			"TAW4th_Vehicle_TX130_M1G",
			"TAW4th_Vehicle_TX130_Super",

			"TAW4th_Vehicle_BARC",
			"TAW4th_Vehicle_BARC_Sidecar",
			"TAW4th_Vehicle_RTT",

			"TAW4th_Vehicle_ATTE",
			"TAW4th_Vehicle_ATJT",
			"TAW4th_Vehicle_ATRT",
			"TAW4th_Vehicle_ATAP",
		};
		weapons[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Helmet_Medic",
			
			"TAW4th_Equipment_Trooper_Vest_Recon",
			"TAW4th_Equipment_Trooper_Vest_ARC",
			"TAW4th_Equipment_Trooper_Vest_Officer",
			"TAW4th_Equipment_Trooper_Vest_Officer2",
			
			"TAW4th_Equipment_Trooper_Uniform",
			"TAW4th_Equipment_Trooper_Uniform_Medic",
			
			"TAW4th_Equipment_Trooper_Helmet_C_Almerra",
			"TAW4th_Equipment_Trooper_Helmet_C_Laffey",
			"TAW4th_Equipment_Trooper_Helmet_C_HBTurpin",
		};

		
		
	};
	author="TAW";
};



//FACTIONS
class CfgFactionClasses 
{
	class TAW4th_Faction_Main
	{
	displayName = "TAW 4th Platoon";
	};
};
class CfgEditorSubcategories
{
	class TAW4th_Faction_Infantry
	{
		displayName="Troopers";
	};
};



//NEW ITEMS/VEHICLES
class CfgWeapons
{
	class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_rangefinder;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_nvg_spec_nco;
	class SWLB_clone_commando_nvg_antenna;
	class SWLB_clone_commando_nvg;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class SWLB_clone_P2_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_commando_helmet_k1;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_arc_armor;
	class SWLB_clone_lieutenant_armor;
	class SWLB_clone_commando_eod_armor_k1;
	class SWLB_clone_commando_sniper_armor_k1;
	class SWLB_clone_commando_sl_armor_k1;
	class SWLB_clone_commando_tech_armor_k1;
	class SWLB_clone_uniform;
	class SWLB_clone_commando_uniform_k1;
	class SWLB_mando_og_armor;
	class SWLB_mando_og_helmet;
	class SWLB_mando_rangefinder;
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class ItemCore;
	class Vest_Camo_Base;
	class lsd_gar_standard_nvg;
	
	//EQUIPMENT
	class TAW4th_Equipment_Trooper_NVG: lsd_gar_standard_nvg
	{
		author="TAW";
		displayName="Clone Visor (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_NVG_Co.paa",
		};
	};
	
	
	
	//HELMETS
	class TAW4th_Equipment_Trooper_Helmet: SWLB_clone_P2_helmet
	{
		author="TAW";
		displayName="Clone Trooper P2 Helmet (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Helmet_Co.paa",
		};
	};
	class TAW4th_Equipment_Trooper_Helmet_Medic: SWLB_clone_P2_helmet
	{
		author="TAW";
		displayName="Clone Trooper P2 Helmet (Medic) (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Helmet_Medic_Co.paa",
		};
	};
	
	
	//VESTS
	class TAW4th_Equipment_Trooper_Vest_Recon: SWLB_clone_recon_armor
	{
		author="TAW";
        displayName = "Clone Trooper Recon Vest (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Co.paa",
			"",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Co.paa",
		};
	};
	class TAW4th_Equipment_Trooper_Vest_ARC: SWLB_clone_arc_armor
	{
		author="TAW";
        displayName = "Clone Trooper ARC Vest (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_ARC_Co.paa",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Officer_Co.paa"
		};
	};
	class TAW4th_Equipment_Trooper_Vest_Officer: SWLB_clone_officer_armor
	{
		author="TAW";
        displayName = "Clone Trooper Officer Vest 1 (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Officer_Co.paa",
		};
	};
	class TAW4th_Equipment_Trooper_Vest_Officer_2: SWLB_clone_officer_armor
	{
		author="TAW";
        displayName = "Clone Trooper Officer Vest 2 (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Officer2_Co.paa",
		};
	};
	
	
	//UNIFORMS
	class TAW4th_Equipment_Trooper_Uniform: SWLB_clone_uniform
	{
	    author="TAW";
		displayName="Clone Trooper Armor (4th)";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="TAW4th_Trooper";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class TAW4th_Equipment_Trooper_Uniform_Medic: SWLB_clone_uniform
	{
	    author="TAW";
		displayName="Clone Trooper Armor (Medic) (4th)";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="TAW4th_Trooper_Medic";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	

	// CUSTOM HELMETS
	class TAW4th_Equipment_Trooper_Helmet_C_Almerra: SWLB_clone_P2_helmet
	{
		author="TAW";
		displayName="Clone Trooper P2 Helmet (4th) [Almerra]";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\customs\TAW4th_Equipment_Trooper_Helmet_Almerra_Co.paa",
		};
	};
	class TAW4th_Equipment_Trooper_Helmet_C_Laffey: SWLB_clone_P2_helmet
	{
		author="TAW";
		displayName="Clone Trooper P2 Helmet (4th) [Laffey]";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\customs\TAW4th_Equipment_Trooper_Helmet_Laffey_Co.paa",
		};
	};
	class TAW4th_Equipment_Trooper_Helmet_C_HBTurpin: SWLB_clone_P2_helmet
	{
		author="TAW";
		displayName="Clone Trooper P2 Helmet (4th) [HBTurpin]";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\customs\TAW4th_Equipment_Trooper_Helmet_HBTurpin_Co.paa",
		};
	};
	
};



class CfgVehicles
{
	class SWLB_clone_commando_base;
	class SWLB_clone_commando_backpack_k2;
	class SWLB_clone_commando_backpack_k2_rto;
	class SWLB_clone_commando_backpack_k2_eod;
	class SWLB_clone_base_P2;
	class SWLB_clone_assault_base_P2;
	class SWLB_clone_cfr_base_P2;
	class SWLB_clone_medic_base_P2;
	class SWLB_clone_RTO_base_P2;
	class SWLB_clone_recon_base_P2;
	class SWLB_clone_recon_nco_base_P2;
	class SWLB_clone_recon_officer_base_P2;
	class SWLB_clone_airborne_base_P2;
	class SWLB_clone_airborne_nco_base_P2;
	class SWLB_clone_lieutenant_base_P2;
	class SWLB_clone_captain_base_P2;
	class SWLB_clone_commander_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_arc_base_P2;
	class SWLB_clone_pilot_base_P2;
	class SWLB_clone_sniper_base_P2;
	class SWLB_clone_sg_base_P2;
	class SWLB_clone_at_base_P2;
	class SWLB_clone_eod_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_eod;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_arc_backpack;
	class SWLB_mando_base_assault;
	class SWLG_tanks_tx130;
	class ls_laat;
	class ls_blueforBackpack_base;
	class O_officer_F;
    class ls_carrybox_base;
	class 3AS_Clone_P2_Pilot;

	//BACKPACKS
	class TAW4th_Equipment_Backpack: SWLB_clone_backpack
	{
		author="TAW";
		displayName="Clone Trooper Backpack (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
		};
	};
	class TAW4th_Equipment_Backpack_Medic: SWLB_clone_backpack
	{
		author="TAW";
		displayName="Clone Trooper Backpack (Medic) (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
		};
	};
	

	//UNIFORMS/UNITS
	class TAW4th_Trooper: SWLB_clone_base_P2
	{
		author="TAW";
		displayName="Clone Trooper";
		faction="TAW4th_Faction_Main";
		editorSubcategory="TAW4th_Faction_Infantry";
		scope=2;
		side=1;
		backpack="TAW4th_Equipment_Backpack";
		uniformclass="TAW4th_Equipment_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Upper_Co.paa",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Vest",
		};
	};
	class TAW4th_Trooper_Officer: SWLB_clone_base_P2
	{
		author="TAW";
		displayName="Clone Trooper Officer";
		faction="TAW4th_Faction_Main";
		editorSubcategory="TAW4th_Faction_Infantry";
		scope=2;
		side=1;
		backpack="TAW4th_Equipment_Backpack";
		uniformclass="TAW4th_Equipment_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Upper_Co.paa",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Vest_Officer2",
		};
		respawnLinkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Vest_Officer2",
		};
	};
	class TAW4th_Trooper_Medic: SWLB_clone_base_P2
	{
		author="TAW";
		displayName="Clone Trooper Medic";
		faction="TAW4th_Faction_Main";
		editorSubcategory="TAW4th_Faction_Infantry";
		scope=2;
		side=1;
		backpack="TAW4th_Equipment_Backpack_Medic";
		uniformclass="TAW4th_Equipment_Trooper_Uniform_Medic";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Upper_Medic_Co.paa",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Lower_Medic_Co.paa",
		};
		linkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet_Medic",
			"TAW4th_Equipment_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet_Medic",
			"TAW4th_Equipment_Trooper_Vest",
		};
	};
	class TAW4th_Trooper_Pilot: 3AS_Clone_P2_Pilot
	{
		author="TAW";
		displayName="Clone Trooper Pilot";
		faction="TAW4th_Faction_Main";
		editorSubcategory="TAW4th_Faction_Infantry";
		scope=2;
		side=1;
		backpack="TAW4th_Equipment_Backpack";
		uniformclass="TAW4th_Equipment_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Upper_Co.paa",
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Vest",
		};
	};
	

	//VEHICLES
	class Eventhandlers;
	class ViewPilot;
	class UserActions;
	
	class 3as_V19_base;
	class 3AS_BTLB_Bomber;
	class 3AS_LAATC;
	class 3as_laat_Base;
	class 3as_LAAT_Mk1;
	class 3as_LAAT_Mk1Lights;
	class 3as_LAAT_Mk2;
	class 3as_LAAT_Mk2Lights;
	class 3AS_Patrol_LAAT_Base;
	class 3as_Z95_base;
	class 3as_arc_170_base;
	class 3as_saber_m1;
	class 3as_saber_super;
	class 3as_saber_m1G;
	class 3as_saber_m1Recon;
	
	class 3as_RTT;
	
	class 3AS_BarcSideCar;
	class 3AS_BARC_Base;

	class 3as_ATTE_Base;
	class 3as_ATJT_Base;
	class 3AS_ATRT;
	class 3as_ATAP_base;
	
	class TAW4th_Vehicle_V19: 3as_V19_base
	{
		author="TAW";
		displayName="V-19 Torrent (4th)";
		scope=2;
		crew="TAW4th_Trooper";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_V19_Wings_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_V19_Wing Plates_co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_V19_Hull_co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_V19_GunGear_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_V19_Pizzlepit_co.paa"
		};
	};
	class TAW4th_Vehicle_BTLB_YWing: 3AS_BTLB_Bomber
	{
		author="TAW";
		displayName="BTL-Y Wing (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_BTLB_Co.paa",
			"3as\3as_btlb\data\detail_co.paa",
			"3as\3as_btlb\data\interior_co.paa"
		};
	};
	class TAW4th_Vehicle_LAATC: 3AS_LAATC
	{
		author="TAW";
		displayName="LAAT/C (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATC_0_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATC_1_Co.paa"
		};
	};
	class TAW4th_Vehicle_LAATI_MK1: 3as_LAAT_Mk1
	{
		author="TAW";
		displayName="LAAT/I Mk1 (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
		};
	};
	class TAW4th_Vehicle_LAATI_MK1_Light: 3as_LAAT_Mk1Lights
	{
		author="TAW";
		displayName="LAAT/I Mk1 - Lights (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
		};
	};
	class TAW4th_Vehicle_LAATI_MK2: 3as_LAAT_Mk2
	{
		author="TAW";
		displayName="LAAT/I Mk2 (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
		};
	};
	class TAW4th_Vehicle_LAATI_MK2_Light: 3as_LAAT_Mk2Lights
	{
		author="TAW";
		displayName="LAAT/I Mk2 - Lights (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
		};
	};
	class TAW4th_Vehicle_LAATLE: 3AS_Patrol_LAAT_Base
	{
		author="TAW";
		displayName="LAAT/LE 'Wasp' (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		forceInGarage=2;
		scopeCurator=2;
		scopeArsenal=2;
		radarTargetSize=0.2;
		visualTargetSize=0.2;
		editorPreview="";
		memoryPointGun[]=
		{
			"L_Muzzle",
			"R_muzzle"
		};
		gunBeg[]=
		{
			"L_Muzzle",
			"R_Muzzle"
		};
		gunEnd[]=
		{
			"L_Chamber",
			"R_Chamber"
		};
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"327th_laatle_cannon",
			"327th_UGM",
			"ls_weapon_CMFlareLauncher"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_LAATLE_Co.paa"
		};
		magazines[]=
		{
			"Laserbatteries",
			"327th_laatle_cannon_x500_mag",	//NEED TO REMOVE 327 DEPENDENCY
			"327th_laatle_cannon_x500_mag", //NEED TO REMOVE 327 DEPENDENCY
			"327th_ugm_mag6x",  //NEED TO REMOVE 327 DEPENDENCY
			"ls_mag_192rnd_CMFlareChaff_cyan",
			"ls_mag_192rnd_CMFlareChaff_cyan",
			"ls_mag_192rnd_CMFlareChaff_cyan"
		};
		class TransportBackpacks
		{
			class transport_parachutes
			{
				backpack="B_Parachute";
				count="30";
			};
		};
		class UserActions: UserActions
		{
			class DamageReport
			{
				displayName="<t color='#00FF00'>[Damage Report]</t>";
				displayNameDefault="<t color='#00FF00'>Damage Report</t>";
				textToolTip="<t color='#00FF00'>Damage Report</t>";
				position="pilotview";
				radius=10;
				priority=21;
				onlyForPlayer=1;
				condition="(alive this)";
				statement="this execVM ""\taw4th_community_pack\function\veh_damage_report.sqf""";
			};
			class ThrusterEngage
			{
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				position="pilotview";
				radius=20;
				priority=21;
				onlyForPlayer=1;
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == currentPilot this) AND (alive this) AND (speed this >10) )";
				statement="this execVM ""\taw4th_community_pack\function\laat_le_thruster_engage.sqf""";
			};
			class ThrusterDisengage: ThrusterEngage
			{
				priority=21;
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == currentPilot this) AND (alive this))";
				statement="this execVM ""\taw4th_community_pack\function\laat_le_thruster_disengage.sqf""";
			};
			class ThrusterEngage_Spam: ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="";
				position="pilotview";
				radius=20;
				priority=0;
				onlyForPlayer=1;
				condition="((player == currentPilot this) AND (alive this) AND (speed this >10) )";
				statement="this execVM ""\taw4th_community_pack\function\laat_le_thruster_engage.sqf""";
				shortcut="User19";
			};
			class ThrusterDisengage_Spam: ThrusterEngage
			{
				priority=0;
				displayName="";
				displayNameDefault="";
				textToolTip="";
				condition="((player == currentPilot this) AND (alive this))";
				statement="this execVM ""\taw4th_community_pack\function\laat_le_thruster_disengage.sqf""";
				shortcut="User20";
			};
		};
	};
	class TAW4th_Vehicle_ARC170: 3as_arc_170_base
	{
		author="TAW";
		displayName="ARC-170 (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Frame_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Engine_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Guns_Co.paa"
		};
	};
	class TAW4th_Vehicle_ARC170_Razor: 3as_arc_170_base
	{
		author="TAW";
		displayName="ARC-170 'Razor' (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Frame_Razor_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Engine_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Guns_Co.paa"
		};
	};
	class TAW4th_Vehicle_Z95: 3as_Z95_base
	{
		author="TAW";
		displayName="Z-95 Headhunter (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_Z95_Body_Co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
	};
	class TAW4th_Vehicle_TX130_M1: 3as_saber_m1
	{
		author="TAW";
		displayName="TX-130 M1 (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Weapon_Co.paa"
		};
	};
	class TAW4th_Vehicle_TX130_M1Recon: 3as_saber_m1Recon
	{
		author="TAW";
		displayName="TX-130 M1 Recon (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_WeaponScout_Co.paa"
		};
	};
	class TAW4th_Vehicle_TX130_M1G: 3as_saber_m1G
	{
		author="TAW";
		displayName="TX-130 M1 GL (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_WeaponGMG_Co.paa"
		};
	};
	class TAW4th_Vehicle_TX130_Super: 3as_saber_super
	{
		author="TAW";
		displayName="TX-130 Super Saber (4th)";
		scope=2;
		crew="TAW4th_Trooper_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Weapon_Co.paa"
		};
	};
	class TAW4th_Vehicle_BARC: 3AS_BARC_Base
	{
		author="TAW";
		mapSize=6.71;
		scopecurator=2;
		forceingarage=1;
		displayname="BARC Speeder (4th)";
		editorPreview="";
		_generalMacro="B_MRAP_01_F";
		scope=2;
		side=1;
		faction="TAW4th_Faction_Main";
		crew="TAW4th_Trooper";
		typicalCargo[]=
		{
			"TAW4th_Trooper"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_BARC_Co.paa"
		};
	};
	class TAW4th_Vehicle_BARC_Sidecar: 3AS_BarcSideCar
	{
		author="TAW";
		mapSize=6.71;
		scopecurator=2;
		forceingarage=1;
		displayname="BARC Speeder Sidecar (4th)";
		editorPreview="";
		_generalMacro="B_MRAP_01_F";
		scope=2;
		side=1;
		faction="TAW4th_Faction_Main";
		crew="TAW4th_Trooper";
		typicalCargo[]=
		{
			"TAW4th_Trooper"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_BARC_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_BARC_Side_Co.paa"
		};
	};
	class TAW4th_Vehicle_RTT: 3as_RTT
	{
		author="TAW";
		displayname="RTT (4th)";
		scope=2;
		crew="TAW4th_Trooper";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_RTT_Co.paa"
		};
	};
	class TAW4th_Vehicle_ATTE: 3as_ATTE_Base //MIDDLELEG NOT TEXTUREABLE, LOCATED IN P3D
	{
		author="TAW";
		displayName="AT-TE (4th) (WIP)";
		scope=2;
		crew="TAW4th_Trooper";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Chasis_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Cockpit_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Turrets_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Underpiping_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_MiddleLeg_Co.paa",
		};
	};
	class TAW4th_Vehicle_ATJT: 3AS_ATJT_Base //WHEELS NOT TEXTUREABLE, LOCATED IN P3D
	{
		author="TAW";
		displayName="AT-JT (4th) (WIP)";
		scope=2;
		crew="TAW4th_Trooper";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Chasis_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Cockpit_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Turrets_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_Underpiping_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ATTE_MiddleLeg_Co.paa",
		};
	};
	class TAW4th_Vehicle_ATRT: 3AS_ATRT //THESE AREN'T TEXTUREABLE AT THE MOMENT AS IS ALL IN P3D FILE
	{
		author="TAW";
		displayName="AT-RT (4th) (WIP)";
		scope=2;
		crew="TAW4th_Trooper";
		side=1;
		faction="TAW4th_Faction_Main";
	};
	class TAW4th_Vehicle_ATAP: 3as_ATAP_base //THESE AREN'T TEXTUREABLE AT THE MOMENT AS IS ALL IN P3D FILE
	{
		author="TAW";
		displayName="AT-AP (4th) (WIP)";
		scope=2;
		crew="TAW4th_Trooper";
		side=1;
		faction="TAW4th_Faction_Main";
	};







};
