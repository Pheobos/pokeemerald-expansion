DEV_Shortcut_Hub_MapScripts::
	.byte 0


DEV_Shortcut_Hub_EventScript_LittlerootTownSign::
	msgbox DEV_Shortcut_Hub_Text_LittlerootTownSign, MSGBOX_SIGN
	end

DEV_Shortcut_Hub_EventScript_OldaleTownSign::
	msgbox DEV_Shortcut_Hub_Text_OldaleTownSign, MSGBOX_SIGN
	end

DEV_Shortcut_Hub_EventScript_EpineioCitySign::
	msgbox DEV_Shortcut_Hub_Text_EpineioCitySign, MSGBOX_SIGN
	end

DEV_Shortcut_Hub_EventScript_MemorialHills::
	msgbox DEV_Shortcut_Hub_Text_MemorialHills, MSGBOX_SIGN
	end

	DEV_Shortcut_Hub_Text_LittlerootTownSign:
	.string "To: LittlerootTown.”$"

	DEV_Shortcut_Hub_Text_OldaleTownSign:
	.string "To: OldaleTown.”$"

	DEV_Shortcut_Hub_Text_EpineioCitySign:
	.string "To: EpineioCity.”$"

	DEV_Shortcut_Hub_Text_MemorialHills:
	.string "To: MemorialHills.”$"


DEV_Shortcut_Hub_EventScript_GiveSnorlax::
    lock
    faceplayer
    checkflag FLAG_RECEIVED_SNORLAX
    goto_if TRUE, SnorlaxAlreadyReceived

    msgbox Text_GiftSnorlax, MSGBOX_DEFAULT
    setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SNORLAX
    givemon SPECIES_SNORLAX, 50, ITEM_LEFTOVERS
    goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SnorlaxReceived
    goto SnorlaxReceivedPC

SnorlaxReceived:
    msgbox Text_SnorlaxReceived, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_SNORLAX
    release
    end

SnorlaxReceivedPC:
    msgbox Text_SnorlaxReceivedPC, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_SNORLAX
    release
    end

SnorlaxAlreadyReceived:
    msgbox Text_AlreadyGotSnorlax, MSGBOX_SIGN
    release
    end

Text_GiftSnorlax:
    .string "This Snorlax looks like it wants to go with you!$"

Text_SnorlaxReceived:
    .string "You received a Snorlax!$"

Text_SnorlaxReceivedPC:
    .string "You received a Snorlax!\nIt was sent to your PC.$"

Text_AlreadyGotSnorlax:
    .string "Take good care of that Snorlax!$"



DEV_Shortcut_Hub_EventScript_GiveMarshtomp::
    lock
    faceplayer
    checkflag FLAG_RECEIVED_MARSHTOMP
    goto_if TRUE, MarshtompAlreadyReceived

    msgbox Text_GiftMarshtomp, MSGBOX_DEFAULT
    setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MARSHTOMP
    givemon SPECIES_MARSHTOMP, 16, ITEM_EVIOLITE
    goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MarshtompReceived
    goto MarshtompReceivedPC

MarshtompReceived:
    msgbox Text_MarshtompReceived, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_MARSHTOMP
    release
    end

MarshtompReceivedPC:
    msgbox Text_MarshtompReceivedPC, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_MARSHTOMP
    release
    end

MarshtompAlreadyReceived:
    msgbox Text_AlreadyGotMarshtomp, MSGBOX_SIGN
    release
    end

Text_GiftMarshtomp:
    .string "This Marshtomp looks like it wants to go with you!$"

Text_MarshtompReceived:
    .string "You received a Marshtomp!$"

Text_MarshtompReceivedPC:
    .string "You received a Marshtomp!\nIt was sent to your PC.$"

Text_AlreadyGotMarshtomp:
    .string "Take good care of that Marshtomp!$"



DEV_Shortcut_Hub_EventScript_GiveAggron::
    lock
    faceplayer
    checkflag FLAG_RECEIVED_AGGRON
    goto_if TRUE, AggronAlreadyReceived

    msgbox Text_GiftAggron, MSGBOX_DEFAULT
    setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AGGRON
    givemon SPECIES_AGGRON, 42, 
    goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, AggronReceived
    goto AggronReceivedPC

AggronReceived:
    msgbox Text_AggronReceived, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_AGGRON
    release
    end

AggronReceivedPC:
    msgbox Text_AggronReceivedPC, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_AGGRON
    release
    end

AggronAlreadyReceived:
    msgbox Text_AlreadyGotAggron, MSGBOX_SIGN
    release
    end

Text_GiftAggron:
    .string "This Aggron looks like it wants to go with you!$"

