#include <macro.h>
/*
	File: fn_ziptie.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Retrains the client.
*/
private["_civ","_player"];
_civ = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_player = player;
if(isNull _civ) exitWith {};

//Monitor excessive restrainment
[] spawn {
	private "_time";
	while {true} do {
		_time = time;
		waitUntil {(time - _time) > (10 * 60)};

		if(!(player GVAR ["ziptied",FALSE])) exitWith {};
		if(!([west,getPos player,30] call life_fnc_nearUnits) && (player GVAR ["ziptied",FALSE]) && vehicle player == player) exitWith {
			player SVAR ["ziptied",FALSE,TRUE];
			player SVAR ["Escorting",FALSE,TRUE];
			player SVAR ["transporting",false,true];
			detach player;
			titleText[localize "STR_Civ_ExcessiveRestrain","PLAIN"];
		};
	};
};

if((player GVAR["surrender",FALSE])) then { player SVAR["surrender",FALSE,TRUE]; player switchMove ""; };

titleText[format[localize "STR_Civ_Ziptied",_civ GVAR ["realname",name _civ]],"PLAIN"];

while {player GVAR  "ziptied"} do {
	if(vehicle player == player) then {
		player playMove "AmovPercMstpSnonWnonDnon_Ease";
	};

	_state = vehicle player;
	waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player GVAR "ziptied") || vehicle player != _state};

	if(!alive player) exitWith {
		player SVAR ["ziptied",false,true];
		player SVAR ["Escorting",false,true];
		player SVAR ["transporting",false,true];
		detach _player;
	};

	if(!alive _civ) exitWith {
		player SVAR ["Escorting",false,true];
		detach player;
	};

	if(vehicle player != player) then {
		//disableUserInput true;
		if(driver (vehicle player) == player) then {player action["eject",vehicle player]; hint localize "STR_Civ_Exploit";};
	};
};

//disableUserInput false;

if(alive player) then {
	player switchMove "AmovPercMstpSlowWrflDnon_SaluteIn";
	player SVAR ["Escorting",false,true];
	player SVAR ["transporting",false,true];
	detach player;
};