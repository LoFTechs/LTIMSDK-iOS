//
//  LTMessageAPI.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMEnum.h"
#import "LTMessageHeader.h"
#import "LTResponseHeader.h"
#import "LTVoteOption.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageHelper : NSObject

- (LTMessageHelper * _Nonnull)init NS_UNAVAILABLE;
+ (LTMessageHelper * _Nonnull)new NS_UNAVAILABLE;

#pragma mark - SendMessage
- (void)sendMessage:(LTMessage * _Nonnull)message completion:(void (^_Nullable)(LTSendMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;
- (void)sendFileMessage:(LTFileMessage * _Nonnull)message completion:(void (^_Nullable)(LTSendMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion progress:(void (^_Nullable)(LTMessageProgressResponse * _Nullable progressResponse, BOOL isDone))progress;

- (void)cancelSendFileMessageWithTransID:(NSString * _Nonnull)transID;

#pragma mark - ScheduledMessage
- (void)scheduledMessageWithTransID:(NSString * _Nonnull)transID messages:(NSArray<LTMessage *> * _Nonnull)messages chIDs:(NSArray<NSString *> * _Nonnull)chIDs scheduledTime:(NSTimeInterval)scheduledTime completion:(void (^_Nullable)(LTScheduledMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - BroadcastMessage
- (void)broadcastMessageWithTransID:(NSString * _Nonnull)transID messages:(NSArray<LTMessage *> * _Nonnull)messages chIDs:(NSArray<NSString *> * _Nonnull)chIDs completion:(void (^_Nullable)(LTBroadcastMessageResponse *response, LTErrorInfo * _Nullable error))completion;

#pragma mark - ForwardMessage
- (void)forwardMessageWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs chIDs:(NSArray<NSString *> * _Nonnull)chIDs completion:(void (^_Nullable)(LTForwardMessageResponse *response, LTErrorInfo * _Nullable error))completion;

#pragma mark - Recall
- (void)recallMessageWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs silentMode:(BOOL)silentMode completion:(void (^_Nullable)(BOOL success, LTErrorInfo * _Nullable error))completion;

- (void)recallMessageWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs silentMode:(BOOL)silentMode customInfo:(NSString * _Nullable)customInfo completion:(void (^_Nullable)(BOOL success, LTErrorInfo * _Nullable error))completion;

#pragma mark - MarkRead
- (void)markReadWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID markTS:(long long)markTS completion:(void (^_Nullable)(LTMarkReadResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)markReadNewsWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID msgID:(NSString *)msgID markTS:(long long)markTS completion:(void (^_Nullable)(LTMarkReadNewsResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - DeleteMessages
- (void)deleteMessagesWithTransID:(NSString *)transID msgIDs:(NSArray *)msgIDs completion:(void (^)(LTDeleteMessagesResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - DeleteChannelMessage
- (void)deleteChannelMessagesWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(LTDeleteChannelMessagesResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - DeleteAllMessage
- (void)deleteAllMessagesWithTransID:(NSString * _Nonnull)transID completion:(void (^_Nullable)(LTDeleteAllMessagesResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - CreateVote
- (void)createVoteWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID chType:(LTChannelType)chType subject:(NSString * _Nonnull)subject voteOptions:(NSArray<LTVoteOption *> * _Nonnull)voteOptions fileSize:(long long)fileSize timeToStartVote:(NSTimeInterval)timeToStartVote timeToCloseVote:(NSTimeInterval)timeToCloseVote completion:(void (^_Nullable)(LTCreateVoteResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - QueryVotingList
- (void)queryVotingListWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID markTS:(NSTimeInterval)markTS afterN:(NSUInteger)afterN completion:(void (^_Nullable)(LTQueryVoteResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryVotingListWithTransID:(NSString * _Nonnull)transID msgID:(NSString * _Nonnull)msgID completion:(void (^ _Nullable)(LTQueryVoteResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - QueryVotingOptionList
- (void)queryVotingOptionListWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs completion:(void (^_Nullable)(LTQueryVoteOptionResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - CastVote
- (void)castVoteWithTransID:(NSString * _Nonnull)transID optionMsgID:(NSString * _Nonnull)optionMsgID completion:(void (^_Nullable)(LTCastVoteResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - QueryMessageReadCount
- (void)queryMessageReadCountWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs completion:(void (^_Nullable)(LTQueryMessageReadCountResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - QueryMessageReadUsers
- (void)queryMessageReadUsersWithTransID:(NSString * _Nonnull)transID msgID:(NSString * _Nonnull)msgID lastReadTime:(NSTimeInterval)lastReadTime count:(NSUInteger)count completion:(void (^_Nullable)(LTQueryMessageReadUsersResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryMessageUnReadUsersWithTransID:(NSString *)transID msgID:(NSString *)msgID lastUserID:(NSString *)lastUserID count:(NSUInteger)count completion:(void (^)(LTQueryMessageReadUsersResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - QueryMessage
- (void)queryMessageWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nullable)chID markTS:(long long)markTS afterN:(NSInteger)afterN completion:(void (^_Nullable)(LTQueryMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryMessageWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nullable)chID markTS:(long long)markTS afterN:(NSInteger)afterN msgCategory:(NSString * _Nullable)msgCategory groupID:(NSString * _Nullable)groupID completion:(void (^_Nullable)(LTQueryMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryMessageWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nullable)chID markMsgID:(NSString * _Nullable)markMsgID afterN:(NSInteger)afterN msgCategory:(NSString * _Nullable)msgCategory groupID:(NSString * _Nullable)groupID completion:(void (^_Nullable)(LTQueryMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)queryMessageWithTransID:(NSString * _Nonnull)transID msgID:(NSString * _Nonnull)msgID completion:(void (^)(LTQueryMessageResponse *response, LTErrorInfo *error))completion;

#pragma mark - QueryScheduleMessage
- (void)queryScheduleMessageWithTransID:(NSString * _Nonnull)transID markTS:(long long)markTS afterN:(NSInteger)afterN completion:(void (^_Nullable)(LTQueryMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - MessageAttr
- (void)queryMessageAttrWithTransID:(NSString * _Nonnull)transID markTS:(long long)markTS afterN:(NSInteger)afterN completion:(void (^_Nullable)(LTMessageAttrResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

- (void)setMessageAttrWithTransID:(NSString *_Nonnull)transID msgAttrs:(NSArray<LTMessageAttr *> * _Nonnull)msgAttrs completion:(void (^_Nullable)(LTMessageAttrResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
