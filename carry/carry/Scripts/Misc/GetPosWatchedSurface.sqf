// Gets the posASL of the surface the player is looking at
// [2,visualObject]call Carry_fnc_GetPosWatchedSurface;
private _distance=_this select 0;
private _ignore=_this select 1;
private _pos=eyePos player;
private _pos2=(_pos vectorAdd(getCameraViewDirection player vectorMultiply _distance));
private _out=lineIntersectsSurfaces[_pos,_pos2,player,_ignore,TRUE,1];
if((count _out)<1)exitWith{};
_out=_out select 0;
(_out select 0)