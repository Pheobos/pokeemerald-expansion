LabratoryFloor2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LabratoryFloor2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LabratoryFloor2_OnTransition::
	end

.set LOCALID_NURSE, 1

Birchslabfloor2_EventScript_Nursejoy::
	lock
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse 
	waitbuttonpress
	release
	end


LabF2_EventScript_Nurse::
    setvar VAR_0x800B, LOCALID_NURSE
    call Common_EventScript_PkmnCenterNurse
    closemessage
    waitmessage
    waitbuttonpress
    release
    end


LabratoryFloor2_EventScript_Nurse_test::
	msgbox LabratoryFloor2_Text_Test_Dialogue, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LabF2_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, LabF2_EventScript_Declinerest
	end

LabratoryFloor2_Text_Test_Dialogue::
	.string "Hi and welcome to the EV-Center!\n"
	.string "Do your Pokémon need healing?$"

LabF2_EventScript_Rest::
	msgbox LabF2_Text_TimeRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	end

LabF2_Text_TimeRestUp::
	.string "I'll take care of your Pokémon,\n"
	.string "One moment please!$"

LabF2_EventScript_Declinerest::
	msgbox LabF2_EventScript_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release
	end

LabF2_EventScript_Text_DontNeedToBeShy:
	.string "Is that so?\n"
	.string "You don't need to be shy about it.$"


EVGrindTrainer1_HP_EventScript::
    lock
    faceplayer
    msgbox EVGrindTrainer1_HP_Text_Intro, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EVGrindTrainer1_HP_Battle_EventScript
	goto_if_eq VAR_RESULT, NO, EVGrindTrainer1_HP_Decline_EventScript
    release
    end

EVGrindTrainer1_HP_Text_Intro:
   .string "Want to train your Pokémon's\n HP EVs against me?$"

EVGrindTrainer1_HP_Battle_EventScript:
	msgbox EVGrindTrainer1_HP_Battle_Intro_Text, MSGBOX_DEFAULT
	trainerbattle_no_intro EV_TRAINER_HP, EVGrindTrainer1_HP_Text_Defeat
	release
	end

EVGrindTrainer1_HP_Battle_Intro_Text:
	.string "Okie-dokie! Let's get tuff!$"

EVGrindTrainer1_HP_Decline_EventScript:
	msgbox EVGrindTrainer1_HP_Text_Decline, MSGBOX_DEFAULT
	release
	end

EVGrindTrainer1_HP_Text_Decline:
    .string "That's okay!\nI'll be here if you need me.$"

EVGrindTrainer1_HP_Text_Start:
    .string "Let’s get those effort values up!$"

EVGrindTrainer1_HP_Text_Defeat:
    .string "Good work!\nCome back anytime!$"


EVGrindTrainer1_ATTACK_EventScript::
    lock
    faceplayer
    msgbox EVGrindTrainer1_ATTACK_Text_Intro, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EVGrindTrainer1_ATTACK_Battle_EventScript
    goto_if_eq VAR_RESULT, NO, EVGrindTrainer1_ATTACK_Decline_EventScript
    release
    end

EVGrindTrainer1_ATTACK_Text_Intro:
    .string "Want to train your Pokémon's\n ATTACK EVs against me?$"

EVGrindTrainer1_ATTACK_Battle_EventScript:
	msgbox EVGrindTrainer1_ATTACK_Battle_Intro_Text, MSGBOX_DEFAULT
	trainerbattle_no_intro EV_TRAINER_ATTACK, EVGrindTrainer1_ATTACK_Text_Defeat
	release
	end

EVGrindTrainer1_ATTACK_Battle_Intro_Text:
	.string "Okie-dokie! Let's get tuff!$"

EVGrindTrainer1_ATTACK_Decline_EventScript:
	msgbox EVGrindTrainer1_ATTACK_Text_Decline, MSGBOX_DEFAULT
	release
	end

EVGrindTrainer1_ATTACK_Text_Decline:
    .string "That's okay!\nI'll be here if you need me.$"

EVGrindTrainer1_ATTACK_Text_Start:
    .string "Let’s get those effort values up!$"

EVGrindTrainer1_ATTACK_Text_Defeat:
    .string "Good work!\nCome back anytime!$"


EVGrindTrainer1_DEFENSE_EventScript::
    lock
    faceplayer
    msgbox EVGrindTrainer1_DEFENSE_Intro, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EVGrindTrainer1_DEFENSE_Battle_EventScript
    goto_if_eq VAR_RESULT, NO, EVGrindTrainer1_DEFENSE_Decline_EventScript
    release
    end

EVGrindTrainer1_DEFENSE_Intro:
    .string "Want to train your Pokémon's\n DEFENSE EVs against me?$"

EVGrindTrainer1_DEFENSE_Battle_EventScript:
	msgbox EVGrindTrainer1_DEFENSE_Battle_Intro_Text, MSGBOX_DEFAULT
	trainerbattle_no_intro EV_TRAINER_DEFENSE, EVGrindTrainer1_DEFENSE_Text_Defeat
	release
	end

