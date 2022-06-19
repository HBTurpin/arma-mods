private["_object","_pos","_mapObj"];
_object=objNull;
_object=cursorObject;
if(_object isKindOf"Man")exitWith{_object};
_mapObj=allMissionObjects"all";
if(!(isNull _object)AND(_object in _mapObj))exitWith{_object};
_out=[];
_out=player nearObjects["Grenade",2];
{if!(isNull attachedTo _x)then{_out=_out-[_x]}}forEach _out;
if((count _out)>0)exitWith{(_out select 0)};
_pos=screenToWorld[.5,.5];
_out=lineIntersectsObjs[eyePos player,(ATLtoASL screenToWorld[0.5,0.5]),objNull,objNull,TRUE,2];
if((count _out)>0)then{_object=_out select 0};
_object