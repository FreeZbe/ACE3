/*
 * Author: commy2
 *
 * Get the muzzles of a weapon.
 *
 * Argument:
 * 0: A weapon in cfgWeapons (String)
 *
 * Return value:
 * All weapon muzzles (Array)
 */
#include "script_component.hpp"

private ["_muzzles"];

PARAMS_1(_weapon);

_muzzles = getArray (configFile >> "CfgWeapons" >> _weapon >> "muzzles");

if ("this" in _muzzles) then {
    _muzzles set [_muzzles find "this", _weapon];
};

_muzzles