Text_AggronReceived:
    .string "You received Aggron!$"

Text_AggronReceivedPC:
    .string "You received Aggron!\nIt was sent to your PC.$"

Text_AlreadyGotAggron:
    .string "Take good care of that Aggron!$"


CustomMoveTutor_FreezeDrymoves1_EventScript::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, CustomMoveTutor_FreezeDrymoves1_EventScript_AlreadyMetTutor
	msgbox CustomMoveTutor_FreezeDrymoves1_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseTutorMove
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_AlreadyMetTutor::
	msgbox CustomMoveTutor_FreezeDrymoves1_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseTutorMove
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseTutorMove::
	message CustomMoveTutor_FreezeDrymoves1_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMoveTutor_FreezeDrymoves1_EventScript_Uproot
	case 1, CustomMoveTutor_FreezeDrymoves1_EventScript_ShortCircuit
	case 2, CustomMoveTutor_FreezeDrymoves1_EventScript_PurgingLight
	case 3, CustomMoveTutor_FreezeDrymoves1_EventScript_Chi_Drive
	case 4, CustomMoveTutor_FreezeDrymoves1_EventScript_Wind_Shear
	case 5, CustomMoveTutor_FreezeDrymoves1_EventScript_Anti_Venom
	case 6, CustomMoveTutor_FreezeDrymoves1_EventScript_Oil_Spill
	case 7, CustomMoveTutor_FreezeDrymoves1_EventScript_Faultbreaker
	case 8, CustomMoveTutor_FreezeDrymoves1_EventScript_Purge_Swarm
	case 9, CustomMoveTutor_FreezeDrymoves1_EventScript_AbyssalLight
	case 10, CustomMoveTutor_FreezeDrymoves1_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMoveTutor_FreezeDrymoves1_EventScript_ExitTutorMoveSelect
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseNewTutorMove::
	message CustomMoveTutor_FreezeDrymoves1_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMoveTutor_FreezeDrymoves1_EventScript_Uproot
	case 1, CustomMoveTutor_FreezeDrymoves1_EventScript_ShortCircuit
	case 2, CustomMoveTutor_FreezeDrymoves1_EventScript_PurgingLight
	case 3, CustomMoveTutor_FreezeDrymoves1_EventScript_Chi_Drive
	case 4, CustomMoveTutor_FreezeDrymoves1_EventScript_Wind_Shear
	case 5, CustomMoveTutor_FreezeDrymoves1_EventScript_Anti_Venom
	case 6, CustomMoveTutor_FreezeDrymoves1_EventScript_Oil_Spill
	case 7, CustomMoveTutor_FreezeDrymoves1_EventScript_Faultbreaker
	case 8, CustomMoveTutor_FreezeDrymoves1_EventScript_Purge_Swarm
	case 9, CustomMoveTutor_FreezeDrymoves1_EventScript_AbyssalLight
	case 10, CustomMoveTutor_FreezeDrymoves1_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMoveTutor_FreezeDrymoves1_EventScript_ExitTutorMoveSelect
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_Uproot::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_UPROOT
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_ShortCircuit::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SHORTCIRCUIT
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_PurgingLight::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_PURGINGLIGHT
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_Chi_Drive::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_CHI_DRIVE
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_Wind_Shear::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_WIND_SHEAR
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_Anti_Venom::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_ANTI_VENOM
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_Oil_Spill::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_OIL_SPILL
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_Faultbreaker::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_FAULTBREAKER
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_Purge_Swarm::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_PURGE_SWARM
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_AbyssalLight::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_ABYSSALLIGHT
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox CustomMoveTutor_FreezeDrymoves1_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, CustomMoveTutor_FreezeDrymoves1_EventScript_TeachTutorMove
	msgbox CustomMoveTutor_FreezeDrymoves1_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseNewMove
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_TeachTutorMove::
	msgbox CustomMoveTutor_FreezeDrymoves1_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, CustomMoveTutor_FreezeDrymoves1_EventScript_CancelChooseMon
	msgbox CustomMoveTutor_FreezeDrymoves1_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseNewTutorMove
	goto CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseNewRightTutorMove
	end

CustomMoveTutor_FreezeDrymoves1_Text_TutorIntro:
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON special\l"
	.string "moves that do Super Effective damage,\p"
	.string "against types that usually resist.\n"
	.string "They are wonderfully usefull moves!\l"
	.string "Now which one strikes your interest?!$"

CustomMoveTutor_FreezeDrymoves1_Text_TutorWelcomeBack:
	.string "Buhahaha!\p"
	.string "Are you back to learn more\n"
	.string "of my wonderfull POKéMON moves?$"

CustomMoveTutor_FreezeDrymoves1_Text_TeachWhichMove:
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

