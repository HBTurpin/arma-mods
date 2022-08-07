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
    class GEG4th_Equipment_Trooper_Helmet;

    class GEG4th_Equipment_Trooper_Helmet_C_Almerra : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Almerra]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_Almerra_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Laffey : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Laffey]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_Laffey_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_C_HBTurpin : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [HBTurpin]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_HBTurpin_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_C_Dakiiiee : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Dakiiiee]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_Dakiiiee_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_C_Fluffy : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Fluffy]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_Fluffy_Co.paa",
        };
    };
	class GEG4th_Equipment_Trooper_Helmet_C_Kaede : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Kaede]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_Kaede_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_C_BearSkylls : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [BearSkylls]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_BearSkylls_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Tucc : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Tucc]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_Tucc_Co.paa",
        };
    };
    class GEG4th_Equipment_Trooper_Helmet_C_Limnades : GEG4th_Equipment_Trooper_Helmet
    {
        author = "GEG";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Limnades]";
        hiddenSelectionsTextures[] =
        {
            "4th_customs\data\customs\GEG4th_Equipment_Trooper_Helmet_Limnades_Co.paa",
        };
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