Spikebluff_MapScripts::
	.byte 0

Eventscript_Static_Wingull_lv10::
	lock
	faceplayer
	setwildbattle SPECIES_WINGULL, 10
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	release
	end

