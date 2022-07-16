                                                                                                        //4th Base Config//
class cfgPatches
{
	class TAW4th_Equipment
	{
		author = "TAW";
		units[] =
		{
			"TAW4th_Equipment_Backpack",
			"TAW4th_Equipment_Backpack_Medic",
			"TAW4th_Equipment_Backpack_JLTS",
			"TAW4th_Equipment_Backpack_JLTS_RTO",
			"TAW4th_Equipment_Backpack_JLTS_Medic",

			"TAW4th_Equipment_Armour_Base",
			"TAW4th_Equipment_Trooper_Armour",
			"TAW4th_Equipment_Trooper_Armour_Recruit",
			"TAW4th_Equipment_Trooper_Armour_Dirt",
			"TAW4th_Equipment_Trooper_Armour_DirtScratch",
			"TAW4th_Equipment_Trooper_Armour_Scratch",
			"TAW4th_Equipment_Trooper_Armour_Woodland",
			"TAW4th_Equipment_Trooper_Armour_Woodland_Recruit",
			"TAW4th_Equipment_Trooper_Armour_Woodland_Dirt",
			"TAW4th_Equipment_Trooper_Armour_Woodland_DirtScratch",
			"TAW4th_Equipment_Trooper_Armour_Woodland_Scratch",
            "TAW4th_Equipment_Trooper_Armour_Medic",
            "TAW4th_Equipment_Pilot_Armour",
		};
		weapons[] =
		{
			"TAW4th_Equipment_Trooper_Visor_NVG",
			"TAW4th_Equipment_Trooper_Visor_Rangefinder",
			"TAW4th_Equipment_Trooper_Visor_Commander",
			"TAW4th_Equipment_Trooper_Vest_Recon",
			"TAW4th_Equipment_Trooper_Vest_ARC_A",
			"TAW4th_Equipment_Trooper_Vest_ARC_B",
			"TAW4th_Equipment_Trooper_Vest_Officer_A",
			"TAW4th_Equipment_Trooper_Vest_Officer_B",
			"TAW4th_Equipment_Pilot_Vest",
			"TAW4th_Equipment_Trooper_Vest_Medic",
			"TAW4th_Equipment_Trooper_Vest_Medic_Kama",
			"TAW4th_Equipment_Trooper_Vest_Holster",

			"TAW4th_Equipment_Trooper_Helmet",
			"TAW4th_Equipment_Trooper_Helmet_Recruit",
			"TAW4th_Equipment_Trooper_Helmet_Dirt",
			"TAW4th_Equipment_Trooper_Helmet_DirtScratch",
			"TAW4th_Equipment_Trooper_Helmet_Scratch",
			"TAW4th_Equipment_Trooper_Helmet_Woodland",
			"TAW4th_Equipment_Trooper_Helmet_Woodland_Recruit",
			"TAW4th_Equipment_Trooper_Helmet_Woodland_Dirt",
			"TAW4th_Equipment_Trooper_Helmet_Woodland_DirtScratch",
			"TAW4th_Equipment_Trooper_Helmet_Woodland_Scratch",
			"TAW4th_Equipment_Trooper_Helmet_Medic",
			"TAW4th_Equipment_Pilot_Helmet",

			"TAW4th_Equipment_Uniform_Base",
			"TAW4th_Equipment_Armour_Base",
			
			"TAW4th_Equipment_Trooper_Uniform",
			"TAW4th_Equipment_Trooper_Uniform_Recruit",
			"TAW4th_Equipment_Trooper_Uniform_Dirt",
			"TAW4th_Equipment_Trooper_Uniform_DirtScratch",
			"TAW4th_Equipment_Trooper_Uniform_Scratch",
			"TAW4th_Equipment_Trooper_Uniform_Woodland",
			"TAW4th_Equipment_Trooper_Uniform_Woodland_Recruit",
			"TAW4th_Equipment_Trooper_Uniform_Woodland_Dirt",
			"TAW4th_Equipment_Trooper_Uniform_Woodland_DirtScratch",
			"TAW4th_Equipment_Trooper_Uniform_Woodland_Scratch",
			"TAW4th_Equipment_Trooper_Armour",
			"TAW4th_Equipment_Trooper_Armour_Recruit",
			"TAW4th_Equipment_Trooper_Armour_Dirt",
			"TAW4th_Equipment_Trooper_Armour_DirtScratch",
			"TAW4th_Equipment_Trooper_Armour_Scratch",
			"TAW4th_Equipment_Trooper_Armour_Woodland",
			"TAW4th_Equipment_Trooper_Armour_Woodland_Recruit",
			"TAW4th_Equipment_Trooper_Armour_Woodland_Dirt",
			"TAW4th_Equipment_Trooper_Armour_Woodland_DirtScratch",
			"TAW4th_Equipment_Trooper_Armour_Woodland_Scratch",
			
			"TAW4th_Equipment_Trooper_Helmet_C_Almerra",
			"TAW4th_Equipment_Trooper_Helmet_C_Laffey",
			"TAW4th_Equipment_Trooper_Helmet_C_HBTurpin",
			"TAW4th_Equipment_Trooper_Helmet_C_Dakiiiee",
			"TAW4th_Equipment_Trooper_Helmet_C_Fluffy",
			"TAW4th_Equipment_Trooper_Helmet_C_Kaede",
            "TAW4th_Equipment_Trooper_Helmet_C_Tucc",
            "TAW4th_Equipment_Trooper_Helmet_C_Bearskylls",
            "TAW4th_Equipment_Trooper_Helmet_C_Limnades",
		};
	};
};

                //FACTIONS//
