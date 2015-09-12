/*
	File: fn_unziptie.sqf
*/
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit OR !(_unit getVariable["ziptied",FALSE])) exitWith {}; //Error check?

_unit setVariable["ziptied",FALSE,TRUE];
_unit setVariable["Escorting",FALSE,TRUE];
_unit setVariable["transporting",FALSE,TRUE];
detach _unit;

[[0,"STR_NOTF_Unrestrain",true,[_unit getVariable["realname",name _unit], profileName]],"life_fnc_broadcast",true,FALSE] call life_fnc_MP;