CustomMoveTutor_FreezeDrymoves1_Text_MoveWillBeXBattlePoints:
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

CustomMoveTutor_FreezeDrymoves1_Text_TeachMoveToWhichMon:
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

CustomMoveTutor_FreezeDrymoves1_Text_HaventGotEnoughPoints:
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

CustomMoveTutor_FreezeDrymoves1_Text_IllTakeBattlePoints:
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

CustomMoveTutor_FreezeDrymoves1_Text_YouDontWantTo:
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMoveTutor_FreezeDrymoves1_Text_UprootDesc::
	.string "Ground Type\n"
	.string "hits Grass for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_ShortCircuitDesc::
	.string "Electric Type\n"
	.string "hits Electric for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_PurgingLightDesc::
	.string "Normal Type\n"
	.string "hits Ghost for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_Chi_DriveDesc::
	.string "Fighting Type\n"
	.string "hits Ghost for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_Wind_ShearDesc::
	.string "Flying Type\n"
	.string "hits Rock for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_Anti_VenomDesc::
	.string "Poison Type\n"
	.string "hits Poison for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_Oil_SpillDesc::
	.string "Poison Type\n"
	.string "hits Water for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_FaultBreakerDesc::
	.string "Rock Type\n"
	.string "hits Steel for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_Purge_SwarmDesc::
	.string "Bug Type\n"
	.string "hits Poison for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_Text_AbyssalLightDesc::
	.string "Ghost Type\n"
	.string "hits Dark for\n"
	.string "Super Effective.$"

CustomMoveTutor_FreezeDrymoves1_EventScript_ExitTutorMoveSelect::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMoveTutor_FreezeDrymoves1_EventScript_CancelChooseMon::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMoveTutor_FreezeDrymoves1_EventScript_ChooseNewRightTutorMove::
	.string "Ah! Yes yes!\n"
	.string "Fine choice, fine choice!\p"
	.string "Now its only a matter of,\n"
	.string "who I should teach this move!$"



CustomMovetutor_FreezeDrymoves2_EventScript::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, CustomMovetutor_FreezeDrymoves2_EventScript_AlreadyMetTutor
	msgbox CustomMovetutor_FreezeDrymoves2_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ChooseTutorMove
	end

CustomMovetutor_FreezeDrymoves2_EventScript_AlreadyMetTutor::
	msgbox CustomMovetutor_FreezeDrymoves2_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ChooseTutorMove
	end

CustomMovetutor_FreezeDrymoves2_EventScript_ChooseTutorMove::
	message CustomMovetutor_FreezeDrymoves2_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_FreezeDrymoves2_EventScript_SurgeClamp
	case 1, CustomMovetutor_FreezeDrymoves2_EventScript_Smelt_Shot
	case 2, CustomMovetutor_FreezeDrymoves2_EventScript_BoilingPulse
	case 3, CustomMovetutor_FreezeDrymoves2_EventScript_Sap_Bomb
	case 4, CustomMovetutor_FreezeDrymoves2_EventScript_Cerebrawl
	case 5, CustomMovetutor_FreezeDrymoves2_EventScript_Golden_Fire
	case 6, CustomMovetutor_FreezeDrymoves2_EventScript_Malice_Thorn
	case 7, CustomMovetutor_FreezeDrymoves2_EventScript_Faelight_Jab
	case 8, CustomMovetutor_FreezeDrymoves2_EventScript_Freeze_Dry
	case 9, CustomMovetutor_FreezeDrymoves2_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_FreezeDrymoves2_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_FreezeDrymoves2_EventScript_ChooseNewTutorMove::
	message CustomMovetutor_FreezeDrymoves2_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_FreezeDrymoves2_EventScript_SurgeClamp
	case 1, CustomMovetutor_FreezeDrymoves2_EventScript_Smelt_Shot
	case 2, CustomMovetutor_FreezeDrymoves2_EventScript_BoilingPulse
	case 3, CustomMovetutor_FreezeDrymoves2_EventScript_Sap_Bomb
	case 4, CustomMovetutor_FreezeDrymoves2_EventScript_Cerebrawl
	case 5, CustomMovetutor_FreezeDrymoves2_EventScript_Golden_Fire
	case 6, CustomMovetutor_FreezeDrymoves2_EventScript_Malice_Thorn
	case 7, CustomMovetutor_FreezeDrymoves2_EventScript_Faelight_Jab
	case 8, CustomMovetutor_FreezeDrymoves2_EventScript_Freeze_Dry
	case 9, CustomMovetutor_FreezeDrymoves2_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_FreezeDrymoves2_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_FreezeDrymoves2_EventScript_SurgeClamp::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SURGE_CLAMP
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_Smelt_Shot::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SMELT_SHOT
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_BoilingPulse::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_BOILINGPULSE
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_Sap_Bomb::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SAP_BOMB
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_Cerebrawl::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_CEREBRAWL
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_Golden_Fire::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_GOLDEN_FIRE
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_Malice_Thorn::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_MALICE_THORN
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_Faelight_Jab::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_FAELIGHT_JAB
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_Freeze_Dry::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_FREEZE_DRY
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_FreezeDrymoves2_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox CustomMovetutor_FreezeDrymoves2_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CustomMovetutor_FreezeDrymoves2_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, CustomMovetutor_FreezeDrymoves2_EventScript_TeachTutorMove
	msgbox CustomMovetutor_FreezeDrymoves2_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ChooseNewMove
	end

