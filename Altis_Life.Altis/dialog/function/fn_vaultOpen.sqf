#include <macro.h>
/*	
	File: fn_vaultOpen.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Opens the vault inventory menu.
*/	
if(dialog) exitWith {}; //A dialog is already open.
life_vaultObj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull life_vaultObj) exitWith {};
if(playerSide != civilian) exitWith {};
if((life_vaultObj GVAR ["vault",-1]) < 1) exitWith {hint localize "STR_Civ_VaultEmpty";};
if((life_vaultObj GVAR ["inUse",false])) exitWith {hint localize "STR_Civ_VaultInUse"};
if({side _x == west} count playableUnits < 1) exitWith {hint localize "STR_Civ_NotEnoughCops"};
if(!createDialog "Bank_Vault") exitWith {localize "STR_MISC_DialogError"};

disableSerialization;
ctrlSetText[3501,(localize "STR_Civ_BankInv")];
[life_vaultObj] call life_fnc_bankInventory;
life_vaultObj SVAR ["inUse",true,true];
[life_vaultObj] spawn {
	waitUntil {isNull (findDisplay 3500)};
	SEL(_this,0) SVAR ["inUse",false,true];
};