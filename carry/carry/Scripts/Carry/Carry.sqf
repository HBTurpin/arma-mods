
private _anim=((animationState player)splitString"_")select 0;
if(_anim=="hubsittingchairb")exitWith{player remoteExec["BIS_fnc_ambientAnim__terminate"]};

if!(carryEnabled)exitWith{};
if(carryAntiSpam)exitWith{};

player forceWalk FALSE;
carryHeight=1;
// Drop
private _object=objNull;
private _blackList=[carryBlacklist,""] call Carry_fnc_GetList;
private _whiteList=[carryWhitelist,""] call Carry_fnc_GetList;
private _type="";
private _displayName="";
private _mass=0;
private _pos=[];

_isEngineerBool = player call ace_common_fnc_isEngineer; 

if!(isNull carryCarry)exitWith{
	if!(carryCarry in(attachedObjects player))exitWith{carryCarry=objNull;[]spawn Carry_fnc_Carry};
	carryAntiSpam=TRUE;
	_object=carryCarry;
	
	if(carryChat)then{
		_type=typeOf _object;
		_displayName=_object call Carry_fnc_DisplayName;
		if(_displayName=="")then{_displayName="Object"};
		if(_object isKindOf"WeaponHolder")then{_displayName="inventory object"};
		if(_object isKindOf"WeaponHolderSimulated")then{_displayName="inventory object"};
		systemChat format["Attempting to drop %1",_displayName];
	};

	if!(_object isKindOf"StaticWeapon")then{
		_object enableSimulationGlobal TRUE;
	};
	
	private _out=_object call Carry_fnc_SurfacePos;
	_pos=_out select 0;
	private _object2=_out select 1;
	if(_object==_object2)then{
		if(_out select 2)then{_object setPosATL[_pos select 0,_pos select 1,0]}else{_object setPosASL _pos};
		_object enableSimulationGlobal TRUE;
		
		detach _object; //Let go
		carryCarry=objNull;
		player forceWalk FALSE;

		
		if!(carryChat)exitWith{};
		systemChat format["%1 placed on ground",_displayName];
	}else{
		if (_object isKindOf "Grenade") exitWith{systemChat "You cannot attach grenades...";};
		if (_object isKindOf "WeaponHolder") exitWith{systemChat "You cannot attach inventory object...";};
		if (_object isKindOf "WeaponHolderSimulated") exitWith{systemChat "You cannot attach inventory object...";};
		if (_object isKindOf "Man" or _object2 isKindOf "Man") exitWith{};
		if (carryEngineerOnly && !_isEngineerBool) exitWith {systemChat "You need to be an engineer in order to attach objects...";};
		
		detach _object; //Let go
		carryCarry=objNull;
		player forceWalk FALSE;

		//if(_out select 2)then{_object setPosATL[_pos select 0,_pos select 1,0]}else{_object setPosASL _pos};
		private _dir=[_object,_object2]call Carry_fnc_GetDir;
		_object setPosASL _pos;
		_object attachTo[_object2];
		[_object,_dir]call Carry_fnc_SetDir;
		_object setOwner(owner _object2); 
		
		if (_object isKindOf"StaticWeapon") then {_object enableSimulationGlobal TRUE};
		if !(_object2 isKindOf"Air") then {_object enableSimulationGlobal TRUE};
		
		if!(carryChat)exitWith{};
		systemChat format["%1 placed on %2",_displayName,_object2 call Carry_fnc_DisplayName];
	};
	
	sleep .3;
	carryAntiSpam=FALSE;
};
/////////////
// Pick up //
/////////////

_object=call Carry_fnc_CursorObject;
if (isNull _object)exitWith{
	if!(carryChat)exitWith{};
	systemChat"No object";
};

_type=typeOf _object;
_displayName=_object call Carry_fnc_DisplayName;

private _disabled = _object getVariable ["carry_force_disable", FALSE];
if (_disabled)exitWith{
	if!(carryChat)exitWith{};
	if(_displayName=="")then{systemChat _displayName};
	systemChat format["Can not pick up %1",_displayName];
};

if (_object isKindOf "Man")exitWith{
	if!(carryChat)exitWith{};
	systemChat "No object";
};

if (([_type,["LandVehicle","Air","Ship"],[]]call Carry_fnc_IsKindOf)AND!(_object isKindOf"StaticWeapon"))exitWith{
	if!(carryChat)exitWith{}; 
	systemChat "No object";
};

private _mass=getMass _object;
if(_mass>carryWeightLimit)exitWith{
	if!(carryChat)exitWith{};
	systemChat format["%1 is too heavy  (%2/%3)",_displayName,_mass,carryWeightLimit];
};

if !((_object in(allMissionObjects "all"))) exitWith {
	if!(carryChat)exitWith{};
	if(_displayName=="")exitWith{};
	systemChat format["Can not pick up %1",_displayName];
};

if ((player distance _object)>5)exitWith{
	if!(carryChat)exitWith{};
	systemChat format["%1 is too far",_displayName];
};

if (carryDebug)then{
	systemChat format["%1:     PhysX mass: %2    Simple object: %3",_displayName,_mass,isSimpleObject _object];
};


_whitelisted = _object getVariable ["carry_whitelist", FALSE];
if ([_type,_blacklist,_whiteList] call Carry_fnc_IsKindOf && !_whitelisted)exitWith{
	if!(carryChat)exitWith{};
	if(_displayName=="")exitWith{};
	systemChat format["Can not pick up %1",_displayName];
};
carryAntiSpam=TRUE;

if !((currentWeapon player)=="")then{
	player action["SWITCHWEAPON",player,player,-1];
};
if!(isNull attachedTo _object)then{detach _object};


private _distance=1.5;
if(_object isKindOf "Grenade")then{_distance=.9;carryHeight=1.3};
if(_object isKindOf "WeaponHolder")then{_distance=.7;carryHeight=1.8};
if(_object isKindOf "WeaponHolderSimulated")then{_distance=.7;carryHeight=1.8};

if!(isPlayer _object)then{_object setOwner clientOwner};
_object attachTo[player,[0,_distance,carryHeight]];


player forceWalk TRUE;
_object enableSimulationGlobal FALSE;

[]spawn Carry_fnc_ForceWalkCheck;

carryCarry=_object;
if(carryChat)then{
	if(_displayName=="")then{_displayName="object"};
	if(_object isKindOf "WeaponHolder") then {_displayName="inventory object"};
	if(_object isKindOf "WeaponHolderSimulated") then {_displayName="inventory object"};
	systemChat format["Picked up %1",_displayName];
};

if(carryDebug)then{
	hintSilent format["%1:\n\n%2\n\nPhysX mass: %3\n\nSimple object: %4\n\nSimulation enabled: %5\n\nOwner: %6",toUpper _displayName,_type,getMass _object,isSimpleObject _object,simulationEnabled _object,owner _object];
};
//copyToClipboard str _type;
sleep .3; carryAntiSpam=FALSE;