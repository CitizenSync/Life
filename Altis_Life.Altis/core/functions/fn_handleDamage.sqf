#include <macro.h>
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);
_curMag = "";
_curWep = "";

if(isPlayer _source && _source isKindOf "Man") then{
	_curMag = currentMagazine _source;
	_curWep = currentWeapon _source;
};

if(((_curMag in ["30Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","30Rnd_45ACP_Mag_SMG_01"]))
	OR (_curWep in ["hgun_P07_F","hgun_P07_snds_F","srifle_DMR_03_F","SMG_02_F"])) then {
    if((((getDammage _unit) + _damage) >= 0.9) OR (_damage >= 0.95)) then {
    	_damage	= 0;
		[_unit,_source] spawn life_fnc_tazed;
	};
};

if(player getVariable "restrained") then
{
	_damage = false;
};

[] call life_fnc_hudUpdate;
_damage;