private _type=_this;
private _name="";
{
_name=getText(configFile>>_x>>_type>>"displayName");
if!(_name=="")exitWith{};
}forEach["cfgVehicles","cfgAmmo","cfgMagazines","cfgWeapons","cfgGlasses"];
if(_name=="")then{_name=_type};
if(_name=="SatchelCharge_Remote_Ammo")then{_name="Satchel charge"};
if(_name=="DemoCharge_Remote_Ammo")then{_name="Demo charge"};
_name