CustomMovetutor_FreezeDrymoves2_EventScript_TeachTutorMove::
	msgbox CustomMovetutor_FreezeDrymoves2_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, CustomMovetutor_FreezeDrymoves2_EventScript_CancelChooseMon
	msgbox CustomMovetutor_FreezeDrymoves2_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

CustomMovetutor_FreezeDrymoves2_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, CustomMovetutor_FreezeDrymoves2_EventScript_ChooseNewTutorMove
	goto CustomMovetutor_FreezeDrymoves2_EventScript_ChooseNewRightTutorMove
	end

CustomMovetutor_FreezeDrymoves2_Text_TutorIntro:
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON special\l"
	.string "moves that do Super Effective damage,\p"
	.string "against types that usually resist.\n"
	.string "They are wonderfully usefull moves!\l"
	.string "Now which one strikes your interest?!$"

CustomMovetutor_FreezeDrymoves2_Text_TutorWelcomeBack:
	.string "Buhahaha!\p"
	.string "Are you back to learn more\n"
	.string "of my wonderfull POKéMON moves?$"

CustomMovetutor_FreezeDrymoves2_Text_TeachWhichMove:
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

CustomMovetutor_FreezeDrymoves2_Text_MoveWillBeXBattlePoints:
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

CustomMovetutor_FreezeDrymoves2_Text_TeachMoveToWhichMon:
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

CustomMovetutor_FreezeDrymoves2_Text_HaventGotEnoughPoints:
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

CustomMovetutor_FreezeDrymoves2_Text_IllTakeBattlePoints:
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

CustomMovetutor_FreezeDrymoves2_Text_YouDontWantTo:
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_FreezeDrymoves2_Text_SurgeClampDesc::
	.string "Steel Type\n"
	.string "hits Electric for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_Smelt_ShotDesc::
	.string "Fire Type\n"
	.string "hits Rock for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_BoilingPulseDesc::
	.string "Water Type\n"
	.string "hits Grass for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_Sap_BombDesc::
	.string "Grass Type\n"
	.string "hits Fire for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_CerebrawlDesc::
	.string "Psychic Type\n"
	.string "hits Psychic for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_Golden_FireDesc::
	.string "Dragon Type\n"
	.string "hits Fairy for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_Malice_ThornDesc::
	.string "Dark Type\n"
	.string "hits Fairy for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_Faelight_JabDesc::
	.string "Fairy Type\n"
	.string "hits Ghost for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_Text_Freeze_DryDesc::
	.string "Ice Type\n"
	.string "hits Water for\n"
	.string "Super Effective.$"

CustomMovetutor_FreezeDrymoves2_EventScript_ExitTutorMoveSelect::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_FreezeDrymoves2_EventScript_CancelChooseMon::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_FreezeDrymoves2_EventScript_ChooseNewRightTutorMove::
	.string "Ah! Yes yes!\n"
	.string "Fine choice, fine choice!\p"
	.string "Now its only a matter of,\n"
	.string "who I should teach this move!$"




CustomMovetutor_Slicemoves_EventScript::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, CustomMovetutor_Slicemoves_EventScript_AlreadyMetTutor
	msgbox CustomMovetutor_Slicemoves_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto CustomMovetutor_Slicemoves_EventScript_ChooseTutorMove
	end

CustomMovetutor_Slicemoves_EventScript_AlreadyMetTutor::
	msgbox CustomMovetutor_Slicemoves_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto CustomMovetutor_Slicemoves_EventScript_ChooseTutorMove
	end

