                                                                                                        //4th Base Config//
class cfgPatches
{
	class GEG4th_Equipment
	{
		author = "GEG";
		units[] =
		{
			"GEG4th_Equipment_Backpack",
			"GEG4th_Equipment_Backpack_Medic",
			"GEG4th_Equipment_Backpack_JLTS",
			"GEG4th_Equipment_Backpack_JLTS_RTO",
			"GEG4th_Equipment_Backpack_JLTS_Medic",

			"GEG4th_Equipment_Armour_Base",
			"GEG4th_Equipment_Trooper_Armour",
			"GEG4th_Equipment_Trooper_Armour_Recruit",
			"GEG4th_Equipment_Trooper_Armour_Dirt",
			"GEG4th_Equipment_Trooper_Armour_DirtScratch",
			"GEG4th_Equipment_Trooper_Armour_Scratch",
            "GEG4th_Equipment_Trooper_Armour_Medic",
            "GEG4th_Equipment_Pilot_Armour",
            "GEG4th_Equipment_Trooper_Armour_Woodland",
            "GEG4th_Equipment_Trooper_Armour_Woodland_Recruit",
            "GEG4th_Equipment_Trooper_Armour_Woodland_Dirt",
            "GEG4th_Equipment_Trooper_Armour_Woodland_DirtScratch",
            "GEG4th_Equipment_Trooper_Armour_Woodland_Scratch",
		};
		weapons[] =
		{
			"GEG4th_Equipment_Trooper_Visor_NVG",
			"GEG4th_Equipment_Trooper_Visor_Rangefinder",
			"GEG4th_Equipment_Trooper_Visor_Commander",
			"GEG4th_Equipment_Trooper_Vest_Recon",
			"GEG4th_Equipment_Trooper_Vest_ARC_A",
			"GEG4th_Equipment_Trooper_Vest_ARC_B",
			"GEG4th_Equipment_Trooper_Vest_Officer_A",
			"GEG4th_Equipment_Trooper_Vest_Officer_B",
			"GEG4th_Equipment_Pilot_Vest",
			"GEG4th_Equipment_Trooper_Vest_Medic",
			"GEG4th_Equipment_Trooper_Vest_Medic_Kama",
			"GEG4th_Equipment_Trooper_Vest_Holster",

			"GEG4th_Equipment_Trooper_Helmet",
			"GEG4th_Equipment_Trooper_Helmet_Recruit",
			"GEG4th_Equipment_Trooper_Helmet_Dirt",
			"GEG4th_Equipment_Trooper_Helmet_DirtScratch",
			"GEG4th_Equipment_Trooper_Helmet_Scratch",
			"GEG4th_Equipment_Trooper_Helmet_Woodland",
			"GEG4th_Equipment_Trooper_Helmet_Woodland_Recruit",
			"GEG4th_Equipment_Trooper_Helmet_Woodland_Dirt",
			"GEG4th_Equipment_Trooper_Helmet_Woodland_DirtScratch",
			"GEG4th_Equipment_Trooper_Helmet_Woodland_Scratch",
			"GEG4th_Equipment_Trooper_Helmet_Medic",
			"GEG4th_Equipment_Pilot_Helmet",

			"GEG4th_Equipment_Uniform_Base",
			"GEG4th_Equipment_Armour_Base",
			
			"GEG4th_Equipment_Trooper_Uniform",
			"GEG4th_Equipment_Trooper_Uniform_Recruit",
			"GEG4th_Equipment_Trooper_Uniform_Dirt",
			"GEG4th_Equipment_Trooper_Uniform_DirtScratch",
			"GEG4th_Equipment_Trooper_Uniform_Scratch",
			"GEG4th_Equipment_Trooper_Uniform_Woodland",
			"GEG4th_Equipment_Trooper_Uniform_Woodland_Recruit",
			"GEG4th_Equipment_Trooper_Uniform_Woodland_Dirt",
			"GEG4th_Equipment_Trooper_Uniform_Woodland_DirtScratch",
			"GEG4th_Equipment_Trooper_Uniform_Woodland_Scratch",
		};
	};
};

