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
		//side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
	};
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
        displayName = "Clone Trooper Armor Base (4th)";
        scope = 0;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Armour_Base";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
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
    };
	class GEG4th_Equipment_Trooper_Uniform_Scratch : GEG4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Scratched)";
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
    };
    class GEG4th_Equipment_Trooper_Uniform_Medic : GEG4th_Equipment_Trooper_Uniform
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Medic Armor (4th)";
        class ItemInfo : UniformItem
        {
            uniformType = "Neopren";
            uniformModel = "-";
            uniformClass = "GEG4th_Equipment_Trooper_Armour_Medic";
            containerClass = "Supply150";
            mass = 10;
            vestType = "Rebreather";
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Co.paa"
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_ARC_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer_Co.paa"
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_ARC_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer2_Co.paa"
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer_Co.paa",
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Officer2_Co.paa",
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
            "4th_base\data\equipment\GEG4th_Equipment_Pilot_Vest_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Vest_Medic: JLTS_CloneVestAirborneNCO
    {
        displayName="Clone Medic Vest (4th)";
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
        hiddenSelections[] ={"camo1","camo2"};
        hiddenSelectionsTextures[] ={"","4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Medic2_Co.paa"};
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
        hiddenSelectionsTextures[] ={"4th_base\data\equipment\GEG4th_Equipment_Trooper_SideHolster_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Vest_Medic2_Co.paa"};
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_SideHolster_Co.paa"
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Visor_NVG_Co.paa",
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
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Visor_Rangefinder_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Visor_Commander : lsd_gar_p2Commander_nvg
    {
        author = "GEG";
        displayName = "Clone Trooper Commander Visor (4th)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Visor_Commander_Co.paa",
        };
    };


             //Helmets//
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
        displayName = "Clone Trooper P2 Helmet (4th)";
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
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Clean_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Recruit : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Recruit)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Recruit_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Dirt : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Dirty)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Dirt_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_DirtScratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Dirty & Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_DirtScratch_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Scratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Scratch_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Woodland : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Clean_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Woodland_Recruit : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Recruit_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Woodland_Dirt : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Dirty)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Dirt_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Woodland_DirtScratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Dirty & Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_DirtScratch_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_Woodland_Scratch : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Helmet_Scratch_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_Medic : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) (Medic)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Trooper_Helmet_Medic_Co.paa",
        };
    };
    class GEG4th_Equipment_Pilot_Helmet : SWLB_clone_pilot_P2_helmet
    {
        author = "GEG";
        displayName = "Clone Pilot P2 Helmet (4th)";
        scope = 2;
        //ace_hearing_lowerVolume = 0.60;//
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
            "4th_base\data\equipment\GEG4th_Equipment_Pilot_Helmet_Co.paa",
        };
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
            "4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
            "4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
        };
    };
    class GEG4th_Equipment_Backpack_Medic : SWLB_clone_backpack
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
            "4th_base\data\equipment\GEG4th_Equipment_Backpack_Co.paa",
        };
    };
    class GEG4th_Equipment_Backpack_JLTS : JLTS_Clone_backpack
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Backpack_JLTS_Co.paa"
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
            "4th_base\data\equipment\GEG4th_Equipment_Backpack_JLTS_RTO_Co.paa"
        };
    };
    class GEG4th_Equipment_Backpack_JLTS_Medic : JLTS_Clone_backpack
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "4th_base\data\equipment\GEG4th_Equipment_Backpack_JLTS_Medic_Co.paa"
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
		hiddenSelectionsTextures[] = { "4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Co.paa"};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Recruit_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Recruit_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Dirt_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Dirt_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_DirtScratch_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_DirtScratch_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Scratch_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Scratch_Co.paa",};
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
        hiddenSelectionsTextures[]={"4th_base\data\equipment\GEG4th_Equipment_Trooper_Upper_Medic_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Trooper_Lower_Medic_Co.paa"};
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
		hiddenSelectionsTextures[]={"4th_base\data\equipment\GEG4th_Equipment_Pilot_Camo1_Co.paa","4th_base\data\equipment\GEG4th_Equipment_Pilot_Camo2_Co.paa"};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Recruit_Co.paa","4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Recruit_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Dirt_Co.paa","4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Dirt_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_DirtScratch_Co.paa","4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_DirtScratch_Co.paa",};
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
		hiddenSelectionsTextures[] = {"4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Upper_Scratch_Co.paa","4th_base\data\equipment\woodland\GEG4th_Equipment_Trooper_Lower_Scratch_Co.paa",};
		linkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Scratch","Throw","Put"};
		respawnLinkedItems[] = {"","GEG4th_Equipment_Trooper_Helmet_Woodland_Scratch","Throw","Put"};
	};
};