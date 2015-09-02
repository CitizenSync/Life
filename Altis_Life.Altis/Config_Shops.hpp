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
            { "hgun_Rook40_F", "", 6500  },
            { "16Rnd_9x21_Mag", "", 25  },
            { "hgun_ACPC2_F", "", 11500  },
            { "9Rnd_45ACP_Mag", "", 45  },
            { "hgun_PDW2000_F", "", 20000  },
            { "30Rnd_9x21_Mag", "", 70 },
            { "arifle_sdar_F", "", 3000 },
            { "20Rnd_556x45_UW_mag", "", 1000 },
            { "optic_ACO_grn_smg", "", 2500  },
            { "optic_Holosight", "", 3600  },
            { "optic_Holosight_smg", "", 3600 }
        };
    };
    class rebel {
        name = "Rebel Outpost";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Pistol_heavy_02_F", "", 9850  },
            { "6Rnd_45ACP_Cylinder", "", 50  },
            { "SMG_01_F", "", 7000  },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 350  },
            { "arifle_TRG20_F", "", 25000  },
            { "30Rnd_556x45_Stanag", "", 250  },
            { "arifle_Katiba_F", "", 30000  },
            { "30Rnd_65x39_caseless_green", "", 350  },
            { "srifle_DMR_01_F", "", 50000  },
            { "10Rnd_762x54_Mag", "", 350  },
            { "srifle_EBR_F", "", 20000  },
            { "20Rnd_762x51_Mag", "", 275  },
            { "srifle_DMR_03_khaki_F", "", 20000  },
            { "srifle_DMR_03_tan_F", "", 20000  },
            { "srifle_DMR_03_multicam_F", "", 20000  },
            { "srifle_DMR_03_woodland_F", "", 20000  },
            { "LMG_Mk200_F", "", 20000  },
            { "200Rnd_65x39_cased_Box_Tracer", "", 275  },
            { "optic_Yorris", "Zubr Optic", 3500 },
            { "optic_ACO_grn", "", 3500  },
            { "optic_Holosight", "", 3600  },
            { "optic_Holosight_smg", "", 3600 },
            { "optic_Hamr", "", 3600  },
            { "optic_MRCO", "", 3600 },
            { "optic_Arco", "", 3600 },
            { "acc_flashlight", "", 1000  },
            { "ItemGPS", "", 1000 },
            { "Binocular", "", 1000 },
            { "FirstAidKit", "", 1000 },
            { "Medikit", "", 1000 },
            { "ToolKit", "", 1000 },
            { "HandGrenade", "", 5000 },
            { "NVGoggles", "", 1000  },
            { "SmokeShell", "", 500 },
            { "SmokeShellRed", "", 500 },
            { "SmokeShellGreen", "", 500 },
            { "SmokeShellYellow", "", 500 },
            { "SmokeShellPurple", "", 500 },
            { "SmokeShellOrange", "", 500 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500  },
            { "hgun_Pistol_heavy_02_F", "", 2500  },
            { "hgun_ACPC2_F", "", 4500  },
            { "hgun_PDW2000_F", "", 9500  },
            { "optic_ACO_grn_smg", "", 950  },
            { "V_Rangemaster_belt", "", 1900  },
            { "16Rnd_9x21_Mag", "", 25  },
            { "9Rnd_45ACP_Mag", "", 45  },
            { "6Rnd_45ACP_Cylinder", "", 50  },
            { "30Rnd_9x21_Mag", "", 75 }
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
			{ "ItemGPS", "", 100  },
			{ "ToolKit", "", 250  },
			{ "FirstAidKit", "", 150  },
			{ "NVGoggles", "", 2000  },
			{ "Chemlight_red", "", 300  },
			{ "Chemlight_yellow", "", 300  },
			{ "Chemlight_green", "", 300  },
			{ "Chemlight_blue", "", 300 }
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
			{ "hgun_P07", "P07 9mm", 2000  },
            { "SMG_02_F", "", 3000 },
            { "16Rnd_9x21_Mag", "", 50  },
            { "30Rnd_9x21_Mag", "", 250  },
            { "optic_Holosight", "", 3600  },
            { "optic_Holosight_smg", "", 3600 },
            { "optic_Hamr", "", 3600  },
            { "optic_MRCO", "", 3600 },
            { "optic_Arco", "", 3600 },
            { "ToolKit", "", 250  },
            { "Medikit", "", 1000  },
            { "FirstAidKit", "", 150  },
            { "NVGoggles_OPFOR", "", 2000  },
            { "Binocular", "", 150  },
            { "ItemGPS", "", 150 }
        };
    };
    class cop_constable {
        name = "Constable Weapon Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be constable or higher!";
        items[] = {
            { "arifle_MXC_Black_F", "", 35000  },
        	{ "arifle_MX_Black_F", "", 35000  },
            { "30Rnd_65x39_caseless_mag", "Rubber Magazines", 450  },
            { "30Rnd_65x39_caseless_mag_Tracer", "Lethal Magazines", 450  },
            { "optic_Holosight", "", 3600  },
            { "optic_Holosight_smg", "", 3600 },
            { "optic_Hamr", "", 3600  },
            { "optic_MRCO", "", 3600 },
            { "optic_Arco", "", 3600 },
            { "acc_flashlight", "", 750  },
            { "HandGrenade_Stone", "Flashbang", 1700  },
            { "SmokeShell", "", 350  },
            { "SmokeShellBlue", "", 350  },
            { "ToolKit", "", 250  },
            { "Medikit", "", 1000  },
            { "FirstAidKit", "", 150  },
            { "NVGoggles_OPFOR", "", 2000  },
            { "Binocular", "", 150  },
            { "ItemGPS", "", 150 }
        };
    };
    class cop_corporal {
        name = "Corporal Weapon Store";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be corporal or higher!";
        items[] = {
            { "arifle_MXC_Black_F", "", 35000 },
            { "arifle_MX_Black_F", "", 35000 },
            { "arifle_MXM_Black_F", "", 40000 },
            { "30Rnd_65x39_caseless_mag", "Rubber Magazines", 450 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Lethal Magazines", 450 },
            { "SMG_01_F", "", 10000 },
            { "30Rnd_45ACP_Mag_SMG_01", "Rubber Magazines", 450 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Lethal Magazines", 450 },
            { "optic_Holosight", "", 3600  },
            { "optic_Holosight_smg", "", 3600 },
            { "optic_Hamr", "", 3600 },
            { "optic_MRCO", "", 3600 },
            { "optic_Arco", "", 3600 },
            { "acc_flashlight", "", 750  },
            { "HandGrenade_Stone", "Flashbang", 1700  },
            { "SmokeShell", "", 350  },
            { "SmokeShellBlue", "", 350  },
            { "ToolKit", "", 250  },
            { "Medikit", "", 1000  },
            { "FirstAidKit", "", 150  },
            { "NVGoggles_OPFOR", "", 2000  },
            { "Binocular", "", 150  },
            { "ItemGPS", "", 150 }
        };
    };
    class cop_sergeant {
        name = "Sergeant Weapon Store";
        side = "cop";
        license = "";
        level = 4;
        msg = "You must be Sergeant or higher!";
        items[] = {
            { "arifle_MXC_Black_F", "", 35000  },
            { "arifle_MX_Black_F", "", 35000  },
            { "arifle_MXM_Black_F", "", 40000  },
            { "arifle_MX_GL_Black_F", "", 50000 },
            { "30Rnd_65x39_caseless_mag", "Rubber Magazines", 450  },
            { "30Rnd_65x39_caseless_mag_Tracer", "Lethal Magazines", 450  },
            { "3Rnd_Smoke_Grenade_shell", "", 250 },
            { "SMG_01_F", "", 10000 },
            { "30Rnd_45ACP_Mag_SMG_01", "Rubber Magazines", 450 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Lethal Magazines", 450 },
            { "optic_Holosight", "", 3600  },
            { "optic_Holosight_smg", "", 3600 },
            { "optic_Hamr", "", 3600  },
            { "optic_MRCO", "", 3600 },
            { "optic_Arco", "", 3600 },
            { "acc_flashlight", "", 750  },
            { "HandGrenade_Stone", "Flashbang", 1700  },
            { "SmokeShell", "", 350  },
            { "SmokeShellBlue", "", 350  },
            { "ToolKit", "", 250  },
            { "Medikit", "", 1000  },
            { "FirstAidKit", "", 150  },
            { "NVGoggles_OPFOR", "", 2000  },
            { "Binocular", "", 150  },
            { "ItemGPS", "", 150 }
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
            { "11Rnd_45ACP_Mag", "11rnd Lethal Only", 450 },
            { "arifle_MXC_Black_F", "", 35000  },
            { "arifle_MX_Black_F", "", 35000  },
            { "arifle_MXM_Black_F", "", 40000  },
            { "arifle_MX_GL_Black_F", "", 50000 },
            { "3Rnd_Smoke_Grenade_shell", "", 500 },
            { "3Rnd_Smoke_Grenade_shellBlue", "", 500 },
            { "30Rnd_65x39_caseless_mag", "30rnd Rubber Magazines", 450  },
            { "30Rnd_65x39_caseless_mag_Tracer", "30rnd Lethal Magazines", 450  },
            { "arifle_MX_SW_Black_F", "", 50000 },
            { "100Rnd_65x39_caseless_mag", "100rnd Rubber", 1000 },
            { "SMG_01_F", "", 10000 },
            { "30Rnd_45ACP_Mag_SMG_01", "Rubber Magazines", 450 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Lethal Magazines", 450 },
            { "optic_Holosight", "", 3600  },
            { "optic_Holosight_smg", "", 3600 },
            { "optic_Hamr", "", 3600  },
            { "optic_MRCO", "", 3600 },
            { "optic_Arco", "", 3600 },
            { "acc_flashlight", "", 750  },
            { "HandGrenade_Stone", "Flashbang", 1700  },
            { "SmokeShell", "", 350  },
            { "SmokeShellBlue", "", 350  },
            { "ToolKit", "", 250  },
            { "Medikit", "", 1000  },
            { "FirstAidKit", "", 150  },
            { "NVGoggles_OPFOR", "", 2000  },
            { "Binocular", "", 150  },
            { "ItemGPS", "", 150 }
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
			{ "Binocular", "", 150  },
			{ "ToolKit", "", 250  },
			{ "FirstAidKit", "", 150  },
			{ "Medikit", "", 500  },
			{ "NVGoggles", "", 1200  },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };
};
