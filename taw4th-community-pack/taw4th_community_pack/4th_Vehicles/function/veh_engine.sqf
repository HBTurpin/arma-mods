params ["_vehicle"];

engineState = isEngineOn _vehicle;
if (engineState) then 
{
	_vehicle setObjectTextureGlobal[2, "3AS\3as_Laat\LAATI\Textures\Imperial_LAAT_guns_CO.paa"];
	_vehicle setObjectMaterialGlobal[5, "3AS\3as_Laat\LAATI\Textures\Bakedguns\gunemmisive.rvmat"];
}
else 
{
	_vehicle setObjectTextureGlobal[2, "3AS\3as_Laat\LAATI\Textures\LAAT_Guns_CO.paa"];
	_vehicle setObjectMaterialGlobal[5, "3AS\3as_Laat\LAATI\Textures\BakedGuns\gun.rvmat"];
};