class cfgFactionClasses
{
	class TAW4th_Faction
	{
		displayName = "[TAW] 4th Battalion";  // Name on ingame menus
		side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
	};
};
class CfgEditorSubcategories
{
	class TAW4th_Troopers
	{
		displayName = "4th Infantry";
	};
	
	class TAW4th_Troopers_Woodland
	{
		displayName = "4th Infantry (Woodland)";
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
    class TAW4th_Equipment_Uniform_Base : SWLB_clone_uniform
    {
        author = "TAW";
        displayName = "Clone Trooper Armor Base (4th)";
        scope = 0;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Armour_Base";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
    class TAW4th_Equipment_Trooper_Uniform : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Recruit : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Recruit)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Recruit";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Dirt : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Dirty)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Dirt";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_DirtScratch : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Dirty & Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_DirtScratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Scratch : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Scratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Woodland : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Woodland";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Woodland_Recruit : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Recruit)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Woodland_Recruit";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Woodland_Dirt : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Dirty)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Woodland_Dirt";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Woodland_DirtScratch : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Dirty & Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Woodland_DirtScratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
	class TAW4th_Equipment_Trooper_Uniform_Woodland_Scratch : TAW4th_Equipment_Uniform_Base
    {
        displayName = "Clone Trooper Armor (4th) (Woodland) (Scratched)";
        scope = 2;
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Woodland_Scratch";
            containerClass = "Supply200";
            uniformType = "Neopren";
            vestType = "Rebreather";
            mass = 10;
        };
    };
    class TAW4th_Equipment_Trooper_Uniform_Medic : TAW4th_Equipment_Trooper_Uniform
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Medic Armor (4th)";
        class ItemInfo : UniformItem
        {
            uniformType = "Neopren";
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Trooper_Armour_Medic";
            containerClass = "Supply150";
            mass = 10;
            vestType = "Rebreather";
        };
    };
    class TAW4th_Equipment_Pilot_Uniform : 3AS_U_Pilot_Phase3{

        author = "TAW";
        scope = 2;
        displayName = "Clone Pilot Armour (4th)";
        class ItemInfo : UniformItem
        {
            uniformType = "Neopren";
            uniformModel = "-";
            uniformClass = "TAW4th_Equipment_Pilot_Uniform";
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
    class 3AS_Pilot_Vest: ItemCore{

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

    class TAW4th_Equipment_Trooper_Vest_Recon : SWLB_clone_recon_armor
    {
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_Co.paa"
        };
    };
    class TAW4th_Equipment_Trooper_Vest_ARC_A : SWLB_clone_arc_armor
    {
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_ARC_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_Officer_Co.paa"
        };
    };
    class TAW4th_Equipment_Trooper_Vest_ARC_B : SWLB_clone_arc_armor
    {
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_ARC_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_Officer2_Co.paa"
        };
    };
    class TAW4th_Equipment_Trooper_Vest_Officer_A : SWLB_clone_officer_armor
    {
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_Officer_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Vest_Officer_B : SWLB_clone_officer_armor
    {
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_Officer2_Co.paa",
        };
    };
    class TAW4th_Equipment_Pilot_Vest : 3AS_Pilot_Vest{

        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Pilot_Vest_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Vest_Medic: JLTS_CloneVestAirborneNCO
    {
        displayName="Clone Medic Vest (4th)";
        author="TAW";
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
        hiddenSelectionsTextures[] ={"","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_Medic2_Co.paa"};
    };
    class TAW4th_Equipment_Trooper_Vest_Medic_Kama: JLTS_CloneVestAirborneNCO
    {
        displayName="Clone Medic Vest w/ Kama (4th)";
        author="TAW";
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
        hiddenSelectionsTextures[] ={"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_SideHolster_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Vest_Medic2_Co.paa"};
    };
    class TAW4th_Equipment_Trooper_Vest_Holster : JLTS_CloneVestOfficer2
    {
        displayname = "Clone Trooper Sidearm Holster (4th)";
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_SideHolster_Co.paa"
        };
    };

                 //NVG//
    class lsd_gar_standard_nvg;
    class lsd_gar_rangefinder_nvg;
    class lsd_gar_p2Commander_nvg;
    class TAW4th_Equipment_Trooper_Visor_NVG : lsd_gar_standard_nvg
    {
        author = "TAW";
        displayName = "Clone Trooper Visor (4th)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Visor_NVG_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Visor_Rangefinder : lsd_gar_rangefinder_nvg
    {
        author = "TAW";
        displayName = "Clone Trooper Rangefinder Visor (4th)";
        scope = 2;
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Visor_Rangefinder_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Visor_Commander : lsd_gar_p2Commander_nvg
    {
        author = "TAW";
        displayName = "Clone Trooper Commander Visor (4th)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Visor_Commander_Co.paa",
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
    class TAW4th_Equipment_Trooper_Helmet : SWLB_clone_P2_helmet
    {
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Helmet_Clean_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Recruit : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Recruit)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Helmet_Recruit_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Dirt : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Dirty)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Helmet_Dirt_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_DirtScratch : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Dirty & Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Helmet_DirtScratch_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Scratch : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Helmet_Scratch_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Woodland : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Helmet_Clean_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Woodland_Recruit : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Helmet_Recruit_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Woodland_Dirt : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Dirty)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Helmet_Dirt_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Woodland_DirtScratch : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Dirty & Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Helmet_DirtScratch_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_Woodland_Scratch : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Woodland) (Scratched)";
        scope = 2;
		hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Helmet_Scratch_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_Medic : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        displayName = "Clone Trooper P2 Helmet (4th) (Medic)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Helmet_Medic_Co.paa",
        };
    };
    class TAW4th_Equipment_Pilot_Helmet : SWLB_clone_pilot_P2_helmet
    {
        author = "TAW";
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Pilot_Helmet_Co.paa",
        };
    };

            //Custom Helmets//
    class TAW4th_Equipment_Trooper_Helmet_C_Almerra : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Almerra]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_Almerra_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_Laffey : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Laffey]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_Laffey_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_HBTurpin : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [HBTurpin]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_HBTurpin_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_C_Dakiiiee : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Dakiiiee]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_Dakiiiee_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_C_Fluffy : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Fluffy]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_Fluffy_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_C_Kaede : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Kaede]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_Kaede_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_BearSkylls : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [BearSkylls]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_BearSkylls_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_Tucc : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Tucc]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_Tucc_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_Limnades : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Limnades]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\customs\TAW4th_Equipment_Trooper_Helmet_Limnades_Co.paa",
        };
    };
};


