/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "PokerTHMessage.h"

static asn_TYPE_member_t asn_MBR_PokerTHMessage_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.announceMessage),
		(ASN_TAG_CLASS_APPLICATION | (0 << 2)),
		0,
		&asn_DEF_AnnounceMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"announceMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.initMessage),
		(ASN_TAG_CLASS_APPLICATION | (1 << 2)),
		0,
		&asn_DEF_InitMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.authMessage),
		(ASN_TAG_CLASS_APPLICATION | (2 << 2)),
		0,
		&asn_DEF_AuthMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"authMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.initAckMessage),
		(ASN_TAG_CLASS_APPLICATION | (3 << 2)),
		0,
		&asn_DEF_InitAckMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initAckMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.avatarRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (4 << 2)),
		0,
		&asn_DEF_AvatarRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatarRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.avatarReplyMessage),
		(ASN_TAG_CLASS_APPLICATION | (5 << 2)),
		0,
		&asn_DEF_AvatarReplyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatarReplyMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.playerListMessage),
		(ASN_TAG_CLASS_APPLICATION | (6 << 2)),
		0,
		&asn_DEF_PlayerListMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerListMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.gameListMessage),
		(ASN_TAG_CLASS_APPLICATION | (7 << 2)),
		0,
		&asn_DEF_GameListMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameListMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.playerInfoRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (8 << 2)),
		0,
		&asn_DEF_PlayerInfoRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerInfoRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.playerInfoReplyMessage),
		(ASN_TAG_CLASS_APPLICATION | (9 << 2)),
		0,
		&asn_DEF_PlayerInfoReplyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerInfoReplyMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.subscriptionRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (10 << 2)),
		0,
		&asn_DEF_SubscriptionRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subscriptionRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.joinGameRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (11 << 2)),
		0,
		&asn_DEF_JoinGameRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"joinGameRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.joinGameReplyMessage),
		(ASN_TAG_CLASS_APPLICATION | (12 << 2)),
		0,
		&asn_DEF_JoinGameReplyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"joinGameReplyMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.gamePlayerMessage),
		(ASN_TAG_CLASS_APPLICATION | (13 << 2)),
		0,
		&asn_DEF_GamePlayerMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gamePlayerMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.kickPlayerRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (14 << 2)),
		0,
		&asn_DEF_KickPlayerRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"kickPlayerRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.leaveGameRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (15 << 2)),
		0,
		&asn_DEF_LeaveGameRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"leaveGameRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.invitePlayerToGameMessage),
		(ASN_TAG_CLASS_APPLICATION | (16 << 2)),
		0,
		&asn_DEF_InvitePlayerToGameMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"invitePlayerToGameMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.inviteNotifyMessage),
		(ASN_TAG_CLASS_APPLICATION | (17 << 2)),
		0,
		&asn_DEF_InviteNotifyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"inviteNotifyMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.rejectGameInvitationMessage),
		(ASN_TAG_CLASS_APPLICATION | (18 << 2)),
		0,
		&asn_DEF_RejectGameInvitationMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rejectGameInvitationMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.rejectInvNotifyMessage),
		(ASN_TAG_CLASS_APPLICATION | (19 << 2)),
		0,
		&asn_DEF_RejectInvNotifyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rejectInvNotifyMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.startEventMessage),
		(ASN_TAG_CLASS_APPLICATION | (20 << 2)),
		0,
		&asn_DEF_StartEventMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startEventMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.startEventAckMessage),
		(ASN_TAG_CLASS_APPLICATION | (21 << 2)),
		0,
		&asn_DEF_StartEventAckMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startEventAckMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.gameStartMessage),
		(ASN_TAG_CLASS_APPLICATION | (22 << 2)),
		0,
		&asn_DEF_GameStartMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameStartMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.handStartMessage),
		(ASN_TAG_CLASS_APPLICATION | (23 << 2)),
		0,
		&asn_DEF_HandStartMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"handStartMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.playersTurnMessage),
		(ASN_TAG_CLASS_APPLICATION | (24 << 2)),
		0,
		&asn_DEF_PlayersTurnMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playersTurnMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.myActionRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (25 << 2)),
		0,
		&asn_DEF_MyActionRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"myActionRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.yourActionRejectedMessage),
		(ASN_TAG_CLASS_APPLICATION | (26 << 2)),
		0,
		&asn_DEF_YourActionRejectedMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"yourActionRejectedMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.playersActionDoneMessage),
		(ASN_TAG_CLASS_APPLICATION | (27 << 2)),
		0,
		&asn_DEF_PlayersActionDoneMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playersActionDoneMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.dealFlopCardsMessage),
		(ASN_TAG_CLASS_APPLICATION | (28 << 2)),
		0,
		&asn_DEF_DealFlopCardsMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dealFlopCardsMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.dealTurnCardMessage),
		(ASN_TAG_CLASS_APPLICATION | (29 << 2)),
		0,
		&asn_DEF_DealTurnCardMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dealTurnCardMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.dealRiverCardMessage),
		(ASN_TAG_CLASS_APPLICATION | (30 << 2)),
		0,
		&asn_DEF_DealRiverCardMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dealRiverCardMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.allInShowCardsMessage),
		(ASN_TAG_CLASS_APPLICATION | (31 << 2)),
		0,
		&asn_DEF_AllInShowCardsMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"allInShowCardsMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.endOfHandMessage),
		(ASN_TAG_CLASS_APPLICATION | (32 << 2)),
		0,
		&asn_DEF_EndOfHandMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"endOfHandMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.showMyCardsRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (33 << 2)),
		0,
		&asn_DEF_ShowMyCardsRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"showMyCardsRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.afterHandShowCardsMessage),
		(ASN_TAG_CLASS_APPLICATION | (34 << 2)),
		0,
		&asn_DEF_AfterHandShowCardsMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"afterHandShowCardsMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.endOfGameMessage),
		(ASN_TAG_CLASS_APPLICATION | (35 << 2)),
		0,
		&asn_DEF_EndOfGameMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"endOfGameMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.askKickPlayerMessage),
		(ASN_TAG_CLASS_APPLICATION | (64 << 2)),
		0,
		&asn_DEF_AskKickPlayerMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"askKickPlayerMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.askKickDeniedMessage),
		(ASN_TAG_CLASS_APPLICATION | (65 << 2)),
		0,
		&asn_DEF_AskKickDeniedMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"askKickDeniedMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.startKickPetitionMessage),
		(ASN_TAG_CLASS_APPLICATION | (66 << 2)),
		0,
		&asn_DEF_StartKickPetitionMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startKickPetitionMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.voteKickRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (67 << 2)),
		0,
		&asn_DEF_VoteKickRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"voteKickRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.voteKickReplyMessage),
		(ASN_TAG_CLASS_APPLICATION | (68 << 2)),
		0,
		&asn_DEF_VoteKickReplyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"voteKickReplyMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.kickPetitionUpdateMessage),
		(ASN_TAG_CLASS_APPLICATION | (69 << 2)),
		0,
		&asn_DEF_KickPetitionUpdateMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"kickPetitionUpdateMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.endKickPetitionMessage),
		(ASN_TAG_CLASS_APPLICATION | (70 << 2)),
		0,
		&asn_DEF_EndKickPetitionMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"endKickPetitionMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.statisticsMessage),
		(ASN_TAG_CLASS_APPLICATION | (128 << 2)),
		0,
		&asn_DEF_StatisticsMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"statisticsMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.chatRequestMessage),
		(ASN_TAG_CLASS_APPLICATION | (129 << 2)),
		0,
		&asn_DEF_ChatRequestMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chatRequestMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.chatMessage),
		(ASN_TAG_CLASS_APPLICATION | (130 << 2)),
		0,
		&asn_DEF_ChatMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chatMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.chatRejectMessage),
		(ASN_TAG_CLASS_APPLICATION | (131 << 2)),
		0,
		&asn_DEF_ChatRejectMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chatRejectMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.dialogMessage),
		(ASN_TAG_CLASS_APPLICATION | (132 << 2)),
		0,
		&asn_DEF_DialogMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dialogMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.timeoutWarningMessage),
		(ASN_TAG_CLASS_APPLICATION | (133 << 2)),
		0,
		&asn_DEF_TimeoutWarningMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timeoutWarningMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.resetTimeoutMessage),
		(ASN_TAG_CLASS_APPLICATION | (134 << 2)),
		0,
		&asn_DEF_ResetTimeoutMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"resetTimeoutMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.afkWarningMessage),
		(ASN_TAG_CLASS_APPLICATION | (135 << 2)),
		0,
		&asn_DEF_AfkWarningMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"afkWarningMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.reportAvatarMessage),
		(ASN_TAG_CLASS_APPLICATION | (136 << 2)),
		0,
		&asn_DEF_ReportAvatarMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportAvatarMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.reportAvatarAckMessage),
		(ASN_TAG_CLASS_APPLICATION | (137 << 2)),
		0,
		&asn_DEF_ReportAvatarAckMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportAvatarAckMessage"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PokerTHMessage, choice.errorMessage),
		(ASN_TAG_CLASS_APPLICATION | (255 << 2)),
		0,
		&asn_DEF_ErrorMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"errorMessage"
	},
};
static asn_TYPE_tag2member_t asn_MAP_PokerTHMessage_tag2el_1[] = {
	{ (ASN_TAG_CLASS_APPLICATION | (0 << 2)), 0, 0, 0 }, /* announceMessage at 27 */
	{ (ASN_TAG_CLASS_APPLICATION | (1 << 2)), 1, 0, 0 }, /* initMessage at 28 */
	{ (ASN_TAG_CLASS_APPLICATION | (2 << 2)), 2, 0, 0 }, /* authMessage at 29 */
	{ (ASN_TAG_CLASS_APPLICATION | (3 << 2)), 3, 0, 0 }, /* initAckMessage at 30 */
	{ (ASN_TAG_CLASS_APPLICATION | (4 << 2)), 4, 0, 0 }, /* avatarRequestMessage at 31 */
	{ (ASN_TAG_CLASS_APPLICATION | (5 << 2)), 5, 0, 0 }, /* avatarReplyMessage at 32 */
	{ (ASN_TAG_CLASS_APPLICATION | (6 << 2)), 6, 0, 0 }, /* playerListMessage at 33 */
	{ (ASN_TAG_CLASS_APPLICATION | (7 << 2)), 7, 0, 0 }, /* gameListMessage at 34 */
	{ (ASN_TAG_CLASS_APPLICATION | (8 << 2)), 8, 0, 0 }, /* playerInfoRequestMessage at 35 */
	{ (ASN_TAG_CLASS_APPLICATION | (9 << 2)), 9, 0, 0 }, /* playerInfoReplyMessage at 36 */
	{ (ASN_TAG_CLASS_APPLICATION | (10 << 2)), 10, 0, 0 }, /* subscriptionRequestMessage at 37 */
	{ (ASN_TAG_CLASS_APPLICATION | (11 << 2)), 11, 0, 0 }, /* joinGameRequestMessage at 38 */
	{ (ASN_TAG_CLASS_APPLICATION | (12 << 2)), 12, 0, 0 }, /* joinGameReplyMessage at 39 */
	{ (ASN_TAG_CLASS_APPLICATION | (13 << 2)), 13, 0, 0 }, /* gamePlayerMessage at 40 */
	{ (ASN_TAG_CLASS_APPLICATION | (14 << 2)), 14, 0, 0 }, /* kickPlayerRequestMessage at 41 */
	{ (ASN_TAG_CLASS_APPLICATION | (15 << 2)), 15, 0, 0 }, /* leaveGameRequestMessage at 42 */
	{ (ASN_TAG_CLASS_APPLICATION | (16 << 2)), 16, 0, 0 }, /* invitePlayerToGameMessage at 43 */
	{ (ASN_TAG_CLASS_APPLICATION | (17 << 2)), 17, 0, 0 }, /* inviteNotifyMessage at 44 */
	{ (ASN_TAG_CLASS_APPLICATION | (18 << 2)), 18, 0, 0 }, /* rejectGameInvitationMessage at 45 */
	{ (ASN_TAG_CLASS_APPLICATION | (19 << 2)), 19, 0, 0 }, /* rejectInvNotifyMessage at 46 */
	{ (ASN_TAG_CLASS_APPLICATION | (20 << 2)), 20, 0, 0 }, /* startEventMessage at 47 */
	{ (ASN_TAG_CLASS_APPLICATION | (21 << 2)), 21, 0, 0 }, /* startEventAckMessage at 48 */
	{ (ASN_TAG_CLASS_APPLICATION | (22 << 2)), 22, 0, 0 }, /* gameStartMessage at 49 */
	{ (ASN_TAG_CLASS_APPLICATION | (23 << 2)), 23, 0, 0 }, /* handStartMessage at 50 */
	{ (ASN_TAG_CLASS_APPLICATION | (24 << 2)), 24, 0, 0 }, /* playersTurnMessage at 51 */
	{ (ASN_TAG_CLASS_APPLICATION | (25 << 2)), 25, 0, 0 }, /* myActionRequestMessage at 52 */
	{ (ASN_TAG_CLASS_APPLICATION | (26 << 2)), 26, 0, 0 }, /* yourActionRejectedMessage at 53 */
	{ (ASN_TAG_CLASS_APPLICATION | (27 << 2)), 27, 0, 0 }, /* playersActionDoneMessage at 54 */
	{ (ASN_TAG_CLASS_APPLICATION | (28 << 2)), 28, 0, 0 }, /* dealFlopCardsMessage at 55 */
	{ (ASN_TAG_CLASS_APPLICATION | (29 << 2)), 29, 0, 0 }, /* dealTurnCardMessage at 56 */
	{ (ASN_TAG_CLASS_APPLICATION | (30 << 2)), 30, 0, 0 }, /* dealRiverCardMessage at 57 */
	{ (ASN_TAG_CLASS_APPLICATION | (31 << 2)), 31, 0, 0 }, /* allInShowCardsMessage at 58 */
	{ (ASN_TAG_CLASS_APPLICATION | (32 << 2)), 32, 0, 0 }, /* endOfHandMessage at 59 */
	{ (ASN_TAG_CLASS_APPLICATION | (33 << 2)), 33, 0, 0 }, /* showMyCardsRequestMessage at 60 */
	{ (ASN_TAG_CLASS_APPLICATION | (34 << 2)), 34, 0, 0 }, /* afterHandShowCardsMessage at 61 */
	{ (ASN_TAG_CLASS_APPLICATION | (35 << 2)), 35, 0, 0 }, /* endOfGameMessage at 62 */
	{ (ASN_TAG_CLASS_APPLICATION | (64 << 2)), 36, 0, 0 }, /* askKickPlayerMessage at 63 */
	{ (ASN_TAG_CLASS_APPLICATION | (65 << 2)), 37, 0, 0 }, /* askKickDeniedMessage at 64 */
	{ (ASN_TAG_CLASS_APPLICATION | (66 << 2)), 38, 0, 0 }, /* startKickPetitionMessage at 65 */
	{ (ASN_TAG_CLASS_APPLICATION | (67 << 2)), 39, 0, 0 }, /* voteKickRequestMessage at 66 */
	{ (ASN_TAG_CLASS_APPLICATION | (68 << 2)), 40, 0, 0 }, /* voteKickReplyMessage at 67 */
	{ (ASN_TAG_CLASS_APPLICATION | (69 << 2)), 41, 0, 0 }, /* kickPetitionUpdateMessage at 68 */
	{ (ASN_TAG_CLASS_APPLICATION | (70 << 2)), 42, 0, 0 }, /* endKickPetitionMessage at 69 */
	{ (ASN_TAG_CLASS_APPLICATION | (128 << 2)), 43, 0, 0 }, /* statisticsMessage at 70 */
	{ (ASN_TAG_CLASS_APPLICATION | (129 << 2)), 44, 0, 0 }, /* chatRequestMessage at 71 */
	{ (ASN_TAG_CLASS_APPLICATION | (130 << 2)), 45, 0, 0 }, /* chatMessage at 72 */
	{ (ASN_TAG_CLASS_APPLICATION | (131 << 2)), 46, 0, 0 }, /* chatRejectMessage at 73 */
	{ (ASN_TAG_CLASS_APPLICATION | (132 << 2)), 47, 0, 0 }, /* dialogMessage at 74 */
	{ (ASN_TAG_CLASS_APPLICATION | (133 << 2)), 48, 0, 0 }, /* timeoutWarningMessage at 75 */
	{ (ASN_TAG_CLASS_APPLICATION | (134 << 2)), 49, 0, 0 }, /* resetTimeoutMessage at 76 */
	{ (ASN_TAG_CLASS_APPLICATION | (135 << 2)), 50, 0, 0 }, /* afkWarningMessage at 77 */
	{ (ASN_TAG_CLASS_APPLICATION | (136 << 2)), 51, 0, 0 }, /* reportAvatarMessage at 78 */
	{ (ASN_TAG_CLASS_APPLICATION | (137 << 2)), 52, 0, 0 }, /* reportAvatarAckMessage at 79 */
	{ (ASN_TAG_CLASS_APPLICATION | (255 << 2)), 53, 0, 0 } /* errorMessage at 81 */
};
static asn_CHOICE_specifics_t asn_SPC_PokerTHMessage_specs_1 = {
	sizeof(struct PokerTHMessage),
	offsetof(struct PokerTHMessage, _asn_ctx),
	offsetof(struct PokerTHMessage, present),
	sizeof(((struct PokerTHMessage *)0)->present),
	asn_MAP_PokerTHMessage_tag2el_1,
	54,	/* Count of tags in the map */
	0,
	54	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PokerTHMessage = {
	"PokerTHMessage",
	"PokerTHMessage",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_PokerTHMessage_1,
	54,	/* Elements count */
	&asn_SPC_PokerTHMessage_specs_1	/* Additional specs */
};

