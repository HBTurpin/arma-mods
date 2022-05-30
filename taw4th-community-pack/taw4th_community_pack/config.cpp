class CfgPatches
{
	class TAW4th_Equipment
	{
		units[]=
		{
			"TAW4th_Equipment_Backpack",
			"TAW4th_Equipment_Trooper",

		};
		weapons[]=
		{
			"TAW4th_Equipment_Trooper_NVG",
			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Vest",
			"TAW4th_Equipment_Trooper_Uniform",
			
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
	class TAW4th_Faction_Sub
	{
		displayName="Infantry";
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
	
	//BASE STANDARD
	class TAW4th_Equipment_Trooper_NVG: lsd_gar_standard_nvg
	{
		author="TAW";
		displayName="Clone Visor (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_NVG_Co.paa",
		};
	};
	class TAW4th_Equipment_Trooper_Helmet: SWLB_clone_P2_helmet
	{
		author="TAW";
		displayName="Clone Trooper P2 Helmet (4th)";
		hiddenSelectionsTextures[]=
		{
			"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Helmet_Co.paa",
		};
	};
	class TAW4th_Equipment_Trooper_Vest: SWLB_clone_recon_armor
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
	class TAW4th_Equipment_Trooper_Uniform: SWLB_clone_uniform
	{
	   author="TAW";
		displayName="Clone Trooper Armor (4th)";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="TAW4th_Equipment_Trooper";
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

	// Backpacks
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//Uniforms
	class TAW4th_Equipment_Trooper: SWLB_clone_base_P2
	{
		author="TAW";
		displayName="Clone Trooper";
		faction="TAW4th_Faction_Main";
		editorSubcategory="TAW4th_Faction_Sub";
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
	
	
	
	
	
	
	
	
	
	
	
	
	//Vehicles
	class Eventhandlers;
	class ViewPilot;
	class UserActions;
	
	class 3AS_BTLB_Bomber;
	class 3AS_LAATC;
	class 3as_laat_Base;
	class 3as_LAAT_Mk1;
	class 3as_LAAT_Mk1Lights;
	class 3as_LAAT_Mk2;
	class 3as_LAAT_Mk2Lights;
	class 3AS_Patrol_LAAT_Base;
	class 3as_arc_170_base;
	class 3as_saber_m1;
	class 3as_saber_super;
	class 3as_saber_m1G;
	class 3as_saber_m1Recon;
	
	class TAW4th_Vehicle_BTLB_YWing: 3AS_BTLB_Bomber
	{
		displayName="BTL-Y Wing (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="LAAT/C (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="LAAT/I Mk1 (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="LAAT/I Mk1 - Lights (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="LAAT/I Mk2 (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="LAAT/I Mk2 - Lights (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="LAAT/LE 'Wasp' (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="ARC-170 (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="ARC-170 'Razor' (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Frame_Razor_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Engine_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_ARC170_Guns_Co.paa"
		};
	};
	class TAW4th_Vehicle_TX130_M1: 3as_saber_m1
	{
		displayName="TX-130 M1 (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="TX-130 M1 Recon (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="TX-130 M1 GL (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
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
		displayName="TX-130 Super Saber (4th)";
		scope=2;
		crew="3AS_Clone_P2_Pilot";
		side=1;
		faction="TAW4th_Faction_Main";
		hiddenselectionstextures[]=
		{
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
			"taw4th_community_pack\data\vehicles\TAW4th_Vehicles_TX130_Weapon_Co.paa"
		};
	};
};
