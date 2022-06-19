private _object=_this select 0;
private _dir=_this select 1;
if(local _object)exitWith{_object setDir _dir};
[_object,_dir]remoteExec["Carry_fnc_SetDirRemote"];