private _object=_this;
private _name="Object";
private _type=(typeOf _object);
{
_name=getText(configFile>>_x>>_type>>"displayName");
if!(_name=="")exitWith{};
}forEach["cfgVehicles","cfgAmmo","cfgMagazines","cfgWeapons"];
if(_name=="")then{_name=typeOf _object};
if(_name=="SatchelCharge_Remote_Ammo")then{_name="Satchel charge"};
if(_name=="DemoCharge_Remote_Ammo")then{_name="Demo charge"};
_name