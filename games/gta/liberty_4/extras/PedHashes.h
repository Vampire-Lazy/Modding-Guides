typedef enum ePed
{
	// Peds GTAIV
	PED_PLAYER = 0x6F0783F5,
	PED_M_Y_MULTIPLAYER = 0x879495E2,
	PED_F_Y_MULTIPLAYER = 0xD9BDC03A,
	PED_SUPERLOD = 0xAE4B15D6,
	PED_IG_KILLYOURSELF = 0x76855EEF,
	PED_IG_ANNA = 0x6E7BF45F,
	PED_IG_ANTHONY = 0x9DD666EE,
	PED_IG_BADMAN = 0x5927A320,
	PED_IG_BERNIE_CRANE = 0x596FB508,
	PED_IG_BLEDAR = 0x6734C2C8,
	PED_IG_BRIAN = 0x192BDD4A,
	PED_IG_BRUCIE = 0x98E29920,
	PED_IG_BULGARIN = 0x0E28247F,
	PED_IG_CHARISE = 0x0548F609,
	PED_IG_CHARLIEUC = 0xB0D18783,
	PED_IG_CLARENCE = 0x500EC110,
	PED_IG_DARDAN = 0x5786C78F,
	PED_IG_DARKO = 0x1709B920,
	PED_IG_DERRICK_MC = 0x45B445F9,
	PED_IG_DMITRI = 0x0E27ECC1,
	PED_IG_DWAYNE = 0xDB354C19,
	PED_IG_EDDIELOW = 0xA09901F1,
	PED_IG_FAUSTIN = 0x03691799,
	PED_IG_FRANCIS_MC = 0x65F4D88D,
	PED_IG_FRENCH_TOM = 0x54EABEE4,
	PED_IG_GORDON = 0x7EED7363,
	PED_IG_GRACIE = 0xEAAEA78E,
	PED_IG_HOSSAN = 0x3A7556B2,
	PED_IG_ILYENA = 0xCE3779DA,
	PED_IG_ISAAC = 0xE369F2A6,
	PED_IG_IVAN = 0x458B61F3,
	PED_IG_JAY = 0x15BCAD23,
	PED_IG_JASON = 0x0A2D8896,
	PED_IG_JEFF = 0x17446345,
	PED_IG_JIMMY = 0xEA28DB14,
	PED_IG_JOHNNYBIKER = 0xC9AB7F1C,
	PED_IG_KATEMC = 0xD1E17FCA,
	PED_IG_KENNY = 0x3B574ABA,
	PED_IG_LILJACOB = 0x58A1E271,
	PED_IG_LILJACOBW = 0xB4008E4D,
	PED_IG_LUCA = 0xD75A60C8,
	PED_IG_LUIS = 0xE2A57E5E,
	PED_IG_MALLORIE = 0xC1FE7952,
	PED_IG_MAMC = 0xECC3FBA7,
	PED_IG_MANNY = 0x5629F011,
	PED_IG_MARNIE = 0x188232D0,
	PED_IG_MEL = 0xCFE0FB92,
	PED_IG_MICHAEL = 0x2BD27039,
	PED_IG_MICHELLE = 0xBF9672F4,
	PED_IG_MICKEY = 0xDA0D3182,
	PED_IG_PACKIE_MC = 0x64C74D3B,
	PED_IG_PATHOS = 0xF6237664,
	PED_IG_PETROVIC = 0x8BE8B7F2,
	PED_IG_PHIL_BELL = 0x932272CA,
	PED_IG_PLAYBOY_X = 0x6AF081E8,
	PED_IG_RAY_BOCCINO = 0x38E02AB6,
	PED_IG_RICKY = 0xDCFE251C,
	PED_IG_ROMAN = 0x89395FC9,
	PED_IG_ROMANW = 0x2145C7A5,
	PED_IG_SARAH = 0xFEF00775,
	PED_IG_TUNA = 0x528AE104,
	PED_IG_VINNY_SPAZ = 0xC380AE97,
	PED_IG_VLAD = 0x356E1C42,
	PED_CS_ANDREI = 0x3977107D,
	PED_CS_ANGIE = 0xF866DC66,
	PED_CS_BADMAN = 0xFC012F67,
	PED_CS_BLEDAR = 0xA2DDDBA7,
	PED_CS_BULGARIN = 0x009E4F3E,
	PED_CS_BULGARINHENCH = 0x1F32DB93,
	PED_CS_CIA = 0x4B13F8D4,
	PED_CS_DARDAN = 0xF4386436,
	PED_CS_DAVETHEMATE = 0x1A5B22F0,
	PED_CS_DMITRI = 0x030B4624,
	PED_CS_EDTHEMATE = 0xC74969B0,
	PED_CS_FAUSTIN = 0xA776BDC7,
	PED_CS_FRANCIS = 0x4AA2E9EA,
	PED_CS_HOSSAN = 0x2B578C90,
	PED_CS_ILYENA = 0x2EB3F295,
	PED_CS_IVAN = 0x4A85C1C4,
	PED_CS_JAY = 0x96E9F99A,
	PED_CS_JIMMY_PEGORINO = 0x7055C230,
	PED_CS_MEL = 0x298ACEC3,
	PED_CS_MICHELLE = 0x70AEB9C8,
	PED_CS_MICKEY = 0xA1DFB431,
	PED_CS_OFFICIAL = 0x311DB819,
	PED_CS_RAY_BOCCINO = 0xD09ECB11,
	PED_CS_SERGEI = 0xDBAC6805,
	PED_CS_VLAD = 0x7F5B9540,
	PED_CS_WHIPPINGGIRL = 0x5A6C9C5F,
	PED_CS_MANNY = 0xD0F8F893,
	PED_CS_ANTHONY = 0x6B941ABA,
	PED_CS_ASHLEY = 0x26C3D079,
	PED_CS_ASSISTANT = 0x394C11AD,
	PED_CS_CAPTAIN = 0xE6829281,
	PED_CS_CHARLIEUC = 0xEC96EE3A,
	PED_CS_DARKO = 0xC4B4204C,
	PED_CS_DWAYNE = 0xFB9190AC,
	PED_CS_ELI_JESTER = 0x3D47C135,
	PED_CS_ELIZABETA = 0xAED416AF,
	PED_CS_GAYTONY = 0x04F78844,
	PED_CS_GERRYMC = 0x26DE3A8A,
	PED_CS_GORDON = 0x49D3EAD3,
	PED_CS_ISSAC = 0xB93A5686,
	PED_CS_JOHNNYTHEBIKER = 0x2E009A8D,
	PED_CS_JONGRAVELLI = 0xD7D47612,
	PED_CS_JORGE = 0x5906B7A5,
	PED_CS_KAT = 0x71A11E4C,
	PED_CS_KILLER = 0xB4D0F581,
	PED_CS_LUIS = 0x5E730218,
	PED_CS_MAGICIAN = 0x1B508682,
	PED_CS_MAMC = 0xA17C3253,
	PED_CS_MELODY = 0xEA01EFDC,
	PED_CS_MITCHCOP = 0xD8BA6C47,
	PED_CS_MORI = 0x9B333E73,
	PED_CS_PBXGIRL2 = 0xE9C3C332,
	PED_CS_PHILB = 0x5BEB1A2D,
	PED_CS_PLAYBOYX = 0xE9F368C6,
	PED_CS_PRIEST = 0x4D6DE57E,
	PED_CS_RICKY = 0x88F35A20,
	PED_CS_TOMMY = 0x626C3F77,
	PED_CS_TRAMP = 0x553CBE07,
	PED_CS_BRIAN = 0x2AF6831D,
	PED_CS_CHARISE = 0x7AE0A064,
	PED_CS_CLARENCE = 0xE7AC8418,
	PED_CS_EDDIELOW = 0x6463855D,
	PED_CS_GRACIE = 0x999B9B33,
	PED_CS_JEFF = 0x17C32FB4,
	PED_CS_MARNIE = 0x574DE134,
	PED_CS_MARSHAL = 0x8B0322AF,
	PED_CS_PATHOS = 0xD77D71DF,
	PED_CS_SARAH = 0xEFF3F84D,
	PED_CS_ROMAN_D = 0x42F6375E,
	PED_CS_ROMAN_T = 0x6368F847,
	PED_CS_ROMAN_W = 0xE37B786A,
	PED_CS_BRUCIE_B = 0x0E37C613,
	PED_CS_BRUCIE_T = 0x0E1B45E6,
	PED_CS_BRUCIE_W = 0x765C9667,
	PED_CS_BERNIE_CRANEC = 0x7183C75F,
	PED_CS_BERNIE_CRANET = 0x4231E7AC,
	PED_CS_BERNIE_CRANEW = 0x1B4899DE,
	PED_CS_LILJACOB_B = 0xB0B4BC37,
	PED_CS_LILJACOB_J = 0x7EF858B3,
	PED_CS_MALLORIE_D = 0x5DF63F45,
	PED_CS_MALLORIE_J = 0xCC381BCB,
	PED_CS_MALLORIE_W = 0x45768E2E,
	PED_CS_DERRICKMC_B = 0x8469C377,
	PED_CS_DERRICKMC_D = 0x2FBC9A1E,
	PED_CS_MICHAEL_B = 0x7D0BADD3,
	PED_CS_MICHAEL_D = 0xCF5FD27A,
	PED_CS_PACKIEMC_B = 0x4DFB1B0C,
	PED_CS_PACKIEMC_D = 0x68EED0F3,
	PED_CS_KATEMC_D = 0xAF3F2AC0,
	PED_CS_KATEMC_W = 0x4ABDE1C7,
	PED_M_Y_GAFR_LO_01 = 0xEE0BB2A4,
	PED_M_Y_GAFR_LO_02 = 0xBBD14E30,
	PED_M_Y_GAFR_HI_01 = 0x33D38899,
	PED_M_Y_GAFR_HI_02 = 0x25B4EC5C,
	PED_M_Y_GALB_LO_01 = 0xE1F6A366,
	PED_M_Y_GALB_LO_02 = 0xF1F54363,
	PED_M_Y_GALB_LO_03 = 0x0C61783B,
	PED_M_Y_GALB_LO_04 = 0x1EA71CCE,
	PED_M_M_GBIK_LO_03 = 0x029035B4,
	PED_M_Y_GBIK_HI_01 = 0x5044865F,
	PED_M_Y_GBIK_HI_02 = 0x9C071DE3,
	PED_M_Y_GBIK02_LO_02 = 0xA8E69DBF,
	PED_M_Y_GBIK_LO_01 = 0x5DDE4F9B,
	PED_M_Y_GBIK_LO_02 = 0x8B932B00,
	PED_M_Y_GIRI_LO_01 = 0x10B7B44B,
	PED_M_Y_GIRI_LO_02 = 0xFEDA1090,
	PED_M_Y_GIRI_LO_03 = 0x6DF3EEC6,
	PED_M_M_GJAM_HI_01 = 0x5FF2E9AF,
	PED_M_M_GJAM_HI_02 = 0xEC4D0269,
	PED_M_M_GJAM_HI_03 = 0x4295AEF5,
	PED_M_Y_GJAM_LO_01 = 0xA691BED3,
	PED_M_Y_GJAM_LO_02 = 0xCB77889E,
	PED_M_Y_GKOR_LO_01 = 0x5BD063B5,
	PED_M_Y_GKOR_LO_02 = 0x2D8D8730,
	PED_M_Y_GLAT_LO_01 = 0x1D55921C,
	PED_M_Y_GLAT_LO_02 = 0x8D32F1D9,
	PED_M_Y_GLAT_HI_01 = 0x45A43081,
	PED_M_Y_GLAT_HI_02 = 0x97E25504,
	PED_M_Y_GMAF_HI_01 = 0xEDFA50E3,
	PED_M_Y_GMAF_HI_02 = 0x9FA03430,
	PED_M_Y_GMAF_LO_01 = 0x03DBB737,
	PED_M_Y_GMAF_LO_02 = 0x1E6BEC57,
	PED_M_O_GRUS_HI_01 = 0x9290C4A3,
	PED_M_Y_GRUS_LO_01 = 0x83892528,
	PED_M_Y_GRUS_LO_02 = 0x75CF09B4,
	PED_M_Y_GRUS_HI_02 = 0x5BFE7C54,
	PED_M_M_GRU2_HI_01 = 0x6F31C4B4,
	PED_M_M_GRU2_HI_02 = 0x19BB19C8,
	PED_M_M_GRU2_LO_02 = 0x66CB1E64,
	PED_M_Y_GRU2_LO_01 = 0xB9A05501,
	PED_M_M_GTRI_HI_01 = 0x33EEB47F,
	PED_M_M_GTRI_HI_02 = 0x28C09E23,
	PED_M_Y_GTRI_LO_01 = 0xBF635A9F,
	PED_M_Y_GTRI_LO_02 = 0xF62B4836,
	PED_F_O_MAID_01 = 0xD33B8FE9,
	PED_F_O_BINCO = 0xF97D04E6,
	PED_F_Y_BANK_01 = 0x516F7106,
	PED_F_Y_DOCTOR_01 = 0x14A4B50F,
	PED_F_Y_GYMGAL_01 = 0x507AAC5B,
	PED_F_Y_FF_BURGER_R = 0x37214098,
	PED_F_Y_FF_CLUCK_R = 0xEB5AB08B,
	PED_F_Y_FF_RSCAFE = 0x8292BFB5,
	PED_F_Y_FF_TWCAFE = 0x0CB09BED,
	PED_F_Y_FF_WSPIZZA_R = 0xEEB5DE91,
	PED_F_Y_HOOKER_01 = 0x20EF1FEB,
	PED_F_Y_HOOKER_03 = 0x3B61D4D0,
	PED_F_Y_NURSE = 0xB8D8632B,
	PED_F_Y_STRIPPERC01 = 0x42615D12,
	PED_F_Y_STRIPPERC02 = 0x50AFF9AF,
	PED_F_Y_WAITRESS_01 = 0x0171C5D1,
	PED_M_M_ALCOHOLIC = 0x97093869,
	PED_M_M_ARMOURED = 0x401C1901,
	PED_M_M_BUSDRIVER = 0x07FDDC3F,
	PED_M_M_CHINATOWN_01 = 0x2D243DEF,
	PED_M_M_CRACKHEAD = 0x9313C198,
	PED_M_M_DOC_SCRUBS_01 = 0x0D13AEF5,
	PED_M_M_DOCTOR_01 = 0xB940B896,
	PED_M_M_DODGYDOC = 0x16653776,
	PED_M_M_EECOOK = 0x7D77FE8D,
	PED_M_M_ENFORCER = 0xF410AB9B,
	PED_M_M_FACTORY_01 = 0x2FB107C1,
	PED_M_M_FATCOP_01 = 0xE9EC3678,
	PED_M_M_FBI = 0xC46CBC16,
	PED_M_M_FEDCO = 0x89275CA8,
	PED_M_M_FIRECHIEF = 0x24696C93,
	PED_M_M_GUNNUT_01 = 0x1CFC648F,
	PED_M_M_HELIPILOT_01 = 0xD19BD6D0,
	PED_M_M_HPORTER_01 = 0x2536480C,
	PED_M_M_KOREACOOK_01 = 0x959D9B8A,
	PED_M_M_LAWYER_01 = 0x918DD1CF,
	PED_M_M_LAWYER_02 = 0xBC5DA76E,
	PED_M_M_LOONYBLACK = 0x1699B3B8,
	PED_M_M_PILOT = 0x8C0F140E,
	PED_M_M_PINDUS_01 = 0x301D7295,
	PED_M_M_POSTAL_01 = 0xEF0CF791,
	PED_M_M_SAXPLAYER_01 = 0xB92CCD03,
	PED_M_M_SECURITYMAN = 0x907AF88D,
	PED_M_M_SELLER_01 = 0x1916A97C,
	PED_M_M_SHORTORDER = 0x6FF14E0F,
	PED_M_M_STREETFOOD_01 = 0x0881E67C,
	PED_M_M_SWEEPER = 0xD6D5085C,
	PED_M_M_TAXIDRIVER = 0x0085DCEE,
	PED_M_M_TELEPHONE = 0x46B50EAA,
	PED_M_M_TENNIS = 0xE96555E2,
	PED_M_M_TRAIN_01 = 0x452086C4,
	PED_M_M_TRAMPBLACK = 0xF7835A1A,
	PED_M_M_TRUCKER_01 = 0xFD3979FD,
	PED_M_O_JANITOR = 0xB376FD38,
	PED_M_O_HOTEL_FOOT = 0x015E1A07,
	PED_M_O_MPMOBBOSS = 0x463E4B5D,
	PED_M_Y_AIRWORKER = 0xA8B24166,
	PED_M_Y_BARMAN_01 = 0x80807842,
	PED_M_Y_BOUNCER_01 = 0x95DCB0F5,
	PED_M_Y_BOUNCER_02 = 0xE79AD470,
	PED_M_Y_BOWL_01 = 0xD05CB843,
	PED_M_Y_BOWL_02 = 0xE61EE3C7,
	PED_M_Y_CHINVEND_01 = 0x2DCD7F4C,
	PED_M_Y_CLUBFIT = 0x2851C93C,
	PED_M_Y_CONSTRUCT_01 = 0xD4F6DA2A,
	PED_M_Y_CONSTRUCT_02 = 0xC371B720,
	PED_M_Y_CONSTRUCT_03 = 0xD56DDB14,
	PED_M_Y_COP = 0xF5148AB2,
	PED_M_Y_COP_TRAFFIC = 0xA576D885,
	PED_M_Y_COURIER = 0xAE46285D,
	PED_M_Y_COWBOY_01 = 0xDDCCAF85,
	PED_M_Y_DEALER = 0xB380C536,
	PED_M_Y_DRUG_01 = 0x565A4099,
	PED_M_Y_FF_BURGER_R = 0x000F192D,
	PED_M_Y_FF_CLUCK_R = 0xC3B54549,
	PED_M_Y_FF_RSCAFE = 0x75FDB605,
	PED_M_Y_FF_TWCAFE = 0xD11FBA8B,
	PED_M_Y_FF_WSPIZZA_R = 0x0C55ACF1,
	PED_M_Y_FIREMAN = 0xDBA0B619,
	PED_M_Y_GARBAGE = 0x43BD9C04,
	PED_M_Y_GOON_01 = 0x358464B5,
	PED_M_Y_GYMGUY_01 = 0x8E96352C,
	PED_M_Y_MECHANIC_02 = 0xEABA11B9,
	PED_M_Y_MODO = 0xC10A9D57,
	PED_M_Y_NHELIPILOT = 0x479F2007,
	PED_M_Y_PERSEUS = 0xF6FFEBB2,
	PED_M_Y_PINDUS_01 = 0x1DDEBBCF,
	PED_M_Y_PINDUS_02 = 0x0B1F9651,
	PED_M_Y_PINDUS_03 = 0xF958F2C4,
	PED_M_Y_PMEDIC = 0xB9F5BEA0,
	PED_M_Y_PRISON = 0x9C0BF5CC,
	PED_M_Y_PRISONAOM = 0x0CD38A07,
	PED_M_Y_ROMANCAB = 0x5C907185,
	PED_M_Y_RUNNER = 0xA7ABA2BA,
	PED_M_Y_SHOPASST_01 = 0x15556BF3,
	PED_M_Y_STROOPER = 0xFAAD5B99,
	PED_M_Y_SWAT = 0xC41C88BE,
	PED_M_Y_SWORDSWALLOW = 0xFC2BE1B8,
	PED_M_Y_THIEF = 0xB2F9C1A1,
	PED_M_Y_VALET = 0x102B77F0,
	PED_M_Y_VENDOR = 0xF4E8205B,
	PED_M_Y_FRENCHTOM = 0x87DB1287,
	PED_M_Y_JIM_FITZ = 0x75E29A7D,
	PED_F_O_PEASTEURO_01 = 0xF3D9C032,
	PED_F_O_PEASTEURO_02 = 0x0B50EF20,
	PED_F_O_PHARBRON_01 = 0xEB320486,
	PED_F_O_PJERSEY_01 = 0xF92630A4,
	PED_F_O_PORIENT_01 = 0x9AD4BE64,
	PED_F_O_RICH_01 = 0x0600A909,
	PED_F_M_BUSINESS_01 = 0x093E163C,
	PED_F_M_BUSINESS_02 = 0x1780B2C1,
	PED_F_M_CHINATOWN = 0x51FFF4A5,
	PED_F_M_PBUSINESS = 0xEF0F006B,
	PED_F_M_PEASTEURO_01 = 0x2864B0DC,
	PED_F_M_PHARBRON_01 = 0xB92CE9DD,
	PED_F_M_PJERSEY_01 = 0x844EA438,
	PED_F_M_PJERSEY_02 = 0xAF1EF9D8,
	PED_F_M_PLATIN_01 = 0x3067DA63,
	PED_F_M_PLATIN_02 = 0xF84BEA2C,
	PED_F_M_PMANHAT_01 = 0x32CEF1D1,
	PED_F_M_PMANHAT_02 = 0x04901554,
	PED_F_M_PORIENT_01 = 0x81BA39A8,
	PED_F_M_PRICH_01 = 0x605DF31F,
	PED_F_Y_BUSINESS_01 = 0x1B0DCC86,
	PED_F_Y_CDRESS_01 = 0x3120FC7F,
	PED_F_Y_PBRONX_01 = 0xAECAC8C7,
	PED_F_Y_PCOOL_01 = 0x9568444C,
	PED_F_Y_PCOOL_02 = 0xA52AE3D1,
	PED_F_Y_PEASTEURO_01 = 0xC760585B,
	PED_F_Y_PHARBRON_01 = 0x8D2AC355,
	PED_F_Y_PHARLEM_01 = 0x0A047A8F,
	PED_F_Y_PJERSEY_02 = 0x0006BC78,
	PED_F_Y_PLATIN_01 = 0x0339B6D8,
	PED_F_Y_PLATIN_02 = 0xEE8D8D80,
	PED_F_Y_PLATIN_03 = 0x67F08048,
	PED_F_Y_PMANHAT_01 = 0x6392D986,
	PED_F_Y_PMANHAT_02 = 0x50B8B3D2,
	PED_F_Y_PMANHAT_03 = 0x3EFE105D,
	PED_F_Y_PORIENT_01 = 0xB8DA98D7,
	PED_F_Y_PQUEENS_01 = 0x2A8A0FF0,
	PED_F_Y_PRICH_01 = 0x95E177F9,
	PED_F_Y_PVILLBO_02 = 0xC73ECED1,
	PED_F_Y_SHOP_03 = 0x5E8CD2B8,
	PED_F_Y_SHOP_04 = 0x6E2671EB,
	PED_F_Y_SHOPPER_05 = 0x9A8CFCFD,
	PED_F_Y_SOCIALITE = 0x4680C12E,
	PED_F_Y_STREET_02 = 0xCA5194CB,
	PED_F_Y_STREET_05 = 0x110C2243,
	PED_F_Y_STREET_09 = 0x57D62FD6,
	PED_F_Y_STREET_12 = 0x91AFE421,
	PED_F_Y_STREET_30 = 0x4CEF5CF5,
	PED_F_Y_STREET_34 = 0x6F96222E,
	PED_F_Y_TOURIST_01 = 0x6892A334,
	PED_F_Y_VILLBO_01 = 0x2D6795BA,
	PED_M_M_BUSINESS_02 = 0xDA0E92D1,
	PED_M_M_BUSINESS_03 = 0x976C0D95,
	PED_M_M_EE_HEAVY_01 = 0xA59C6FD2,
	PED_M_M_EE_HEAVY_02 = 0x9371CB7D,
	PED_M_M_FATMOB_01 = 0x74636532,
	PED_M_M_GAYMID = 0x894A8CB2,
	PED_M_M_GENBUM_01 = 0xBF963CE7,
	PED_M_M_LOONYWHITE = 0x1D88B92A,
	PED_M_M_MIDTOWN_01 = 0x89BC811F,
	PED_M_M_PBUSINESS_01 = 0x3F688D84,
	PED_M_M_PEASTEURO_01 = 0x0C717BCE,
	PED_M_M_PHARBRON_01 = 0xC3306A8C,
	PED_M_M_PINDUS_02 = 0x6A3B66CC,
	PED_M_M_PITALIAN_01 = 0xAC686EC9,
	PED_M_M_PITALIAN_02 = 0x9EF053D9,
	PED_M_M_PLATIN_01 = 0x450E5DBF,
	PED_M_M_PLATIN_02 = 0x75633E74,
	PED_M_M_PLATIN_03 = 0x60AD1508,
	PED_M_M_PMANHAT_01 = 0xD8CF835D,
	PED_M_M_PMANHAT_02 = 0xB217B5E2,
	PED_M_M_PORIENT_01 = 0x2BC50FD3,
	PED_M_M_PRICH_01 = 0x6F2AE4DB,
	PED_M_O_EASTEURO_01 = 0xE6372469,
	PED_M_O_HASID_01 = 0x9E495AD7,
	PED_M_O_MOBSTER = 0x62B5E24B,
	PED_M_O_PEASTEURO_02 = 0x793F36B1,
	PED_M_O_PHARBRON_01 = 0x4E76BDF6,
	PED_M_O_PJERSEY_01 = 0x3A78BA45,
	PED_M_O_STREET_01 = 0xB29788AB,
	PED_M_O_SUITED = 0x0E86251C,
	PED_M_Y_BOHO_01 = 0x7C54115F,
	PED_M_Y_BOHOGUY_01 = 0x0D2FF2BF,
	PED_M_Y_BRONX_01 = 0x031EE9E3,
	PED_M_Y_BUSINESS_01 = 0x5B404032,
	PED_M_Y_BUSINESS_02 = 0x2924DBD8,
	PED_M_Y_CHINATOWN_03 = 0xBB784DE6,
	PED_M_Y_CHOPSHOP_01 = 0xED4319C3,
	PED_M_Y_CHOPSHOP_02 = 0xDF0C7D56,
	PED_M_Y_DODGY_01 = 0xBE9A3CD6,
	PED_M_Y_DORK_02 = 0x962996E4,
	PED_M_Y_DOWNTOWN_01 = 0x47F77FC9,
	PED_M_Y_DOWNTOWN_02 = 0x5971A2B9,
	PED_M_Y_DOWNTOWN_03 = 0x236BB6B2,
	PED_M_Y_GAYYOUNG = 0xD36D1B5D,
	PED_M_Y_GENSTREET_11 = 0xD7A357ED,
	PED_M_Y_GENSTREET_16 = 0x9BF260A8,
	PED_M_Y_GENSTREET_20 = 0x3AF39D6C,
	PED_M_Y_GENSTREET_34 = 0x4658B34E,
	PED_M_Y_HARDMAN_01 = 0xAB537AD4,
	PED_M_Y_HARLEM_01 = 0xB71B0F29,
	PED_M_Y_HARLEM_02 = 0x97EBD0CB,
	PED_M_Y_HARLEM_04 = 0x7D701BD4,
	PED_M_Y_HASID_01 = 0x90442A67,
	PED_M_Y_LEASTSIDE_01 = 0xC1181556,
	PED_M_Y_PBRONX_01 = 0x22522444,
	PED_M_Y_PCOOL_01 = 0xFBB5AA01,
	PED_M_Y_PCOOL_02 = 0xF45E1B4E,
	PED_M_Y_PEASTEURO_01 = 0x298F268A,
	PED_M_Y_PHARBRON_01 = 0x27F5967B,
	PED_M_Y_PHARLEM_01 = 0x01961E02,
	PED_M_Y_PJERSEY_01 = 0x5BF734C6,
	PED_M_Y_PLATIN_01 = 0x944D1A30,
	PED_M_Y_PLATIN_02 = 0xC30777A4,
	PED_M_Y_PLATIN_03 = 0xB0F0D377,
	PED_M_Y_PMANHAT_01 = 0x243BD606,
	PED_M_Y_PMANHAT_02 = 0x7554785A,
	PED_M_Y_PORIENT_01 = 0xEB7CE59F,
	PED_M_Y_PQUEENS_01 = 0x21673B90,
	PED_M_Y_PRICH_01 = 0x509627D1,
	PED_M_Y_PVILLBO_01 = 0x0D55CAAC,
	PED_M_Y_PVILLBO_02 = 0xB5559AAD,
	PED_M_Y_PVILLBO_03 = 0xA2E575D9,
	PED_M_Y_QUEENSBRIDGE = 0x48E8EE31,
	PED_M_Y_SHADY_02 = 0xB73D062F,
	PED_M_Y_SKATEBIKE_01 = 0x68A019EE,
	PED_M_Y_SOHO_01 = 0x170C6DAE,
	PED_M_Y_STREET_01 = 0x03B99DE1,
	PED_M_Y_STREET_03 = 0x1F3854DE,
	PED_M_Y_STREET_04 = 0x3082F773,
	PED_M_Y_STREETBLK_02 = 0xA37B1794,
	PED_M_Y_STREETBLK_03 = 0xD939030F,
	PED_M_Y_STREETPUNK_02 = 0xD3E34ABA,
	PED_M_Y_STREETPUNK_04 = 0x8D1CBD36,
	PED_M_Y_STREETPUNK_05 = 0x51E946D0,
	PED_M_Y_TOUGH_05 = 0xBC0DDE62,
	PED_M_Y_TOURIST_02 = 0x303963D0,

	// Peds TLAD
	PED_IG_ASHLEYA = 0xD49C2B16,
	PED_IG_CLAY = 0x6CCFE08A,
	PED_IG_MALC = 0xF1BCA919,
	PED_IG_BILLY = 0xE5135137,
	PED_IG_JIM_FITZ = 0x33E8C374,
	PED_IG_BRIANJ = 0x14DA2838,
	PED_IG_EVAN = 0xD07B6195,
	PED_IG_TERRY = 0x67000B94,
	PED_IG_DAVE_GROSSMAN = 0xB634B03C,
	PED_IG_LOSTGIRL = 0xCF8E5838,
	PED_IG_BILLYPRISON = 0xCCC15E4E,
	PED_IG_MARTA = 0xA0367380,
	PED_IG_DESEAN = 0xFB9A0BD0,
	PED_IG_MATTHEWS = 0xF60A3CF3,
	PED_IG_MCCORNISH = 0x1609B707,
	PED_IG_PGIRL_01 = 0xA47978B5,
	PED_IG_PGIRL_02 = 0x4BC8C755,
	PED_IG_ROMAN_E1 = 0xD31529F3,
	PED_IG_STROOPER = 0x95D15467,
	PED_M_Y_GANGELS_01 = 0x3A432BB8,
	PED_M_Y_GANGELS_02 = 0xBAE8AD11,
	PED_M_Y_GANGELS_03 = 0x1C997071,
	PED_M_Y_GANGELS_04 = 0x0D7ED23C,
	PED_M_Y_GANGELS_05 = 0x00F3B926,
	PED_M_Y_GANGELS_06 = 0x82613BFF,
	PED_F_Y_GANGELS_01 = 0xF7055110,
	PED_F_Y_GANGELS_02 = 0x292B355B,
	PED_F_Y_GANGELS_03 = 0xE1F526F0,
	PED_M_Y_GLOST_01 = 0x55CEC30B,
	PED_M_Y_GLOST_02 = 0x678B6684,
	PED_M_Y_GLOST_03 = 0xE776E65D,
	PED_M_Y_GLOST_04 = 0x81041975,
	PED_M_Y_GLOST_05 = 0x92C5BCF8,
	PED_M_Y_GLOST_06 = 0x9C70D04E,
	PED_F_Y_GLOST_01 = 0x0B3AE9B8,
	PED_F_Y_GLOST_02 = 0x5453FBF5,
	PED_F_Y_GLOST_03 = 0x25911E70,
	PED_F_Y_GLOST_04 = 0x6677A03C,
	PED_M_Y_GRYDERS_01 = 0x0E1BA167,
	PED_M_Y_GRYDERS_02 = 0x5EC9C2C2,
	PED_F_Y_GRYDERS_01 = 0xB3E305FD,
	PED_M_Y_GTRIAD_HI_01 = 0x4B0BC9FA,
	PED_M_Y_GTRI_02 = 0x9EF03294,
	PED_F_Y_BIKESTRIPPER_01 = 0x86BF8536,
	PED_F_Y_EMIDTOWN_01 = 0x1DE2861D,
	PED_M_M_SPRETZER = 0x81F47D63,
	PED_M_Y_CIADLC_01 = 0xE82B8B50,
	PED_M_Y_CIADLC_02 = 0xFA832FFF,
	PED_M_Y_DOORMAN_01 = 0xFAF80EF6,
	PED_M_Y_PRISONDLC_01 = 0xCEDC662A,
	PED_M_Y_PRISONGUARD = 0x8DC7AE18,
	PED_F_Y_UPTOWN_01 = 0x04E5D55F,
	PED_M_M_SMARTBLACK = 0x9607A6C2,
	PED_M_Y_HIPMALE_01 = 0xD1A697ED,
	PED_M_Y_BUSIASIAN = 0xF2200C7B,
	PED_M_M_UPEAST_01 = 0x01A25B7E,
	PED_F_Y_BUSIASIAN = 0xE4CADE41,
	PED_M_O_HISPANIC_01 = 0xC2700A81,
	PED_M_Y_BUSIMIDEAST = 0x836DCFB6,
	PED_M_Y_HISPANIC_01 = 0x5A99A8C0,
	PED_M_Y_BIKEMECH = 0xFB504807,
	PED_M_M_UPTOWN_01 = 0x38D04A7D,
	PED_M_Y_GAYGANG_01 = 0x636CDA80,
	PED_M_Y_HIP_02 = 0xE58A26AC,
	PED_M_Y_PRISONBLACK = 0xA97ED37B,
	PED_F_Y_UPTOWN_CS = 0x8ED1E138,
	PED_LOSTBUDDY_01 = 0x721B6514,
	PED_LOSTBUDDY_02 = 0x808A01F1,
	PED_LOSTBUDDY_03 = 0x487511C8,
	PED_LOSTBUDDY_04 = 0x65BE4C5A,
	PED_LOSTBUDDY_05 = 0x2AC45667,
	PED_LOSTBUDDY_06 = 0x3985F3EA,
	PED_LOSTBUDDY_07 = 0x295D53B5,
	PED_LOSTBUDDY_08 = 0x1B1AB730,
	PED_LOSTBUDDY_09 = 0x540128FC,
	PED_LOSTBUDDY_10 = 0x2DBE5DAB,
	PED_LOSTBUDDY_11 = 0x64894B40,
	PED_LOSTBUDDY_12 = 0x725066CE,
	PED_LOSTBUDDY_13 = 0x192F348D,
	PED_CS_NIKO = 0xF88260C2,
	PED_CS_ANDREAS = 0xE7565327,
	PED_CS_ANGELGUY = 0x577BC88F,
	PED_CS_ANGUS = 0x8BC6A2D3,
	PED_CS_ASHLEYA = 0x9A1DD05C,
	PED_CS_BILLY = 0x64E196FE,
	PED_CS_BIKESTRIPPER = 0xC3709E91,
	PED_CS_BRIANJ = 0xF54AEE52,
	PED_CS_CLAY = 0xDBCB9834,
	PED_CS_DAVE_GROSSMAN = 0x3D0E2E09,
	PED_CS_DESEAN = 0x19BCAE55,
	PED_CS_ELIZABETAT = 0xE83DE099,
	PED_CS_FRANKIE = 0x549E6E7B,
	PED_CS_JASON = 0xD4C6DAAD,
	PED_CS_JIM_FITZ = 0xAD24C399,
	PED_CS_MAITRE_D = 0x43778033,
	PED_CS_MALC = 0x037DF2C9,
	PED_CS_MITCHB = 0xB72CBF92,
	PED_CS_MARTA = 0xC87AA743,
	PED_CS_MASSEUSE = 0xA771945A,
	PED_CS_MATTHEWS = 0xA6CA5E6D,
	PED_CS_MCCORNISH = 0xA394626B,
	PED_CS_PAUL_LAMONT = 0x65F93B1E,
	PED_CS_PRISONDLC_01 = 0xAA6012BB,
	PED_CS_PRISONGUARD = 0x6C7A638E,
	PED_CS_RAYGOON = 0x90C767F3,
	PED_CS_RAY_LEATHER = 0xF8AD9C83,
	PED_CS_RONCERO = 0x1A546487,
	PED_CS_RUSSIAN_GOON = 0x6AC02DF9,
	PED_CS_RUSSIANGOON2 = 0x732FEF9B,
	PED_CS_TERRY = 0x3A5201C5,
	PED_CS_SKANK = 0x75377B4B,
	PED_CS_STUBBS = 0x7CA428FC,
	PED_CS_STUBBS_SUIT = 0x201D6C6E,

	// Peds TBoGT
	PED_CS_BAZ = 0x784C7AE2,
	PED_CS_JEREMY = 0x32CE14A5,
	//PED_CS_NIKO = 0xF88260C2,
	PED_CS_ABDUL = 0x36D9C53F,
	PED_CS_ABODYGUARD = 0x150ADC68,
	PED_CS_ADRIANA = 0x57E44134,
	PED_CS_AHMAD = 0x3BACB937,
	PED_CS_ARMANDO = 0x791C0452,
	PED_CS_ARNAUD = 0x542AC02C,
	PED_CS_BATHROOM = 0x87DB2548,
	PED_CS_BILLY2 = 0x30056FCD,
	PED_CS_BULGARIN2 = 0x6822E705,
	PED_CS_BRUCIE2 = 0x1E0180C6,
	PED_CS_DAISY = 0x24B7B6CE,
	PED_CS_DERRICK2 = 0xA9490E36,
	PED_CS_DESSIE = 0x8DD679BB,
	PED_CS_DOCKGOON = 0x8E74579A,
	PED_CS_EUGENE = 0xA6D50A1F,
	PED_CS_EVAN2 = 0x710748D4,
	PED_CS_GPARTY_01 = 0xE04ECC4A,
	PED_CS_GRACIE2 = 0x7E02613E,
	PED_CS_HENRIQUE = 0xAC51A735,
	PED_CS_ISSAC2 = 0x5C595F55,
	PED_CS_JOHNNY2 = 0x5434CD19,
	PED_CS_MARGOT = 0x2303395D,
	PED_CS_MAURICE = 0x08DB9CAA,
	PED_CS_MORI_K = 0x82AF0010,
	PED_CS_MR_SANTOS = 0x2DDCB581,
	PED_CS_NIKO2 = 0x886CB02B,
	PED_CS_OYVEY = 0xE4B4E738,
	PED_CS_PACKIE2 = 0x2636B0A5,
	PED_CS_PAPI = 0x6CAC345C,
	PED_CS_ROCCO = 0xA61754F0,
	PED_CS_ROMAN2 = 0xDB380BA7,
	PED_CS_RUS_KN = 0x03FEE54B,
	PED_CS_SHARON = 0x399A54CD,
	PED_CS_TAHIR = 0xE44CD169,
	PED_CS_TIMUR = 0x3131F62C,
	PED_CS_TONY = 0x9F271661,
	PED_CS_TONYAQ = 0xA5852E77,
	PED_CS_TRAMP2 = 0x51E9A3F0,
	PED_CS_TRIAD = 0x43DB1571,
	PED_CS_TROY = 0x33FAFED6,
	PED_CS_VIC = 0xFC97EB6E,
	PED_CS_VICGIRL = 0xDA6F3D87,
	PED_CS_VINCE = 0x76D39A51,
	PED_CS_YUSEF = 0x1A097018,
	PED_IG_AHMAD = 0xE2F65127,
	PED_IG_ARMANDO = 0x51AD1CE3,
	PED_IG_ARMSDEALER = 0x47471B9B,
	PED_IG_ARNAUD = 0x2A96AA6B,
	PED_IG_BANKER = 0x1BBAF430,
	PED_IG_BRUCIE2 = 0xE80E9160,
	PED_IG_BULGARIN2 = 0x0E860DFB,
	PED_IG_DAISY = 0x26F2283E,
	PED_IG_DEEJAY = 0xA94AF89C,
	PED_IG_DESSIE = 0xA9C24CEF,
	//PED_IG_EVAN = 0xD07B6195,
	PED_IG_GRACIE2 = 0x780C8ADA,
	PED_IG_HENRIQUE = 0x7193DD41,
	PED_IG_ISSAC2 = 0xA7356B14,
	PED_IG_JOHNNY2 = 0x007D372B,
	PED_IG_LUIS2 = 0x75CCCC60,
	PED_IG_MARGOT = 0x6B34A006,
	PED_IG_MORI_K = 0x63138CCC,
	PED_IG_MR_SANTOS = 0x26582854,
	PED_IG_NIKO = 0x6032264F,
	PED_IG_OYVEY = 0x7C89F307,
	PED_IG_ROCCO = 0xC9869CCA,
	PED_IG_TAHIR = 0xE7BCA666,
	PED_IG_TIMUR = 0x8BCF3DEB,
	PED_IG_TONY = 0xEFA2695D,
	PED_IG_TRAMP2 = 0xC5F4F8A5,
	PED_IG_TRIAD = 0x00249488,
	PED_IG_TROY = 0x6317546B,
	PED_IG_VIC = 0xF6A7A434,
	PED_IG_VICGIRL = 0xE4C07993,
	PED_IG_VINCE = 0x5285B57B,
	PED_IG_YUSEF = 0xE5497381,
	//PED_M_Y_GANGELS_02 = 0xBAE8AD11,
	//PED_M_Y_GANGELS_04 = 0x0D7ED23C,
	//PED_M_Y_GLOST_01 = 0x55CEC30B,
	//PED_M_Y_GLOST_02 = 0x678B6684,
	//PED_M_Y_GTRIAD_HI_01 = 0x4B0BC9FA,
	//PED_M_Y_GTRI_02 = 0x9EF03294,
	PED_F_Y_ASIANCLUB_01 = 0x66C81C17,
	PED_F_Y_ASIANCLUB_02 = 0x7511B8AA,
	PED_F_Y_CLUBEURO_01 = 0x37771AD5,
	PED_F_Y_DOMGIRL_01 = 0x520CBA78,
	PED_F_Y_EMIDTOWN_02 = 0xC08ACB5F,
	PED_F_Y_HOSTESS = 0x7A1ECAD7,
	PED_F_Y_HOTCHICK_01 = 0xEE4335C2,
	PED_F_Y_HOTCHICK_02 = 0x93D400CD,
	PED_F_Y_HOTCHICK_03 = 0x12BEFEB9,
	PED_F_Y_PGIRL_01 = 0xCDAE3E7C,
	PED_F_Y_PGIRL_02 = 0x9B9F5A57,
	PED_F_Y_SMID_01 = 0xA01941EC,
	PED_F_Y_TRENDY_01 = 0x2D874100,
	PED_M_M_E2MAF_01 = 0xD7FC02CB,
	PED_M_M_E2MAF_02 = 0x30F234C2,
	PED_M_Y_AMIRGUARD_01 = 0x273BE7AE,
	PED_M_Y_BATHROOM = 0x5537808C,
	PED_M_Y_BARMAISON = 0x9AE100DF,
	//PED_M_Y_CIADLC_01 = 0xE82B8B50,
	//PED_M_Y_CIADLC_02 = 0xFA832FFF,
	PED_M_Y_CLUBBLACK_01 = 0xD37434B0,
	PED_M_Y_CLUBEURO_01 = 0x10F4BD43,
	PED_M_Y_CLUBEURO_02 = 0xFF5219FE,
	PED_M_Y_CLUBEURO_03 = 0x2562661E,
	PED_M_Y_CLUBWHITE_01 = 0x29A3192E,
	PED_M_Y_DOMDRUG_01 = 0x0EC2D21A,
	PED_M_Y_DOMGUY_01 = 0x2BFEE7EE,
	PED_M_Y_DOMGUY_02 = 0x61BFD373,
	PED_M_Y_DOORMAN_02 = 0x68B66A71,
	PED_M_Y_E2RUSSIAN_01 = 0xB12754CD,
	PED_M_Y_E2RUSSIAN_02 = 0xDEDA3016,
	PED_M_Y_E2RUSSIAN_03 = 0xD5241CAA,
	PED_M_Y_GAYBLACK_01 = 0x218F4947,
	PED_M_Y_GAYDANCER = 0xAA47E132,
	//PED_M_Y_GAYGANG_01 = 0x636CDA80,
	PED_M_Y_GAYGENERAL_01 = 0xE0AAAB26,
	PED_M_Y_GAYWHITE_01 = 0xD6511833,
	PED_M_Y_GUIDO_01 = 0x3A895123,
	PED_M_Y_GUIDO_02 = 0x68D7ADC7,
	PED_M_Y_MIDEAST_01 = 0x2D654515,
	PED_M_Y_UPTOWN_01 = 0xCD8C3F20,
	PED_M_Y_FIGHTCLUB_01 = 0x0B3D17A7,
	PED_M_Y_FIGHTCLUB_02 = 0xA7F4D114,
	PED_M_Y_FIGHTCLUB_03 = 0xBA4775B9,
	PED_M_Y_FIGHTCLUB_04 = 0xCEA49E73,
	PED_M_Y_FIGHTCLUB_05 = 0xDE623DEE,
	PED_M_Y_FIGHTCLUB_06 = 0x531D2766,
	PED_M_Y_FIGHTCLUB_07 = 0x64D34AD2,
	PED_M_Y_FIGHTCLUB_08 = 0x7586EC39,
	PED_F_Y_CLOEPARKER = 0xA7114B68,
	PED_F_Y_DANCER_01 = 0xCFC9B096,
	PED_F_Y_JONI = 0xCB6CD993,
	PED_M_M_MAFUNION = 0x27369312,
	PED_M_Y_CELEBBLOG = 0x94CBBAF8,
	PED_M_Y_EXSPORTS = 0x1E10313A,
	PED_M_Y_MOBPARTY = 0x432DABA9,
	PED_M_Y_PAPARAZZI_01 = 0xABC3DCD5,
	PED_IG_BLUEBROS = 0xA91DABD1,
	PED_IG_JACKSON = 0xC1379A94,
	PED_IG_NAPOLI = 0xCE2077E6,
	PED_IG_ROYAL = 0xDBF72AD6,
	PED_IG_SPADE = 0x671E6D91
} ePed;
