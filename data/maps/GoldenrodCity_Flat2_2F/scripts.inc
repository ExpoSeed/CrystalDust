GoldenrodCity_Flat2_2F_MapScripts:: @ 8215FD7
	.byte 0

GoldenrodCity_Flat2_2F_EventScript_OldMan:: @ 8215FD8
	msgbox GoldenrodCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end

GoldenrodCity_Flat2_2F_EventScript_NinjaBoy:: @ 8215FE1
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, GoldenrodCity_Flat2_2F_EventScript_GavePremierBall
	msgbox GoldenrodCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_PREMIER_BALL
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

GoldenrodCity_Flat2_2F_EventScript_GavePremierBall:: @ 8216010
	msgbox GoldenrodCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Flat2_2F_Text_DevonWasTinyInOldDays: @ 821601A
	.string "Way back in the old days, DEVON was just\n"
	.string "a teeny, tiny company.$"

GoldenrodCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt: @ 821605A
	.string "My daddy's working at the CORPORATION.\p"
	.string "My daddy made this!\n"
	.string "But I can't use it, so you can have it.$"

GoldenrodCity_Flat2_2F_Text_GoingToWorkAtDevonToo: @ 82160BD
	.string "My daddy's working at the CORPORATION.\p"
	.string "When I grow up, I'm going to work for\n"
	.string "DEVON, too.$"
