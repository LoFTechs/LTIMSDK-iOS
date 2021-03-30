//
//  JKIMEnum.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/9.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <JKSDK/JKSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JKChannelType) {
    JKChannelTypeUnknown = 0,
    JKChannelTypeSingle = 1,
    JKChannelTypeChatroom = 2,
    JKChannelTypeCommunity = 3,
    JKChannelTypeGroup = 4,
    JKChannelTypeEnterprise = 5,
    JKChannelTypeAOTP = 6,
    JKChannelTypeEnterpriseCommunity = 7,
    JKChannelTypeMeeting = 8,
    JKChannelTypeCompanyEnterprise = 9,
    JKChannelTypeCompanySingle = 10,
    JKChannelTypeEnterpriseSingle = 11,
    
    JKChannelTypeSystem = 100,
    JKChannelTypeSystemToUser = 101,
    JKChannelTypeSelf = 102,
    JKChannelTypeTimeToSend = 103,
    JKChannelTypeFan = 104,
    JKChannelTypeFanSingle = 105,
    JKChannelTypeCorpNews = 106,
    JKChannelTypePublicNews = 107,
    JKChannelTypeChatbot = 108,
    JKChannelTypeCustomSingle = 109,
    JKChannelTypeCustomGroup = 110,
    JKChannelTypeCustomActivity = 111,
};

typedef NS_ENUM(NSInteger, JKMessageType) {
    JKMessageTypeUnknown = 0,
    JKMessageTypeText = 1,
    JKMessageTypeSticker = 2,
    JKMessageTypeImage = 3,
    JKMessageTypeVideo = 4,
    JKMessageTypeVoice = 5,
    JKMessageTypeContact = 6,
    JKMessageTypeLocation = 7,
    JKMessageTypeDocument = 8,
    JKMessageTypeCheckIn = 9,
    JKMessageTypeCompanyText = 10,
    JKMessageTypeElastic = 12,
    JKMessageTypePostback = 13,
    JKMessageTypePostbackText = 14,
    JKMessageTypeVoteText = 101,
    JKMessageTypeVoteCast = 109,
    JKMessageTypeScheduleVote = 203,
    JKMessageTypeScheduleVoteInDueTime = 204,
    JKMessageTypeScheduleMsg = 205,
    JKMessageTypeScheduleMsgInDueTime = 206,
    JKMessageTypeMonitoringScreenShot = 221,
    JKMessageTypeMonitoringCopyText = 222,
    JKMessageTypeMonitoringForward = 223,
    JKMessageTypeMonitoringSave = 224,
    JKMessageTypeDismissChannel = 1002,
    JKMessageTypeLeaveChannel = 1003,
    JKMessageTypeInviteChatroom = 1004,
    JKMessageTypeAnswerInvition = 1005,
    JKMessageTypeKickChannel = 1006,
    JKMessageTypeModifyChannelSubject = 1008,
    JKMessageTypeModifyChannelProfile = 1009,
    JKMessageTypeSetRoleID = 1010,
    JKMessageTypeSetChannelPreference = 1011,
    JKMessageTypeSetUserProfile = 1012,
    JKMessageTypeChannelUserProfile = 1013,
    JKMessageTypeSetChannelProfile = 1015,
    JKMessageTypeModifyUserProfile = 1016,
    JKMessageTypeCreateChannel = 1017,
    JKMessageTypeModifyChannelMemberProfile = 1018,
    JKMessageTypeReadMsg = 1101,//Zayn：新加的
    JKMessageTypeDeleteMsg = 1102,
    JKMessageTypeDeleteChannelMsg = 1103,
    JKMessageTypeRecall = 1104,
    JKMessageTypeDeleteAllMsg = 1105,
    JKMessageTypeCreatePublicNewsChannel = 1201,
    JKMessageTypePublicNewsMsg = 1202,
    JKMessageTypeCreateCorpNewsChannel = 1203,
    JKMessageTypeCorpPublicNewsMsg = 1204,
    JKMessageTypeReadNewsMsg = 1205,
    JKMessageTypeIncomingVoiceCall = 2001,
    JKMessageTypeCancelVoiceCall = 2002,
    JKMessageTypeVoiceCDR = 2003,
    JKMessageTypeMeetIncoming = 2501,
    JKMessageTypeRejectMeet = 2502,
    JKMessageTypeAnswerMeet = 2503,
    JKMessageTypeMeetBusy = 2504,
    JKMessageTypeMeetTimeout = 2505,
    JKMessageTypeMeetIgnore = 2506,
    JKMessageTypeCustomMsg = 3000,
    JKMessageTypeCustomMsgNoNotify = 3001,
    JKMessageTypeCustomMsgWithNotify = 3002,
    JKMessageTypeSetQueryMsgTime = 9001,
    JKMessageTypeResendAPNSToken = 9002,
    JKMessageTypeSetCallParameter = 9004,
    JKMessageTypeLogCommand = 9005,
    JKMessageTypeUpdateContact = 9101,
    JKMessageTypeUpdateCompanyMember = 9102,
    JKMessageTypeUpdatePublicPhonebook = 9103,
    JKMessageTypeUpdatePlan = 9104,
    JKMessageTypeUpdateOfficalGroup = 9105,
    JKMessageTypeUpdateCompanyPhonebook = 9106,
    JKMessageTypeSystemBindAccount = 9111,
    JKMessageTypeSystemUnbindAccount = 9112,
    JKMessageTypeSystemMultipleAccount = 9200,
    JKMessageTypeSystemDeleteUser = 9202,
    JKMessageTypeSystemPrivateMenuUpdate = 9300,
};

typedef NS_ENUM(NSUInteger, JKChannelRole) {
    JKChannelRoleNone = 0,
    JKChannelRoleOutcast = 1,
    JKChannelRoleInvieted = 2,
    JKChannelRoleParticipant = 4,
    JKChannelRoleModerator = 8,
    JKChannelRoleAdmin = 16,
};

typedef NS_ENUM(NSInteger, JKUserSource) {
    JKUserSourceNone,
    JKUserSourceLocal,
    JKUserSourceCompanyBook,
};

typedef NS_ENUM(NSInteger, JKJoinMethod) {
    JKJoinMethodNormal,
    JKJoinMethodUserQRCode,
    JKJoinMethodModeratorPhoneJoin,
    JKJoinMethodUserSearch,
    JKJoinMethodModeratorQRCode,
};

typedef NS_ENUM(NSInteger, JKMeetStatus) {
    JKMeetStatusUnknown,
    //Exsist
    JKMeetStatusRoomCreateSuccess,
    JKMeetStatusRoomExsist,
    JKMeetStatusRoomNotExsist,
    //Password
    JKMeetStatusPasswordSuccess,
    JKMeetStatusPasswordError,
    //Signal
    JKMeetStatusInvite,
    JKMeetStatusReject,
    JKMeetStatusAnswer,
    JKMeetStatusBusy,
    JKMeetStatusTimeout
};

NS_ASSUME_NONNULL_END
