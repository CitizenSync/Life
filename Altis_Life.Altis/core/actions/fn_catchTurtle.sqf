/*
	File: fn_catchTurtle.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Catches a dead turtle?
*/
private "_obj";
_obj = cursorTarget;


if(isNull _obj) exitWith {}; //Not valid
if(alive _obj) exitWith {}; //It's alive, don't take it charlie!

if((player distance (getMarkerPos "turtle_1") < 350) OR (player distance (getMarkerPos "turtle_2") < 350) OR (player distance (getMarkerPos "turtle_3") < 350) OR (player distance (getMarkerPos "turtle_4") < 350)) then {

	if(([true,"turtle_raw",1] call life_fnc_handleInv)) then {
	deleteVehicle _obj;
	titleText[localize "STR_NOTF_CaughtTurtle","PLAIN"];
	};
};