/*
 * Author: joko // Jonas
 * Reset the parachute system.
 *
 * Arguments:
 * 0: Object
 *
 * Return Value:
 * Boolean
 *
 * Example:
 * [player] call FUNC(checkCutParachute);
 *
 * Public: No
 */
#include "script_component.hpp"
private["_unit"];
_unit = _this select 0;
(vehicle _unit isKindOf 'ParachuteBase' && !(_unit getvariable [QGVAR(chuteIsCut),false]) && (_unit getvariable [QGVAR(hasReserve),false]))