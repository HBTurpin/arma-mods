                                                                                                        //4th Vehicles Config//
class cfgPatches
{
	class GEG4th_Vehicle
	{
        author = "GEG";
		units[] =
		{
            "GEG4th_Vehicle_V19",
            "GEG4th_Vehicle_BTLB_YWing",
            "GEG4th_Vehicle_LAATC",
            "GEG4th_Vehicle_LAATI_MK1",
            "GEG4th_Vehicle_LAATI_MK1_Light",
            "GEG4th_Vehicle_LAATI_MK2",
            "GEG4th_Vehicle_LAATI_MK2_Light",
            "GEG4th_Vehicle_LAATLE",
            "GEG4th_Vehicle_ARC170",
            "GEG4th_Vehicle_ARC170_Razor",
            "GEG4th_Vehicle_Z95",
            "GEG4th_Vehicle_TX130_M1",
            "GEG4th_Vehicle_TX130_M1Recon",
            "GEG4th_Vehicle_TX130_M1G",
            "GEG4th_Vehicle_TX130_Super",
            "GEG4th_Vehicle_BARC",
            "GEG4th_Vehicle_BARC_Sidecar",
            "GEG4th_Vehicle_RTT",
            "GEG4th_Vehicle_ATTE",
            "GEG4th_Vehicle_ATJT",
            "GEG4th_Vehicle_ATRT",
            "GEG4th_Vehicle_ATAP",
		};
	};
};

class CfgFactionClasses
{
	class GEG4th_Faction;
};

class CfgEditorCategories
{
	class GEG4th_Resupply;
};
class CfgEditorSubcategories
{
    class GEG4th_Vehicles
    {
        displayName = "4th Vehicles";
    };
};


class CfgVehicles
{
    class Eventhandlers;
    class ViewPilot;
    class UserActions;

    class 3as_V19_base;
    class 3AS_BTLB_Bomber;
    class 3AS_LAATC
    {
        class ACE_SelfActions;
    };
    class 3as_laat_Base
    {
        class ACE_SelfActions;
    };
    class 3as_LAAT_Mk1
    {
        class ACE_SelfActions;
    };
    class 3as_LAAT_Mk1Lights
    {
        class ACE_SelfActions;
    };
    class 3as_LAAT_Mk2
    {
        class ACE_SelfActions;
    };
    class 3as_LAAT_Mk2Lights
    {
        class ACE_SelfActions;
    };
    class 3AS_Patrol_LAAT_Base
    {
        class ACE_SelfActions;
    };
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

