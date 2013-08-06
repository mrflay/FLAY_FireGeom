/*  fn_trajectory.sqf
 *
 * Usage: [<unit>,(<color>)] call FLAY_fnc_trajectory;
 */
 
private ["_unit","_hid","_color"];
 
FLAY_EH_trajectory = compile preprocessFile "\FLAY\FLAY_FireGeom\scripts\ev_trajectory.sqf";
 
_unit = _this select 0;
_hid = _unit addEventHandler ["fired",{_this call FLAY_EH_trajectory;}];
_unit setVariable ["flay.trajectory.hid",_hid];

if (count _this > 1) then {
	_color = _this select 1;
	_unit setVariable ["flay.trajectory.color", _color];
};
