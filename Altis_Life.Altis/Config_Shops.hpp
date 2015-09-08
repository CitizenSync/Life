/*
All weapon shops and medic item store are here.
*/

class WeaponShops {
    //Armory
    class gun {
        name = "Cap's Gats";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1200  },
            { "16Rnd_9x21_Mag", "", 30  },
            { "hgun_ACPC2_F", "", 2000  },
            { "9Rnd_45ACP_Mag", "", 20  },
            { "hgun_PDW2000_F", "", 2500  },
            { "30Rnd_9x21_Mag", "", 30 },
            { "arifle_sdar_F", "", 5200 },
            { "20Rnd_556x45_UW_mag", "", 42 },
            { "optic_ACO_grn_smg", "", 150  },
            { "optic_Holosight", "", 200  },
            { "optic_Holosight_smg", "", 200 }
        };
    };
    class rebel {
        name = "Rebel Outpost";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Pistol_heavy_02_F", "", 4500  },
            { "6Rnd_45ACP_Cylinder", "", 45  },
            { "SMG_01_F", "", 5750  },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 55  },
            { "arifle_TRG20_F", "", 6100  },
            { "arifle_TRG21_F", "", 6250  },
            { "30Rnd_556x45_Stanag", "", 61  },
            { "arifle_Katiba_F", "", 7600  },
            { "arifle_Katiba_C_F", "", 7400  },
            { "30Rnd_65x39_caseless_green", "", 78  },
            { "srifle_DMR_01_F", "", 7900  },
            { "10Rnd_762x54_Mag", "", 79  },
            { "srifle_EBR_F", "", 8750  },
            { "20Rnd_762x51_Mag", "", 87  },
            { "srifle_DMR_03_khaki_F", "", 10500  },
            { "srifle_DMR_03_tan_F", "", 10500  },
            { "srifle_DMR_03_multicam_F", "", 10500  },
            { "srifle_DMR_03_woodland_F", "", 10500  },
            { "srifle_DMR_06_olive_F", "", 11500  },
            { "LMG_Mk200_F", "", 25000  },
            { "200Rnd_65x39_cased_Box_Tracer", "", 255  },
            { "optic_Yorris", "Zubr Optic", 200 },
            { "optic_ACO_grn", "", 150  },
            { "optic_Holosight", "", 200  },
            { "optic_Holosight_smg", "", 200 },
            { "optic_Hamr", "", 300 },
            { "optic_MRCO", "", 300 },
            { "optic_Arco", "", 300 },
            { "acc_flashlight", "", 65 },
            { "ItemGPS", "", 25 },
            { "Binocular", "", 25 },
            { "FirstAidKit", "", 75 },
            { "Medikit", "", 225 },
            { "ToolKit", "", 75 },
            { "HandGrenade", "", 4500 },
            { "NVGoggles", "", 120  },
            { "SmokeShell", "", 125 },
            { "SmokeShellRed", "", 125 },
            { "SmokeShellGreen", "", 125 },
            { "SmokeShellYellow", "", 125 },
            { "SmokeShellPurple", "", 125 },
            { "SmokeShellOrange", "", 125 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1200  },
            { "hgun_Pistol_heavy_02_F", "", 4500  },
            { "hgun_ACPC2_F", "", 2000  },
            { "hgun_PDW2000_F", "", 2500  },
            { "optic_ACO_grn_smg", "", 150  },
            { "V_Rangemaster_belt", "", 50  },
            { "16Rnd_9x21_Mag", "", 30  },
            { "9Rnd_45ACP_Mag", "", 20  },
            { "6Rnd_45ACP_Cylinder", "", 45  },
            { "30Rnd_9x21_Mag", "", 35 }
        };
    };
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150  },
			{ "ItemGPS", "", 25  },
			{ "ToolKit", "", 75  },
			{ "FirstAidKit", "", 75  },
			{ "NVGoggles", "", 120  },
			{ "Chemlight_red", "", 40  },
			{ "Chemlight_yellow", "", 40  },
			{ "Chemlight_green", "", 40  },
			{ "Chemlight_blue", "", 40 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Basic Cop Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "hgun_P07", "P07 9mm", 1125  },
            { "SMG_02_F", "", 2500 },
            { "16Rnd_9x21_Mag", "", 20  },
            { "30Rnd_9x21_Mag", "", 25  },
            { "optic_Holosight", "", 150  },
            { "optic_Holosight_smg", "", 150 },
            { "optic_Hamr", "", 250  },
            { "optic_MRCO", "", 250 },
            { "optic_Arco", "", 250 },
            { "ToolKit", "", 50  },
            { "Medikit", "", 200  },
            { "FirstAidKit", "", 55  },
            { "NVGoggles_OPFOR", "", 75  },
            { "Binocular", "", 15  },
            { "ItemGPS", "", 15 }
        };
    };
    class cop_constable {
        name = "Constable Weapon Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be constable or higher!";
        items[] = {
            { "arifle_MXC_Black_F", "", 4750  },
        	{ "arifle_MX_Black_F", "", 4850  },
            { "30Rnd_65x39_caseless_mag", "Rubber Magazines", 35  },
            { "30Rnd_65x39_caseless_mag_Tracer", "Lethal Magazines", 100  },
            { "optic_Holosight", "", 150  },
            { "optic_Holosight_smg", "", 150 },
            { "optic_Hamr", "", 250  },
            { "optic_MRCO", "", 250 },
            { "optic_Arco", "", 250 },
            { "acc_flashlight", "", 30  },
            { "HandGrenade_Stone", "Flashbang", 750  },
            { "SmokeShell", "", 75  },
            { "SmokeShellBlue", "", 75  },
            { "ToolKit", "", 50  },
            { "Medikit", "", 200  },
            { "FirstAidKit", "", 55  },
            { "NVGoggles_OPFOR", "", 75  },
            { "Binocular", "", 15  },
            { "ItemGPS", "", 15 }
        };
    };
    class cop_corporal {
        name = "Corporal Weapon Store";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be corporal or higher!";
        items[] = {
            { "arifle_MXC_Black_F", "", 4750  },
            { "arifle_MX_Black_F", "", 4850  },
            { "arifle_MXM_Black_F", "", 6500 },
            { "30Rnd_65x39_caseless_mag", "Rubber Magazines", 35  },
            { "30Rnd_65x39_caseless_mag_Tracer", "Lethal Magazines", 100  },
            { "SMG_01_F", "", 4650 },
            { "30Rnd_45ACP_Mag_SMG_01", "Rubber Magazines", 35 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Lethal Magazines", 100 },
            { "optic_Holosight", "", 150  },
            { "optic_Holosight_smg", "", 150 },
            { "optic_Hamr", "", 250  },
            { "optic_MRCO", "", 250 },
            { "optic_Arco", "", 250 },
            { "acc_flashlight", "", 30  },
            { "HandGrenade_Stone", "Flashbang", 750  },
            { "SmokeShell", "", 75  },
            { "SmokeShellBlue", "", 75  },
            { "ToolKit", "", 50  },
            { "Medikit", "", 200  },
            { "FirstAidKit", "", 55  },
            { "NVGoggles_OPFOR", "", 75  },
            { "Binocular", "", 15  },
            { "ItemGPS", "", 15 }
        };
    };
    class cop_sergeant {
        name = "Sergeant Weapon Store";
        side = "cop";
        license = "";
        level = 4;
        msg = "You must be Sergeant or higher!";
        items[] = {
            { "arifle_MXC_Black_F", "", 4750  },
            { "arifle_MX_Black_F", "", 4850  },
            { "arifle_MXM_Black_F", "", 6500 },
            { "arifle_MX_GL_Black_F", "", 5000 },
            { "30Rnd_65x39_caseless_mag", "Rubber Magazines", 35  },
            { "30Rnd_65x39_caseless_mag_Tracer", "Lethal Magazines", 100  },
            { "3Rnd_Smoke_Grenade_shell", "", 125 },
            { "3Rnd_SmokeBlue_Grenade_shell", "", 125 },
            { "SMG_01_F", "", 4650 },
            { "30Rnd_45ACP_Mag_SMG_01", "Rubber Magazines", 35 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Lethal Magazines", 100 },
            { "optic_Holosight", "", 150  },
            { "optic_Holosight_smg", "", 150 },
            { "optic_Hamr", "", 250  },
            { "optic_MRCO", "", 250 },
            { "optic_Arco", "", 250 },
            { "acc_flashlight", "", 30  },
            { "HandGrenade_Stone", "Flashbang", 750  },
            { "SmokeShell", "", 75  },
            { "SmokeShellBlue", "", 75  },
            { "ToolKit", "", 50  },
            { "Medikit", "", 200  },
            { "FirstAidKit", "", 55  },
            { "NVGoggles_OPFOR", "", 75  },
            { "Binocular", "", 15  },
            { "ItemGPS", "", 15 }
        };
    };
    class cop_lieutenant {
        name = "Lieutenant Weapon Store";
        side = "cop";
        license = "";
        level = 5;
        msg = "You must be Lieutenant or higher!";
        items[] = {
            { "hgun_Pistol_heavy_01_MRD_F", "", 3500 },
            { "11Rnd_45ACP_Mag", "11rnd Lethal Only", 50 },
            { "arifle_MXC_Black_F", "", 4750  },
            { "arifle_MX_Black_F", "", 4850  },
            { "arifle_MXM_Black_F", "", 6500 },
            { "arifle_MX_GL_Black_F", "", 5100 },
            { "3Rnd_Smoke_Grenade_shell", "", 125 },
            { "3Rnd_SmokeBlue_Grenade_shell", "", 125 },
            { "30Rnd_65x39_caseless_mag", "30rnd Rubber Magazines", 35  },
            { "30Rnd_65x39_caseless_mag_Tracer", "30rnd Lethal Magazines", 100  },
            { "arifle_MX_SW_Black_F", "", 5500 },
            { "100Rnd_65x39_caseless_mag", "100rnd Rubber", 65 },
            { "srifle_DMR_03_F", "", 6500 },
            { "20Rnd_762x51_Mag", "MK1 Rubber", 42 },
            { "SMG_01_F", "", 4650 },
            { "30Rnd_45ACP_Mag_SMG_01", "Rubber Magazines", 35 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Lethal Magazines", 100 },
            { "optic_Holosight", "", 150  },
            { "optic_Holosight_smg", "", 150 },
            { "optic_Hamr", "", 250  },
            { "optic_MRCO", "", 250 },
            { "optic_Arco", "", 250 },
            { "acc_flashlight", "", 30  },
            { "HandGrenade_Stone", "Flashbang", 750  },
            { "SmokeShell", "", 75  },
            { "SmokeShellBlue", "", 75  },
            { "ToolKit", "", 50  },
            { "Medikit", "", 200  },
            { "FirstAidKit", "", 55  },
            { "NVGoggles_OPFOR", "", 75  },
            { "Binocular", "", 15  },
            { "ItemGPS", "", 15 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100  },
			{ "Binocular", "", 25  },
			{ "ToolKit", "", 75  },
			{ "FirstAidKit", "", 70  },
			{ "Medikit", "", 100  },
			{ "NVGoggles", "", 120  },
			{ "B_FieldPack_ocamo", "", 0 }
        };
    };
};
