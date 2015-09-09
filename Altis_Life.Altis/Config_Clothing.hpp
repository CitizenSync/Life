/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class airman {
		title = "STR_Shops_C_Airman";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 5, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 5, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 5, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 5, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 5, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 5, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 5, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 5, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 20, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 20, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 25, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 25, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 20, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 35, { "", "", -1 } },
			{ "U_NikosBody", "Red Dragon", 25, { "", "", -1} },
			{ "U_B_Protagonist_VR","Blue VR Suit", 450, { "", "", -1} },
			{ "U_O_Protagonist_VR","Red VR Suit", 450, { "", "", -1} },
			{ "U_I_Protagonist_VR","Green VR Suit", 450, { "", "", -1} }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 30, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 30, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 30, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 30, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 30, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 30, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 30, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 35, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 35, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 25, { "", "", -1 } },
			{ "H_Hat_blue", "", 15, { "", "", -1 } },
			{ "H_Hat_brown", "", 15, { "", "", -1 } },
			{ "H_Hat_checker", "", 15, { "", "", -1 } },
			{ "H_Hat_grey", "", 15, { "", "", -1 } },
			{ "H_Hat_tan", "", 15, { "", "", -1 } },
			{ "H_Cap_blu", "", 15, { "", "", -1 } },
			{ "H_Cap_grn", "", 15, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 15, { "", "", -1 } },
			{ "H_Cap_oli", "", 15, { "", "", -1 } },
			{ "H_Cap_red", "", 15, { "", "", -1 } },
			{ "H_Cap_tan", "", 15, { "", "", -1 } },
			{ "H_Booniehat_grn", "", 20, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 20, { "", "", -1 } },
			{ "H_Booniehat_dirty", "", 20, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 10, { "", "", -1 } },
			{ "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 10, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 15, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 12, { "", "", -1 } },
			{ "G_Lady_Dark", "", 12, { "", "", -1 } },
			{ "G_Lady_Blue", "", 12, { "", "", -1 } },
			{ "G_Lowprofile", "", 20, { "", "", -1 } },
			{ "G_Combat", "", 20, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 50, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 75, { "", "", -1 } },
			{ "V_BandollierB_khk", "", 75, { "", "", -1 } },
			{ "V_TacVest_khk", "", 3250, { "", "", -1 } },
			{ "V_TacVest_brn", "", 3250, { "", "", -1 } },
			{ "V_TacVest_oli", "", 3250, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_khk", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_sgg", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_rgr", "", 100, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 175, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 175, { "", "", -1 } },
			{ "B_Kitbag_sgg", "", 175, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 175, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 150, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 125, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 200, { "", "", -1 } },
			{ "B_Bergen_blk", "", 200, { "", "", -1 } },
			{ "B_Bergen_mcamo", "", 200, { "", "", -1 } },
			{ "B_Carryall_oli", "", 250, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 250, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 250, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 250, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 250, { "", "", -1 } },
			{ "B_Carryall_khk", "", 250, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Competitor", "Cadet Uniform", 10, { "life_coplevel", "SCALAR", 1 } },
			{ "U_O_Wetsuit", "Police Wetsuit", 500, {"life_coplevel", "SCALAR", 1} },
			{ "U_Rangemaster", "Police Uniform", 20, { "life_coplevel", "SCALAR", 2 } }	
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_police", "", 15, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_blk_POLICE", "", 25, {"life_coplevel", "SCALAR", 4 } },
			{ "H_Beret_02", "", 30, {"life_coplevel", "SCALAR", 5 } }
			
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "DIVE GEAR", 125, { "", "", -1 } },
			{ "G_Shades_Black", "", 10, { "", "", -1 } },
			{ "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 10, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 15, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 12, { "", "", -1 } },
			{ "G_Lady_Dark", "", 12, { "", "", -1 } },
			{ "G_Lady_Blue", "", 12, { "", "", -1 } },
			{ "G_Lowprofile", "", 12, { "", "", -1 } },
			{ "G_Combat", "", 20, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "DIVE GEAR", 150, {"life_coplevel", "SCALAR", 1 } },
			{ "V_Rangemaster_belt", "", 25, { "", "", 1 } },
			{ "V_BandollierB_blk", "", 50, { "", "", 1 } },
			{ "V_TacVest_blk_POLICE", "", 2000, {"life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrier1_blk", "", 3500, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrierSpec_blk", "", 3800, {"life_coplevel", "SCALAR", 5 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 750, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 200, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 350, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 400, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 400, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 475, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 400, { "", "", -1 } },
			{ "U_O_SpecopsUniform_blk", "", 400, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "", 450, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 700, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 600, { "", "", -1 } },
			{ "U_BG_leader", "", 575, { "", "", -1 } },
			{ "U_B_CTRG_1", "", 500, { "", "", -1 } },
			{ "U_B_CTRG_2", "", 500, { "", "", -1 } },
			{ "U_B_CTRG_3", "", 500, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 650, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 675, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "", 675, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 675, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Booniehat_grn", "", 100, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 100, { "", "", -1 } },
			{ "H_Booniehat_dirty", "", 100, { "", "", -1 } },
			{ "H_Booniehat_dgtl", "", 100, { "", "", -1 } },
			{ "H_Booniehat_khk_hs", "", 100, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 150, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 150, {"", "", -1 } },
			{ "G_Bandanna_blk", "", 150, {"", "", -1 } },
			{ "G_Bandanna_khk", "", 150, {"", "", -1 } },
			{ "G_Bandanna_shades", "", 250, {"", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 300, { "", "", -1 } },
			{ "H_Shemag_olive", "", 300, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 300, { "", "", -1 } },
			{ "G_Shades_Black", "", 50, { "", "", -1 } },
			{ "G_Shades_Blue", "", 50, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 50, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 50, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 50, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 50, { "", "", -1 } },
			{ "G_Squares", "", 50, { "", "", -1 } },
			{ "G_Lowprofile", "", 50, { "", "", -1 } },
			{ "G_Combat", "", 50, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 3250, { "", "", -1 } },
			{ "V_TacVest_brn", "", 3250, { "", "", -1 } },
			{ "V_TacVest_oli", "", 3250, { "", "", -1 } },
			{ "V_TacVest_camo", "", 3250, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 2750, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 2200, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 2200, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 2200, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "", 4500, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr", "", 4500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_khk", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_sgg", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_rgr", "", 100, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 175, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 175, { "", "", -1 } },
			{ "B_Kitbag_sgg", "", 175, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 175, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 150, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 125, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 200, { "", "", -1 } },
			{ "B_Bergen_blk", "", 200, { "", "", -1 } },
			{ "B_Bergen_mcamo", "", 200, { "", "", -1 } },
			{ "B_Carryall_oli", "", 250, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 250, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 250, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 250, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 250, { "", "", -1 } },
			{ "B_Carryall_khk", "", 250, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 550, { "", "", -1 } },
			{ "U_C_Driver_1", "", 550, { "", "", -1 } },
			{ "U_C_Driver_3", "", 550, { "", "", -1 } },
			{ "U_C_Driver_4", "", 550, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "Clean Green", 1500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "Fire and Ice", 1500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "Golden Boy", 1500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "BlacknOrange", 1500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};
