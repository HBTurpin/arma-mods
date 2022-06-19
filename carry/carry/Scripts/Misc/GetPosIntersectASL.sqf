// Gets the surface the player is looking at

private _pos=[];
private _pos2=[];
private _pos3=[];
private _out=[];

private _m=createSimpleObject["Sign_Sphere10cm_Geometry_F",[0,0,0],TRUE];
while{TRUE}do{
	_pos=eyePos player;
	_pos2=(_pos vectorAdd(getCameraViewDirection player vectorMultiply 2));
	_out=lineIntersectsSurfaces[_pos,_pos2,player,_b,TRUE,1];
	if((count _out)>0)then{
		_out=_out select 0;
		if(isNull(_out select 2))then{if(carryDebug)then{systemChat"Terrain"}};
		_m setPosASL(_out select 0);
		//systemChat str (_out select 0);	hint str (_out select 0);
		if(carryDebug)then{systemChat str _out;hint str _out};
	}else{_m setPosASL _pos2};
	sleep .01;
};
