class cfgPatches
{
	class Carry
	{
		author="HBTurpin";
		name="Carry";
		units[]={};
		weapons[]={};
		requiredAddons[]={"CBA_main"};
	};
};


class Extended_PostInit_EventHandlers{carryInit="execVM'\Carry\Scripts\Start.sqf'";};



