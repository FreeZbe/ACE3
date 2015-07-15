#define COMPONENT spectator
#include "\z\ace\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_SPECTATOR
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_SPECTATOR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_SPECTATOR
#endif

#include "\z\ace\addons\main\script_macros.hpp"

// Interface grid
#define SIZEX ((safezoneW / safezoneH) min 1.2)
#define SIZEY (SIZEX / 1.2)
#define W_PART(num) (num * (SIZEX / 40))
#define H_PART(num) (num * (SIZEY / 25))
#define X_PART(num) (W_PART(num) + (safezoneX + (safezoneW - SIZEX)/2))
#define Y_PART(num) (H_PART(num) + (safezoneY + (safezoneH - SIZEY)/2))

// Interface tools
#define TOOL_H H_PART(1)
#define TOOL_W W_PART(5)
#define MARGIN TOOL_W * 0.05

// Interface compass
#define COMPASS_W (TOOL_W * 4)
#define COMPASS_X (0.5 - (COMPASS_W * 0.5))

// IDCs
#define IDC_CLOCK 3002
#define IDC_FOCUS 3003
#define IDC_FOV 3004
#define IDC_NAME 3000
#define IDC_MAP 60187
#define IDC_TREE 60791
#define IDC_SPEED 3005
#define IDC_VIEW 3001
