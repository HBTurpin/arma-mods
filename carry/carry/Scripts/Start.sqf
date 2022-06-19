sleep 1;

if!(isNil"carryExit")exitWith{};
carryDebug=FALSE;
carryEnabled=TRUE;
carryCarry=objNull;
carryKey=46;
carryAntiSpam=FALSE;
carryWeightLimit=1000;
carryHeight=1;
carryChat=TRUE;
carryWhitelist='"Ship","StaticWeapon","B_shield_lxWS"';
carryBlacklist='"LandVehicle","Air","Wreck_base","HouseBase","Building","BagFence_base_F"';
carryEngineerOnly=TRUE;

#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
sleep 1;
Carry_fnc_GetList=compile preprocessFile"Carry\Scripts\Misc\GetList.sqf";
Carry_fnc_ParseArray=compile preprocessFile"Carry\Scripts\Misc\ParseArray.sqf";
Carry_fnc_ObjectLength=compile preprocessFile"Carry\Scripts\Misc\ObjectLength.sqf";
Carry_fnc_ReverseAngle=compile preprocessFile"Carry\Scripts\Misc\ReverseAngle.sqf";
Carry_fnc_CursorObject=compile preprocessFile"Carry\Scripts\Carry\CursorObject.sqf";
Carry_fnc_DisplayName=compile preprocessFile"Carry\Scripts\Carry\DisplayName.sqf";
Carry_fnc_DisplayNameByClass=compile preprocessFile"Carry\Scripts\Carry\DisplayNameByClass.sqf";
Carry_fnc_ForceWalkCheck=compile preprocessFile"Carry\Scripts\Carry\ForceWalkCheck.sqf";
Carry_fnc_IsKindOf=compile preprocessFile"Carry\Scripts\Carry\IsKindOf.sqf";
Carry_fnc_CorrectDir=compile preprocessFile"Carry\Scripts\Carry\CorrectDir.sqf";
Carry_fnc_SetDirRemote=compile preprocessFile"Carry\Scripts\Carry\SetDirRemote.sqf";
Carry_fnc_SetDir=compile preprocessFile"Carry\Scripts\Carry\SetDir.sqf";
Carry_fnc_GetDir=compile preprocessFile"Carry\Scripts\Carry\GetDir.sqf";
Carry_fnc_SurfacePos=compile preprocessFile"Carry\Scripts\Carry\SurfacePos.sqf";
Carry_fnc_Carry=compile preprocessFile"Carry\Scripts\Carry\Carry.sqf";
Carry_fnc_CarryHeight=compile preprocessFile"Carry\Scripts\Carry\Height.sqf";
Carry_fnc_Rotate=compile preprocessFile"Carry\Scripts\Carry\Rotate.sqf";


// Control Settings
["Carry","carryKey",["Pick up/drop","Pick up/drop"],"",{[]spawn Carry_fnc_Carry},[carryKey,[TRUE,false,false]],false,0,false]call cba_fnc_addKeybind;
["Carry","carryKeyUp",["Carry higher","Carry higher"],"",{["UP"]spawn Carry_fnc_CarryHeight},[DIK_UP,[TRUE,false,false]],false,0,false]call cba_fnc_addKeybind;
["Carry","carryKeyDown",["Carry lower","Carry lower"],"",{["DOWN"]spawn Carry_fnc_CarryHeight},[DIK_DOWN,[TRUE,false,false]],false,0,false]call cba_fnc_addKeybind;
["Carry","carryKeyLeft",["Rotate left","Rotate left"],"",{["LEFT"]spawn Carry_fnc_Rotate},[DIK_LEFT,[TRUE,false,false]],false,0,false]call cba_fnc_addKeybind;
["Carry","carryKeyRight",["Rotate right","Rotate right"],"",{["RIGHT"]spawn Carry_fnc_Rotate},[DIK_RIGHT,[TRUE,false,false]],false,0,false]call cba_fnc_addKeybind;

// CBA Settings
["carryChat", "CHECKBOX", "Show systemChat Messages", "Carry", TRUE, FALSE, { params["_value"]; carryChat=_value; } ]call CBA_fnc_addSetting;
["carryDebug", "CHECKBOX", "Show Debug Messages", "Carry", FALSE, FALSE, { params["_value"]; carryDebug=_value; } ]call CBA_fnc_addSetting;
["carryWeightLimit", "EDITBOX", "Weight Limit", "Carry", str carryWeightLimit, FALSE, {params["_value"]; carryWeightLimit=parseNumber _value; } ]call CBA_fnc_addSetting;
["carryEngineerOnly", "CHECKBOX", "Enable Attachment Engineer Only", "Carry", FALSE, FALSE, {params["_value"]; carryEngineerOnly=_value;} ]call CBA_fnc_addSetting;
["carryWhitelist", "EDITBOX", "Whitelisted Classnames (Negates Blacklist).", "Carry", carryWhitelist, FALSE, {params["_value"]; carryWhitelist=_value;} ]call CBA_fnc_addSetting;
["carryBlacklist", "EDITBOX", "Blacklisted Classnames", "Carry", carryBlacklist, FALSE, {params["_value"]; carryBlacklist=_value;} ]call CBA_fnc_addSetting;

//Missionmaker Variables


