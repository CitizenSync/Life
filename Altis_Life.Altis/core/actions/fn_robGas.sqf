/*
file: fn_robGasStations.sqf
Author: MrKraken
*/

private["_robber","_shop","_cashRegister","_ui","_progress","_pgText","_cP","_coolDown","_pos","_shopName"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
_cashRegister = [(_this select 3),0,1000,[0]] call BIS_fnc_param; // 1000 default if no number are provided on the add action
_shopName =[(_this select 3),1,"Gas Station",[""]] call BIS_fnc_param; // name of the place robbed "" is none provided
_coolDown = [(_this select 3),2,1800,[0]] call BIS_fnc_param; // in seconds default 5 minutes

//all the checks
if(side _robber != civilian) exitWith { hint format["You can not rob this %1",_shopName]};
if(_robber distance _shop > 2) exitWith { hint format["You need to be within 2m of %1",_shopName]};
if (_shop getVariable ["rip",false]) exitWith { hint "Robbery already in progress!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };
if !(alive _robber) exitWith {};
if !(_shop getVariable ["robbable",true]) exitWith { hint "This gas station was recently robbed and is under high security. Cannot be robbed at this time." };
if(currentWeapon player == "") exitWith {hint "You expect to rob a store without a gun?";};
_cops = (west countSide playableUnits);
if(_cops < 0) exitWith{hint "There isnt enough Police to rob the Gas Station!"};
if (_cashRegister == 0) exitWith { hint "There is no cash in the register!" };


_shop setVariable ["rip",true,true];
_cashRegister = _cashRegister + round(random 20000);
_chance = random(100);

// chance of alarm going off.
if(_chance >= 33) then
{
	hint "You have tripped the alarm and, the Police has been alerted!";
	playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", player];
	[[1,format["ALARM! - %1: %2 is being robbed by %3!",_shopName,_shop,name player]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
};

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in Progress, stay close (2m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_shop getVariable ["rip",false]) then
{
	while{true} do
	{
		uiSleep 0.85;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Robbery in Progress, stay close (2m) (%1%2)...",round(_cP * 100),"%"];
		_Pos = position player; // by ehno: get player pos
		_marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
		"Marker200" setMarkerColor "ColorRed";
		"Marker200" setMarkerText "Gas Station Being Robbed";
		"Marker200" setMarkerType "mil_warning";

		if(_cP >= 1) exitWith {};
		if(_robber distance _shop > 2.5) exitWith {_shop setVariable ["rip",false,true];};
		if!(alive _robber) exitWith {_shop setVariable ["rip",false,true];};
		if(life_istazed) exitWith {_shop setVariable ["rip",false,true];}; //Tazed
		if(player getVariable ["restrained",false]) exitWith {_shop setVariable ["rip",false,true];};
		if(life_interrupted) exitWith {_shop setVariable ["rip",false,true];};
	};
	if!(alive _robber) exitWith {_shop setVariable ["rip",false,true];};
	if(_robber distance _shop > 2.5) exitWith { deleteMarker "Marker200"; hint format["You need to stay within 2m to Rob %1! - Now %1 is locked.",_shopName]; 5 cutText ["","PLAIN"]; _shop setVariable ["rip",false,true]; };
	5 cutText ["","PLAIN"];

	titleText[format["You have stolen $%1, now run before the cops show!",[_cashRegister] call life_fnc_numberText],"PLAIN"];
	deleteMarker "Marker200"; // by ehno delete maker
	[] spawn //block ATM usage
	{
		life_use_atm = false;
		uiSleep (30 + random(180));
		life_use_atm = true;
	};
	[_shop] spawn //prevent shop from being robbed again
	{
		(_this select 0) setVariable ["robbable",false,true];
		uiSleep (random(15) * 60);
		(_this select 0) setVariable ["robbable",true,true];
	};
	if!(alive _robber) exitWith {};

	_shop setVariable ["rip",false,true];
	[_cashRegister,0,0] call life_fnc_handleMoney;
	[[getPlayerUID _robber,name _robber,"188"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
};

