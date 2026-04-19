#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion=1.72;
		version = 1.0; // Should be a floating-point number (1 separator)
        versionStr = "1.0.2";
        versionAr[] = {1, 0, 2};
		requiredAddons[] = 
		{
			"A3_Weapons_F",
			"cba_main",
			"cba_ui",
			"cba_xeh",
			"cba_settings",
		};
	};
};