//FACTIONS//
class cfgFactionClasses
{
	class GEG4th_Faction
	{
		displayName = "[GEG] 4th Legion";  
		side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
	};
};
class CfgEditorCategories
{
    class 4th_resupply;
};
class CfgEditorSubcategories
{
	class GEG4th_Troopers
	{
		displayName = "4th Infantry";
	};
	class GEG4th_Troopers_Woodland
	{
		displayName = "4th Infantry [Woodland]";

	};
    //class GEG4th_Vehicles
    //{
    //    displayName = "4th Vehicles";
    //};
};

class CfgWeapons
{
                //Armor//
    class SWLB_clone_uniform;
    class ls_gar_phase2_uniform;
    class 3AS_U_Pilot_Phase3;
    class UniformItem;
    class ItemInfo;
    class GEG4th_Equipment_Uniform_Base : SWLB_clone_uniform
    {
        author = "GEG";
        scope = 2;
        displayName = "DO NOT USE Clone Trooper P2 Base DO NOT USE";
        class ItemInfo : UniformItem
        {
            hiddenSelections[] = { "camo1" };
            mass = 10;
            uniformModel = "\SWLB_clones\swlb_clone_uniform.p3d";
            uniformClass = "GEG4th_Equipment_Armour_Base";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor";
            camo = "Clean";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Recruit : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Recruit)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Recruit";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor";
            camo = "Recruit";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Dirt : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Dirty)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Dirt";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor";
            camo = "Dirt";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_DirtScratch : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Dirty & Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_DirtScratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor";
            camo = "Dirt_Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Scratch : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Dirty & Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Scratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor";
            camo = "Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Woodland : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Woodland";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor_wood";
            camo = "Clean";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Woodland_Recruit : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Recruit)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Woodland_Recruit";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor_wood";
            camo = "Recruit";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Woodland_Dirt : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Dirty)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Woodland_Dirt";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor_wood";
            camo = "Dirt";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Woodland_DirtScratch : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Dirty & Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Woodland_DirtScratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor_wood";
            camo = "Dirt_Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Woodland_Scratch : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Woodland_Scratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor_wood";
            camo = "Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Uniform_Medic : GEG4th_Equipment_Trooper_Uniform
    {
        displayName = "Clone Trooper Medic Armor (4th)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Medic";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor";
            camo = "Medic";
        };
    };
    class GEG4th_Equipment_Pilot_Uniform : 3AS_U_Pilot_Phase3
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Pilot Armour (4th)";
        class ItemInfo : UniformItem
        {
            uniformType = "Neopren";
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Pilot_Armour";
            containerClass = "Supply150";
            mass = 10;
            vestType = "Rebreather";
        };
        class XtdGearInfo
        {
            model = "4th_CloneArmor";
            camo = "Pilot";
        };
    };

    //Vests//
    class VestItem;
    class ItemCore;
    class SWLB_clone_recon_armor: ItemCore
    {
        class ItemInfo;
    };
    class SWLB_clone_arc_armor: ItemCore
    {
        class ItemInfo;
    };
    class SWLB_clone_officer_armor: ItemCore
    {
        class ItemInfo;
    };
    class 3AS_Pilot_Vest: ItemCore
    {
        class ItemInfo;
    };
    class JLTS_CloneVestAirborneNCO: ItemCore
    {
        class ItemInfo;
    };
    class JLTS_CloneVestOfficer2: ItemCore
    {
        class ItemInfo;
    };

    class GEG4th_Equipment_Trooper_Vest_Recon : SWLB_clone_recon_armor
    {
        author = "GEG";
        displayName = "Clone Trooper Recon Vest (4th)";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Co.paa"
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Recon";
        };
    };
    class GEG4th_Equipment_Trooper_Vest_ARC_A : SWLB_clone_arc_armor
    {
        author = "GEG";
        displayName = "Clone Trooper ARC Vest A (4th)";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_ARC_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer_Co.paa"
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Arc_A";
        };
    };
    class GEG4th_Equipment_Trooper_Vest_ARC_B : SWLB_clone_arc_armor
    {
        author = "GEG";
        displayName = "Clone Trooper ARC Vest B (4th)";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_ARC_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer2_Co.paa"
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Arc_B";
        };
    };
    class GEG4th_Equipment_Trooper_Vest_Officer_A : SWLB_clone_officer_armor
    {
        author = "GEG";
        displayName = "Clone Trooper Officer Vest A (4th)";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Officer_A";
        };
    };
    class GEG4th_Equipment_Trooper_Vest_Officer_B : SWLB_clone_officer_armor
    {
        author = "GEG";
        displayName = "Clone Trooper Officer Vest B (4th)";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer2_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Officer_B";
        };
    };
    class GEG4th_Equipment_Pilot_Vest : 3AS_Pilot_Vest
    {
        author = "GEG";
        displayName = "Clone Pilot Vest (4th)";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Pilot_Vest_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Pilot";
        };
    };
    class GEG4th_Equipment_Trooper_Vest_Medic: JLTS_CloneVestAirborneNCO
    {
        displayName="Clone Medic Vest (4th)";
        author="GEG";
        hiddenSelections[] = { "camo1","camo2" };
        hiddenSelectionsTextures[] = { "","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Medic2_Co.paa" };
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Medic";
        };
    };
    class GEG4th_Equipment_Trooper_Vest_Medic_Kama: JLTS_CloneVestAirborneNCO
    {
        displayName="Clone Medic Vest w/ Kama (4th)";
        author="GEG";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        scope = 2;
		hiddenSelections[] ={"camo1","camo2"};
        hiddenSelectionsTextures[] ={"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_SideHolster_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Medic2_Co.paa"};
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Medic_K";
        };
    };
    class GEG4th_Equipment_Trooper_Vest_Holster : JLTS_CloneVestOfficer2
    {
        displayname = "Clone Trooper Sidearm Holster (4th)";
        author = "GEG";
        picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
        class ItemInfo : ItemInfo
        {
            vestType = "Rebreather";
            containerClass = "Supply150";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.30000001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.30000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.30000001;
                    explosionShielding = 0.2;
                };
            };
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_SideHolster_Co.paa"
        };
        class XtdGearInfo
        {
            model = "4th_CloneVest";
            camo = "Holster";
        };
    };

                 //NVG//
    class lsd_gar_standard_nvg;
    class lsd_gar_rangefinder_nvg;
    class lsd_gar_p2Commander_nvg;
    class GEG4th_Equipment_Trooper_Visor_NVG : lsd_gar_standard_nvg
    {
        author = "GEG";
        displayName = "Clone Trooper Visor (4th)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Visor_NVG_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneNVG";
            camo = "Visor";
        };
    };
    class GEG4th_Equipment_Trooper_Visor_Rangefinder : lsd_gar_rangefinder_nvg
    {
        author = "GEG";
        displayName = "Clone Trooper Rangefinder Visor (4th)";
        scope = 2;
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Visor_Rangefinder_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneNVG";
            camo = "RangeFinder";
        };
    };
    class GEG4th_Equipment_Trooper_Visor_Commander : lsd_gar_p2Commander_nvg
    {
        author = "GEG";
        displayName = "Clone Trooper Commander Visor (4th)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Visor_Commander_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneNVG";
            camo = "Visor_Command";
        };
    };


             //Helmets//
    class HeadgearItem;
    class SWLB_clone_P2_helmet : ItemCore
    {
        class ItemInfo;
    };
    class SWLB_clone_pilot_P2_helmet : ItemCore
    {
        class ItemInfo;
    };
    class GEG4th_Equipment_Trooper_Helmet : SWLB_clone_P2_helmet
    {
        author = "GEG";
        displayName = "DO NOT USE Clone Trooper P2 Helmet DO NOT USE";
        class ItemInfo : HeadgearItem
        {
            hiddenSelections[] = {"camo1"};
            mass = 10;
            uniformModel = "\SWLB_clones\SWLB_clone_P2_helmet.p3d";
            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor = 15;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_Shiny : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (CLean)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Clean_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2";
            camo = "Clean";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Recruit : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Recruit)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Recruit_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2";
            camo = "Recruit";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Dirt : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Dirty)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Dirt_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2";
            camo = "Dirt";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_DirtScratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Dirty & Scratched)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_DirtScratch_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2";
            camo = "Dirt_Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Scratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Scratched)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Scratch_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2";
            camo = "Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Woodland : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Clean_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_wood";
            camo = "Clean";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Woodland_Recruit : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland Recruit)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Recruit_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_wood";
            camo = "Recruit";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Woodland_Dirt : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Dirty Dirt)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Dirt_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_wood";
            camo = "Dirt";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Woodland_DirtScratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Dirty Scratched)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_DirtScratch_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_wood";
            camo = "Dirt_Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Woodland_Scratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Scratched)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Scratch_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_wood";
            camo = "Scratched";
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Medic : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Medic)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Medic_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2";
            camo = "Medic";
        };
    };
    class GEG4th_Equipment_Pilot_Helmet : SWLB_clone_pilot_P2_helmet
    {
        author = "GEG";
        displayName = "Clone Pilot P2 Helmet (4th)";
        scope = 2;
		class HitpointsProtectionInfo
        {
            class Head
            {
                hitPointName = "HitHead";
                armor = 15;
                passThrough = 0.5;
            };
        };
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Pilot_Helmet_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2Pilot";
            camo = "Pilot";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
         
};