CustomMovetutor_Slicemoves_EventScript_ChooseTutorMove::
	message CustomMovetutor_Slicemoves_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_Slicemoves_EventScript_ObsidianEdge
	case 1, CustomMovetutor_Slicemoves_EventScript_FeatherBlade
	case 2, CustomMovetutor_Slicemoves_EventScript_Pixie_Cutter
	case 3, CustomMovetutor_Slicemoves_EventScript_Shard_Slice
	case 4, CustomMovetutor_Slicemoves_EventScript_SpiritSickle
	case 5, CustomMovetutor_Slicemoves_EventScript_VolcanicEdge
	case 6, CustomMovetutor_Slicemoves_EventScript_Ascalon_Slash
	case 7, CustomMovetutor_Slicemoves_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_Slicemoves_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_Slicemoves_EventScript_ChooseNewTutorMove::
	message CustomMovetutor_Slicemoves_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_Slicemoves_EventScript_ObsidianEdge
	case 1, CustomMovetutor_Slicemoves_EventScript_FeatherBlade
	case 2, CustomMovetutor_Slicemoves_EventScript_Pixie_Cutter
	case 3, CustomMovetutor_Slicemoves_EventScript_Shard_Slice
	case 4, CustomMovetutor_Slicemoves_EventScript_SpiritSickle
	case 5, CustomMovetutor_Slicemoves_EventScript_VolcanicEdge
	case 6, CustomMovetutor_Slicemoves_EventScript_Ascalon_Slash
	case 7, CustomMovetutor_Slicemoves_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_Slicemoves_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_Slicemoves_EventScript_ObsidianEdge::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_OBSIDIANEDGE
	goto CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Slicemoves_EventScript_FeatherBlade::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_FEATHERBLADE
	goto CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Slicemoves_EventScript_Pixie_Cutter::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_PIXIE_CUTTER
	goto CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Slicemoves_EventScript_Shard_Slice::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SHARD_SLICE
	goto CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Slicemoves_EventScript_SpiritSickle::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SPIRITSICKLE
	goto CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Slicemoves_EventScript_VolcanicEdge::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_VOLCANICEDGE
	goto CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Slicemoves_EventScript_Ascalon_Slash::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_ASCALON_SLASH
	goto CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection
	end


CustomMovetutor_Slicemoves_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox CustomMovetutor_Slicemoves_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CustomMovetutor_Slicemoves_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, CustomMovetutor_Slicemoves_EventScript_TeachTutorMove
	msgbox CustomMovetutor_Slicemoves_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto CustomMovetutor_Slicemoves_EventScript_ChooseNewMove
	end

CustomMovetutor_Slicemoves_EventScript_TeachTutorMove::
	msgbox CustomMovetutor_Slicemoves_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, CustomMovetutor_Slicemoves_EventScript_CancelChooseMon
	msgbox CustomMovetutor_Slicemoves_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

CustomMovetutor_Slicemoves_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, CustomMovetutor_Slicemoves_EventScript_ChooseNewTutorMove
	goto CustomMovetutor_Slicemoves_EventScript_ChooseNewRightTutorMove
	end

CustomMovetutor_Slicemoves_Text_TutorIntro:
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON strong\l"
	.string "Slicing moves not found anywhere else,\p"
	.string "I see you are interested.\n"
	.string "They are wonderfully usefull moves!\l"
	.string "Now which one strikes your interest?!$"

CustomMovetutor_Slicemoves_Text_TutorWelcomeBack:
	.string "Buhahaha!\p"
	.string "Are you back to learn more\n"
	.string "of my POWERFUL Slicing moves?$"

CustomMovetutor_Slicemoves_Text_TeachWhichMove:
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

CustomMovetutor_Slicemoves_Text_MoveWillBeXBattlePoints:
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

CustomMovetutor_Slicemoves_Text_TeachMoveToWhichMon:
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

CustomMovetutor_Slicemoves_Text_HaventGotEnoughPoints:
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

CustomMovetutor_Slicemoves_Text_IllTakeBattlePoints:
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

CustomMovetutor_Slicemoves_Text_YouDontWantTo:
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Slicemoves_Text_ObsidianEdgeDesc::
	.string "A Slashing Move\n"
	.string "leaves user vulnerable\n"
	.string "for one turn.$"

CustomMovetutor_Slicemoves_Text_FeatherBladeDesc::
	.string "Flying type move\n"
	.string "Hits 2-3 turns\n"
	.string "then confuses user.$"

CustomMovetutor_Slicemoves_Text_Pixie_CutterDesc::
	.string "Fairy Type\n"
	.string "Slashes the foe\n"
	.string "twice in a row.$"

CustomMovetutor_Slicemoves_Text_Shard_Slice::
	.string "Slashes with a shard\n"
	.string "of ceramics or glass\n"
	.string "High Crit chance.$"

CustomMovetutor_Slicemoves_Text_SpiritSickleDesc::
	.string "Ghost Type\n"
	.string "Slashes foe, hurts\n"
	.string "user with recoil .$"

