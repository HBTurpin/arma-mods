class CfgPatches
{
    class TAW4th_Equipment
    {
        units[]=
        {
            "TAW4th_Equipment_Backpack",
            "TAW4th_Equipment_Backpack_Medic",
            "TAW4th_Equipment_Backpack_JLTS",
            "TAW4th_Equipment_Backpack_JLTS_RTO",
            "TAW4th_Equipment_Backpack_JLTS_Medic",

            "TAW4th_Equipment_Trooper_Uniform",
            "TAW4th_Equipment_Trooper_Uniform_Officer",
            "TAW4th_Equipment_Trooper_Uniform_Medic",
            "TAW4th_Equipment_Pilot_Uniform",

            "TAW4th_Equipment_Trooper_Armour",
            "TAW4th_Equipment_Trooper_Armour_Medic",
            "TAW4th_Equipment_Trooper_Armour_Officer",
            "TAW4th_Equipment_Pilot_Armour",
            "TAW4th_Equipment_Trooper_Base",

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
        weapons[] =
        {
            "TAW4th_Equipment_Trooper_Visor_NVG",
            "TAW4th_Equipment_Trooper_Visor_Rangefinder",
            "TAW4th_Equipment_Trooper_Visor_Commander",
            "TAW4th_Equipment_Trooper_Helmet",
            "TAW4th_Equipment_Trooper_Helmet_Medic",
            "TAW4th_Equipment_Pilot_Helmet",
            "TAW4th_Equipment_Trooper_Vest_Recon",
            "TAW4th_Equipment_Trooper_Vest_ARC_A",
            "TAW4th_Equipment_Trooper_Vest_ARC_B",
            "TAW4th_Equipment_Trooper_Vest_Officer_A",
            "TAW4th_Equipment_Trooper_Vest_Officer_B",
            "TAW4th_Equipment_Pilot_Vest",
            "TAW4th_Equipment_Trooper_Vest_Medic",
            "TAW4th_Equipment_Trooper_Vest_Medic_Kama",
            "TAW4th_Equipment_Trooper_Vest_Holster",

            "TAW4th_Equipment_Trooper_Uniform",
            "TAW4th_Equipment_Trooper_Uniform_Officer",
            "TAW4th_Equipment_Trooper_Uniform_Medic",
            "TAW4th_Equipment_Pilot_Uniform",
            "TAW4th_Equipment_Trooper_Base",

            "TAW4th_Equipment_Trooper_Armour",
            "TAW4th_Equipment_Trooper_Armour_Medic",
            "TAW4th_Equipment_Trooper_Armour_Officer",
            "TAW4th_Equipment_Pilot_Armour",

            "TAW4th_Equipment_Trooper_Helmet_C_Almerra",
            "TAW4th_Equipment_Trooper_Helmet_C_Laffey",
            "TAW4th_Equipment_Trooper_Helmet_C_HBTurpin",
        };



    };
    author="TAW";
};


//FACTIONS
class cfgFactionClasses
{
    class TAW4th_Faction_Main
    {
        displayName = "TAW 4th Platoon";  // Name on ingame menus
        priority = 3; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; // Leave as is
    };
};
class CfgEditorSubcategories
{
    class TAW4th_Inf
    {
        displayName = "Infantry";
    };
    	class TAW4th_Armoured
    {    
		displayName = "Armour";
	};
};

class CfgWeapons
    {
    class HeadgearItem;
    class ItemCore;
    class ItemInfo;
    class ls_gar_phase1_helmet;
    class ls_gar_phase2_helmet;
    class ls_gar_phase2Insulated_helmet;
    class ls_gar_phase1Arf_helmet;
    class ls_gar_phase2Arf_helmet;
    class ls_gar_phase1Pilot_helmet;
    class ls_gar_phase2Pilot_helmet;
    class SWLB_P1_SpecOps_Helmet;
    class SWLB_P2_SpecOps_Helmet;
    class SWLB_clone_BARC_helmet;
    class SWLB_P1_Pilot_Helmet;
    class SWLB_clone_pilot_P2_helmet;
    class SWLB_clone_ARF_P1_helmet;
    class SWLB_clone_ARF_P2_helmet;
    class SWLB_clone_P2_helmet;
    class SWLB_clone_commando_helmet_k1;
    class SWLB_clone_rangefinder;
    class SWLB_clone_nvg_spec;
    class SWLB_clone_mcVisor;
    class SWLB_clone_nvg;
    class SWLB_clone_AB_helmet;
    class ls_gar_atrtDriver_helmet;
    class ls_gar_galacticMarine_helmet;
    class ls_gar_desert_helmet;
    class ls_gar_arc_helmet;
    class ls_gar_airborne_helmet;
    class ls_gar_engineer_helmet;
    class ls_gar_barc_helmet;
    class ls_gar_rex_helmet;
    class ls_gar_scout_helmet;
    class lsd_gar_airborne_helmet;

    //Vest//

    class SWLB_clone_arc_armor;
    class SWLB_clone_kama_armor;
    class SWLB_clone_recon_armor;
    class SWLB_clone_officer_armor;
    class SWLB_clone_airborne_armor;
    class SWLB_clone_airborne_nco_armor;
    class SWLB_clone_medic_armor;
    class SWLB_clone_cfr_armor;
    class SWLB_CEE_Clone_Hood;
    class ls_misc_poncho_base;
    class lsd_gar_standard_nvg;
    class lsd_gar_rangefinder_nvg;
    class lsd_gar_p2Commander_nvg;
    class 3AS_Pilot_Vest;
    class 3AS_U_Pilot_Phase3;
    class JLTS_CloneVestAirborneNCO;
    class JLTS_CloneVestOfficer2;
    class TAW4th_Equipment_Trooper_Vest_Recon: SWLB_clone_recon_armor
        {
            author="TAW";
            displayName = "Clone Trooper Recon Vest (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Vest_ARC_A: SWLB_clone_arc_armor
        {
            author="TAW";
            displayName = "Clone Trooper ARC Vest A (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_ARC_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Officer_Co.paa"
            };
        };
    class TAW4th_Equipment_Trooper_Vest_ARC_B: SWLB_clone_arc_armor
        {
            author="TAW";
            displayName = "Clone Trooper ARC Vest B (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_ARC_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Officer2_Co.paa"
            };
        };
    class TAW4th_Equipment_Trooper_Vest_Officer_A: SWLB_clone_officer_armor
        {
            author="TAW";
            displayName = "Clone Trooper Officer Vest A (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Officer_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Vest_Officer_B: SWLB_clone_officer_armor
        {
            author="TAW";
            displayName = "Clone Trooper Officer Vest B (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Officer2_Co.paa",
            };
        };
    class TAW4th_Equipment_Pilot_Vest: 3AS_Pilot_Vest
        {
            author="TAW";
            displayName = "Clone Pilot Vest (4th)";
            scope=2;
            hiddenSelections[]=
            {
                "Camo"
            };
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Pilot_Vest_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Vest_Medic: JLTS_CloneVestAirborneNCO
        {
            displayName="Clone Medic Vest (4th)";
            author="TAW";
            scope=2;
            class ItemInfo: ItemInfo
            {
                vestType="Rebreather";
                containerClass="Supply150";
                class HitpointsProtectionInfo
                {
                    class Chest
                    {
                        HitpointName="HitChest";
                        armor=6;
                        PassThrough=0.30000001;
                    };
                    class Legs
                    {
                        hitpointName="HitLegs";
                        armor=6;
                        passThrough=0.30000001;
                    };
                    class Arms
                    {
                        hitpointName="HitArms";
                        armor=4;
                        passThrough=0.30000001;
                    };
                };
            };
            hiddenSelections[]=
            {
                "camo1",
                "camo2"
            };
            hiddenSelectionsTextures[]=
            {
                "",
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Medic2_Co.paa"
            };
        };
    class TAW4th_Equipment_Trooper_Vest_Medic_Kama: JLTS_CloneVestAirborneNCO
        {
            displayName="Clone Medic Vest w/ Kama (4th)";
            author="TAW";
            scope=2;
            class ItemInfo: ItemInfo
            {
                vestType="Rebreather";
                containerClass="Supply150";
                class HitpointsProtectionInfo
                {
                    class Chest
                    {
                        HitpointName="HitChest";
                        armor=6;
                        PassThrough=0.30000001;
                    };
                    class Legs
                    {
                        hitpointName="HitLegs";
                        armor=6;
                        passThrough=0.30000001;
                    };
                    class Arms
                    {
                        hitpointName="HitArms";
                        armor=4;
                        passThrough=0.30000001;
                    };
                };
            };
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_SideHolster_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Vest_Medic2_Co.paa"
            };
        };
    class TAW4th_Equipment_Trooper_Vest_Holster: JLTS_CloneVestOfficer2
        {
            displayname="Clone Trooper Sidearm Holster (4th)";
            author="TAW";
            scope=2;
            picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
            class ItemInfo: ItemInfo
            {
                vestType="Rebreather";
                uniformmodel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
                containerClass="Supply150";
            };
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_SideHolster_Co.paa"
            };
        };

            //Armor//

    class SWLB_clone_uniform;
    class ls_gar_phase2_uniform;
    class SWLB_clone_commando_uniform_k1;
    class UniformItem;
    class TAW4th_Equipment_Trooper_Uniform : SWLB_clone_uniform
    {
        displayName = "(4th) Clone Trooper Armor";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour";
            containerClass = "Supply200";
            mass = 10;
        };
    };
    class TAW4th_Equipment_Trooper_Uniform_Officer : SWLB_clone_uniform
    {
        displayName = "(4th) Clone Officer Armor";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Officer";
            containerClass = "Supply200";
            mass = 10;
        };

    };
    class TAW4th_Equipment_Trooper_Uniform_Medic : SWLB_clone_uniform
    {
        displayName = "(4th) Clone Trooper Medic Armor";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Medic";
            containerClass = "Supply200";
            mass = 10;
        };
    };
    class TAW4th_Equipment_Trooper_Uniform_Pilot : 3AS_U_Pilot_Phase3
    {
        displayName = "(4th) Clone Pilot Armor";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Pilot_Armour";
            containerClass = "Supply200";
            mass = 10;
        };

    };

                        //NVG//
    class TAW4th_Equipment_Trooper_Visor_NVG: lsd_gar_standard_nvg
        {
            author="TAW";
            displayName="Clone Trooper Visor (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Visor_NVG_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Visor_Rangefinder: lsd_gar_rangefinder_nvg
        {
            author="TAW";
            displayName="Clone Trooper Rangefinder Visor (4th)";
            scope=2;
            hiddenSelections[]=
            {
                "camo1"
            };
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Visor_Rangefinder_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Visor_Commander: lsd_gar_p2Commander_nvg
        {
            author="TAW";
            displayName="Clone Trooper Commander Visor (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Visor_Commander_Co.paa",
            };
        };

        // Helmets  //

    class TAW4th_Equipment_Trooper_Helmet: SWLB_clone_P2_helmet
        {
            author="TAW";
            displayName="Clone Trooper P2 Helmet (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Helmet_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Helmet_Medic: SWLB_clone_P2_helmet
        {
            author="TAW";
            displayName="Clone Trooper P2 Helmet (Medic) (4th)";
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Helmet_Medic_Co.paa",
            };
        };
    class TAW4th_Equipment_Pilot_Helmet: SWLB_clone_pilot_P2_helmet
        {
            author="TAW";
            displayName="Clone Pilot P2 Helmet (4th)";
            scope=2;
            hiddenSelections[]=
            {
                "camo1"
            };
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\base\TAW4th_Equipment_Pilot_Helmet_Co.paa",
            };
        };

    // CUSTOM HELMETS

    class TAW4th_Equipment_Trooper_Helmet_C_Almerra: SWLB_clone_P2_helmet
        {
            author="TAW";
            scope=2;
            displayName="Clone Trooper P2 Helmet (4th) [Almerra]";
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\customs\TAW4th_Equipment_Trooper_Helmet_Almerra_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Helmet_C_Laffey: SWLB_clone_P2_helmet
        {
            author="TAW";
            scope=2;
            displayName="Clone Trooper P2 Helmet (4th) [Laffey]";
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\customs\TAW4th_Equipment_Trooper_Helmet_Laffey_Co.paa",
            };
        };
    class TAW4th_Equipment_Trooper_Helmet_C_HBTurpin: SWLB_clone_P2_helmet
        {
            author="TAW";
            scope=2;
            displayName="Clone Trooper P2 Helmet (4th) [HBTurpin]";
            hiddenSelectionsTextures[]=
            {
                "taw4th_community_pack\data\customs\TAW4th_Equipment_Trooper_Helmet_HBTurpin_Co.paa",
            };
        };
};
class CfgVehicles
{
    // BACKPACKS //

