                                                                                                        //4th Customs Config//
class cfgPatches
{
	class TAW4th_Equipment
	{
		author = "TAW";
		weapons[] =
		{			
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

class CfgWeapons
{
             //Helmets//
    class ItemCore;
    class SWLB_clone_P2_helmet : ItemCore
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

            //Custom Helmets//
    class TAW4th_Equipment_Trooper_Helmet_C_Almerra : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Almerra]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_Almerra_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_Laffey : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Laffey]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_Laffey_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_HBTurpin : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [HBTurpin]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_HBTurpin_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_C_Dakiiiee : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Dakiiiee]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_Dakiiiee_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_C_Fluffy : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Fluffy]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_Fluffy_Co.paa",
        };
    };
	class TAW4th_Equipment_Trooper_Helmet_C_Kaede : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Kaede]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_Kaede_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_BearSkylls : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [BearSkylls]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_BearSkylls_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_Tucc : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Tucc]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_Tucc_Co.paa",
        };
    };
    class TAW4th_Equipment_Trooper_Helmet_C_Limnades : TAW4th_Equipment_Trooper_Helmet
    {
        author = "TAW";
        scope = 2;
        displayName = "Clone Trooper P2 Helmet (4th) [Limnades]";
        hiddenSelectionsTextures[] =
        {
            "taw4th_community_pack\4th_Customs\data\customs\TAW4th_Equipment_Trooper_Helmet_Limnades_Co.paa",
        };
    };
};