CustomMovetutor_Slicemoves_Text_VolcanicEdgeDesc::
	.string "A Slashing Move\n"
	.string "does both Fire and\n"
	.string "Rock type damage.$"

CustomMovetutor_Slicemoves_Text_Ascalon_SlashDesc::
	.string "Steel Type\n"
	.string "hits Dragon for\n"
	.string "Super Effective.$"

CustomMovetutor_Slicemoves_EventScript_ExitTutorMoveSelect::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Slicemoves_EventScript_CancelChooseMon::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Slicemoves_EventScript_ChooseNewRightTutorMove::
	.string "Ah! Yes yes!\n"
	.string "Fine choice, fine choice!\p"
	.string "Now its only a matter of,\n"
	.string "who I should teach this move!$"






CustomMovetutor_Recoilmoves_EventScript::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, CustomMovetutor_Recoilmoves_EventScript_AlreadyMetTutor
	msgbox CustomMovetutor_Recoilmoves_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto CustomMovetutor_Recoilmoves_EventScript_ChooseTutorMove
	end

CustomMovetutor_Recoilmoves_EventScript_AlreadyMetTutor::
	msgbox CustomMovetutor_Recoilmoves_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto CustomMovetutor_Recoilmoves_EventScript_ChooseTutorMove
	end

CustomMovetutor_Recoilmoves_EventScript_ChooseTutorMove::
	message CustomMovetutor_Recoilmoves_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_Recoilmoves_EventScript_CritterCrash
	case 1, CustomMovetutor_Recoilmoves_EventScript_Spite_Spiral
	case 2, CustomMovetutor_Recoilmoves_EventScript_TyrantPlunge
	case 3, CustomMovetutor_Recoilmoves_EventScript_Moon_Crash
	case 4, CustomMovetutor_Recoilmoves_EventScript_Spine_Rattle
	case 5, CustomMovetutor_Recoilmoves_EventScript_PhantomDrive
	case 6, CustomMovetutor_Recoilmoves_EventScript_Quake_Crash
	case 7, CustomMovetutor_Recoilmoves_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_Recoilmoves_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_Recoilmoves_EventScript_ChooseNewTutorMove::
	message CustomMovetutor_Recoilmoves_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_Recoilmoves_EventScript_CritterCrash
	case 1, CustomMovetutor_Recoilmoves_EventScript_Spite_Spiral
	case 2, CustomMovetutor_Recoilmoves_EventScript_TyrantPlunge
	case 3, CustomMovetutor_Recoilmoves_EventScript_Moon_Crash
	case 4, CustomMovetutor_Recoilmoves_EventScript_Spine_Rattle
	case 5, CustomMovetutor_Recoilmoves_EventScript_PhantomDrive
	case 6, CustomMovetutor_Recoilmoves_EventScript_Quake_Crash
	case 7, CustomMovetutor_Recoilmoves_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_Recoilmoves_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_Recoilmoves_EventScript_CritterCrash::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_CRITTERCRASH 
	goto CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves_EventScript_Spite_Spiral::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SPITE_SPIRAL
	goto CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves_EventScript_TyrantPlunge::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_TYRANTPLUNGE
	goto CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves_EventScript_Moon_Crash::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_MOON_CRASH
	goto CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves_EventScript_Spine_Rattle::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_SPINE_RATTLE
	goto CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves_EventScript_PhantomDrive::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_PHANTOMDRIVE
	goto CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves_EventScript_Quake_Crash::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_QUAKE_CRASH
	goto CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox CustomMovetutor_Recoilmoves_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CustomMovetutor_Recoilmoves_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, CustomMovetutor_Recoilmoves_EventScript_TeachTutorMove
	msgbox CustomMovetutor_Recoilmoves_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto CustomMovetutor_Recoilmoves_EventScript_ChooseNewMove
	end

CustomMovetutor_Recoilmoves_EventScript_TeachTutorMove::
	msgbox CustomMovetutor_Recoilmoves_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, CustomMovetutor_Recoilmoves_EventScript_CancelChooseMon
	msgbox CustomMovetutor_Recoilmoves_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

CustomMovetutor_Recoilmoves_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, CustomMovetutor_Recoilmoves_EventScript_ChooseNewTutorMove
	goto CustomMovetutor_Recoilmoves_EventScript_ChooseNewRightTutorMove
	end

CustomMovetutor_Recoilmoves_Text_TutorIntro:
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON strong\l"
	.string "but rare recoil moves ,\p"
	.string "I see you are interested.\n"
	.string "They are wonderfully usefull moves!\l"
	.string "Now which one strikes your interest?!$"

