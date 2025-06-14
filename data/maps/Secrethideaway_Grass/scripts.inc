Secrethideaway_Grass_MapScripts::
	.byte 0

STARTERHUBS_EVENTSCRIPT_STATIC_BULBASAUR::
	lock
	faceplayer
	setwildbattle SPECIES_BULBASAUR, 10
	waitse
	playmoncry SPECIES_BULBASAUR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_CHIKORITA::
	lock
	faceplayer
	setwildbattle SPECIES_CHIKORITA, 10
	waitse
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_TREECKO::
	lock
	faceplayer
	setwildbattle SPECIES_TREECKO, 10
	waitse
	playmoncry SPECIES_TREECKO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_TURTWIG::
	lock
	faceplayer
	setwildbattle SPECIES_TURTWIG, 10
	waitse
	playmoncry SPECIES_TURTWIG, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_SNIVY::
	lock
	faceplayer
	setwildbattle SPECIES_SNIVY, 10
	waitse
	playmoncry SPECIES_SNIVY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_CHESPIN::
	lock
	faceplayer
	setwildbattle SPECIES_CHESPIN, 10
	waitse
	playmoncry SPECIES_CHESPIN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_ROWLET::
	lock
	faceplayer
	setwildbattle SPECIES_ROWLET, 10
	waitse
	playmoncry SPECIES_ROWLET, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_GROOKEY::
	lock
	faceplayer
	setwildbattle SPECIES_GROOKEY, 10
	waitse
	playmoncry SPECIES_GROOKEY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_EVENTSCRIPT_STATIC_SPRIGATITO::
	lock
	faceplayer
	setwildbattle SPECIES_SPRIGATITO, 10
	waitse
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

STARTERHUBS_GRASS_NPC_EVENTSCRIPT::
    msgbox GRASSHUBNPC_Text_EXPLAIN, MSGBOX_NPC
    end

GRASSHUBNPC_Text_EXPLAIN:
    .string "The professor asked me to tend this\n"
    .string "garden they've been keeping. The\n"
    .string "Grass-type POKéMON here are rare.\p"
    .string "I think that's why they prefer this\n"
    .string "place to stay a secret. It's quiet,\n"
    .string "peaceful perfect for them!$"


