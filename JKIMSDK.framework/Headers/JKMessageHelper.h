//
//  JKMessageAPI.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMEnum.h"
#import "JKMessageHeader.h"
#import "JKResponseHeader.h"
#import "JKVoteOption.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMessageHelper : NSObject

- (JKMessageHelper * _Nonnull)init NS_UNAVAILABLE;
+ (JKMessageHelper * _Nonnull)new NS_UNAVAILABLE;

#pragma mark - SendMessage
- (void)sendMessage:(JKMessage * _Nonnull)message completion:(void (^_Nullable)(JKSendMessageResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;
- (void)sendFileMessage:(JKFileMessage * _Nonnull)message completion:(void (^_Nullable)(JKSendMessageResponse * _Nullable response, JKErrorInfo * _Nullable error))completion progress:(void (^_Nullable)(JKMessageProgressResponse * _Nullable progressResponse, BOOL isDone))progress;

- (void)cancelSendFileMessageWithTransID:(NSString * _Nonnull)transID;

#pragma mark - ScheduledMessage
- (void)scheduledMessageWithTransID:(NSString * _Nonnull)transID messages:(NSArray<JKMessage *> * _Nonnull)messages chIDs:(NSArray<NSString *> * _Nonnull)chIDs scheduledTime:(NSTimeInterval)scheduledTime completion:(void (^_Nullable)(JKScheduledMessageResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - BroadcastMessage
- (void)broadcastMessageWithTransID:(NSString * _Nonnull)transID messages:(NSArray<JKMessage *> * _Nonnull)messages chIDs:(NSArray<NSString *> * _Nonnull)chIDs completion:(void (^_Nullable)(BOOL success, JKErrorInfo * _Nullable error))completion;

#pragma mark - ForwardMessage
- (void)forwardMessageWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs chIDs:(NSArray<NSString *> * _Nonnull)chIDs completion:(void (^_Nullable)(BOOL success, JKErrorInfo *error))completion;

#pragma mark - Recall
- (void)recallMessageWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs silentMode:(BOOL)silentMode completion:(void (^_Nullable)(BOOL success, JKErrorInfo * _Nullable error))completion;

#pragma mark - MarkRead
- (void)markReadWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID markTS:(long long)markTS completion:(void (^_Nullable)(JKMarkReadResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

- (void)markReadNewsWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID msgID:(NSString *)msgID markTS:(long long)markTS completion:(void (^_Nullable)(JKMarkReadNewsResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - DeleteMessages
- (void)deleteMessagesWithTransID:(NSString *)transID msgIDs:(NSArray *)msgIDs completion:(void (^)(JKDeleteMessagesResponse *response, JKErrorInfo *error))completion;

#pragma mark - DeleteChannelMessage
- (void)deleteChannelMessagesWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(JKDeleteChannelMessagesResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - DeleteAllMessage
- (void)deleteAllMessagesWithTransID:(NSString * _Nonnull)transID completion:(void (^_Nullable)(JKDeleteAllMessagesResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - CreateVote
- (void)createVoteWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID chType:(JKChannelType)chType subject:(NSString * _Nonnull)subject voteOptions:(NSArray<JKVoteOption *> * _Nonnull)voteOptions fileSize:(long long)fileSize timeToStartVote:(NSTimeInterval)timeToStartVote timeToCloseVote:(NSTimeInterval)timeToCloseVote completion:(void (^_Nullable)(JKCreateVoteResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - QueryVotingList
- (void)queryVotingListWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID markTS:(NSTimeInterval)markTS afterN:(NSUInteger)afterN completion:(void (^_Nullable)(JKQueryVoteResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

- (void)queryVotingListWithTransID:(NSString * _Nonnull)transID msgID:(NSString * _Nonnull)msgID completion:(void (^ _Nullable)(JKQueryVoteResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - QueryVotingOptionList
- (void)queryVotingOptionListWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs completion:(void (^_Nullable)(JKQueryVoteOptionResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - CastVote
- (void)castVoteWithTransID:(NSString * _Nonnull)transID optionMsgID:(NSString * _Nonnull)optionMsgID completion:(void (^_Nullable)(JKCastVoteResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - QueryMessageReadCount
- (void)queryMessageReadCountWithTransID:(NSString * _Nonnull)transID msgIDs:(NSArray<NSString *> * _Nonnull)msgIDs completion:(void (^_Nullable)(JKQueryMessageReadCountResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - QueryMessageReadUsers
- (void)queryMessageReadUsersWithTransID:(NSString * _Nonnull)transID msgID:(NSString * _Nonnull)msgID lastReadTime:(NSTimeInterval)lastReadTime count:(NSUInteger)count completion:(void (^_Nullable)(JKQueryMessageReadUsersResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - QueryMessage
- (void)queryMessageWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nullable)chID markTS:(long long)markTS afterN:(NSInteger)afterN completion:(void (^_Nullable)(JKQueryMessageResponse *response, JKErrorInfo *error))completion;

#pragma mark - MessageAttr
- (void)queryMessageAttrWithTransID:(NSString * _Nonnull)transID markTS:(long long)markTS afterN:(NSInteger)afterN completion:(void (^_Nullable)(JKMessageAttrResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

- (void)setMessageAttrWithTransID:(NSString *_Nonnull)transID msgAttrs:(NSArray<JKMessageAttr *> * _Nonnull)msgAttrs completion:(void (^_Nullable)(JKMessageAttrResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