    class ls_gar_phase2_base;
    class SWLB_clone_base_P2;
    class SWLB_clone_arc_base_P2;
    class SWLB_clone_airborne_base_P2;
    class SWLB_clone_backpack;
    class SWLB_clone_backpack_predef_light;
    class SWLB_clone_backpack_eod;
    class ls_gar_medic_backpack;
    class ls_gar_radio_backpack;
    class ls_gar_standard_backpack;
    class ls_gar_heavy_backpack;
    class SWLB_clone_backpack_heavy;
    class SWLB_clone_backpack_predef_heavy;
    class SWLB_clone_backpack_predef_medic;
    class SWLB_clone_backpack_predef_sg;
    class SWLB_clone_backpack_RTO;
    class SWLB_clone_backpack_medic;
    class JLTS_Clone_backpack;
    class JLTS_Clone_backpack_RTO;
    class 3AS_Clone_P2_Pilot;
    class UniformSlotInfo;
    class Man;
    class CAManBase : Man
    {
        class HitPoints
        {
            class HitHead;
            class HitBody;
            class HitHands;
            class HitLegs;
        };
    };
    class SoldierWB : CAManBase {};
    class B_Soldier_base_F : SoldierWB {};

    class TAW4th_Equipment_Backpack : SWLB_clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
            "taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
        };
    };
    class TAW4th_Equipment_Backpack_Medic : SWLB_clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
            "taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_Co.paa",
        };
    };
    class TAW4th_Equipment_Backpack_JLTS : JLTS_Clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_JLTS_Co.paa"
        };
    };
    class TAW4th_Equipment_Backpack_JLTS_RTO : JLTS_Clone_backpack_RTO
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper RTO Backpack (4th)";
        maximumLoad = 180;
        tf_range = 50000;
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_JLTS_RTO_Co.paa"
        };
    };
    class TAW4th_Equipment_Backpack_JLTS_Medic : JLTS_Clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\data\base\TAW4th_Equipment_Backpack_JLTS_Medic_Co.paa"
        };
    };

    //Armour Stuff//

    class TAW4th_Equipment_Trooper_Armour : SWLB_clone_base_P2
    {
        author = "TAW";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Clone Trooper";
        faction = "TAW4th_Faction_Main";
        editorSubcategory = "TAW4th_Inf";
        backpack = "TAW4th_Equipment_Backpack";
        uniformclass = "TAW4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = { "taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Upper_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Lower_Co.paa", };
        linkedItems[] = { "TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Vest", };
        respawnLinkedItems[] = { "TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Vest", };

        armor = 20;
        armorStructural = 0.5;
        explosionShielding = 0.5;
        minTotalDamageThreshold = 0.001;
        impactDamageMultiplier = 0.5;
    };
    class TAW4th_Equipment_Trooper_Armour_Officer: TAW4th_Equipment_Trooper_Armour
    {
        author="TAW";
        faction = "TAW4th_Faction_Main";
        editorSubcategory = "TAW4th_Inf";
        scope = 2;
        scopeCurator = 2;
        side = 1
        displayName="Clone Trooper Officer";
        backpack = "TAW4th_Equipment_Backpack";
        uniformclass = "TAW4th_Equipment_Trooper_Uniform_Officer";
        hiddenselectionsTextures[] = {"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Upper_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Lower_Co.paa"};
        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};
        linkedItems[]={"SWLB_clone_basic_armor","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Visor_Commander","TAW4th_Equipment_Trooper_Vest_Officer2","","SWLB_comlink"};
        respawnLinkedItems[]={"SWLB_clone_basic_armor","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Visor_Commander","TAW4th_Equipment_Trooper_Vest_Officer2","ItemWatch","","SWLB_comlink"};
        };
    class TAW4th_Equipment_Trooper_Armour_Medic: TAW4th_Equipment_Trooper_Armour
    {
        author="TAW";
        displayName="Clone Trooper Medic";
        faction="TAW4th_Faction_Main";
        editorSubcategory = "TAW4th_Inf";
        scope=2;
        scopeCurator=2;
        side=1;
        backpack="TAW4th_Equipment_Backpack_Medic";
        uniformclass="TAW4th_Equipment_Trooper_Uniform_Medic";
        hiddenSelectionsTextures[]={"taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Upper_Medic_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Trooper_Lower_Medic_Co.paa",};
        linkedItems[]={"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Medic","TAW4th_Equipment_Trooper_Vest",};
        respawnLinkedItems[]={"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Medic","TAW4th_Equipment_Trooper_Vest",};
    };
    class TAW4th_Equipment_Pilot_Armour: 3AS_Clone_P2_Pilot
    {
        author="TAW";
        displayName="Clone Pilot";
        faction="TAW4th_Faction_Main";
        editorSubcategory = "TAW4th_Inf";
        scope=2;
        scopeCurator=2;
        side=1;
        backpack="TAW4th_Equipment_Backpack";
        uniformclass="TAW4th_Equipment_Pilot_Uniform";
        hiddenSelectionsTextures[]={"taw4th_community_pack\data\base\TAW4th_Equipment_Pilot_Camo1_Co.paa","taw4th_community_pack\data\base\TAW4th_Equipment_Pilot_Camo2_Co.paa"};
        linkedItems[]={"TAW4th_Equipment_Trooper_Visor_Rangefinder","TAW4th_Equipment_Pilot_Helmet","TAW4th_Equipment_Pilot_Vest",};
        respawnLinkedItems[]={"TAW4th_Equipment_Trooper_Visor_Rangefinder","TAW4th_Equipment_Pilot_Helmet","TAW4th_Equipment_Pilot_Vest",};
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Trooper_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
            forceInGarage=2;
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
            side=1;
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Pilot_Armour";
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
            forceingarage=1;
            displayname="BARC Speeder (4th)";
            editorPreview="";
            _generalMacro="B_MRAP_01_F";
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Trooper_Armour";
            typicalCargo[]=
            {
                "TAW4th_Equipment_Trooper_Armour"
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
            forceingarage=1;
            displayname="BARC Speeder Sidecar (4th)";
            editorPreview="";
            _generalMacro="B_MRAP_01_F";
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Trooper_Armour";
            typicalCargo[]=
            {
                "TAW4th_Equipment_Trooper_Armour"
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Trooper_Armour";
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Trooper_Armour";
            side=1;
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Trooper_Armour";
            side=1;
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
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            displayName="AT-RT (4th) (WIP)";
            crew="TAW4th_Equipment_Trooper_Armour";
            side=1;
        };
        class TAW4th_Vehicle_ATAP: 3as_ATAP_base //THESE AREN'T TEXTUREABLE AT THE MOMENT AS IS ALL IN P3D FILE
        {
            author="TAW";
            faction="TAW4th_Faction_Main";
	    	editorSubcategory="TAW4th_Armoured";
            displayName="AT-AP (4th) (WIP)";
            scope=2;
	    	scopeArsenal=2;
		    scopeCurator=2;
            crew="TAW4th_Equipment_Trooper_Armour";
            side=1;
        };







    };

};