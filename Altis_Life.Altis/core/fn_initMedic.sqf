#include <macro.h>
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if(life_blacklisted) exitWith
{
	["NotWhitelisted",false,false] call BIS_fnc_endMission;
};

{
	while {true} do
	{
		waitUntil {sleep 3; currentWeapon player != ""};
		removeAllWeapons player;
	};
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.