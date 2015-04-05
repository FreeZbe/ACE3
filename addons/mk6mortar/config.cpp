#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author[] = {"PabstMirror"};
        authorUrl = "https://github.com/acemod";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "RscInGameUI.hpp"

class ACE_Settings {
    //These settings effect gameplay difficutly:  defaults will leave the mortar the same as vanilla
    class GVAR(airResistanceEnabled) {
        value = 0;
        typeName = "BOOL";
        isClientSetable = 0;
    };
    class GVAR(allowComputerRangefinder) {
        value = 1;
        typeName = "BOOL";
        isClientSetable = 0;
    };    
    class GVAR(allowCompass) {
        value = 1;
        typeName = "BOOL";
        isClientSetable = 0;
    };
};
