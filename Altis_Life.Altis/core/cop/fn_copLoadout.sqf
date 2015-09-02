#include <macro.h>
/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka

	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

if(FETCH_CONST(life_coplevel) == 1) then
{
	player addUniform "U_Competitor";
	player addVest "V_BandollierB_blk";
};

if(FETCH_CONST(life_coplevel) >= 2) then
{
	player addUniform "U_Rangemaster";
	player addVest "V_TacVest_blk_POLICE";
};

if(FETCH_CONST(life_coplevel) <= 3) then
{
	player addWeapon "hgun_P07_snds_F";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
};

if(FETCH_CONST(life_coplevel) >= 4) then
{
	player addWeapon "hgun_Pistol_heavy_01_MRD_F";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
};


/* ITEMS */
player addWeapon "NVGoggles_OPFOR";
player addHeadgear "H_Cap_police";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";

[] call life_fnc_saveGear;