private["_v","_array","_whiteList","_type"];
_v=_this select 0;
_array=_this select 1;
_whiteList=_this select 2;
_type=FALSE;
{if(_v isKindOf _x)exitWith{_array=[]}}forEach _whiteList;
{if(_v isKindOf _x)exitWith{_type=TRUE}}forEach _array;
_type