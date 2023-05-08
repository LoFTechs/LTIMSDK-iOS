//
//  LTIMManagerDelegate.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/13.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTResponseHeader.h"

@class LTIMManager;
@protocol LTIMManagerDelegate<NSObject>
@optional

//MARK: Common
- (void)LTIMManagerConnectedWithReceiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerDisconnectedWithReceiver:(NSString * _Nonnull)receiver error:(LTErrorInfo * _Nullable)error;
- (void)LTIMManagerIncomingMessage:(LTMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;


//MARK: Channel
- (void)LTIMManagerIncomingCreateChannel:(LTCreateChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingDismissChannel:(LTDismissChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingChannelPreference:(LTChannelPreferenceResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingChannelProfile:(LTChannelProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

//MARK: Channel Member
- (void)LTIMManagerIncomingJoinChannel:(LTJoinChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingInviteMember:(LTInviteMemberResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingKickMember:(LTKickMemberResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingLeaveChannel:(LTLeaveChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingMemberRole:(LTMemberRoleResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

//MARK: Message
- (void)LTIMManagerIncomingSendMessage:(LTSendMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingScheduledMessage:(LTScheduledMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingScheduledInDueTime:(LTScheduledInDueTimeMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingMarkRead:(LTMarkReadResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingDeleteAllMessages:(LTDeleteAllMessagesResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingDeleteChannelMessages:(LTDeleteChannelMessagesResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingDeleteMessages:(LTDeleteMessagesResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingRecall:(LTRecallResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

//MARK: User
- (void)LTIMManagerIncomingSetUserProfile:(LTSetUserProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingModifyUserProfile:(LTModifyUserProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingMessageAttr:(LTMessageAttrResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;


//MARK: Capability
- (void)LTIMManagerIncomingCapability:(LTCapabilityResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

- (void)LTIMManagerStateDidChangeWithReceiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingCreateVote:(LTCreateVoteResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingScheduledVote:(LTScheduledVoteResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingMarkReadNews:(LTMarkReadNewsResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingNewsMessage:(LTNewsMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingCreateNewsChannelMessage:(LTCreateNewsChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingMeetSignal:(LTMeetSignalResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingCastVote:(LTCastVoteResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)LTIMManagerIncomingSetChannelMemberProfile:(LTSetChannelMemberProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;


@end
