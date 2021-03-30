//
//  JKIMManagerDelegate.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//


#import "JKResponseHeader.h"

@class JKIMManager;
@protocol JKIMManagerDelegate<NSObject>
@optional

//MARK: Common
- (void)JKIMManagerConnectedWithReceiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerDisconnectedWithReceiver:(NSString * _Nonnull)receiver error:(JKErrorInfo * _Nullable)error;
- (void)JKIMManagerIncomingMessage:(JKMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;


//MARK: Channel
- (void)JKIMManagerIncomingCreateChannel:(JKCreateChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingDismissChannel:(JKDismissChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingChannelPreference:(JKChannelPreferenceResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingChannelProfile:(JKChannelProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

//MARK: Channel Member
- (void)JKIMManagerIncomingJoinChannel:(JKJoinChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingInviteMember:(JKInviteMemberResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingKickMember:(JKKickMemberResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingLeaveChannel:(JKLeaveChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingMemberRole:(JKMemberRoleResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

//MARK: Message
- (void)JKIMManagerIncomingSendMessage:(JKSendMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingScheduledMessage:(JKScheduledMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingScheduledInDueTime:(JKScheduledInDueTimeMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingMarkRead:(JKMarkReadResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingDeleteAllMessages:(JKDeleteAllMessagesResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingDeleteChannelMessages:(JKDeleteChannelMessagesResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingDeleteMessages:(JKDeleteMessagesResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingRecall:(JKRecallResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

//MARK: User
- (void)JKIMManagerIncomingSetUserProfile:(JKSetUserProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingModifyUserProfile:(JKModifyUserProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingMessageAttr:(JKMessageAttrResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;


//MARK: Capability
- (void)JKIMManagerIncomingCapability:(JKCapabilityResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;

- (void)JKIMManagerStateDidChangeWithReceiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingCreateVote:(JKCreateVoteResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingScheduledVote:(JKScheduledVoteResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingMarkReadNews:(JKMarkReadNewsResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingNewsMessage:(JKNewsMessageResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingCreateNewsChannelMessage:(JKCreateNewsChannelResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingMeetSignal:(JKMeetSignalResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingCastVote:(JKCastVoteResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;
- (void)JKIMManagerIncomingSetChannelMemberProfile:(JKSetChannelMemberProfileResponse * _Nullable)response receiver:(NSString * _Nonnull)receiver;


@end
