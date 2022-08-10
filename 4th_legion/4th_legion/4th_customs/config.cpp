                                                                                                        //4th Customs Config//
class cfgPatches
{
	class GEG4th_Customs
	{
		author = "GEG";
		units[] =
		{
            "GEG4th_Equipment_Trooper_C_Laffey",
            "GEG4th_Equipment_Trooper_C_Almerra",
            "GEG4th_Equipment_Trooper_C_HBTurpin",
            "GEG4th_Equipment_Trooper_C_Dakiiiee",
            "GEG4th_Equipment_Trooper_C_FluffyFlyBoy",
            "GEG4th_Equipment_Trooper_C_Kaede",
            "GEG4th_Equipment_Trooper_C_BearSkylls",
            "GEG4th_Equipment_Trooper_C_Tucc",
            "GEG4th_Equipment_Trooper_C_Limnades",
		};
		weapons[] =
		{			
			"GEG4th_Equipment_Trooper_Helmet_C_Almerra",
			"GEG4th_Equipment_Trooper_Helmet_C_Laffey",
			"GEG4th_Equipment_Trooper_Helmet_C_HBTurpin",
			"GEG4th_Equipment_Trooper_Helmet_C_Dakiiiee",
			"GEG4th_Equipment_Trooper_Helmet_C_Fluffy",
			"GEG4th_Equipment_Trooper_Helmet_C_Kaede",
			"GEG4th_Equipment_Trooper_Helmet_C_Tucc",
			"GEG4th_Equipment_Trooper_Helmet_C_Bearskylls",
			"GEG4th_Equipment_Trooper_Helmet_C_Limnades",
		};
	};
};

class cfgFactionClasses
{
	class GEG4th_Faction;
};
class CfgEditorSubcategories
{
    class GEG4th_Troopers_Customs
    {
        displayName = "4th Infantry (Customs)";
    };
};


class CfgWeapons
{
    class ItemCore;
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
            hiddenSelections[] = { "camo1" };
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
    class GEG4th_Equipment_Trooper_Helmet_C_Almerra : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [Almerra]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_Almerra_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "Almerra";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Laffey : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [Laffey]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_Laffey_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "Laffeyyy";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_HBTurpin : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [HBTurpin]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_HBTurpin_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "HBTurpin";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Dakiiiee : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [Dakiiiee]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_Dakiiiee_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "Dakiiiee";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Fluffy : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [Fluffy]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_Fluffy_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "Fluffy";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Kaede : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [Kaede]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_Kaede_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "Kaede";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_BearSkylls : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [BearSkylls]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_BearSkylls_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "BearSkylls";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Tucc : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [Tucc]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_Tucc_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "Tucc";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Limnades : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        displayName = "Clone Trooper P2 Helmet (4th) [Limnades]";
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_customs\data\helmets\GEG4th_Equipment_Trooper_Helmet_Limnades_Co.paa",
        };
        class XtdGearInfo
        {
            model = "4th_CloneHelmetP2_custom";
            camo = "Limnades";
        };
        ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.5;
    };
};
class CfgVehicles
{
	class GEG4th_Equipment_Armour_Base;
    class GEG4th_Equipment_Trooper_C_Laffey: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "Laffeyyy";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS_RTO";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Rangefinder","GEG4th_Equipment_Trooper_Helmet_C_Laffey","GEG4th_Equipment_Trooper_Vest_Officer_B","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Rangefinder","GEG4th_Equipment_Trooper_Helmet_C_Laffey","GEG4th_Equipment_Trooper_Vest_Officer_B","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_Almerra: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "Almerra";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS_RTO";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Commander","GEG4th_Equipment_Trooper_Helmet_C_Almerra","GEG4th_Equipment_Trooper_Vest_ARC_B","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Commander","GEG4th_Equipment_Trooper_Helmet_C_Almerra","GEG4th_Equipment_Trooper_Vest_ARC_B","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_HBTurpin: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "HBTurpin";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_HBTurpin","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_HBTurpin","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_Dakiiiee: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "Dakiiiee";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Commander","GEG4th_Equipment_Trooper_Helmet_C_Dakiiiee","GEG4th_Equipment_Trooper_Vest_ARC_A","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Commander","GEG4th_Equipment_Trooper_Helmet_C_Dakiiiee","GEG4th_Equipment_Trooper_Vest_ARC_A","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_FluffyFlyBoy: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "Fluffyflyboy";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_Fluffy","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_Fluffy","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_Kaede: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "Kaede";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_Kaede","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_Kaede","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_BearSkylls: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "BearSkylls";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_BearSkylls","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_BearSkylls","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_Tucc: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "Tucc";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Rangefinder","GEG4th_Equipment_Trooper_Helmet_C_Tucc","GEG4th_Equipment_Trooper_Vest_ARC_A","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_Rangefinder","GEG4th_Equipment_Trooper_Helmet_C_Tucc","GEG4th_Equipment_Trooper_Vest_ARC_A","Throw","Put"};
    };
    class GEG4th_Equipment_Trooper_C_Limnades: GEG4th_Equipment_Armour_Base
    {
        author = "GEG";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        side = 1;
        displayName = "Limnades";
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Troopers_Customs";
        backpack = "GEG4th_Equipment_Backpack_JLTS";
        uniformclass = "GEG4th_Equipment_Trooper_Uniform";
        hiddenSelectionsTextures[] = {"4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Upper_Clean_Co.paa","4th_legion\4th_base\data\base\GEG4th_Equipment_Trooper_Lower_Clean_Co.paa",};
        linkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_Limnades","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
        respawnLinkedItems[] = {"GEG4th_Equipment_Trooper_Visor_NVG","GEG4th_Equipment_Trooper_Helmet_C_Limnades","GEG4th_Equipment_Trooper_Vest_Recon","Throw","Put"};
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class 4th_CloneHelmetP2_custom
        {
            label = "Clone Trooper Custom Helmet";
            author = "4th_Aux_Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"Almerra","Laffeyyy","HBTurpin","Dakiiiee","Fluffy","Kaede","BearSkylls","Tucc","Limnades"}; // All class names
                class Almerra // Camo value from Item
                {
                    label = "Almerra"; // Value for Arsenal
                };
                class Laffeyyy
                {
                    label = "Laffeyyy";
                };
                class HBTurpin
                {
                    label = "HBTurpin";
                };
                class Fluffy
                {
                    label = "Fluffy";
                };
                class Kaede
                {
                    label = "Kaede";
                };
                class BearSkylls
                {
                    label = "BearSkylls";
                };
                class Tucc
                {
                    label = "Tucc";
                };
                class Limnades
                {
                    label = "Limnades";
                };
            };
        };
    };
};