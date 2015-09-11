#include <macro.h>
/*
	File: fn_seizeVehAction.sqf
	Author: Kevin Webb
	Modifications: Jesse Schultz

	Description:
	Seizes vehicles
*/
private["_vehicle","_type","_price","_vehicleData","_upp","_ui","_progress","_pgText","_cP","filters"];
// _vehicle = cursorTarget;
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_filters = ["Car","Air","Ship"];
if(FETCH_CONST(life_coplevel) < 2) exitWith {hint localize "STR_NOTF_LowRank";};
if(!((KINDOF_ARRAY(_vehicle,_filters)))) exitWith {};
if(player distance cursorTarget > 10) exitWith {};
if(!alive _vehicle) exitWith {};

_vehicleData = _vehicle GVAR ["vehicle_info_owners",[]];
if(count _vehicleData == 0) exitWith {deleteVehicle _vehicle}; //Bad vehicle.
_vehicleName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _vehicle),"displayName");
[[0,"STR_NOTF_Seizure",true,[SEL(SEL(_vehicleData,0),1),_vehicleName]],"life_fnc_broadcast",true,false] call life_fnc_MP;
life_action_inUse = true;

_upp = localize "STR_NOTF_Seizing";
//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do
{
	sleep 0.09;
	_cP = _cP + 0.004;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(player distance _vehicle > 10) exitWith {};
	if(!alive player) exitWith {};
};

5 cutText ["","PLAIN"];

if(player distance _vehicle > 10) exitWith {hint localize "STR_NOTF_SeizureCancel"; life_action_inUse = false;};
if(!alive player) exitWith {life_action_inUse = false;};

if(EQUAL(count crew _vehicle,0)) then {
	if(!(KINDOF_ARRAY(_vehicle,_filters))) exitWith {life_action_inUse = false;};
	_type = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _vehicle),"displayName");
	switch (true) do
	{
		case (_vehicle isKindOf "Car"): {_price = LIFE_SETTINGS(getNumber,"seize_car");};
		case (_vehicle isKindOf "Ship"): {_price = LIFE_SETTINGS(getNumber,"seize_boat");};
		case (_vehicle isKindOf "Air"): {_price = LIFE_SETTINGS(getNumber,"seize_air");};
	};

	life_seize_inuse = true;
	[[_vehicle,true,player],"TON_fnc_vehicleDead",false,false] call life_fnc_MP;
	[_vehicle] spawn
		{
			if(!isNull _this && !isNil "_this") then {
				deleteVehicle _this;
			};
		};
	life_seize_inuse = false;
	hint format[localize "STR_NOTF_SeizurePayout",_type,_price];
	[[0,"STR_NOTF_SeizedBy",true,[profileName,SEL(SEL(_vehicleData,0),1),_vehicleName]],"life_fnc_broadcast",true,false] call life_fnc_MP;
	ADD(BANK,_price);
} else {
	hint localize "STR_NOTF_SeizureCancel";
};

life_action_inUse = false;