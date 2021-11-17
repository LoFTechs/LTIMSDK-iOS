//
//  LTIMEnum.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/9.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <LTSDK/LTSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LTChannelType) {
    LTChannelTypeUnknown = 0,
    LTChannelTypeSingle = 1,
    LTChannelTypeChatroom = 2,
    LTChannelTypeCommunity = 3,
    LTChannelTypeGroup = 4,
    LTChannelTypeEnterprise = 5,
    LTChannelTypeAOTP = 6,
    LTChannelTypeEnterpriseCommunity = 7,
    LTChannelTypeMeeting = 8,
    LTChannelTypeCompanyEnterprise = 9,
    LTChannelTypeCompanySingle = 10,
    LTChannelTypeEnterpriseSingle = 11,
    
    LTChannelTypeSystem = 100,
    LTChannelTypeSystemToUser = 101,
    LTChannelTypeSelf = 102,
    LTChannelTypeTimeToSend = 103,
    LTChannelTypeFan = 104,
    LTChannelTypeFanSingle = 105,
    LTChannelTypeCorpNews = 106,
    LTChannelTypePublicNews = 107,
    LTChannelTypeChatbot = 108,
    LTChannelTypeCustomSingle = 109,
    LTChannelTypeCustomGroup = 110,
    LTChannelTypeCustomActivity = 111,
};

typedef NS_ENUM(NSInteger, LTMessageType) {
    LTMessageTypeUnknown = 0,
    LTMessageTypeText = 1,
    LTMessageTypeSticker = 2,
    LTMessageTypeImage = 3,
    LTMessageTypeVideo = 4,
    LTMessageTypeVoice = 5,
    LTMessageTypeContact = 6,
    LTMessageTypeLocation = 7,
    LTMessageTypeDocument = 8,
    LTMessageTypeCheckIn = 9,
    LTMessageTypeCompanyText = 10,
    LTMessageTypeElastic = 12,
    LTMessageTypePostback = 13,
    LTMessageTypePostbackText = 14,
    LTMessageTypeVoteText = 101,
    LTMessageTypeVoteCast = 109,
    LTMessageTypeScheduleVote = 203,
    LTMessageTypeScheduleVoteInDueTime = 204,
    LTMessageTypeScheduleMsg = 205,
    LTMessageTypeScheduleMsgInDueTime = 206,
    LTMessageTypeMonitoringScreenShot = 221,
    LTMessageTypeMonitoringCopyText = 222,
    LTMessageTypeMonitoringForward = 223,
    LTMessageTypeMonitoringSave = 224,
    LTMessageTypeDismissChannel = 1002,
    LTMessageTypeLeaveChannel = 1003,
    LTMessageTypeInviteChatroom = 1004,
    LTMessageTypeAnswerInvition = 1005,
    LTMessageTypeKickChannel = 1006,
    LTMessageTypeModifyChannelSubject = 1008,
    LTMessageTypeModifyChannelProfile = 1009,
    LTMessageTypeSetRoleID = 1010,
    LTMessageTypeSetChannelPreference = 1011,
    LTMessageTypeSetUserProfile = 1012,
    LTMessageTypeChannelUserProfile = 1013,
    LTMessageTypeSetChannelProfile = 1015,
    LTMessageTypeModifyUserProfile = 1016,
    LTMessageTypeCreateChannel = 1017,
    LTMessageTypeModifyChannelMemberProfile = 1018,
    LTMessageTypeReadMsg = 1101,//Zayn：新加的
    LTMessageTypeDeleteMsg = 1102,
    LTMessageTypeDeleteChannelMsg = 1103,
    LTMessageTypeRecall = 1104,
    LTMessageTypeDeleteAllMsg = 1105,
    LTMessageTypeCreatePublicNewsChannel = 1201,
    LTMessageTypePublicNewsMsg = 1202,
    LTMessageTypeCreateCorpNewsChannel = 1203,
    LTMessageTypeCorpPublicNewsMsg = 1204,
    LTMessageTypeReadNewsMsg = 1205,
    LTMessageTypeIncomingVoiceCall = 2001,
    LTMessageTypeCancelVoiceCall = 2002,
    LTMessageTypeVoiceCDR = 2003,
    LTMessageTypeMeetIncoming = 2501,
    LTMessageTypeRejectMeet = 2502,
    LTMessageTypeAnswerMeet = 2503,
    LTMessageTypeMeetBusy = 2504,
    LTMessageTypeMeetTimeout = 2505,
    LTMessageTypeMeetIgnore = 2506,
    LTMessageTypeCustomMsg = 3000,
    LTMessageTypeCustomMsgNoNotify = 3001,
    LTMessageTypeCustomMsgWithNotify = 3002,
    LTMessageTypeSetQueryMsgTime = 9001,
    LTMessageTypeResendAPNSToken = 9002,
    LTMessageTypeSetCallParameter = 9004,
    LTMessageTypeLogCommand = 9005,
    LTMessageTypeUpdateContact = 9101,
    LTMessageTypeUpdateCompanyMember = 9102,
    LTMessageTypeUpdatePublicPhonebook = 9103,
    LTMessageTypeUpdatePlan = 9104,
    LTMessageTypeUpdateOfficalGroup = 9105,
    LTMessageTypeUpdateCompanyPhonebook = 9106,
    LTMessageTypeSystemBindAccount = 9111,
    LTMessageTypeSystemUnbindAccount = 9112,
    LTMessageTypeSystemUpdateGraphInfo = 9113,
    LTMessageTypeSystemMultipleAccount = 9200,
    LTMessageTypeSystemDeleteUser = 9202,
    LTMessageTypeSystemPrivateMenuUpdate = 9300,
};

typedef NS_ENUM(NSUInteger, LTChannelRole) {
    LTChannelRoleNone = 0,
    LTChannelRoleOutcast = 1,
    LTChannelRoleInvieted = 2,
    LTChannelRoleParticipant = 4,
    LTChannelRoleModerator = 8,
    LTChannelRoleAdmin = 16,
};

typedef NS_ENUM(NSInteger, LTUserSource) {
    LTUserSourceNone,
    LTUserSourceLocal,
    LTUserSourceCompanyBook,
};

typedef NS_ENUM(NSInteger, LTJoinMethod) {
    LTJoinMethodNormal,
    LTJoinMethodUserQRCode,
    LTJoinMethodModeratorPhoneJoin,
    LTJoinMethodUserSearch,
    LTJoinMethodModeratorQRCode,
};

typedef NS_ENUM(NSInteger, LTMeetStatus) {
    LTMeetStatusUnknown,
    //Exsist
    LTMeetStatusRoomCreateSuccess,
    LTMeetStatusRoomExsist,
    LTMeetStatusRoomNotExsist,
    //Password
    LTMeetStatusPasswordSuccess,
    LTMeetStatusPasswordError,
    //Signal
    LTMeetStatusInvite,
    LTMeetStatusReject,
    LTMeetStatusAnswer,
    LTMeetStatusBusy,
    LTMeetStatusTimeout
};

NS_ASSUME_NONNULL_END
