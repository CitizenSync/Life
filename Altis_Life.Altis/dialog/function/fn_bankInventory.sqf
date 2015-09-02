//*************** Test Code bankInventory //// altis_life.Altis > dialog > function ***************
#include <macro.h>
/*
	File: fn_bankInventory.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Fills up the safes inventory.
*/

private["_vault","_tInv","_pInv","_bankInfo","_str","_shrt"];
_vault = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _vault) exitWith {closeDialog 0;};
disableSerialization;

_tInv = (findDisplay 3500) displayCtrl 3502;
lbClear _tInv;

_bankInfo = _vault getVariable["vault",-1];
if(_bankInfo < 1) exitWith {closeDialog 0; hint localize "STR_Civ_VaultEmpty";};

_str = M_CONFIG(getText,"VirtualItems","goldcoins","displayName");
_shrt = M_CONFIG(getText,"VirtualItems","goldcoins","variable");
_tInv lbAdd format["[%1] - %2",_bankInfo,(localize _str)];
_tInv lbSetData [(lbSize _tInv)-1,_shrt];