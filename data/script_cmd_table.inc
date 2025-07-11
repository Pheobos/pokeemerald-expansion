@ 'requests_effects' should be set to 1 if the command contains a call
@ to 'Script_RequestEffects', which allows it to be analyzed with
@ 'RunScriptImmediatelyUntilEffect'.
	.ifndef SCRIPT_CMD_TABLE_ENTRY_MACRO
	.set SCRIPT_CMD_TABLE_ENTRY_MACRO, 1
	.macro script_cmd_table_entry constant:req value:req, requests_effects=0
	.if ALLOCATE_SCRIPT_CMD_TABLE
	.if \requests_effects == 0
	.4byte \value
	.else
	.4byte \value + ROM_SIZE
	.endif
	.else
	enum \constant
	.endif
	.endm
	.endif


	enum_start
	.if ALLOCATE_SCRIPT_CMD_TABLE
	.align 2
gScriptCmdTable::
	.4byte ScrCmd_nop      	                        @ 0x00
	.4byte ScrCmd_nop1                              @ 0x01
	.4byte ScrCmd_end      	                        @ 0x02
	.4byte ScrCmd_return                            @ 0x03
	.4byte ScrCmd_call                              @ 0x04
	.4byte ScrCmd_goto                              @ 0x05
	.4byte ScrCmd_goto_if                           @ 0x06
	.4byte ScrCmd_call_if                           @ 0x07
	.4byte ScrCmd_gotostd                           @ 0x08
	.4byte ScrCmd_callstd                           @ 0x09
	.4byte ScrCmd_gotostd_if                        @ 0x0a
	.4byte ScrCmd_callstd_if                        @ 0x0b
	.4byte ScrCmd_returnram                         @ 0x0c
	.4byte ScrCmd_endram                            @ 0x0d
	.4byte ScrCmd_setmysteryeventstatus             @ 0x0e
	.4byte ScrCmd_loadword                          @ 0x0f
	.4byte ScrCmd_loadbyte                          @ 0x10
	.4byte ScrCmd_setptr                            @ 0x11
	.4byte ScrCmd_loadbytefromptr                   @ 0x12
	.4byte ScrCmd_setptrbyte                        @ 0x13
	.4byte ScrCmd_copylocal                         @ 0x14
	.4byte ScrCmd_copybyte                          @ 0x15
	.4byte ScrCmd_setvar                            @ 0x16
	.4byte ScrCmd_addvar                            @ 0x17
	.4byte ScrCmd_subvar                            @ 0x18
	.4byte ScrCmd_copyvar                           @ 0x19
	.4byte ScrCmd_setorcopyvar                      @ 0x1a
	.4byte ScrCmd_compare_local_to_local            @ 0x1b
	.4byte ScrCmd_compare_local_to_value            @ 0x1c
	.4byte ScrCmd_compare_local_to_ptr              @ 0x1d
	.4byte ScrCmd_compare_ptr_to_local              @ 0x1e
	.4byte ScrCmd_compare_ptr_to_value              @ 0x1f
	.4byte ScrCmd_compare_ptr_to_ptr                @ 0x20
	.4byte ScrCmd_compare_var_to_value              @ 0x21
	.4byte ScrCmd_compare_var_to_var                @ 0x22
	.4byte ScrCmd_callnative                        @ 0x23
	.4byte ScrCmd_gotonative                        @ 0x24
	.4byte ScrCmd_special                           @ 0x25
	.4byte ScrCmd_specialvar                        @ 0x26
	.4byte ScrCmd_waitstate                         @ 0x27
	.4byte ScrCmd_delay                             @ 0x28
	.4byte ScrCmd_setflag                           @ 0x29
	.4byte ScrCmd_clearflag                         @ 0x2a
	.4byte ScrCmd_checkflag                         @ 0x2b
	.4byte ScrCmd_initclock                         @ 0x2c
	.4byte ScrCmd_dotimebasedevents                 @ 0x2d
	.4byte ScrCmd_gettime                           @ 0x2e
	.4byte ScrCmd_playse                            @ 0x2f
	.4byte ScrCmd_waitse                            @ 0x30
	.4byte ScrCmd_playfanfare                       @ 0x31
	.4byte ScrCmd_waitfanfare                       @ 0x32
	.4byte ScrCmd_playbgm                           @ 0x33
	.4byte ScrCmd_savebgm                           @ 0x34
	.4byte ScrCmd_fadedefaultbgm                    @ 0x35
	.4byte ScrCmd_fadenewbgm                        @ 0x36
	.4byte ScrCmd_fadeoutbgm                        @ 0x37
	.4byte ScrCmd_fadeinbgm                         @ 0x38
	.4byte ScrCmd_warp                              @ 0x39
	.4byte ScrCmd_warpsilent                        @ 0x3a
	.4byte ScrCmd_warpdoor                          @ 0x3b
	.4byte ScrCmd_warphole                          @ 0x3c
	.4byte ScrCmd_warpteleport                      @ 0x3d
	.4byte ScrCmd_setwarp                           @ 0x3e
	.4byte ScrCmd_setdynamicwarp                    @ 0x3f
	.4byte ScrCmd_setdivewarp                       @ 0x40
	.4byte ScrCmd_setholewarp                       @ 0x41
	.4byte ScrCmd_getplayerxy                       @ 0x42
	.4byte ScrCmd_getpartysize                      @ 0x43
	.4byte ScrCmd_additem                           @ 0x44
	.4byte ScrCmd_removeitem                        @ 0x45
	.4byte ScrCmd_checkitemspace                    @ 0x46
	.4byte ScrCmd_checkitem                         @ 0x47
	.4byte ScrCmd_checkitemtype                     @ 0x48
	.4byte ScrCmd_addpcitem                         @ 0x49
	.4byte ScrCmd_checkpcitem                       @ 0x4a
	.4byte ScrCmd_adddecoration                     @ 0x4b
	.4byte ScrCmd_removedecoration                  @ 0x4c
	.4byte ScrCmd_checkdecor                        @ 0x4d
	.4byte ScrCmd_checkdecorspace                   @ 0x4e
	.4byte ScrCmd_applymovement                     @ 0x4f
	.4byte ScrCmd_applymovementat                   @ 0x50
	.4byte ScrCmd_waitmovement                      @ 0x51
	.4byte ScrCmd_waitmovementat                    @ 0x52
	.4byte ScrCmd_removeobject                      @ 0x53
	.4byte ScrCmd_removeobjectat                    @ 0x54
	.4byte ScrCmd_addobject                         @ 0x55
	.4byte ScrCmd_addobjectat                       @ 0x56
	.4byte ScrCmd_setobjectxy                       @ 0x57
	.4byte ScrCmd_showobjectat                      @ 0x58
	.4byte ScrCmd_hideobjectat                      @ 0x59
	.4byte ScrCmd_faceplayer                        @ 0x5a
	.4byte ScrCmd_turnobject                        @ 0x5b
	.4byte ScrCmd_trainerbattle                     @ 0x5c
	.4byte ScrCmd_dotrainerbattle                   @ 0x5d
	.4byte ScrCmd_gotopostbattlescript              @ 0x5e
	.4byte ScrCmd_gotobeatenscript                  @ 0x5f
	.4byte ScrCmd_checktrainerflag                  @ 0x60
	.4byte ScrCmd_settrainerflag                    @ 0x61
	.4byte ScrCmd_cleartrainerflag                  @ 0x62
	.4byte ScrCmd_setobjectxyperm                   @ 0x63
	.4byte ScrCmd_copyobjectxytoperm                @ 0x64
	.4byte ScrCmd_setobjectmovementtype             @ 0x65
	.4byte ScrCmd_waitmessage                       @ 0x66
	.4byte ScrCmd_message                           @ 0x67
	.4byte ScrCmd_closemessage                      @ 0x68
	.4byte ScrCmd_lockall                           @ 0x69
	.4byte ScrCmd_lock                              @ 0x6a
	.4byte ScrCmd_releaseall                        @ 0x6b
	.4byte ScrCmd_release                           @ 0x6c
	.4byte ScrCmd_waitbuttonpress                   @ 0x6d
	.4byte ScrCmd_yesnobox                          @ 0x6e
	.4byte ScrCmd_multichoice                       @ 0x6f
	.4byte ScrCmd_multichoicedefault                @ 0x70
	.4byte ScrCmd_multichoicegrid                   @ 0x71
	.4byte ScrCmd_drawbox                           @ 0x72
	.4byte ScrCmd_erasebox                          @ 0x73
	.4byte ScrCmd_drawboxtext                       @ 0x74
	.4byte ScrCmd_showmonpic                        @ 0x75
	.4byte ScrCmd_hidemonpic                        @ 0x76
	.4byte ScrCmd_showcontestpainting               @ 0x77
	.4byte ScrCmd_braillemessage                    @ 0x78
	.4byte ScrCmd_nop1                              @ 0x79
	.4byte ScrCmd_giveegg                           @ 0x7a
	.4byte ScrCmd_setmonmove                        @ 0x7b
	.4byte ScrCmd_checkpartymove                    @ 0x7c
	.4byte ScrCmd_bufferspeciesname                 @ 0x7d
	.4byte ScrCmd_bufferleadmonspeciesname          @ 0x7e
	.4byte ScrCmd_bufferpartymonnick                @ 0x7f
	.4byte ScrCmd_bufferitemname                    @ 0x80
	.4byte ScrCmd_bufferdecorationname              @ 0x81
	.4byte ScrCmd_buffermovename                    @ 0x82
	.4byte ScrCmd_buffernumberstring                @ 0x83
	.4byte ScrCmd_bufferstdstring                   @ 0x84
	.4byte ScrCmd_bufferstring                      @ 0x85
	.4byte ScrCmd_pokemart                          @ 0x86
	.4byte ScrCmd_pokemartdecoration                @ 0x87
	.4byte ScrCmd_pokemartdecoration2               @ 0x88
	.4byte ScrCmd_playslotmachine                   @ 0x89
	.4byte ScrCmd_setberrytree                      @ 0x8a
	.4byte ScrCmd_choosecontestmon                  @ 0x8b
	.4byte ScrCmd_startcontest                      @ 0x8c
	.4byte ScrCmd_showcontestresults                @ 0x8d
	.4byte ScrCmd_contestlinktransfer               @ 0x8e
	.4byte ScrCmd_random                            @ 0x8f
	.4byte ScrCmd_addmoney                          @ 0x90
	.4byte ScrCmd_removemoney                       @ 0x91
	.4byte ScrCmd_checkmoney                        @ 0x92
	.4byte ScrCmd_showmoneybox                      @ 0x93
	.4byte ScrCmd_hidemoneybox                      @ 0x94
	.4byte ScrCmd_updatemoneybox                    @ 0x95
	.4byte ScrCmd_getpokenewsactive                 @ 0x96
	.4byte ScrCmd_fadescreen                        @ 0x97
	.4byte ScrCmd_fadescreenspeed                   @ 0x98
	.4byte ScrCmd_setflashlevel                     @ 0x99
	.4byte ScrCmd_animateflash                      @ 0x9a
	.4byte ScrCmd_messageautoscroll                 @ 0x9b
	.4byte ScrCmd_dofieldeffect                     @ 0x9c
	.4byte ScrCmd_setfieldeffectargument            @ 0x9d
	.4byte ScrCmd_waitfieldeffect                   @ 0x9e
	.4byte ScrCmd_setrespawn                        @ 0x9f
	.4byte ScrCmd_checkplayergender                 @ 0xa0
	.4byte ScrCmd_playmoncry                        @ 0xa1
	.4byte ScrCmd_setmetatile                       @ 0xa2
	.4byte ScrCmd_resetweather                      @ 0xa3
	.4byte ScrCmd_setweather                        @ 0xa4
	.4byte ScrCmd_doweather                         @ 0xa5
	.4byte ScrCmd_setstepcallback                   @ 0xa6
	.4byte ScrCmd_setmaplayoutindex                 @ 0xa7
	.4byte ScrCmd_setobjectsubpriority              @ 0xa8
	.4byte ScrCmd_resetobjectsubpriority            @ 0xa9
	.4byte ScrCmd_createvobject                     @ 0xaa
	.4byte ScrCmd_turnvobject                       @ 0xab
	.4byte ScrCmd_opendoor                          @ 0xac
	.4byte ScrCmd_closedoor                         @ 0xad
	.4byte ScrCmd_waitdooranim                      @ 0xae
	.4byte ScrCmd_setdooropen                       @ 0xaf
	.4byte ScrCmd_setdoorclosed                     @ 0xb0
	.4byte ScrCmd_addelevmenuitem                   @ 0xb1
	.4byte ScrCmd_showelevmenu                      @ 0xb2
	.4byte ScrCmd_checkcoins                        @ 0xb3
	.4byte ScrCmd_addcoins                          @ 0xb4
	.4byte ScrCmd_removecoins                       @ 0xb5
	.4byte ScrCmd_setwildbattle                     @ 0xb6
	.4byte ScrCmd_dowildbattle                      @ 0xb7
	.4byte ScrCmd_setvaddress                       @ 0xb8
	.4byte ScrCmd_vgoto                             @ 0xb9
	.4byte ScrCmd_vcall                             @ 0xba
	.4byte ScrCmd_vgoto_if                          @ 0xbb
	.4byte ScrCmd_vcall_if                          @ 0xbc
	.4byte ScrCmd_vmessage                          @ 0xbd
	.4byte ScrCmd_vbuffermessage                    @ 0xbe
	.4byte ScrCmd_vbufferstring                     @ 0xbf
	.4byte ScrCmd_showcoinsbox                      @ 0xc0
	.4byte ScrCmd_hidecoinsbox                      @ 0xc1
	.4byte ScrCmd_updatecoinsbox                    @ 0xc2
	.4byte ScrCmd_incrementgamestat                 @ 0xc3
	.4byte ScrCmd_setescapewarp                     @ 0xc4
	.4byte ScrCmd_waitmoncry                        @ 0xc5
	.4byte ScrCmd_bufferboxname                     @ 0xc6
	.4byte ScrCmd_nop1                              @ 0xc7
	.4byte ScrCmd_nop1                              @ 0xc8
	.4byte ScrCmd_nop1                              @ 0xc9
	.4byte ScrCmd_nop1                              @ 0xca
	.4byte ScrCmd_nop1                              @ 0xcb
	.4byte ScrCmd_nop1                              @ 0xcc
	.4byte ScrCmd_setmodernfatefulencounter         @ 0xcd
	.4byte ScrCmd_checkmodernfatefulencounter       @ 0xce
	.4byte ScrCmd_trywondercardscript               @ 0xcf
	.4byte ScrCmd_nop1                              @ 0xd0
	.4byte ScrCmd_warpspinenter                     @ 0xd1
	.4byte ScrCmd_setmonmetlocation                 @ 0xd2
	.4byte ScrCmd_moverotatingtileobjects           @ 0xd3
	.4byte ScrCmd_turnrotatingtileobjects           @ 0xd4
	.4byte ScrCmd_initrotatingtilepuzzle            @ 0xd5
	.4byte ScrCmd_freerotatingtilepuzzle            @ 0xd6
	.4byte ScrCmd_warpmossdeepgym                   @ 0xd7
	.4byte ScrCmd_selectapproachingtrainer          @ 0xd8
	.4byte ScrCmd_lockfortrainer                    @ 0xd9
	.4byte ScrCmd_closebraillemessage               @ 0xda
	.4byte ScrCmd_messageinstant                    @ 0xdb
	.4byte ScrCmd_fadescreenswapbuffers             @ 0xdc
	.4byte ScrCmd_buffertrainerclassname            @ 0xdd
	.4byte ScrCmd_buffertrainername                 @ 0xde
	.4byte ScrCmd_pokenavcall                       @ 0xdf
	.4byte ScrCmd_warpwhitefade                     @ 0xe0
	.4byte ScrCmd_buffercontestname                 @ 0xe1
	.4byte ScrCmd_bufferitemnameplural              @ 0xe2
	.4byte ScrCmd_dynmultichoice                    @ 0xe3
	.4byte ScrCmd_dynmultipush                      @ 0xe4
	.4byte ScrCmd_SetObjectAsWildEncounter			@ 0xe5

	.if ALLOCATE_SCRIPT_CMD_TABLE
gScriptCmdTableEnd::
	.4byte ScrCmd_nop
	.endif
