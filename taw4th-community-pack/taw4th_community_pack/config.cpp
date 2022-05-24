class CfgPatches
{
	class TAW_4th_Platoon_Equipment
	{
		units[]=
		{
			"TAW_4th_Platoon_Equipment_Backpack",
			"TAW_4th_Platoon_Equipment_Trooper",

		};
		weapons[]=
		{
			"TAW_4th_Platoon_Equipment_Trooper_NVG",
			"TAW_4th_Platoon_Equipment_Trooper_Helmet",
			"TAW_4th_Platoon_Equipment_Trooper_Vest",
			"TAW_4th_Platoon_Equipment_Trooper_Uniform",
			
		};
	};
	author="TAW";
};
class CfgFactionClasses 
{
	class TAW_4th_Platoon_Equipment_Faction_Main
	{
	displayName = "TAW 4th Platoon";
	};
};
class CfgEditorSubcategories
{
	class TAW_4th_Platoon_Equipment_Faction_Sub
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
	
	class TAW_4th_Platoon_Equipment_Trooper_NVG: lsd_gar_standard_nvg
	{
		author="TAW";
		displayName="Clone visor (4th)";
		hiddenSelectionsTextures[]=
		{
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Trooper_NVG_co.paa",
		};
	};
	class TAW_4th_Platoon_Equipment_Trooper_Helmet: SWLB_clone_P2_helmet
	{
		author="TAW";
		displayName="Clone trooper P2 helmet (4th)";
		hiddenSelectionsTextures[]=
		{
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Trooper_Helmet_Co.paa",
		};
	};
	class TAW_4th_Platoon_Equipment_Trooper_Vest: SWLB_clone_recon_armor
	{
		author="TAW";
        displayName = "Clone trooper recon vest (4th)";
		hiddenSelectionsTextures[]=
		{
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Trooper_Vest_Co.paa",
			"",
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Trooper_Vest_Co.paa",
		};
	};
	class TAW_4th_Platoon_Equipment_Trooper_Uniform: SWLB_clone_uniform
	{
	   author="TAW";
		displayName="Clone trooper armor (4th)";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="TAW_4th_Platoon_Equipment_Trooper";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
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


	class TAW_4th_Platoon_Equipment_Backpack: SWLB_clone_backpack
	{
		author="TAW";
		displayName="Clone trooper backpack (4th)";
		hiddenSelectionsTextures[]=
		{
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Backpack_Co.paa",
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Backpack_Co.paa",
		};
	};
	class TAW_4th_Platoon_Equipment_Trooper: SWLB_clone_base_P2
	{
		author="TAW";
		displayName="Clone Trooper";
		faction="TAW_4th_Platoon_Equipment_Faction_Main";
		editorSubcategory="TAW_4th_Platoon_Equipment_Faction_Sub";
		backpack="TAW_4th_Platoon_Equipment_Backpack";
		uniformclass="TAW_4th_Platoon_Equipment_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Trooper_Upper_Co.paa",
			"TAW_4th_Platoon_Equipment\data\TAW_4th_Platoon_Equipment_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"TAW_4th_Platoon_Equipment_Trooper_NVG",
			"TAW_4th_Platoon_Equipment_Trooper_Helmet",
			"TAW_4th_Platoon_Equipment_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"TAW_4th_Platoon_Equipment_Trooper_NVG",
			"405th_SW_Equipment_Trooper_Helmet",
			"405th_SW_Equipment_Trooper_Vest",
		};
	};
};