class CfgVehicles
{
    //Backpacks//
    class SWLB_clone_backpack;
    class JLTS_Clone_backpack;
    class JLTS_Clone_backpack_RTO;
    class GEG4th_Equipment_Backpack : SWLB_clone_backpack
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneBackpack";
            camo = "Trooper_A";
        };
    };
    class GEG4th_Equipment_Backpack_Medic : SWLB_clone_backpack
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneBackpack";
            camo = "Medic_A";
        };
    };
    class GEG4th_Equipment_Backpack_JLTS : JLTS_Clone_backpack
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Backpack_JLTS_Co.paa"
        };
        class XtdGearInfo
        {
            model = "4th_CloneBackpack";
            camo = "Trooper_B";
        };
    };
    class GEG4th_Equipment_Backpack_JLTS_RTO : JLTS_Clone_backpack_RTO
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper RTO Backpack (4th)";
        maximumLoad = 180;
        tf_range = 50000;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Backpack_JLTS_RTO_Co.paa"
        };
        class XtdGearInfo
        {
            model = "4th_CloneBackpack";
            camo = "RTO";
        };
    };
    class GEG4th_Equipment_Backpack_JLTS_Medic : JLTS_Clone_backpack
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Backpack_JLTS_Medic_Co.paa"
        };
        class XtdGearInfo
        {
            model = "4th_CloneBackpack";
            camo = "Medic_B";
        };
    };

    //Units//
    class B_Soldier_f;
    class SWLB_clone_base_P2: B_Soldier_f{};
    class 3AS_Clone_P2_Pilot: B_Soldier_f{};
	class GEG4th_Equipment_Armour_Base: SWLB_clone_base_P2
	{
		author = "GEG";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		side = 1;
		displayName = "Clone Trooper";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Uniform_Base";
		hiddenSelectionsTextures[] = { "4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Co.paa"};
		linkedItems[] = { "GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet","GEG4th_Equipment_Trooper_Vest","Throw","Put"};
		respawnLinkedItems[] = { "GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet","GEG4th_Equipment_Trooper_Vest","Throw", "Put"};

        armor = 15;
        armorStructural = 8;
        explosionShielding = 1.8;
        minTotalDamageThreshold = 0.001;
        impactDamageMultiplier = 0.5;
	};
	class GEG4th_Equipment_Trooper_Armour: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
		linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_Recruit: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper Recruit";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Recruit";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Recruit_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Recruit_Co.paa",};
		linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Recruit","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Recruit","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_Dirt: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty)";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Dirt";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Dirt_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Dirt_Co.paa",};
		linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Dirt","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Dirt","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_DirtScratch: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty & Scratched)";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_DirtScratch";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_DirtScratch_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_DirtScratch_Co.paa",};
		linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_DirtScratch","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_DirtScratch","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_Scratch: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Scratched)";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Scratch";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Scratch_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Scratch_Co.paa",};
		linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Scratch","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Scratch","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
    class GEG4th_Equipment_Trooper_Armour_Medic : GEG4th_Equipment_Armour_Base
    {
        author= "GEG";
        scope= 2;
        scopeCurator= 2;
        scopeArsenal= 2;
        side= 1;
        displayName= "Clone Trooper Medic";
        faction= "GEG4th_Faction";
        editorSubcategory= "GEG4th_Troopers";
        backpack= "GEG4th_Equipment_Backpack_JLTS";
        uniformclass= "GEG4th_Equipment_Trooper_Uniform_Medic";
        hiddenSelectionsTextures[]={"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Medic_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Medic_Co.paa"};
        linkedItems[]={"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Medic","GEG4th_Equipment_Trooper_Vest","Throw","Put"};
        respawnLinkedItems[]={"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_Medic","GEG4th_Equipment_Trooper_Vest","Throw","Put"};
    };
    class GEG4th_Equipment_Pilot_Armour : 3AS_Clone_P2_Pilot
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
		displayName="Clone Pilot";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers";
		backpack="GEG4th_Equipment_Backpack_JLTS";
		uniformclass="GEG4th_Equipment_Pilot_Uniform";
		hiddenSelectionsTextures[]={"4th_legion\4th_base\data\equipment\GEG4th_Equipment_Pilot_Camo1_Co.paa","4th_legion\4th_base\data\equipment\GEG4th_Equipment_Pilot_Camo2_Co.paa"};
		linkedItems[]={"GEG4th_Equipment_Trooper_Visor_Rangefinder","GEG4th_Equipment_Pilot_Helmet","GEG4th_Equipment_Pilot_Vest","Throw","Put"};
		respawnLinkedItems[]={"GEG4th_Equipment_Trooper_Visor_Rangefinder","GEG4th_Equipment_Pilot_Helmet","GEG4th_Equipment_Pilot_Vest","Throw","Put"};
	};
	        //Woodland
	class GEG4th_Equipment_Trooper_Armour_Woodland: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers_Woodland";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Woodland";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
		linkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland","Throw","Put"};
		respawnLinkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_Woodland_Recruit: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers_Woodland";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Woodland_Recruit";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Recruit_Co.paa","4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Recruit_Co.paa",};
		linkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Recruit","Throw","Put"};
		respawnLinkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Recruit","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_Woodland_Dirt: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty)";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers_Woodland";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Woodland_Dirt";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Dirt_Co.paa","4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Dirt_Co.paa",};
		linkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Dirt","Throw","Put"};
		respawnLinkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Dirt","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_Woodland_DirtScratch: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty & Scratched)";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers_Woodland";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Woodland_DirtScratch";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_DirtScratch_Co.paa","4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_DirtScratch_Co.paa",};
		linkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_DirtScratch","Throw","Put"};
		respawnLinkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_DirtScratch","Throw","Put"};
	};
	class GEG4th_Equipment_Trooper_Armour_Woodland_Scratch: GEG4th_Equipment_Armour_Base
	{
		author = "GEG";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Scratched)";
		faction = "GEG4th_Faction";
		editorSubcategory = "GEG4th_Troopers_Woodland";
		backpack = "GEG4th_Equipment_Backpack_JLTS";
		uniformclass = "GEG4th_Equipment_Trooper_Uniform_Woodland_Scratch";
		hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Scratch_Co.paa","4th_legion\4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Scratch_Co.paa",};
		linkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Scratch","Throw","Put"};
		respawnLinkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Scratch","Throw","Put"};
	};
};
class XtdGearModels
{
    class CfgWeapons
    {
        class 4th_CloneHelmetP2
        {
            label = "Clone Trooper Helmet";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Clean","Recruit","Dirt","Scratched","Dirt_Scratched","Medic"}; // All class names
                class Clean // Camo value from Item
                {
                    label = "Clean"; // Value for Arsenal
                };
                class Recruit
                {
                    label = "Recruit";
                };
                class Dirt
                {
                    label = "Dirt";
                };
                class Scratched
                {
                    label = "Scratched";
                };
                class Dirt_Scratched
                {
                    label = "Dirt_Scratched";
                };
                class Medic
                {
                    label = "Medic";
                };
            };
        };
        class 4th_CloneHelmetP2_wood
        {
            label = "Clone Trooper Helmet Wood";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Clean","Recruit","Dirt","Scratched","Dirt_Scratched","Medic"}; // All class names
                class Clean // Camo value from Item
                {
                    label = "Clean"; // Value for Arsenal
                };
                class Recruit
                {
                    label = "Recruit";
                };
                class Dirt
                {
                    label = "Dirt";
                };
                class Scratched
                {
                    label = "Scratched";
                };
                class Dirt_Scratched
                {
                    label = "Dirt_Scratched";
                };
                class Medic
                {
                    label = "Medic";
                };
                class Pilot
                {
                    label = "Pilot";
                };
            };
        };
        class 4th_CloneArmor
        {
            label = "Clone Trooper Armor";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Clean","Recruit","Dirt","Scratched","Dirt_Scratched","Medic"}; // All class names
                class Clean // Camo value from Item
                {
                    label = "Clean"; // Value for Arsenal
                };
                class Recruit
                {
                    label = "Recruit";
                };
                class Dirt
                {
                    label = "Dirt";
                };
                class Scratched
                {
                    label = "Scratched";
                };
                class Dirt_Scratched
                {
                    label = "Dirt_Scratched";
                };
                class Medic
                {
                    label = "Medic";
                };
                class Pilot
                {
                    label = "Pilot";
                };
            };
        };
        class 4th_CloneArmor_wood
        {
            label = "Clone Trooper Armor";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Clean","Recruit","Dirt","Scratched","Dirt_Scratched","Medic"}; // All class names
                class Clean // Camo value from Item
                {
                    label = "Clean"; // Value for Arsenal
                };
                class Recruit
                {
                    label = "Recruit";
                };
                class Dirt
                {
                    label = "Dirt";
                };
                class Scratched
                {
                    label = "Scratched";
                };
                class Dirt_Scratched
                {
                    label = "Dirt_Scratched";
                };
                class Medic
                {
                    label = "Medic";
                };
            };
        };
        class 4th_CloneVest
        {
            label = "Clone Trooper Vests";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Recon","Arc_A","Arc_B","Officer_A","Officer_B","Pilot","Medic","Medic_K","Holster"}; // All class names
                class Recon // Camo value from Item
                {
                    label = "Recon"; // Value for Arsenal
                };
                class Arc_A
                {
                    label = "Arc A";
                };
                class Arc_B
                {
                    label = "Arc B";
                };
                class Officer_A
                {
                    label = "Officer A";
                };
                class Officer_B
                {
                    label = "Officer B";
                };
                class Pilot
                {
                    label = "Pilot";
                };
                class Medic
                {
                    label = "Medic";
                };
                class Medic_K
                {
                    label = "Medic [K]";
                };
                class Holster
                {
                    label = "Holster";
                };
            };
        };
        class 4th_CloneNVG
        {
            label = "Clone Trooper Visor";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Visor","RangeFinder","Visor_Command"}; // All class names
                class Visor // Camo value from Item
                {
                    label = "Visor"; // Value for Arsenal
                };
                class RangeFinder
                {
                    label = "RangeFinder";
                };
                class Visor_Command
                {
                    label = "Visor Command";
                };
            };
        };
    };
    class CfgVehicles
    {
        class 4th_CloneBackpack
        {
            label = "Clone Trooper Backpack";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Trooper_A","Medic_A","Trooper_B","Medic_B","RTO"}; // All class names
                class Trooper_A // Camo value from Item
                {
                    label = "Trooper A"; // Value for Arsenal
                };
                class Medic_A
                {
                    label = "Medic A";
                };
                class Trooper_B
                {
                    label = "Trooper B";
                };
                class Medic_B
                {
                    label = "Medic B";
                };
                class RTO
                {
                    label = "RTO";
                };
            };
        };
    };
};