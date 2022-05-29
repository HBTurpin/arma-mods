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
class CfgFactionClasses 
{
	class TAW4th_Equipment_Faction_Main
	{
	displayName = "TAW 4th Platoon";
	};
};
class CfgEditorSubcategories
{
	class TAW4th_Equipment_Faction_Sub
	{
		displayName="Infantry";
	};
};
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
	class TAW4th_Equipment_Trooper: SWLB_clone_base_P2
	{
		author="TAW";
		displayName="Clone Trooper";
		faction="TAW4th_Equipment_Faction_Main";
		editorSubcategory="TAW4th_Equipment_Faction_Sub";
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
};
