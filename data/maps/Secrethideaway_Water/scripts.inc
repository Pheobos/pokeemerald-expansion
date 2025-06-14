Secrethideaway_Water_MapScripts::
	.byte 0

STARTERHUBS_EVENTSCRIPT_STATIC_SQUIRTLE::
	lock
	faceplayer
	setwildbattle SPECIES_SQUIRTLE, 10
	waitse
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_TOTODILE::
	lock
	faceplayer
	setwildbattle SPECIES_TOTODILE, 10
	waitse
	playmoncry SPECIES_TOTODILE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_MUDKIP::
	lock
	faceplayer
	setwildbattle SPECIES_MUDKIP, 10
	waitse
	playmoncry SPECIES_MUDKIP, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_PIPLUP::
	lock
	faceplayer
	setwildbattle SPECIES_PIPLUP, 10
	waitse
	playmoncry SPECIES_PIPLUP, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_OSHAWOTT::
	lock
	faceplayer
	setwildbattle SPECIES_OSHAWOTT, 10
	waitse
	playmoncry SPECIES_OSHAWOTT, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_FROAKIE::
	lock
	faceplayer
	setwildbattle SPECIES_FROAKIE, 10
	waitse
	playmoncry SPECIES_FROAKIE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_POPPLIO::
	lock
	faceplayer
	setwildbattle SPECIES_POPPLIO, 10
	waitse
	playmoncry SPECIES_POPPLIO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_SOBBLE::
	lock
	faceplayer
	setwildbattle SPECIES_SOBBLE, 10
	waitse
	playmoncry SPECIES_SOBBLE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_QUAXLY::
	lock
	faceplayer
	setwildbattle SPECIES_QUAXLY, 10
	waitse
	playmoncry SPECIES_QUAXLY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end


STARTERHUBS_WATER_NPC_EVENTSCRIPT::
    msgbox WATERHUBNPC_Text_EXPLAIN, MSGBOX_NPC
    end

WATERHUBNPC_Text_EXPLAIN:
    .string "I know this is one of the Professor's\n"
    .string "so called secret hideouts where they\n"
    .string "keep FIRST PARTNER POKéMON.\p"
    .string "But honestly, I come here just because\n"
    .string "this place makes me feel at ease.\n"
    .string "It's incredibly soothing.$"


