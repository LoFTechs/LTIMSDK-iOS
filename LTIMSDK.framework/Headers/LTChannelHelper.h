//
//  LTChannelHelper.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMEnum.h"
#import "LTMessageHeader.h"
#import "LTResponseHeader.h"
#import <LTSDK/LTErrorInfo.h>
#import "LTMemberModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelHelper : NSObject

#pragma mark - enter or leave channel
- (void)joinChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID joinMethod:(LTJoinMethod)joinMethod byWho:(NSString * _Nullable)byWho completion:(void (^_Nullable)(LTJoinChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)createEnterpriseChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID channelSubject:(NSString * _Nullable)subject corpID:(NSString * _Nullable)corpID members:(NSSet<LTMemberModel *> * _Nullable)members canJoin:(BOOL)canJoin completion:(void (^_Nullable)(LTCreateChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)createFanSingleChannelWithTransID:(NSString * _Nonnull)transID fanChID:(NSString * _Nonnull)chID members:(NSSet<LTMemberModel *> * _Nonnull)members corpID:(NSString * _Nullable)corpID completion:(void (^_Nullable)(LTCreateChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)createGroupChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID channelSubject:(NSString * _Nullable)subject members:(NSSet<LTMemberModel *> * _Nullable)members completion:(void (^_Nullable)(LTCreateChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)createGroupChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID channelSubject:(NSString * _Nullable)subject members:(NSSet<LTMemberModel *> * _Nullable)members canJoin:(BOOL)canJoin completion:(void (^_Nullable)(LTCreateChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)createMyFileChannelWithTransID:(NSString * _Nonnull)transID completion:(void (^_Nullable)(LTCreateChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)createSingleChannelWithTransID:(NSString * _Nonnull)transID member:(LTMemberModel * _Nonnull)member completion:(void (^_Nullable)(LTCreateChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)dismissChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(LTDismissChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)leaveChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(LTLeaveChannelResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)inviteMembersWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID members:(NSSet<LTMemberModel *> * _Nullable)members joinMethod:(LTJoinMethod)joinMethod completion:(void (^_Nullable)(LTInviteMemberResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)kickMembersWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID members:(NSSet<LTMemberModel *> * _Nullable)members completion:(void (^_Nullable)(LTKickMemberResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - set Role
- (void)setMemberRoleWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID userID:(NSString * _Nonnull)userID roleID:(LTChannelRole)roleID completion:(void (^_Nullable)(LTMemberRoleResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setMemberRoleWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID userIDs:(NSArray * _Nonnull)userIDs roleID:(LTChannelRole)roleID completion:(void (^_Nullable)(LTSetChannelMemberProfileResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - channel preference
- (void)setChannelMuteWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID isMute:(BOOL)isMute completion:(void (^_Nullable)(LTChannelPreferenceResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setChannelRingToneWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID ringToneID:(NSString * _Nullable)ringToneID completion:(void (^_Nullable)(LTChannelPreferenceResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setChannelUserNicknameWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID nickname:(NSString * _Nullable)nickname completion:(void (^_Nullable)(LTChannelPreferenceResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - profile
- (void)setChannelSubjectWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID subject:(NSString * _Nullable)subject completion:(void (^_Nullable)(LTChannelProfileResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setChannelExtPropertiesWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID chExtProperties:(NSString * _Nullable)chExtProperties completion:(void (^_Nullable)(LTChannelProfileResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setChannelCustomAttrWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID customAttr:(NSUInteger)customAttr completion:(void (^_Nullable)(LTChannelProfileResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setChannelRankingWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID ranking:(NSUInteger)ranking completion:(void (^_Nullable)(LTChannelProfileResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setChannelAvatarWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID avatarPath:(NSString * _Nonnull)avatarPath completion:(void (^_Nullable)(LTChannelProfileResponse * _Nullable response, LTErrorInfo * _Nullable error))completion progress:(void (^_Nullable)(LTProgressResponse * _Nullable progressResponse, BOOL isDone))progress;

- (void)deleteChannelAvatarWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID fileInfo:(LTFileInfo * _Nonnull)fileInfo completion:(void (^_Nullable)(LTChannelProfileResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - query channel
- (void)queryChannelWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID withMembers:(BOOL)withMembers completion:(void (^_Nullable)(LTQueryChannelsResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelWithTransID:(NSString * _Nonnull)transID chTypes:(NSSet<NSNumber *> * _Nullable)chTypes batchCount:(NSUInteger)batchCount withMembers:(BOOL)withMembers completion:(void (^_Nullable)(LTQueryChannelsResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelWithTransID:(NSString * _Nonnull)transID lastUpdateTime:(long long)lastUpdateTime batchCount:(NSUInteger)batchCount withMembers:(BOOL)withMembers completion:(void (^_Nullable)(LTQueryChannelsResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelWithTransID:(NSString * _Nonnull)transID chType:(NSNumber * _Nullable)chType markChID:(NSString * _Nullable)markChID batchCount:(NSUInteger)batchCount withMembers:(BOOL)withMembers sortType:(LTMessageSortType)sortType ascending:(BOOL)ascending completion:(void (^_Nullable)(LTQueryChannelsResponse *response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelWithTransID:(NSString * _Nonnull)transID chTypes:(NSSet<NSNumber *> * _Nullable)chTypes lastUpdateTime:(long long)lastUpdateTime batchCount:(NSUInteger)batchCount withMembers:(BOOL)withMembers markChID:(NSString * _Nullable)markChID sortType:(LTMessageSortType)sortType ascending:(BOOL)ascending completion:(void (^_Nullable)(LTQueryChannelsResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryCorpChannelListWithTransID:(NSString * _Nonnull)transID lastUpdateTime:(long long)lastUpdateTime completion:(void (^_Nullable)(LTQueryChannelsResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - query channel by lastMsgTime
- (void)queryChannelByLastMsgTimeWithTransID:(NSString * _Nonnull)transID lastMsgTime:(long long)lastMsgTime chTypes:(NSSet<NSNumber *> * _Nullable)chTypes afterN:(NSInteger)afterN withMembers:(BOOL)withMembers unReadType:(LTUnReadChannelType)unReadType ascending:(BOOL)ascending completion:(void (^_Nullable)(LTQueryChannelsByLastMsgTimeResponse *response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelByLastMsgTimeWithTransID:(NSString * _Nonnull)transID lastMsgTime:(long long)lastMsgTime chTypes:(NSSet<NSNumber *> * _Nullable)chTypes afterN:(NSInteger)afterN withMembers:(BOOL)withMembers unReadType:(LTUnReadChannelType)unReadType ascending:(BOOL)ascending userAttr:(NSInteger)userAttr userSetting:(LTUserSetting)userSetting completion:(void (^_Nullable)(LTQueryChannelsByLastMsgTimeResponse *response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelByLastMsgTimeWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID withMembers:(BOOL)withMembers completion:(void (^_Nullable)(LTQueryChannelsByLastMsgTimeResponse *response, LTErrorInfo * _Nullable error))completion;

#pragma mark - query read
- (void)queryChannelReadInfoWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(LTQueryChannelReadInfoResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelReadTimeWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(LTQueryChannelsReadTimeResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelsReadTimeWithTransID:(NSString * _Nonnull)transID lastChID:(NSString * _Nonnull)lastChID lastChType:(LTChannelType)lastChType count:(NSUInteger)count completion:(void (^_Nullable)(LTQueryChannelsReadTimeResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryUnreadChannelsWithTransID:(NSString * _Nonnull)transID completion:(void (^_Nullable)(LTQueryUnreadChannelsResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryChannelMembersWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID lastUserID:(NSString * _Nonnull)lastUserID count:(NSUInteger)count completion:(void (^_Nullable)(LTQueryChannelMembersResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - chProperties
- (void)setChannelChPropertiesWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID chType:(LTChannelType)chType canJoin:(BOOL)canJoin completion:(void (^_Nullable)(BOOL success, LTErrorInfo * _Nullable error))completion;

- (LTChannelHelper * _Nonnull)init NS_UNAVAILABLE;
+ (LTChannelHelper * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
