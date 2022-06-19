private _action=_this select 0;
if(isNull carryCarry)exitWith{};
if(carryCarry isKindOf"Grenade")exitWith{};
if(carryCarry isKindOf"Man")exitWith{};
private _increment=10;
private _dir=[carryCarry,player]call Carry_fnc_GetDir;
if(_action=="LEFT")then{_dir=_dir-_increment};
if(_action=="RIGHT")then{_dir=_dir+_increment};
[carryCarry,_dir]call Carry_fnc_SetDir;
carryCarry setDir _dir;
//if(carryDebug)then{systemChat str _dir};
_dir