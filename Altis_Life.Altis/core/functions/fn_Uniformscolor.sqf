#include <macro.h>
/*
	COP UNIFORM SCRIPT
	Edited: by maximum for better handling of actual uniforms
	Created for www.altisliferpg.com
*/
#define FETCH_CONST(var) (call var)
/*
if(side player == independent) then {
	if ((uniform player) == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\medic_uniform.paa"];
	};
};
*/
if(side player == west) then {
	/*/ Basic cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 1)) then {
		player setObjectTextureGlobal [0, "textures\police\pcso_uniform.paa"];
	};*/
	// Basic cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 2 OR FETCH_CONST(life_coplevel) == 3)) then {
		player setObjectTextureGlobal [0, "textures\policeAir.paa"];
	};
	// Basic cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 4 OR FETCH_CONST(life_coplevel) == 5 OR FETCH_CONST(life_coplevel) == 6 OR FETCH_CONST(life_coplevel) == 7)) then {
		player setObjectTextureGlobal [0, "textures\policeAirman.paa"];
	};
	/*
	// Basic cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 8 OR FETCH_CONST(life_coplevel) == 9 OR FETCH_CONST(life_coplevel) == 10 OR FETCH_CONST(life_coplevel) == 11 OR FETCH_CONST(life_coplevel) == 12)) then {
		player setObjectTextureGlobal [0, "textures\police\police_high.paa"];
	};
	// SCO cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 13)) then {
		player setObjectTextureGlobal [0, "textures\police\sco19.paa"];
	}; */
};
/*
if(side player == civilian) then {
	// Prisoner
	if(side player == civilian && uniform player == "U_B_CombatUniform_mcam") then {
	player setObjectTextureGlobal [0, "textures\civilians\prisoner.paa"];
	};
	// Black wolf
	if(side player == civilian && uniform player == "U_B_CombatUniform_mcam_vest") then {
	player setObjectTextureGlobal [0, "textures\civilians\blackwolf.jpg"];
	};
};
*/