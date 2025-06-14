.set LOCALID_OW_MON 1

Epineio_City_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Epineio_City_OnTransition
    .byte 0

Epineio_City_OnTransition:
    setobjectaswildencounter LOCALID_OW_MON, ENCOUNTER_GOOD_ROD
    end

Epineio_City_EventScript_OverworldMon::
    lock
    callnative GetOverworldMonSpecies
    bufferspeciesname STR_VAR_1, VAR_0x8004
    msgbox Epineio_City_Text_OverworldMon, MSGBOX_DEFAULT
    closemessage
    startoverworldencounter 5
    release
    end

