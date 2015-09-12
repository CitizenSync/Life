/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Retrains the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((player distance _unit > 3)) exitWith {};
if((_unit getVariable "ziptied")) exitWith {};
// if(side _unit == west) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
//Broadcast!

if(life_inv_ziptie > 0) then {
	[false,"ziptie",1] call life_fnc_handleInv;
	_unit setVariable["ziptied",true,true];
	[[player], "life_fnc_ziptie", _unit, false] call life_fnc_MP;
};