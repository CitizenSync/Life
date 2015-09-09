#include <macro.h>
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine
	Modifications: Jesse Schultz

	Description:
	Handles damage
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);
_curMag = "";
_curWep = "";

if (isPlayer _source && _source isKindOf "Man") then{
	_curMag = currentMagazine _source;
	_curWep = currentWeapon _source;
};

// Rubber bullets
if (((_curMag in ["30Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","30Rnd_45ACP_Mag_SMG_01"]))
	OR (_curWep in ["hgun_P07_F","hgun_P07_snds_F","srifle_DMR_03_F","SMG_02_F"])) then {
    if((((getDammage _unit) + _damage) >= 0.9) OR (_damage >= 0.95)) then {
    	_damage	= 0;
		[_unit,_source] spawn life_fnc_tazed;
	};
};

// VDM Prevention
if ((vehicle _source isKindOf "LandVehicle") && _source != _unit && driver (vehicle _source) == _source && vehicle _unit == _unit) then
{
	if ((((getDammage _unit) + _damage) >= 0.95) || (_damage >= 0.95)) then {
		_damage = 0;
	};
};

if ((((getDammage _unit) + _damage) >= 0.90) || (_damage >= 0.90)) then
{
	life_dead_gear = [player] call life_fnc_fetchDeadGear;
};

// No damage in jail
if (life_is_arrested) then
{
	_damage = 0;
};

// No damage in cop restraints
if (player getVariable "restrained") then
{
	_damage = false;
};

[] call life_fnc_hudUpdate;
_damage;