class CfgVehicles
{
            //Backpacks//
    class SWLB_clone_backpack;
    class JLTS_Clone_backpack;
    class JLTS_Clone_backpack_RTO;
    class TAW4th_Equipment_Backpack : SWLB_clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Backpack_Co.paa",
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Backpack_Co.paa",
        };
    };
    class TAW4th_Equipment_Backpack_Medic : SWLB_clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Backpack_Co.paa",
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Backpack_Co.paa",
        };
    };
    class TAW4th_Equipment_Backpack_JLTS : JLTS_Clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Backpack_JLTS_Co.paa"
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
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Backpack_JLTS_RTO_Co.paa"
        };
    };
    class TAW4th_Equipment_Backpack_JLTS_Medic : JLTS_Clone_backpack
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper Medic Backpack (4th)";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Backpack_JLTS_Medic_Co.paa"
        };
    };

            //Units//
    class B_Soldier_f;
    class SWLB_clone_base_P2: B_Soldier_f{};
    class 3AS_Clone_P2_Pilot: B_Soldier_f{};
	class TAW4th_Equipment_Armour_Base: SWLB_clone_base_P2
	{
		author = "TAW";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		side = 1;
		displayName = "Clone Trooper";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Uniform_Base";
		hiddenSelectionsTextures[] = { "taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Upper_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Lower_Co.paa"};
		linkedItems[] = { "TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Vest","Throw","Put"};
		respawnLinkedItems[] = { "TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Vest","Throw", "Put"};

        armor = 15;
        armorStructural = 8;
        explosionShielding = 1.8;
        minTotalDamageThreshold = 0.001;
        impactDamageMultiplier = 0.5;
	};
	class TAW4th_Equipment_Trooper_Armour: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Upper_Clean_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Lower_Clean_Co.paa",};
		linkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_Recruit: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Recruit";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Upper_Recruit_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Lower_Recruit_Co.paa",};
		linkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Recruit","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Recruit","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_Dirt: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty)";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Dirt";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Upper_Dirt_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Lower_Dirt_Co.paa",};
		linkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Dirt","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Dirt","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_DirtScratch: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty & Scratched)";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_DirtScratch";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Upper_DirtScratch_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Lower_DirtScratch_Co.paa",};
		linkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_DirtScratch","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_DirtScratch","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_Scratch: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Scratched)";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Scratch";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Upper_Scratch_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Lower_Scratch_Co.paa",};
		linkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Scratch","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
		respawnLinkedItems[] = {"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Scratch","TAW4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
	};
    class TAW4th_Equipment_Trooper_Armour_Medic : TAW4th_Equipment_Armour_Base
    {
        author= "TAW";
        scope= 2;
        scopeCurator= 2;
        scopeArsenal= 2;
        side= 1;
        displayName= "Clone Trooper Medic";
        faction= "TAW4th_Faction";
        editorSubcategory= "TAW4th_Troopers";
        backpack= "TAW4th_Equipment_Backpack_JLTS";
        uniformclass= "TAW4th_Equipment_Trooper_Uniform_Medic";
        hiddenSelectionsTextures[]={"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Upper_Medic_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Trooper_Lower_Medic_Co.paa"};
        linkedItems[]={"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Medic","TAW4th_Equipment_Trooper_Vest","Throw","Put"};
        respawnLinkedItems[]={"TAW4th_Equipment_Trooper_Visor_NVG","TAW4th_Equipment_Trooper_Helmet_Medic","TAW4th_Equipment_Trooper_Vest","Throw","Put"};
    };
    class TAW4th_Equipment_Pilot_Armour : 3AS_Clone_P2_Pilot{

        author = "TAW";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
		displayName="Clone Pilot";
        faction = "TAW4th_Faction";
        editorSubcategory = "TAW4th_Troopers";
		backpack="TAW4th_Equipment_Backpack_JLTS";
		uniformclass="TAW4th_Equipment_Pilot_Uniform";
		hiddenSelectionsTextures[]={"taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Pilot_Camo1_Co.paa","taw4th_community_pack\4th_Base\data\base\TAW4th_Equipment_Pilot_Camo2_Co.paa"};
		linkedItems[]={"TAW4th_Equipment_Trooper_Visor_Rangefinder","TAW4th_Equipment_Pilot_Helmet","TAW4th_Equipment_Pilot_Vest","Throw","Put"};
		respawnLinkedItems[]={"TAW4th_Equipment_Trooper_Visor_Rangefinder","TAW4th_Equipment_Pilot_Helmet","TAW4th_Equipment_Pilot_Vest","Throw","Put"};
	};
	        //Woodland
	class TAW4th_Equipment_Trooper_Armour_Woodland: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers_Woodland";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Woodland";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Upper_Clean_Co.paa","taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Lower_Clean_Co.paa",};
		linkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland","Throw","Put"};
		respawnLinkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_Woodland_Recruit: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers_Woodland";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Woodland_Recruit";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Upper_Recruit_Co.paa","taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Lower_Recruit_Co.paa",};
		linkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_Recruit","Throw","Put"};
		respawnLinkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_Recruit","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_Woodland_Dirt: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty)";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers_Woodland";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Woodland_Dirt";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Upper_Dirt_Co.paa","taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Lower_Dirt_Co.paa",};
		linkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_Dirt","Throw","Put"};
		respawnLinkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_Dirt","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_Woodland_DirtScratch: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Dirty & Scratched)";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers_Woodland";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Woodland_DirtScratch";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Upper_DirtScratch_Co.paa","taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Lower_DirtScratch_Co.paa",};
		linkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_DirtScratch","Throw","Put"};
		respawnLinkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_DirtScratch","Throw","Put"};
	};
	class TAW4th_Equipment_Trooper_Armour_Woodland_Scratch: TAW4th_Equipment_Armour_Base
	{
		author = "TAW";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Clone Trooper (Scratched)";
		faction = "TAW4th_Faction";
		editorSubcategory = "TAW4th_Troopers_Woodland";
		backpack = "TAW4th_Equipment_Backpack_JLTS";
		uniformclass = "TAW4th_Equipment_Trooper_Uniform_Woodland_Scratch";
		hiddenSelectionsTextures[] = {"taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Upper_Scratch_Co.paa","taw4th_community_pack\4th_Base\data\base\woodland\TAW4th_Equipment_Trooper_Lower_Scratch_Co.paa",};
		linkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_Scratch","Throw","Put"};
		respawnLinkedItems[] = {"","TAW4th_Equipment_Trooper_Helmet_Woodland_Scratch","Throw","Put"};
	};
};