EVGrindTrainer1_DEFENSE_Battle_Intro_Text:
	.string "Okie-dokie! Let's get tuff!$"

EVGrindTrainer1_DEFENSE_Decline_EventScript:
	msgbox EVGrindTrainer1_DEFENSE_Text_Decline, MSGBOX_DEFAULT
	release
	end

EVGrindTrainer1_DEFENSE_Text_Decline:
    .string "That's okay!\nI'll be here if you need me.$"

EVGrindTrainer1_DEFENSE_Text_Start:
    .string "Let’s get those effort values up!$"

EVGrindTrainer1_DEFENSE_Text_Defeat:
    .string "Good work!\nCome back anytime!$"

EVGrindTrainer1_SPATTACK_EventScript::
    lock
    faceplayer
    msgbox EVGrindTrainer1_SPATTACK_Intro, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EVGrindTrainer1_SPATTACK_Battle_EventScript
    goto_if_eq VAR_RESULT, NO, EVGrindTrainer1_SPATTACK_Decline_EventScript

    release
    end

EVGrindTrainer1_SPATTACK_Intro:
    .string "Want to train your Pokémon's\n SPATTACK EVs against me?$"

EVGrindTrainer1_SPATTACK_Battle_EventScript:
	msgbox EVGrindTrainer1_SPATTACK_Battle_Intro_Text, MSGBOX_DEFAULT
	trainerbattle_no_intro EV_TRAINER_SPATTACK, EVGrindTrainer1_SPATTACK_Text_Defeat
	release
	end

EVGrindTrainer1_SPATTACK_Battle_Intro_Text:
	.string "Okie-dokie! Let's get tuff!$"

EVGrindTrainer1_SPATTACK_Decline_EventScript:
	msgbox EVGrindTrainer1_SPATTACK_Text_Decline, MSGBOX_DEFAULT
	release
	end

EVGrindTrainer1_SPATTACK_Text_Decline:
    .string "That's okay!\nI'll be here if you need me.$"

EVGrindTrainer1_SPATTACK_Text_Start:
    .string "Let’s get those effort values up!$"

EVGrindTrainer1_SPATTACK_Text_Defeat:
    .string "Good work!\nCome back anytime!$"


EVGrindTrainer1_SPDEF_EventScript::
    lock
    faceplayer
    msgbox EVGrindTrainer1_SPDEF_Intro, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EVGrindTrainer1_SPDEF_Battle_EventScript
	goto_if_eq VAR_RESULT, NO, EVGrindTrainer1_SPDEF_Decline_EventScript
    release
    end

EVGrindTrainer1_SPDEF_Intro:
    .string "Want to train your Pokémon's\n SPDEF EVs against me?$"

EVGrindTrainer1_SPDEF_Battle_EventScript:
	msgbox EVGrindTrainer1_SPDEF_Battle_Intro_Text, MSGBOX_DEFAULT
	trainerbattle_no_intro EV_TRAINER_SPDEF, EVGrindTrainer1_SPDEF_Text_Defeat
	release
	end

EVGrindTrainer1_SPDEF_Battle_Intro_Text:
	.string "Okie-dokie! Let's get tuff!$"

EVGrindTrainer1_SPDEF_Decline_EventScript:
	msgbox EVGrindTrainer1_SPDEF_Text_Decline, MSGBOX_DEFAULT
	release
	end

EVGrindTrainer1_SPDEF_Text_Decline:
    .string "That's okay!\nI'll be here if you need me.$"

EVGrindTrainer1_SPDEF_Text_Start:
    .string "Let’s get those effort values up!$"

EVGrindTrainer1_SPDEF_Text_Defeat:
    .string "Good work!\nCome back anytime!$"

EVGrindTrainer1_SPEED_EventScript::
    lock
    faceplayer
    msgbox EVGrindTrainer1_SPEED_Intro, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EVGrindTrainer1_SPEED_Battle_EventScript
	goto_if_eq VAR_RESULT, NO, EVGrindTrainer1_SPEED_Decline_EventScript
    release
    end

EVGrindTrainer1_SPEED_Intro:
    .string "Want to train your Pokémon's\n SPEED EVs against me?$"

EVGrindTrainer1_SPEED_Battle_EventScript:
	msgbox EVGrindTrainer1_SPEED_Battle_Intro_Text, MSGBOX_DEFAULT
	trainerbattle_no_intro EV_TRAINER_SPEED, EVGrindTrainer1_SPEED_Text_Defeat
	release
	end

EVGrindTrainer1_SPEED_Battle_Intro_Text:
	.string "Okie-dokie! Let's get tuff!$"

EVGrindTrainer1_SPEED_Decline_EventScript:
	msgbox EVGrindTrainer1_SPEED_Text_Decline, MSGBOX_DEFAULT
	release
	end

EVGrindTrainer1_SPEED_Text_Decline:
    .string "That's okay!\nI'll be here if you need me.$"

EVGrindTrainer1_SPEED_Text_Start:
    .string "Let’s get those effort values up!$"

EVGrindTrainer1_SPEED_Text_Defeat:
    .string "Good work!\nCome back anytime!$"