CustomMovetutor_Recoilmoves_Text_TutorWelcomeBack:
	.string "Buhahaha!\p"
	.string "Are you back to learn more\n"
	.string "of my POWERFUL recoil moves?$"

CustomMovetutor_Recoilmoves_Text_TeachWhichMove:
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

CustomMovetutor_Recoilmoves_Text_MoveWillBeXBattlePoints:
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

CustomMovetutor_Recoilmoves_Text_TeachMoveToWhichMon:
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

CustomMovetutor_Recoilmoves_Text_HaventGotEnoughPoints:
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

CustomMovetutor_Recoilmoves_Text_IllTakeBattlePoints:
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

CustomMovetutor_Recoilmoves_Text_YouDontWantTo:
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Recoilmoves_Text_CritterCrashDesc::
	.string "A BUG type move\n"
	.string "charges with stinger\n"
	.string "but hurts user.$"

CustomMovetutor_Recoilmoves_Text_Spite_SpiralDesc::
	.string "Dangerous Dark type\n"
	.string "move that also hurts\n"
	.string "the user.$"

CustomMovetutor_Recoilmoves_Text_TyrantPlungeDesc::
	.string "A Strong Dragon\n"
	.string "type move that also\n"
	.string "hurts the user.$"

CustomMovetutor_Recoilmoves_Text_Moon_Crash::
	.string "A full body Fairy\n"
	.string "type slam that\n"
	.string "Hurts the user.$"

CustomMovetutor_Recoilmoves_Text_Spine_RattleDesc::
	.string "Dangerous Fighting\n"
	.string "type move with a\n"
	.string "high chance to PAR.$"

CustomMovetutor_Recoilmoves_Text_PhantomDriveDesc::
	.string "Ghost type move\n"
	.string "that also hurts\n"
	.string "the user.$"

CustomMovetutor_Recoilmoves_Text_Quake_CrashDesc::
	.string "Dangerous Ground\n"
	.string "type move that also\n"
	.string "hurts the user.$"

CustomMovetutor_Recoilmoves_EventScript_ExitTutorMoveSelect::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Recoilmoves_EventScript_CancelChooseMon::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Recoilmoves_EventScript_ChooseNewRightTutorMove::
	.string "Ah! Yes yes!\n"
	.string "Fine choice, fine choice!\p"
	.string "Now its only a matter of,\n"
	.string "who I should teach this move!$"






CustomMovetutor_Recoilmoves2_EventScript::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, CustomMovetutor_Recoilmoves2_EventScript_AlreadyMetTutor
	msgbox CustomMovetutor_Recoilmoves2_Text_TutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto CustomMovetutor_Recoilmoves2_EventScript_ChooseTutorMove
	end

CustomMovetutor_Recoilmoves2_EventScript_AlreadyMetTutor::
	msgbox CustomMovetutor_Recoilmoves2_Text_TutorWelcomeBack, MSGBOX_DEFAULT
	goto CustomMovetutor_Recoilmoves2_EventScript_ChooseTutorMove
	end

CustomMovetutor_Recoilmoves2_EventScript_ChooseTutorMove::
	message CustomMovetutor_Recoilmoves2_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_Recoilmoves2_EventScript_GlacierCrash
	case 1, CustomMovetutor_Recoilmoves2_EventScript_Venom_Rush
	case 2, CustomMovetutor_Recoilmoves2_EventScript_Mind_Shatter
	case 3, CustomMovetutor_Recoilmoves2_EventScript_Neuro_Crash
	case 4, CustomMovetutor_Recoilmoves2_EventScript_FerroStrmSlm
	case 5, CustomMovetutor_Recoilmoves2_EventScript_THUNDERCRASH
	case 6, CustomMovetutor_Recoilmoves2_EventScript_HEAD_SMASH
	case 7, CustomMovetutor_Recoilmoves2_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_Recoilmoves2_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_Recoilmoves2_EventScript_ChooseNewTutorMove::
	message CustomMovetutor_Recoilmoves2_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, CustomMovetutor_Recoilmoves2_EventScript_GlacierCrash
	case 1, CustomMovetutor_Recoilmoves2_EventScript_Venom_Rush
	case 2, CustomMovetutor_Recoilmoves2_EventScript_Mind_Shatter
	case 3, CustomMovetutor_Recoilmoves2_EventScript_Neuro_Crash
	case 4, CustomMovetutor_Recoilmoves2_EventScript_FerroStrmSlm
	case 5, CustomMovetutor_Recoilmoves2_EventScript_THUNDERCRASH
	case 6, CustomMovetutor_Recoilmoves2_EventScript_HEAD_SMASH
	case 7, CustomMovetutor_Recoilmoves2_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, CustomMovetutor_Recoilmoves2_EventScript_ExitTutorMoveSelect
	end

