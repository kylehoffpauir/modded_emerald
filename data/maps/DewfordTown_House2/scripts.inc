DewfordTown_House2_MapScripts::
	.byte 0

DewfordTown_House2_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_ExplainSilkScarf
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_House2_EventScript_NoRoomForScarf
	setflag FLAG_RECEIVED_SILK_SCARF
	release
	end

DewfordTown_House2_EventScript_NoRoomForScarf::
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_ExplainSilkScarf::
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
	release
	end


DewfordTown_House2_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_STONE, DewfordTown_House2_EventScript_AlreadyGot
	random 7
	switch VAR_RESULT
	case 0, DewfordTown_House2_EventScript_RandomOption1
	case 1, DewfordTown_House2_EventScript_RandomOption2
	case 2, DewfordTown_House2_EventScript_RandomOption3
	case 3, DewfordTown_House2_EventScript_RandomOption4
	case 4, DewfordTown_House2_EventScript_RandomOption5
	case 5, DewfordTown_House2_EventScript_RandomOption6
	case 6, DewfordTown_House2_EventScript_RandomOption7
	end

DewfordTown_House2_EventScript_AlreadyGot::
	msgbox DewfordTown_House2_Text_Wonder, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_NoRoomForStone::
	msgbox DewfordTown_House2_Text_Noroom, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_RandomOption1::
	msgbox DewfordTown_House2_Text_RandomOption, MSGBOX_DEFAULT
	giveitem ITEM_THUNDER_STONE
	compare VAR_RESULT, 0
    goto_if_eq DewfordTown_House2_EventScript_NoRoomForStone
    setflag FLAG_RECEIVED_STONE
	release
	end

DewfordTown_House2_EventScript_RandomOption2::
	msgbox DewfordTown_House2_Text_RandomOption, MSGBOX_DEFAULT
	giveitem ITEM_WATER_STONE
	compare VAR_RESULT, 0
    goto_if_eq DewfordTown_House2_EventScript_NoRoomForStone
    setflag FLAG_RECEIVED_STONE
	release
	end

DewfordTown_House2_EventScript_RandomOption3::
	msgbox DewfordTown_House2_Text_RandomOption, MSGBOX_DEFAULT
	giveitem ITEM_FIRE_STONE
	compare VAR_RESULT, 0
    goto_if_eq DewfordTown_House2_EventScript_NoRoomForStone
    setflag FLAG_RECEIVED_STONE
	release
	end


DewfordTown_House2_EventScript_RandomOption4::
	msgbox DewfordTown_House2_Text_RandomOption, MSGBOX_DEFAULT
	giveitem ITEM_ICE_STONE
	compare VAR_RESULT, 0
    goto_if_eq DewfordTown_House2_EventScript_NoRoomForStone
    setflag FLAG_RECEIVED_STONE
	release
	end

DewfordTown_House2_EventScript_RandomOption5::
	msgbox DewfordTown_House2_Text_RandomOption, MSGBOX_DEFAULT
	giveitem ITEM_LEAF_STONE
	compare VAR_RESULT, 0
    goto_if_eq DewfordTown_House2_EventScript_NoRoomForStone
    setflag FLAG_RECEIVED_STONE
	release
	end

DewfordTown_House2_EventScript_RandomOption6::
	msgbox DewfordTown_House2_Text_RandomOption, MSGBOX_DEFAULT
	giveitem ITEM_SHINY_STONE
	compare VAR_RESULT, 0
    goto_if_eq DewfordTown_House2_EventScript_NoRoomForStone
    setflag FLAG_RECEIVED_STONE
	release
	end

DewfordTown_House2_EventScript_RandomOption7::
	msgbox DewfordTown_House2_Text_RandomOption, MSGBOX_DEFAULT
	giveitem ITEM_DUSK_STONE
	compare VAR_RESULT, 0
    goto_if_eq DewfordTown_House2_EventScript_NoRoomForStone
    setflag FLAG_RECEIVED_STONE
	release
	end

DewfordTown_House2_Text_Wonder:
	.string "I wonder what that stone does...$"

DewfordTown_House2_Text_Noroom:
	.string "Come back when you have room in your inventory.$"

DewfordTown_House2_Text_RandomOption:
	.string "I found this stone in the caves but I \n"
	.string "dont know what it's for.$"

DewfordTown_House2_Text_WantYouToHaveSilkScarf:
	.string "Gorge your eyes on this!\p"
	.string "It's a SILK SCARF. It's right at the\n"
	.string "cutting edge of fashion, yeah!\p"
	.string "Oh, I can see your eyes twinkling!\n"
	.string "You appreciate my dazzling style!\p"
	.string "Oh, you're a delight!\n"
	.string "Here you go. I want you to have it!$"

DewfordTown_House2_Text_NoRoom:
	.string "Oh, you don't have room?\p"
	.string "Now, listen tight, this SCARF is a must-\n"
	.string "have! Why, I would sell all my items\l"
	.string "in order to get it!$"

DewfordTown_House2_Text_ExplainSilkScarf:
	.string "The SILK SCARF raises the power of\n"
	.string "NORMAL-type moves.\p"
	.string "It's a marvelous SCARF that will go\n"
	.string "with almost all POKéMON!$"



