private _action=_this select 0;
if(isNull carryCarry)exitWith{};
if(carryCarry isKindOf"Grenade")exitWith{};
if(carryCarry isKindOf"Man")exitWith{
	private _distance=carryCarry distance player;
	//if(_distance>5)exitWith{};if(_distance<.5)exitWith{};
	if(_action=="UP")then{_distance=_distance+.5};
	if(_action=="DOWN")then{_distance=_distance-.5};
	if(_distance>3)then{_distance=3};
	if(_distance<.5)then{_distance=.7};
	private _pos=(getPos player)getPos[_distance,(getDir player)];
	_pos=[_pos select 0,_pos select 1,(getPosASL player)select 2];
	detach carryCarry;
	carryCarry setPosASL _pos;
	carryCarry setDir(getDir player);
	carryCarry attachTo[player];
	//carryCarry attachTo[player,[0,_distance,carryHeight]];
};
private _increment=.15;
if(_action=="UP")then{carryHeight=carryHeight+_increment};
if(_action=="DOWN")then{carryHeight=carryHeight-_increment};
if(carryHeight>3)then{carryHeight=3};
if(carryHeight<.01)then{carryHeight=.01};
private _distance=1.5;
//if(carryCarry isKindOf"Man")then{_distance=2};
private _dir=[carryCarry,player]call Carry_fnc_GetDir;
carryCarry attachTo[player,[0,_distance,carryHeight]];
[carryCarry,_dir]call Carry_fnc_SetDir;