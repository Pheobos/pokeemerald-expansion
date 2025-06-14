Route117_PokemonDayCare_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
	.byte 0

Route117_PokemonDayCare_OnTransition:
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end

ToxelEgg_EventScript_GiveToxelEgg::
    lock
    faceplayer
    goto_if_set FLAG_RECEIVED_TOXEL_EGG, ToxelEgg_EventScript_AlreadyReceived
    msgbox ToxelEgg_Text_OfferEgg, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, ToxelEgg_EventScript_Declined
    getpartysize
    goto_if_eq VAR_RESULT, PARTY_SIZE, ToxelEgg_EventScript_NoRoom
    msgbox ToxelEgg_Text_EnjoyEgg, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_TOXEL_EGG
    playfanfare MUS_OBTAIN_ITEM
    message ToxelEgg_Text_Received
    waitfanfare
    giveegg SPECIES_TOXEL
    release
    end

ToxelEgg_EventScript_AlreadyReceived::
    msgbox ToxelEgg_Text_AlreadyGotEgg, MSGBOX_DEFAULT
    release
    end

ToxelEgg_EventScript_NoRoom::
    msgbox ToxelEgg_Text_NoRoom, MSGBOX_DEFAULT
    release
    end

ToxelEgg_EventScript_Declined::
    msgbox ToxelEgg_Text_Declined, MSGBOX_DEFAULT
    release
    end

ToxelEgg_Text_OfferEgg:
    .string "I have an Egg here, which should \nbe sure to help you with\nthe local gym.\nWill you take care of it?$"

ToxelEgg_Text_EnjoyEgg:
    .string "Great! Take good care of it!$"

ToxelEgg_Text_Received:
    .string "{PLAYER} received the EGG.$"

ToxelEgg_Text_AlreadyGotEgg:
    .string "You're already caring for that Egg,\n don't forget about it!$"

ToxelEgg_Text_NoRoom:
    .string "You don't have enough room in your party\n for this Egg.$"

ToxelEgg_Text_Declined:
    .string "That's okay. Let me know if you change your mind.$"