CustomMovetutor_Recoilmoves2_EventScript_GlacierCrash::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_GLACIERCRASH
	goto CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves2_EventScript_Venom_Rush::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_VENOM_RUSH
	goto CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves2_EventScript_Mind_Shatter::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_MIND_SHATTER
	goto CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves2_EventScript_Neuro_Crash::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_NEURO_CRUSH
	goto CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves2_EventScript_FerroStrmSlm::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_FERROSTRMSLM
	goto CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves2_EventScript_THUNDERCRASH::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_THUNDERCRASH
	goto CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves2_EventScript_HEAD_SMASH::
	setvar VAR_0x8008, 0
	setvar VAR_0x8005, MOVE_HEAD_SMASH
	goto CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection
	end

CustomMovetutor_Recoilmoves2_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox CustomMovetutor_Recoilmoves2_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CustomMovetutor_Recoilmoves2_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, CustomMovetutor_Recoilmoves2_EventScript_TeachTutorMove
	msgbox CustomMovetutor_Recoilmoves2_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto CustomMovetutor_Recoilmoves2_EventScript_ChooseNewMove
	end

CustomMovetutor_Recoilmoves2_EventScript_TeachTutorMove::
	msgbox CustomMovetutor_Recoilmoves2_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, CustomMovetutor_Recoilmoves2_EventScript_CancelChooseMon
	msgbox CustomMovetutor_Recoilmoves2_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

CustomMovetutor_Recoilmoves2_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, CustomMovetutor_Recoilmoves2_EventScript_ChooseNewTutorMove
	goto CustomMovetutor_Recoilmoves2_EventScript_ChooseNewRightTutorMove
	end

CustomMovetutor_Recoilmoves2_Text_TutorIntro:
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON strong\l"
	.string "but rare recoil moves ,\p"
	.string "I see you are interested.\n"
	.string "They are wonderfully usefull moves!\l"
	.string "Now which one strikes your interest?!$"

CustomMovetutor_Recoilmoves2_Text_TutorWelcomeBack:
	.string "Buhahaha!\p"
	.string "Are you back to learn more\n"
	.string "of my POWERFUL Slicing moves?$"

CustomMovetutor_Recoilmoves2_Text_TeachWhichMove:
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

CustomMovetutor_Recoilmoves2_Text_MoveWillBeXBattlePoints:
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

CustomMovetutor_Recoilmoves2_Text_TeachMoveToWhichMon:
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

CustomMovetutor_Recoilmoves2_Text_HaventGotEnoughPoints:
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

CustomMovetutor_Recoilmoves2_Text_IllTakeBattlePoints:
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

CustomMovetutor_Recoilmoves2_Text_YouDontWantTo:
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Recoilmoves2_Text_GlacierCrashDesc::
	.string "Dangerous Ice type\n"
	.string "move that will also\n"
	.string "hurt the user.$"

CustomMovetutor_Recoilmoves2_Text_Venom_RushDesc::
	.string "Powerfull Poison\n"
	.string "type attack that also\n"
	.string "hurts the user.$"

CustomMovetutor_Recoilmoves2_Text_Mind_ShatterDesc::
	.string "Psychic Type\n"
	.string "Unleashes mental power\n"
	.string "that hurts the user.$"

CustomMovetutor_Recoilmoves2_Text_Neuro_Crash::
	.string "Phys Psychic type\n"
	.string "move, that will also\n"
	.string "Hurt the user.$"

CustomMovetutor_Recoilmoves2_Text_FerroStrmSlmDesc::
	.string "Steel type move\n"
	.string "high chance to\n"
	.string "set steel spikes,\n"
	.string "that also hurts\n"
	.string "user with recoil .$"

CustomMovetutor_Recoilmoves2_Text_THUNDERCRASHDesc::
	.string "Because Wild Charge\n"
	.string "just isn't enough\n"
	.string "Electric type.$"

CustomMovetutor_Recoilmoves2_Text_HEAD_SMASHDesc::
	.string "Rock type move\n"
	.string "That also hurts\n"
	.string "the user with recoil.$"

CustomMovetutor_Recoilmoves2_EventScript_ExitTutorMoveSelect::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Recoilmoves2_EventScript_CancelChooseMon::
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

CustomMovetutor_Recoilmoves2_EventScript_ChooseNewRightTutorMove::
	.string "Ah! Yes yes!\n"
	.string "Fine choice, fine choice!\p"
	.string "Now its only a matter of,\n"
	.string "who I should teach this move!$"



