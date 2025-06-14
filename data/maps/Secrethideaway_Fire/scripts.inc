Secrethideaway_Fire_MapScripts::
	.byte 0

STARTERHUBS_EVENTSCRIPT_STATIC_CHARMANDER::
	lock
	faceplayer
	setwildbattle SPECIES_CHARMANDER, 10
	waitse
	playmoncry SPECIES_CHARMANDER, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_CYNDAQUIL::
	lock
	faceplayer
	setwildbattle SPECIES_CYNDAQUIL, 10
	waitse
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_TORCHIC::
	lock
	faceplayer
	setwildbattle SPECIES_TORCHIC, 10
	waitse
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_CHIMCHAR::
	lock
	faceplayer
	setwildbattle SPECIES_CHIMCHAR, 10
	waitse
	playmoncry SPECIES_CHIMCHAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_TEPIG::
	lock
	faceplayer
	setwildbattle SPECIES_TEPIG, 10
	waitse
	playmoncry SPECIES_TEPIG, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_FENNEKIN::
	lock
	faceplayer
	setwildbattle SPECIES_FENNEKIN, 10
	waitse
	playmoncry SPECIES_FENNEKIN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_LITTEN::
	lock
	faceplayer
	setwildbattle SPECIES_LITTEN, 10
	waitse
	playmoncry SPECIES_LITTEN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_SCORBUNNY::
	lock
	faceplayer
	setwildbattle SPECIES_SCORBUNNY, 10
	waitse
	playmoncry SPECIES_SCORBUNNY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_FUECOCO::
	lock
	faceplayer
	setwildbattle SPECIES_FUECOCO, 10
	waitse
	playmoncry SPECIES_FUECOCO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end


STARTERHUBS_FIRE_NPC_EVENTSCRIPT::
    msgbox FIREHUBNPC_Text_EXPLAIN, MSGBOX_NPC
    end

FIREHUBNPC_Text_EXPLAIN:
    .string "MAN, THIS PLACE IS GREAT!\n"
    .string "A bunch of cool Fire-type POKéMON\n"
    .string "live here you won't find them elsewhere!\p"
    .string "I think the Professor collected these\n"
    .string "POKéMON over time. It's like their own\n"
    .string "little sanctuary!$"


