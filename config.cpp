/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "life_houseProtect";								//--- Cash Variable
	cashSymbol = "$"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =						"Shop Parameter is empty!";
		msgInVehicle =						"You cannot be in a Vehicle!";
		msgShopExists =						"Shop doesn't Exist!";
		msgCondition =						"Not permitted to access this Shop!";
		msgCashOnHand =						"";
		//msgCashOnHand =						"Cash on Hand - %1%2";
		msgCartTotal =						"Your Cart - %1%2";
		msgInfoTooltip =					"--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgInfoTooltip2 = 					"--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgEmptyShop = 						"Nothing Found...";
		msgInfoText	=						"<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Cart is Full";
		msgCartEmpty =						"Cart is Empty";
		msgNotEnoughCash =					"Not enough Cash for this Transaction";
		msgOverrideAlert =					"Use the override feature to override gear!";
		msgTransactionComplete =			"Purchase Completed";
		msgNotEnoughSpace =				 	"You didn't have enough space for all the items. You however only paid for those you had space for!";
		msgClear =							"Clear";
		msgSearch =							"Search";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapons"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Misc"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Purchase"
		#define dialogCloseBtn 				"Quit"
	};

	class shops {

		class cop_basic {
				title = "Jackson County Armory";
				condition = "playerside isequalto west && call life_coplevel >=1";
				simple = 1;
				maxCart = 100;

			weapons[] = {
			// ----- Cadet-1
				{ "tf_anprc152", "", 0, "call life_coplevel >=1" },
				{ "RH_m9", "", 1000, "call life_coplevel >=1" }, // Beretta M9
				{ "hlc_smg_mp510", "", 3000, "call life_coplevel >=1" }, // MP510
				{ "hlc_smg_mp5a3", "", 3000, "call life_coplevel >=1" }, // MP5A3
			// ----- Officer-2
				{ "RH_M4A1_ris", "", 5000, "call life_coplevel >=2" }, // M4A1
				{ "RH_sbr9", "", 3000, "call life_coplevel >=2" }, // SBR-9
			// ----- Senior Officer-3
				{ "hlc_smg_mp5k_PDW", "", 5500, "call life_coplevel >=3" }, // M16A4
				{ "arifle_SPAR_01_blk_F", "", 5500, "call life_coplevel >=3" }, // Vltor SBR
				{ "RH_g18", "", 250, "call life_coplevel >=3" }, // Glock 18
			// ----- Corporal -4
				{ "RH_Hk416s", "", 5500, "call life_coplevel >=4" }, // Colt M4 Carbine
				{ "RH_g19", "", 3000, "call life_coplevel >=4" }, // Glock 19
			// ----- Sergeant -5
				{ "RH_Hk416", "", 6000, "call life_coplevel >=5" }, // Hk416 D14.5RS
				{ "RH_M4_ris_m", "", 5500, "call life_coplevel >=5" }, // M4A1 RIS Matech
				{ "hlc_rifle_G36C", "", 5500, "call life_coplevel >=5" }, // HK G36C
			// ----- Lieutenant -6
				{ "hlc_rifle_M4", "", 6500, "call life_coplevel >=6" }, // BCM ‘Jack’ Carbine
				{ "hlc_rifle_samr2", "", 5000, "call life_coplevel >=6" }, // RRA LAR-15
				{ "CSW_FN57", "", 7000, "call life_coplevel >=6" }, // Riot Shield Pistol
				{ "CSW_FN57", "", 5500, "call life_coplevel >=6" }, // M4A1
			// ----- Captain -7
				{ "SMG_03C_TR_black", "", 5500, "call life_coplevel >=7" }, // AR15
				{ "hlc_rifle_RU556", "", 5500, "call life_coplevel >=7" }, // M16A6
				{ "RH_M16A6", "", 5500, "call life_coplevel >=7" }, // M16A6
			// ----- Assistant Chief of Police-9
				{ "hlc_rifle_ACR_Carb_black", "", 6500, "call life_coplevel >=9" }, // ACR-E
				{ "RH_Deaglem", "", 1200, "call life_coplevel >=9" }, // Desert Eagle Modern
			// ----- Deputy Chief of Police-10
				{ "RH_M4A6", "", 5500, "call life_coplevel >=10" }, // M4A6
				{ "hlc_rifle_auga3_b", "", 6000, "call life_coplevel >=10" }, // AUGA2
			// ----- Chief Of Police-11
				{ "hlc_rifle_RU5562", "", 6000, "call life_coplevel >=11" }, // AR15 Magpul
				{ "srifle_DMR_03_F", "", 6700, "call life_coplevel >=11" }, // MK1 Black
			};

			magazines[] = {
				{ "RH_15Rnd_9x19_M9", "", 200, "call life_coplevel >=1"}, 
				{ "CSW_Taser_Probe_Mag", "", 200, "call life_coplevel >=1" },
				{ "hlc_30Rnd_10mm_B_MP5", "", 200, "call life_coplevel >=1" },
				{ "RH_30Rnd_556x45_M855A15", "", 200, "call life_coplevel >=1" },
				{ "50Rnd_570x28_SMG_03", "", 200, "call life_coplevel >=1" },
				{ "RH_30Rnd_556x45_mk262", "", 200, "call life_coplevel >=1" },
				{ "RH_32Rnd_9mm_M822", "", 200, "call life_coplevel >=1" },
				{ "RH_30Rnd_556x45_M855A1", "", 200, "call life_coplevel >=1" },
				{ "RH_19Rnd_9x19_g18", "", 200, "call life_coplevel >=1" },
				{ "hlc_30rnd_556x45_EPR", "", 200, "call life_coplevel >=1" },
				{ "RH_17Rnd_9x19_g17", "", 200, "call life_coplevel >=1" },
				{ "CSW_20Rnd_57x28_SS190", "", 200, "call life_coplevel >=1" },
				{ "RH_30Rnd_556x45_mk262", "", 200, "call life_coplevel >=1" },
				{ "RH_30Rnd_68x43_FMJ", "", 200, "call life_coplevel >=1" },
				{ "RH_7Rnd_50_AE", "", 200, "call life_coplevel >=1" },
				{ "hlc_30Rnd_556x45_B_AUG", "", 200, "call life_coplevel >=1" },
				{ "hlc_30Rnd_9x19_B_MP5", "", 200, "call life_coplevel >=1" },
			};

			attachments[] = {
			//----- Sights
				{ "optic_Aco", "", 0, "call life_coplevel >=1" }, // ACO RED
				{ "optic_ACO_grn", "", 0, "call life_coplevel >=1" }, // ACO GREEN
				{ "optic_Holosight", "", 0, "call life_coplevel >=1" }, // Holosight
				{ "optic_Hamr", "", 0, "call life_coplevel >=1" }, // RCO
				{ "optic_MRCO", "", 0, "call life_coplevel >=1" }, // MRCO
				{ "optic_ERCO_blk_F", "", 0, "call life_coplevel >=1" }, // ERCO
				{ "optic_Arco_blk_F", "", 0, "call life_coplevel >=1" }, // ARCO (black)
			
			//----- Bipods
				{ "bipod_01_F_blk", "", 0, "call life_coplevel >=1" }, // Blk Bipod (NATO)
			//----- Accessories
				{ "optic_Hamr", "", 0, "call life_coplevel >=1" }, // RCO
				{ "optic_Aco", "", 0, "call life_coplevel >=1" }, // ACO RED
				{ "optic_ACO_grn", "", 0, "call life_coplevel >=1" }, // ACO GREEN
				{ "optic_Holosight", "", 0, "call life_coplevel >=1" }, // Holosight
				{ "optic_Arco_blk_F", "", 0, "call life_coplevel >=1" }, // ARCO (black)
				{ "optic_MRCO", "", 0, "call life_coplevel >=1" }, // MRCO
				{ "optic_ERCO_blk_F", "", 0, "call life_coplevel >=1" }, // ERCO
			};
			items[] = {
				{ "Rangefinder", "", 0, "true" },
				{ "ItemGPS", "", 0, "true" },
				{ "ItemMap", "", 0, "true" },
				{ "ItemRadio", "", 0, "true" },
				{ "ItemCompass", "", 0, "true" },
				{ "ItemWatch", "", 0, "true" },
				{ "FirstAidKit", "", 0, "call life_coplevel >=1" },
				//{ "Bandages", "", 0, "true" },
				{ "ToolKit", "", 0, "true" },
				{ "NVGoggles_OPFOR", "", 0, "true" },
				//{ "B_UavTerminal", "", 0, "call life_coplevel >= 11 || call life_naslevel >= 3" },
			};
		};

		class cop_swat {
			title = "Swat Armory"; 												//--- Title of Shop
			condition = "playerside isequalto west && call life_coplevel >= 1"; 	//--- Condition to meet to access shop
			simple = 1; 															//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 100; 															//--- Max Amount of Items in Shopping Cart
			
			weapons[] = {
			//----- SWAT - Senior Officer - 1
				{ "arifle_SDAR_F", "", 100, "call life_coplevel >=3"}, //SDAR restricions applyed
				{ "RH_M16A2", "", 5500, "call life_coplevel >=3"}, //M16A4
				{ "RH_M4sbr_b", "", 5500, "call life_coplevel >=3"}, //SDAR
				{ "RH_g18", "", 5500, "call life_coplevel >=3"}, //Glock 18
			//----- SWAT - Corporal - 2
				{ "hlc_rifle_samr2", "", 6000, "call life_coplevel >=3" }, // RRA LAR-15
				{ "RH_g18", "", 3000, "call life_coplevel >=3" }, // Glock 18
			//----- SWAT - Sergeant - 3
				{ "RH_M4A1_ris", "", 5500, "call life_coplevel >=3"}, //M4A1
				{ "hlc_rifle_bcmjack", "", 6500, "call life_coplevel >=3"}, //BCM ‘Jack’ Carbine
				{ "CSW_FN57_Shield_P", "", 7000, "call life_coplevel >=3"}, //FN Five-SeveN
			//----- SWAT - Command - 4
				{ "LAGO_KU98K", "", 25000, "call life_coplevel >=4"}, // KU98K
				{ "CSW_M870", "", 5000, "call life_coplevel >=4"}, // Remington M870 Express
				{ "hlc_rifle_RU556", "", 5500, "call life_coplevel >=4"}, // AR15
			
			};

			magazines[] = {
				{ "KU98K_MAG", "", 2500, "call life_coplevel >=1"},
				{ "CSW_M870_8Rnd_buck", "", 200, "call life_coplevel >=1"},
				{ "hlc_30rnd_556x45_EPR", "", 200, "call life_coplevel >=1"},
				{ "RH_30Rnd_556x45_mk262", "", 200, "call life_coplevel >=1"},
				{ "CSW_20Rnd_57x28_SS190", "", 200, "call life_coplevel >=1"},
				{ "RH_19Rnd_9x19_g18", "", 200, "call life_coplevel >=1"},
				{ "RH_30Rnd_556x45_M855A1", "", 200, "call life_coplevel >=1"},
                { "RH_20Rnd_57x28_FN", "", 200, "call life_coplevel >=3"},

			};

			attachments[] = {
			//Sights
				{ "CSW_FN57_Ballistic_Shield", "", 7000, "call life_coplevel >=3"}, //USG Shield
				{ "optic_Hamr", "", 0, "call life_coplevel >=1" }, // RCO
				{ "optic_Aco", "", 0, "call life_coplevel >=1" }, // ACO RED
				{ "optic_ACO_grn", "", 0, "call life_coplevel >=1" }, // ACO GREEN
				{ "optic_Holosight", "", 0, "call life_coplevel >=1" }, // Holosight
				{ "optic_Arco_blk_F", "", 0, "call life_coplevel >=1" }, // ARCO (black)
				{ "optic_MRCO", "", 0, "call life_coplevel >=1" }, // MRCO
				{ "optic_ERCO_blk_F", "", 0, "call life_coplevel >=1" }, // ERCO
				
			//Bipods
				{ "bipod_01_F_blk", "", 0, "call life_coplevel >=1" }, // Blk Bipod (NATO)
			//Accessories
				{ "acc_flashlight", "", 0, "call life_coplevel >=1" },
				{ "acc_pointer_IR", "", 0, "call life_coplevel >=1" },
			};

			items[] = {
			//----- Other Shit
				{ "Rangefinder", "", 0, "call life_coplevel >=1" },
				{ "ItemGPS", "", 0, "call life_coplevel >=1" },
				{ "ItemMap", "", 0, "call life_coplevel >=1" },
				{ "ItemRadio", "", 0, "call life_coplevel >=1" },
				{ "ItemCompass", "", 0, "call life_coplevel >=1" },
				{ "ItemWatch", "", 0, "call life_coplevel >=1" },
				{ "FirstAidKit", "", 0, "call life_coplevel >=1" },
				{ "ToolKit", "", 0, "call life_coplevel >=1" },
				{ "NVGoggles_OPFOR", "", 0, "call life_coplevel >=1" },
      			{ "B_UavTerminal", "", 0, "call life_coplevel >=1" },
				//{ "HandGrenade_Stone", "Flashbang", 0, "call life_ctsfolevel >=1" },
				//{ "SmokeShellRed", "", 0, "call life_coplevel >=1" },
				//{ "SmokeShellOrange", "", 0, "call life_coplevel >=1" }
			};
		};
		
		class cop_state {
			title = "State Command"; 												//--- Title of Shop
			condition = "playerside isequalto west && call life_coplevel >= 1"; 	//--- Condition to meet to access shop
			simple = 1; 															//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 100; 															//--- Max Amount of Items in Shopping Cart
			
			weapons[] = {
			// ----- State Command -8
			    { "tf_anprc152", "", 250, "call life_coplevel >=9" }, // M16A2
				{ "RH_M16A2", "", 6000, "call life_coplevel >=9" }, // M16A2
				{ "RH_g19", "", 4000, "call life_coplevel >=9" }, // Glock 19
				{ "hlc_smg_mp510", "", 3000, "call life_coplevel >=9" }, // MP5A3
			
			};

			magazines[] = {
				{ "CSW_Taser_Probe_Mag", "", 25, "call life_coplevel >=1"},
				{ "RH_30Rnd_556x45_M855A1", "", 250, "call life_coplevel >=1"},
				{ "RH_17Rnd_9x19_g17", "", 250, "call life_coplevel >=1"},
				{ "hlc_30Rnd_9x19_B_MP5", "", 250, "call life_coplevel >=1"},


			};

			attachments[] = {
			//Sights
				{ "CSW_FN57_Ballistic_Shield", "", 7000, "call life_coplevel >=9"}, //USG Shield
				{ "optic_Hamr", "", 0, "call life_coplevel >=9" }, // RCO
				{ "optic_Aco", "", 0, "call life_coplevel >=9" }, // ACO RED
				{ "optic_ACO_grn", "", 0, "call life_coplevel >=9" }, // ACO GREEN
				{ "optic_Holosight", "", 0, "call life_coplevel >=9" }, // Holosight
				{ "optic_Arco_blk_F", "", 0, "call life_coplevel >=9" }, // ARCO (black)
				{ "optic_MRCO", "", 0, "call life_coplevel >=9" }, // MRCO
				{ "optic_ERCO_blk_F", "", 0, "call life_coplevel >=9" }, // ERCO
				
			//Bipods
				{ "bipod_01_F_blk", "", 0, "call life_coplevel >=9" }, // Blk Bipod (NATO)
			//Accessories
				{ "acc_flashlight", "", 0, "call life_coplevel >=9" },
				{ "acc_pointer_IR", "", 0, "call life_coplevel >=9" },
			};

			items[] = {
			//----- Other Shit
				{ "Rangefinder", "", 0, "call life_coplevel >=9" },
				{ "ItemGPS", "", 0, "call life_coplevel >=9" },
				{ "ItemMap", "", 0, "call life_coplevel >=9" },
				{ "ItemRadio", "", 0, "call life_coplevel >=9" },
				{ "ItemCompass", "", 0, "call life_coplevel >=9" },
				{ "ItemWatch", "", 0, "call life_coplevel >=9" },
				{ "FirstAidKit", "", 0, "call life_coplevel >=9" },
				{ "ToolKit", "", 0, "call life_coplevel >=9" },
				{ "NVGoggles_OPFOR", "", 0, "call life_coplevel >=9" },
      			//{ "B_UavTerminal", "", 0, "call life_coplevel >=1" },
				//{ "HandGrenade_Stone", "Flashbang", 0, "call life_ctsfolevel >=1" },
				//{ "SmokeShellRed", "", 0, "call life_coplevel >=1" },
				//{ "SmokeShellOrange", "", 0, "call life_coplevel >=1" }
			};
		};


		class r_rebel {
		   title = "Rebel Store";
		   condition = "(missionNamespace getVariable ['mav_ttm_var_rebel',0]) isEqualTo 1";
		   simple = 0;
		   maxCart = 25;

		   weapons[] = {
			    { "ItemGPS", 500, "true", ""},
			    { "pmc_earpiece", 10000, "true", "Night Vision"},
			    { "tf_anprc152", 25, "true", ""},
			    { "RH_m9", 7000, "true", ""},
				{ "RH_g18", 10000, "true", ""},
			    { "hlc_smg_mp510", 15000, "true", ""},
				{ "hlc_smg_mp5a3", 15000, "true", ""},
	            { "RH_M4A1_ris", 30000, "true", ""},
				{ "RH_sbr9", 30000, "true", ""},
				{ "RH_M4sbr_b", 30000, "true", ""},
				{ "hlc_rifle_M4", 45000, "true", ""},
				{ "RH_Hk416", 55000, "true", ""},
				{ "RH_M4_ris_m", 59000, "true", ""},
		   };

		   magazines[] = {
				{ "RH_15Rnd_9x19_M9", 25, "true", ""},
				{ "hlc_30Rnd_10mm_B_MP5", 250, "true", ""},
				{ "hlc_30Rnd_9x19_B_MP5", 250, "true", ""},
				{ "RH_30Rnd_556x45_mk262", 250, "true", ""},
				{ "RH_32Rnd_9mm_M822", 250, "true", ""},
				{ "RH_30Rnd_556x45_M855A1", 250, "true", ""},
				{ "RH_19Rnd_9x19_g18", 250, "true", ""},
				{ "hlc_30rnd_556x45_EPR", 250, "true", ""},
				{ "RH_30Rnd_556x45_M855A1", 250, "true", ""},
		   };

		   attachments[] = {
				{ "optic_Hamr", "", 0, "" }, // RCO
				{ "optic_Aco", "", 0, "" }, // ACO RED
				{ "optic_ACO_grn", "", 0, "" }, // ACO GREEN
				{ "optic_Holosight", "", 0, "" }, // Holosight
				{ "optic_Arco_blk_F", "", 0, "" }, // ARCO (black)
				{ "optic_MRCO", "", 0, "" }, // MRCO
				{ "optic_ERCO_blk_F", "", 0, "" }, // ERCO	

			};
	    };  
	    

        class r_rebelA {
		   title = "Advanced Rebel Store";
		   condition = "(missionNamespace getVariable ['mav_ttm_var_rebelA',0]) isEqualTo 1";
		   simple = 0;
		   maxCart = 25;

		   weapons[] = {
			   { "ItemGPS", 50, "true", ""},
			   { "tf_anprc152", 25, "true", ""},
			   { "hlc_smg_mp510", 20000, "true", ""},
			   { "RH_M16A2", 45000, "true", ""},
			   { "RH_M16A3", 65000, "true", ""},
			   { "RH_M16A4_m", 73000, "true", ""},
			   { "RH_m4", 70000, "true", ""},
			   { "RH_M4_ris", 82000, "true", ""},
			   { "RH_M4m_b", 76000, "true", ""},
			   { "RH_M4_moe_g", 78000, "true", ""},
			   { "hlc_rifle_SAMR", 110000, "true", ""},
			   { "RH_Hk416c", 68000, "true", ""},
			   { "RH_Hk416", 81000, "true", ""},
			   { "hlc_rifle_ACR_SBR_green", 75000, "true", ""},
			   { "hlc_rifle_ACR_mid_green", 80000, "true", ""},
			   { "hlc_rifle_G36C", 77000, "true", ""},
			   { "hlc_rifle_G36E1AG36_Romi", 84000, "true", ""},
			   { "hlc_rifle_auga3_GL", 88000, "true", ""},
			   { "hlc_rifle_auga3", 82000, "true", ""},
			   { "RH_M4sbr", 80000, "true", ""},
			   { "RH_M4A6", 60000, "true", ""},
			   { "RH_M27IAR", 60000, "true", ""},
			   { "LAGO_KU98K", 130000, "true", ""},
			   { "hlc_rifle_bcmjack", 62000, "true", ""},
			   { "hlc_rifle_samr2", 65000, "true", ""},
			   { "CSW_FN57", 17000, "true", ""},
			   { "hlc_rifle_RU556", 80000, "true", ""},
			   { "RH_M16A6", 85000, "true", ""},
			   { "hlc_rifle_ACR_Carb_black", 88000, "true", ""},
			   { "RH_Deagleg", 12000, "true", ""},
			   { "RH_M4A6", 59000, "true", ""},
			   { "hlc_rifle_auga3_b", 88000, "true", ""},
			   { "hlc_rifle_RU5562", 85000, "true", ""},
			   { "RH_g19", 11000, "true", ""},
		   };

		   magazines[] = {
			   { "6Rnd_00_Buckshot_Magazine", 150, "true", ""},
			   { "hlc_30rnd_556x45_EPR", 450, "true", ""},
			   { "hlc_30Rnd_556x45_B_AUG", 550, "true", ""},
			   { "RH_30Rnd_556x45_M855A1", 450, "true", ""},
			   { "30Rnd_556x45_Stanag", 450, "true", ""},
			   { "50Rnd_570x28_SMG_03", 550, "true", ""},
			   { "hlc_30rnd_556x45_EPR_G36", 450, "true", ""},
			   { "hlc_30Rnd_10mm_B_MP5", 150, "true", ""},
			   { "RH_30Rnd_556x45_Mk262", 150, "true", ""},
			   { "RH_30Rnd_68x43_Match", 200, "true", ""},
			   { "RH_30Rnd_68x43_FMJ", 2500, "true", ""},
			   { "KU98K_MAG", 400, "true", ""},
			   { "RH_7Rnd_50_AE", 2500, "true", ""},
			   { "RH_17Rnd_9x19_g17", 500, "true", ""},
		   };

		   attachments[] = {
			    { "SCAR_14_Inches_Barrel", 370, "true", ""},
				{ "RH_barska_rds", 370, "true", ""},
				{ "RH_cmore", 470, "true", ""},
				{ "RH_eotech553", 470, "true", ""},
				{ "RH_compm4s", 570, "true", ""},
				{ "RH_compM2", 570, "true", ""},
				{ "hlc_optic_kobra", 3000, "true", ""},
				{ "optic_Hamr", 800, "true", ""},
				{ "optic_Arco_blk_F", 1000, "true", ""},
				{ "RH_ta31rmr_2D", 5570, "true", ""},
				{ "iansky_specterdrkf", 3500, "true", ""},
				{ "optic_KHS_old" , 10000, "true", ""},
		   };
	    };

		class genstore {
		   title = "Lakeside General Store";
		   condition = "";
		   simple = 0;
		   maxCart = 25;

			weapons[] = {
				{ "CG_BAT", 700, "true", ""},
				{ "tf_anprc152", 25, "true", ""},
			};

			items[] = {
				{ "Binocular", 250, "true", ""},
				{ "ItemGPS", 500, "true", ""},
				{ "ItemMap", 10, "true", ""},
				{ "ItemCompass", 10, "true", ""},
			};

			magazines[] = {
				{ "nonlethal_swing", 150, "true", "Swing"},
			};
	    };


	    class f_station_store {
		   title = "Lakeside Fuel Station Store";
		   condition = "";
		   simple = 0;
		   maxCart = 25;

		   items[] = {
			   { "tf_anprc152", 150, "true", ""},
			   { "Binocular", 250, "true", ""},
			   { "ItemGPS", 500, "true", ""},
			   { "ItemMap", 10, "true", ""},
			   { "ItemCompass", 10, "true", ""},
		   };
	    };

	    class med_basic {
		   title = "Medic Shop";
		   condition = "call life_medicLevel >= 1";
		   simple = 0;
		   maxCart = 25;

		   items[] = {
			   { "tf_anprc152", 50, "true", ""},
			   { "FirstAidKit", 50, "true", ""},
			   { "Binocular", 50, "true", ""},
			   { "ItemGPS", 50, "true", ""},
		   };
	    };

	    class gun {
		   title = "Billy Joe's Firearms";
		   condition = "license_civ_gun";
		   simple = 0;
		   maxCart = 25;

		   weapons[] = {
			   { "ItemGPS", 50, "true", ""},
			   { "RH_cz75", 5600, "true", ""},
			   { "RH_gsh18", 7600, "true", ""},
			   { "RH_kimber", 7800, "true", ""},
			   { "RH_kimber_nw", 7800, "true", ""},
			   { "RH_m1911", 7800, "true", ""},
			   { "RH_p226", 8600, "true", ""},
			   { "RH_sw659", 8600, "true", ""},
			   { "RH_usp", 8600, "true", ""},
			   { "RH_vp70", 8600, "true", ""},
			   { "RH_uspm", 10000, "true", ""},
			   { "RH_mp412", 9900, "true", ""},
			   { "RH_mateba", 9900, "true", ""},
		   };

		   magazines[] = {
			   { "RH_16Rnd_9x19_CZ", 25, "true", ""},
			   { "RH_18Rnd_9x19_gsh", 25, "true", ""},
			   { "RH_32Rnd_9x19_tec", 25, "true", ""},
			   { "RH_7Rnd_45cal_m1911", 25, "true", ""},
			   { "RH_6Rnd_44_Mag", 25, "true", ""},
			   { "RH_6Rnd_357_Mag", 25, "true", ""},
			   { "RH_15Rnd_9x19_SIG", 25, "true", ""},
			   { "RH_14Rnd_9x19_sw", 25, "true", ""},
			   { "RH_6Rnd_454_Mag", 25, "true", ""},
			   { "RH_12Rnd_45cal_usp", 25, "true", ""},
			   { "RH_18Rnd_9x19_VP", 25, "true", ""},
			   { "RH_16Rnd_40cal_usp", 25, "true", ""}
		   };

		   attachments[] = {
			   { "optic_ACO_grn_smg", 250, "true", ""},
			   { "acc_flashlight", 150, "true", ""},
		   };
	    };
   };
};
#include "gui\weapon_gui_master.cpp"