    class GEG4th_Vehicle_V19 : 3as_V19_base{
        author = "GEG";
        displayName = "V-19 Torrent";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselections[] =
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_V19_Wings_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_V19_Wing Plates_co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_V19_Hull_co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_V19_GunGear_co.paa",
            "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_V19_Pizzlepit_co.paa"
        };
    };
	
    class GEG4th_Vehicle_BTLB_YWing : 3AS_BTLB_Bomber{
        author = "GEG";
        displayName = "BTL-Y Wing";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_BTLB_Co.paa",
            "3as\3as_btlb\data\detail_co.paa",
            "3as\3as_btlb\data\interior_co.paa"
        };
    };
	
    class GEG4th_Vehicle_LAATC : 3AS_LAATC{
        author = "GEG";
        displayName = "LAAT/C";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        ace_cargo_space = 200;
        ace_cargo_hasCargo = 1;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATC_0_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATC_1_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_LAATI_MK1 : 3as_LAAT_Mk1{
        author = "GEG";
        displayName = "LAAT/I Mk1";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        ace_cargo_space = 200;
        ace_cargo_hasCargo = 1;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Wings_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapons_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapon_Details_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Interior_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_LAATI_MK1_Light : 3as_LAAT_Mk1Lights{
        author = "GEG";
        displayName = "LAAT/I Mk1 - Lights";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        ace_cargo_space = 200;
        ace_cargo_hasCargo = 1;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Wings_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapons_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapon_Details_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Interior_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_LAATI_MK2 : 3as_LAAT_Mk2{
        author = "GEG";
        displayName = "LAAT/I Mk2";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        ace_cargo_space = 150;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Wings_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapons_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapon_Details_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Interior_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_LAATI_MK2_Light : 3as_LAAT_Mk2Lights{
        author = "GEG";
        displayName = "LAAT/I Mk2 - Lights";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        ace_cargo_space = 150;
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Wings_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapons_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Weapon_Details_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATI_Interior_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_LAATLE : 3AS_Patrol_LAAT_Base{
        author = "GEG";
        displayName = "LAAT/LE 'Wasp'";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        ace_cargo_space = 50;
        forceInGarage = 2;
        scopeArsenal = 2;
        radarTargetSize = 0.2;
        visualTargetSize = 0.2;
        editorPreview = "";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_LAATLE_Co.paa"
        };
        class TransportBackpacks
        {
            class transport_parachutes
            {
                backpack = "B_Parachute";
                count = "30";
            };
        };
        class UserActions : UserActions
        {
            class DamageReport
            {
                displayName = "<t color='#00FF00'>[Damage Report]</t>";
                displayNameDefault = "<t color='#00FF00'>Damage Report</t>";
                textToolTip = "<t color='#00FF00'>Damage Report</t>";
                position = "pilotview";
                radius = 10;
                priority = 21;
                onlyForPlayer = 1;
                condition = "(alive this)";
                statement = "this execVM ""\4th_vehicles\function\veh_damage_report.sqf""";
            };
            class ThrusterEngage
            {
                displayName = "<t color='#4C9900'>[Impulsor On]</t>";
                displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
                textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
                position = "pilotview";
                radius = 20;
                priority = 21;
                onlyForPlayer = 1;
                condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == currentPilot this) AND (alive this) AND (speed this >10) )";
                statement = "this execVM ""\4th_vehicles\function\laat_le_thruster_engage.sqf""";
            };
            class ThrusterDisengage : ThrusterEngage
            {
                priority = 21;
                displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
                displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
                textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
                condition = "((this getvariable [""impulsorStatus"",false]) AND (player == currentPilot this) AND (alive this))";
                statement = "this execVM ""\4th_vehicles\function\laat_le_thruster_disengage.sqf""";
            };
            class ThrusterEngage_Spam : ThrusterEngage
            {
                displayName = "";
                displayNameDefault = "";
                textToolTip = "";
                position = "pilotview";
                radius = 20;
                priority = 0;
                onlyForPlayer = 1;
                condition = "((player == currentPilot this) AND (alive this) AND (speed this >10) )";
                statement = "this execVM ""\4th_vehicles\function\laat_le_thruster_engage.sqf""";
                shortcut = "User19";
            };
            class ThrusterDisengage_Spam : ThrusterEngage
            {
                priority = 0;
                displayName = "";
                displayNameDefault = "";
                textToolTip = "";
                condition = "((player == currentPilot this) AND (alive this))";
                statement = "this execVM ""\4th_vehicles\function\laat_le_thruster_disengage.sqf""";
                shortcut = "User20";
            };
        };
    };
	
    class GEG4th_Vehicle_ARC170 : 3as_arc_170_base{
        author = "GEG";
        displayName = "ARC-170";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ARC170_Frame_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ARC170_Engine_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ARC170_Guns_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_ARC170_Razor : 3as_arc_170_base{
        author = "GEG";
        displayName = "ARC-170 'Razor'";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ARC170_Frame_Razor_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ARC170_Engine_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ARC170_Guns_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_Z95 : 3as_Z95_base{
        author = "GEG";
        displayName = "Z-95 Headhunter";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_Z95_Body_Co.paa",
            "3AS\3as_Z95\Data\cockpit_co.paa",
            "3AS\3as_saber\data\glass\glass_ca"
        };
    };
    
    class GEG4th_Vehicle_TX130_M1 : 3as_saber_m1{
        author = "GEG";
        displayName = "TX-130 M1";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_Weapon_Co.paa"
        };
    };
    class GEG4th_Vehicle_TX130_M1Recon : 3as_saber_m1Recon{
        author = "GEG";
        displayName = "TX-130 M1 Recon";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_WeaponScout_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_TX130_M1G : 3as_saber_m1G{
        author = "GEG";
        displayName = "TX-130 M1 GL";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_WeaponGMG_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_TX130_Super : 3as_saber_super{
        author = "GEG";
        displayName = "TX-130 Super Saber";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_TX130_Weapon_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_BARC : 3AS_BARC_Base{
        author = "GEG";
        mapSize = 6.71;
        forceingarage = 1;
        displayname = "BARC Speeder";
        editorPreview = "";
        _generalMacro = "B_MRAP_01_F";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        typicalCargo[] =
        {
            "GEG4th_Trooper"
        };
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_BARC_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_BARC_Sidecar : 3AS_BarcSideCar{
        author = "GEG";
        mapSize = 6.71;
        forceingarage = 1;
        displayname = "BARC Speeder Sidecar";
        editorPreview = "";
        _generalMacro = "B_MRAP_01_F";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        typicalCargo[] =
        {
            "GEG4th_Trooper"
        };
        hiddenSelections[] =
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_BARC_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_BARC_Side_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_RTT : 3as_RTT{
        author = "GEG";
        displayname = "RTT";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_RTT_Co.paa"
        };
    };
	
    class GEG4th_Vehicle_ATTE : 3as_ATTE_Base{
        author = "GEG";
        displayName = "AT-TE";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Chasis_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Cockpit_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Turrets_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Underpiping_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_MiddleLeg_Co.paa",
        };
    };
	
    class GEG4th_Vehicle_ATJT : 3AS_ATJT_Base{ //WHEELS NOT TEXTUREABLE, LOCATED IN P3D
        author = "GEG";
        displayName = "AT-JT (WIP)";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
        hiddenselectionstextures[] =
        {
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Hull_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Chasis_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Cockpit_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Turrets_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_Underpiping_Co.paa",
            "4th_legion\4th_vehicles\data\vehicles\GEG4th_Vehicles_ATTE_MiddleLeg_Co.paa",
        };
    };
	
    class GEG4th_Vehicle_ATRT : 3AS_ATRT{ //THESE AREN'T TEXTUREABLE AT THE MOMENT AS IS ALL IN P3D FILE
        author = "GEG";
        displayName = "AT-RT (WIP)";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
    };
	
    class GEG4th_Vehicle_ATAP : 3as_ATAP_base{ //THESE AREN'T TEXTUREABLE AT THE MOMENT AS IS ALL IN P3D FILE
        author = "GEG";
        displayName = "AT-AP (WIP)";
        scope = 2;
        scopeCurator = 2;
        crew = "GEG4th_Equipment_Trooper_Armour";
        side = 1;
        faction = "GEG4th_Faction";
        editorSubcategory = "GEG4th_Vehicles";
    };
	
};