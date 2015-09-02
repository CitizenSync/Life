//*************** Test Code fn_bankUpdate ***************
/*
	File: fn_federalUpdate.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Uhhh, adds to it?
*/

private["_funds"];
while {true} do
{
	sleep (30 * 60);
	_funds = town_bank1 getVariable["vault",0];
	town_bank1 setVariable["vault",round(_funds+((count playableUnits)/2)),true];
};
