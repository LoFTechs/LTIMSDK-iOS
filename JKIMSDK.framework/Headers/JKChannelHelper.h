//
//  JKChannelHelper.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMEnum.h"
#import "JKMessageHeader.h"
#import "JKResponseHeader.h"
#import <JKSDK/JKErrorInfo.h>
#import "JKMemberModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKChannelHelper : NSObject

- (void)joinChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID joinMethod:(JKJoinMethod)joinMethod byWho:(NSString * _Nullable)byWho completion:(void (^_Nullable)(JKJoinChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)createEnterpriseChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID channelSubject:(NSString * _Nullable)subject corpID:(NSString * _Nullable)corpID members:(NSSet<JKMemberModel *> * _Nullable)members completion:(void (^_Nullable)(JKCreateChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)createFanSingleChannelWithTransID:(NSString * _Nonnull)transID fanChID:(NSString * _Nonnull)chID members:(NSSet<JKMemberModel *> * _Nonnull)members corpID:(NSString * _Nullable)corpID completion:(void (^_Nullable)(JKCreateChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)createGroupChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID channelSubject:(NSString * _Nullable)subject members:(NSSet<JKMemberModel *> * _Nullable)members completion:(void (^_Nullable)(JKCreateChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)createMyFileChannelWithTransID:(NSString * _Nonnull)transID completion:(void (^_Nullable)(JKCreateChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)createSingleChannelWithTransID:(NSString * _Nonnull)transID member:(JKMemberModel * _Nonnull)member completion:(void (^_Nullable)(JKCreateChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

- (void)dismissChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(JKDismissChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)leaveChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(JKLeaveChannelResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)inviteMembersWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID members:(NSSet<JKMemberModel *> * _Nullable)members joinMethod:(JKJoinMethod)joinMethod completion:(void (^_Nullable)(JKInviteMemberResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)kickMembersWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID members:(NSSet<JKMemberModel *> * _Nullable)members completion:(void (^_Nullable)(JKKickMemberResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

- (void)setMemberRoleWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID userID:(NSString * _Nonnull)userID roleID:(JKChannelRole)roleID completion:(void (^_Nullable)(JKMemberRoleResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

- (void)setChannelMuteWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID isMute:(BOOL)isMute completion:(void (^_Nullable)(JKChannelPreferenceResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)setChannelRingToneWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID ringToneID:(NSString * _Nullable)ringToneID completion:(void (^_Nullable)(JKChannelPreferenceResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)setChannelUserNicknameWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID nickname:(NSString * _Nullable)nickname completion:(void (^_Nullable)(JKChannelPreferenceResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

- (void)setChannelSubjectWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID subject:(NSString * _Nullable)subject completion:(void (^_Nullable)(JKChannelProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)setChannelExtPropertiesWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID chExtProperties:(NSString * _Nullable)chExtProperties completion:(void (^_Nullable)(JKChannelProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)setChannelCustomAttrWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID customAttr:(NSUInteger)customAttr completion:(void (^_Nullable)(JKChannelProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)setChannelRankingWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID ranking:(NSUInteger)ranking completion:(void (^_Nullable)(JKChannelProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

// path is nil or empty will delete profile
- (void)setChannelAvatarWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID avatarPath:(NSString * _Nonnull)avatarPath completion:(void (^_Nullable)(JKChannelProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion progress:(void (^_Nullable)(JKProgressResponse * _Nullable progressResponse, BOOL isDone))progress;

- (void)queryChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID withMembers:(BOOL)withMembers completion:(void (^_Nullable)(JKQueryChannelsResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryChannelWithTransID:(NSString * _Nonnull)transID chTypes:(NSSet<NSNumber *> * _Nonnull)chTypes batchCount:(NSUInteger)batchCount withMembers:(BOOL)withMembers completion:(void (^_Nullable)(JKQueryChannelsResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryChannelWithTransID:(NSString * _Nonnull)transID lastUpdateTime:(long long)lastUpdateTime batchCount:(NSUInteger)batchCount withMembers:(BOOL)withMembers completion:(void (^_Nullable)(JKQueryChannelsResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryCorpChannelListWithTransID:(NSString * _Nonnull)transID lastUpdateTime:(long long)lastUpdateTime completion:(void (^_Nullable)(JKQueryChannelsResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryChannelReadInfoWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(JKQueryChannelReadInfoResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryChannelReadTimeWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(JKQueryChannelsReadTimeResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryChannelsReadTimeWithTransID:(NSString * _Nonnull)transID lastChID:(NSString * _Nonnull)lastChID lastChType:(JKChannelType)lastChType count:(NSUInteger)count completion:(void (^_Nullable)(JKQueryChannelsReadTimeResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryUnreadChannelsWithTransID:(NSString * _Nonnull)transID completion:(void (^_Nullable)(JKQueryUnreadChannelsResponse *response, JKErrorInfo * _Nullable error))completion;
- (void)queryChannelMembersWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID lastUserID:(NSString * _Nonnull)lastUserID count:(NSUInteger)count completion:(void (^_Nullable)(JKQueryChannelMembersResponse *response, JKErrorInfo * _Nullable error))completion;

- (JKChannelHelper * _Nonnull)init NS_UNAVAILABLE;
+ (JKChannelHelper * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
