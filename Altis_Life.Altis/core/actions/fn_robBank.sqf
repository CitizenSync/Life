/*
file: fn_robBank.sqf
Based off MrKraken's gas station robbery script.
Second Author: Jesse Schultz
*/

private["_robber","_shop","_type","_ui","_progress","_pgText","_cP","_coolDown","_pos","_shopName","_item","_qty"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
_shopName =[(_this select 3),1,"Vault",[""]] call BIS_fnc_param; // name of the place robbed "" is none provided
_coolDown = [(_this select 3),2,1200,[0]] call BIS_fnc_param; // in seconds default 5 minutes

//all the checks
if(side _robber != civilian) exitWith { hint format["You can not rob this %1",_shopName]};
if(_robber distance _shop > 2) exitWith { hint format["You need to be within 2m of %1",_shopName]};
if (_shop getVariable ["rip",false]) exitWith { hint "Hey! No double dipping!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };
if !(alive _robber) exitWith {};
if !(_shop getVariable ["robbable",true]) exitWith { hint "This vault was just cracked and can not be cracked yet!" };
if(currentWeapon player == "") exitWith {hint "You expect to rob a bank without a gun?";};
if(currentWeapon player == "Binocular") exitWith {hint "Nice try at that exploit...";};
_cops = (west countSide playableUnits);
if(_cops < 0) exitWith{hint "There is not enough Police to take from the vault!"};

_shop setVariable ["rip",true,true];
_item = "bankbond";
_chance = 0;

// chance of alarm going off.
if(_chance == 0) then
{
	hint "You have tripped the alarm and the Police have been alerted!";
	playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", player];
	[[1,format["ALARM! - A bank being robbed by %1!",name player]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
};

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Collecting the bank bonds! Stay near the vault (2m)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_shop getVariable ["rip",false]) then
{
	while{true} do
	{
		uiSleep 0.85;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Collecting bank bonds! Stay near the vault (2m)... (%1%2)",round(_cP * 100),"%"];
		_Pos = position player; // by ehno: get player pos
		_marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
		"Marker200" setMarkerColor "ColorRed";
		"Marker200" setMarkerText "Bank robbery in progress!";
		"Marker200" setMarkerType "mil_warning";

		if(_cP >= 1) exitWith {};
		if(_robber distance _shop > 3) exitWith {_shop setVariable ["rip",false,true];};
		if!(alive _robber) exitWith {_shop setVariable ["rip",false,true];};
		if(life_istazed) exitWith {_shop setVariable ["rip",false,true];}; //Tazed
		if(player getVariable ["restrained",false]) exitWith {_shop setVariable ["rip",false,true];};
		if(life_interrupted) exitWith {_shop setVariable ["rip",false,true];};
	};
	if!(alive _robber) exitWith {_shop setVariable ["rip",false,true];};
	if(_robber distance _shop > 5) exitWith { deleteMarker "Marker200"; hint format["You need to stay within 2m to steal from the %1! - Now the %1 is locked.",_shopName]; 5 cutText ["","PLAIN"]; _shop setVariable ["rip",false,true]; };
	5 cutText ["","PLAIN"];

	deleteMarker "Marker200"; // by ehno delete maker

	[_shop] spawn //prevent shop from being robbed again
	{
		(_this select 0) setVariable ["robbable",false,true];
		// Sleeps for 35mins
		uiSleep 2100;
		// uiSleep (random(15) * 60);
		(_this select 0) setVariable ["robbable",true,true];
	};
	if!(alive _robber) exitWith {};

	_shop setVariable ["rip",false,true];

_qty = ceil (random 5);
if([true,_item,_qty] call life_fnc_handleInv) then {
	titleText [format["You have grabbed %1 Bank Bonds!",_qty],"PLAIN"];
} else {
	titleText ["Your inventory is full","PLAIN"];
};
	[[getPlayerUID _robber,name _robber,"188"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
};
