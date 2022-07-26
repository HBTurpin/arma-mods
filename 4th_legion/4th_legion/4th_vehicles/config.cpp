//                                                                                            //4th_Vehicles Config//
//class cfgPatches
//{
//	class TAW4th_Equipment
//	{
//		author = "TAW";
//		units[] =
//		{
//            "TAW4th_Vehicle_V19",
//            "TAW4th_Vehicle_BTLB_YWing",
//
//            "TAW4th_Vehicle_LAATC",
//            "TAW4th_Vehicle_LAATI_MK1",
//            "TAW4th_Vehicle_LAATI_MK1_Light",
//            "TAW4th_Vehicle_LAATI_MK2",
//            "TAW4th_Vehicle_LAATI_MK2_Light",
//            "TAW4th_Vehicle_LAATLE",
//
//            "TAW4th_Vehicle_ARC170",
//            "TAW4th_Vehicle_ARC170_Razor",
//            "TAW4th_Vehicle_Z95",
//
//            "TAW4th_Vehicle_TX130_M1",
//            "TAW4th_Vehicle_TX130_M1Recon",
//            "TAW4th_Vehicle_TX130_M1G",
//            "TAW4th_Vehicle_TX130_Super",
//
//            "TAW4th_Vehicle_BARC",
//            "TAW4th_Vehicle_BARC_Sidecar",
//            "TAW4th_Vehicle_RTT",
//
//            "TAW4th_Vehicle_ATTE",
//            "TAW4th_Vehicle_ATJT",
//            "TAW4th_Vehicle_ATRT",
//            "TAW4th_Vehicle_ATAP"
//		};
//	};
//};
//
//            //FACTIONS//
//class cfgFactionClasses
//{
//	class TAW4th_Faction
//	{
//		displayName = "[TAW] 4th Platoon Vehicles";  // Name on ingame menus
//		//side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
//	};
//};
//class CfgEditorSubcategories
//{
//	class TAW4th_Vehicles
//	{
//		displayName = "4th Vehicles";
//	};
//};
//
//class CfgVehicles
//{
//          //VEHICLES
//    class Eventhandlers;
//    class ViewPilot;
//    class UserActions;
//
//    class 3as_V19_base;
//    class 3AS_BTLB_Bomber;
//    class 3AS_LAATC;
//    class 3as_laat_Base;
//    class 3as_LAAT_Mk1;
//    class 3as_LAAT_Mk1Lights;
//    class 3as_LAAT_Mk2;
//    class 3as_LAAT_Mk2Lights;
//    class 3AS_Patrol_LAAT_Base;
//    class 3as_Z95_base;
//    class 3as_arc_170_base;
//    class 3as_saber_m1;
//    class 3as_saber_super;
//    class 3as_saber_m1G;
//    class 3as_saber_m1Recon;
//    class 3as_RTT;
//    class 3AS_BarcSideCar;
//    class 3AS_BARC_Base;
//    class 3as_ATTE_Base;
//    class 3as_ATJT_Base;
//    class 3AS_ATRT;
//    class 3as_ATAP_base;
//                 //BOMBERS//
//    class TAW4th_Vehicle_V19 : 3as_V19_base{
//        author = "TAW";
//        displayName = "V-19 Torrent";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselections[] =
//        {
//            "camo1",
//            "camo2",
//            "camo3",
//            "camo4",
//            "camo5",
//            "camo6"
//        };
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_V19_Wings_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_V19_Wing Plates_co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_V19_Hull_co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_V19_GunGear_co.paa",
//            "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_V19_Pizzlepit_co.paa"
//        };
//    };
//    class TAW4th_Vehicle_BTLB_YWing : 3AS_BTLB_Bomber{
//        author = "TAW";
//        displayName = "BTL-Y Wing";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_BTLB_Co.paa",
//            "3as\3as_btlb\data\detail_co.paa",
//            "3as\3as_btlb\data\interior_co.paa"
//        };
//    };
//                 //LAAT//
//    class TAW4th_Vehicle_LAATC : 3AS_LAATC{
//        author = "TAW";
//        displayName = "LAAT/C";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        ace_cargo_space = 150;
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATC_0_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATC_1_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_LAATI_MK1 : 3as_LAAT_Mk1{
//        author = "TAW";
//        displayName = "LAAT/I Mk1";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        ace_cargo_space = 150;
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_LAATI_MK1_Light : 3as_LAAT_Mk1Lights{
//        author = "TAW";
//        displayName = "LAAT/I Mk1 - Lights";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        ace_cargo_space = 150;
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_LAATI_MK2 : 3as_LAAT_Mk2{
//        author = "TAW";
//        displayName = "LAAT/I Mk2";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        ace_cargo_space = 150;
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_LAATI_MK2_Light : 3as_LAAT_Mk2Lights{
//        author = "TAW";
//        displayName = "LAAT/I Mk2 - Lights";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        ace_cargo_space = 150;
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Wings_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapons_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Weapon_Details_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATI_Interior_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_LAATLE : 3AS_Patrol_LAAT_Base{
//        author = "TAW";
//        displayName = "LAAT/LE 'Wasp'";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        ace_cargo_space = 50;
//        forceInGarage = 2;
//        scopeArsenal = 2;
//        radarTargetSize = 0.2;
//        visualTargetSize = 0.2;
//        editorPreview = "";
//        memoryPointGun[] =
//        {
//            "L_Muzzle",
//            "R_muzzle"
//        };
//        gunBeg[] =
//        {
//            "L_Muzzle",
//            "R_Muzzle"
//        };
//        gunEnd[] =
//        {
//            "L_Chamber",
//            "R_Chamber"
//        };
//        weapons[] =
//        {
//            "Laserdesignator_pilotCamera",
//            "327th_laatle_cannon",
//            "327th_UGM",
//            "ls_weapon_CMFlareLauncher"
//        };
//        hiddenSelections[] =
//        {
//            "camo"
//        };
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_LAATLE_Co.paa"
//        };
//        magazines[] =
//        {
//            "Laserbatteries",
//            "327th_laatle_cannon_x500_mag",	//NEED TO REMOVE 327 DEPENDENCY
//            "327th_laatle_cannon_x500_mag", //NEED TO REMOVE 327 DEPENDENCY
//            "327th_ugm_mag6x",  //NEED TO REMOVE 327 DEPENDENCY
//            "ls_mag_192rnd_CMFlareChaff_cyan",
//            "ls_mag_192rnd_CMFlareChaff_cyan",
//            "ls_mag_192rnd_CMFlareChaff_cyan"
//        };
//        class TransportBackpacks
//        {
//            class transport_parachutes
//            {
//                backpack = "B_Parachute";
//                count = "30";
//            };
//        };
//        class UserActions : UserActions
//        {
//            class DamageReport
//            {
//                displayName = "<t color='#00FF00'>[Damage Report]</t>";
//                displayNameDefault = "<t color='#00FF00'>Damage Report</t>";
//                textToolTip = "<t color='#00FF00'>Damage Report</t>";
//                position = "pilotview";
//                radius = 10;
//                priority = 21;
//                onlyForPlayer = 1;
//                condition = "(alive this)";
//                statement = "this execVM ""\4th_Vehicles\function\veh_damage_report.sqf""";
//            };
//            class ThrusterEngage
//            {
//                displayName = "<t color='#4C9900'>[Impulsor On]</t>";
//                displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
//                textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
//                position = "pilotview";
//                radius = 20;
//                priority = 21;
//                onlyForPlayer = 1;
//                condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == currentPilot this) AND (alive this) AND (speed this >10) )";
//                statement = "this execVM ""\4th_Vehicles\function\laat_le_thruster_engage.sqf""";
//            };
//            class ThrusterDisengage : ThrusterEngage
//            {
//                priority = 21;
//                displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
//                displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
//                textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
//                condition = "((this getvariable [""impulsorStatus"",false]) AND (player == currentPilot this) AND (alive this))";
//                statement = "this execVM ""\4th_Vehicles\function\laat_le_thruster_disengage.sqf""";
//            };
//            class ThrusterEngage_Spam : ThrusterEngage
//            {
//                displayName = "";
//                displayNameDefault = "";
//                textToolTip = "";
//                position = "pilotview";
//                radius = 20;
//                priority = 0;
//                onlyForPlayer = 1;
//                condition = "((player == currentPilot this) AND (alive this) AND (speed this >10) )";
//                statement = "this execVM ""\4th_Vehicles\function\laat_le_thruster_engage.sqf""";
//                shortcut = "User19";
//            };
//            class ThrusterDisengage_Spam : ThrusterEngage
//            {
//                priority = 0;
//                displayName = "";
//                displayNameDefault = "";
//                textToolTip = "";
//                condition = "((player == currentPilot this) AND (alive this))";
//                statement = "this execVM ""\4th_Vehicles\function\laat_le_thruster_disengage.sqf""";
//                shortcut = "User20";
//            };
//        };
//    };
//               //FIGHTERS//
//    class TAW4th_Vehicle_ARC170 : 3as_arc_170_base{
//        author = "TAW";
//        displayName = "ARC-170";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ARC170_Frame_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ARC170_Engine_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ARC170_Guns_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_ARC170_Razor : 3as_arc_170_base{
//        author = "TAW";
//        displayName = "ARC-170 'Razor'";
//        scope = 2;
//        scopeCurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ARC170_Frame_Razor_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ARC170_Engine_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ARC170_Guns_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_Z95 : 3as_Z95_base{
//        author = "TAW";
//        displayName = "Z-95 Headhunter";
//        scope = 2;
//        scopeCurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_Z95_Body_Co.paa",
//            "3AS\3as_Z95\Data\cockpit_co.paa",
//            "3AS\3as_saber\data\glass\glass_ca"
//        };
//    };
//                //GROUND//
//    class TAW4th_Vehicle_TX130_M1 : 3as_saber_m1{
//        author = "TAW";
//        displayName = "TX-130 M1";
//        scope = 2;
//        scopeCurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_Weapon_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_TX130_M1Recon : 3as_saber_m1Recon{
//        author = "TAW";
//        displayName = "TX-130 M1 Recon";
//        scope = 2;
//        scopeCurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_WeaponScout_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_TX130_M1G : 3as_saber_m1G{
//        author = "TAW";
//        displayName = "TX-130 M1 GL";
//        scope = 2;
//        scopeCurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_WeaponGMG_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_TX130_Super : 3as_saber_super{
//        author = "TAW";
//        displayName = "TX-130 Super Saber";
//        scope = 2;
//        scopeCurator = 2;
//        crew = "TAW4th_Equipment_Pilot_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_TX130_Weapon_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_BARC : 3AS_BARC_Base{
//        author = "TAW";
//        mapSize = 6.71;
//        forceingarage = 1;
//        displayname = "BARC Speeder";
//        editorPreview = "";
//        _generalMacro = "B_MRAP_01_F";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Trooper_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        typicalCargo[] =
//        {
//            "TAW4th_Trooper"
//        };
//        hiddenSelections[] =
//        {
//            "camo"
//        };
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_BARC_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_BARC_Sidecar : 3AS_BarcSideCar{
//        author = "TAW";
//        mapSize = 6.71;
//        forceingarage = 1;
//        displayname = "BARC Speeder Sidecar";
//        editorPreview = "";
//        _generalMacro = "B_MRAP_01_F";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Trooper_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        typicalCargo[] =
//        {
//            "TAW4th_Trooper"
//        };
//        hiddenSelections[] =
//        {
//            "camo",
//            "camo2"
//        };
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_BARC_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_BARC_Side_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_RTT : 3as_RTT{
//        author = "TAW";
//        displayname = "RTT";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Trooper_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenSelections[] =
//        {
//            "camo1"
//        };
//        hiddenSelectionsTextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_RTT_Co.paa"
//        };
//    };
//    class TAW4th_Vehicle_ATTE : 3as_ATTE_Base{
//        author = "TAW";
//        displayName = "AT-TE";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Trooper_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Chasis_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Cockpit_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Turrets_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Underpiping_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_MiddleLeg_Co.paa",
//        };
//    };
//    class TAW4th_Vehicle_ATJT : 3AS_ATJT_Base{ //WHEELS NOT TEXTUREABLE, LOCATED IN P3D
//        author = "TAW";
//        displayName = "AT-JT (WIP)";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Trooper_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//        hiddenselectionstextures[] =
//        {
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Hull_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Chasis_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Cockpit_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Turrets_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_Underpiping_Co.paa",
//            "taw4th_community_pack\4th_Vehicles\data\vehicles\TAW4th_Vehicles_ATTE_MiddleLeg_Co.paa",
//        };
//    };
//    class TAW4th_Vehicle_ATRT : 3AS_ATRT{ //THESE AREN'T TEXTUREABLE AT THE MOMENT AS IS ALL IN P3D FILE
//        author = "TAW";
//        displayName = "AT-RT (WIP)";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Trooper_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//    };
//    class TAW4th_Vehicle_ATAP : 3as_ATAP_base{ //THESE AREN'T TEXTUREABLE AT THE MOMENT AS IS ALL IN P3D FILE
//        author = "TAW";
//        displayName = "AT-AP (WIP)";
//        scope = 2;
//        scopecurator = 2;
//        crew = "TAW4th_Equipment_Trooper_Armour";
//        side = 1;
//        faction = "TAW4th_Faction";
//        editorSubcategory = "TAW4th_Vehicles";
//    };
//};