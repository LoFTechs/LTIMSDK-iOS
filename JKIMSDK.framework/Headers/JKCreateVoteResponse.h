//
//  JKCreateVoteResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/10.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

#import "JKVoteItem.h"
#import "JKVoteOption.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKCreateVoteResponse : JKMessageResponse

@property (assign, nonatomic, readonly) BOOL showVoter;
@property (assign, nonatomic, readonly) BOOL showVotingResult;
@property (assign, nonatomic, readonly) long long timeToCloseVote;//mile second
@property (assign, nonatomic, readonly) long long timeToStartVote;//mile second
@property (assign, nonatomic, readonly) long long msgValidTimestamp;//mile second
@property (assign, nonatomic, readonly) BOOL updateVotingResult;
@property (assign, nonatomic, readonly) NSUInteger votingTimes;
@property (strong, nonatomic, readonly) NSArray<JKVoteOption *> *voteOptions;
@property (strong, nonatomic, readonly) NSArray<JKVoteItem *> *votedItems;

@end

NS_ASSUME_NONNULL_END

