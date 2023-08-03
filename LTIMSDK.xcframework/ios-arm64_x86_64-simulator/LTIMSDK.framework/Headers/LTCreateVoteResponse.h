//
//  LTCreateVoteResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/10.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"

#import "LTVoteItem.h"
#import "LTVoteOption.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTCreateVoteResponse : LTMessageResponse

@property (assign, nonatomic, readonly) BOOL showVoter;
@property (assign, nonatomic, readonly) BOOL showVotingResult;
@property (assign, nonatomic, readonly) long long timeToCloseVote;//mile second
@property (assign, nonatomic, readonly) long long timeToStartVote;//mile second
@property (assign, nonatomic, readonly) long long msgValidTimestamp;//mile second
@property (assign, nonatomic, readonly) BOOL updateVotingResult;
@property (assign, nonatomic, readonly) NSUInteger votingTimes;
@property (strong, nonatomic, readonly) NSArray<LTVoteOption *> *voteOptions;
@property (strong, nonatomic, readonly) NSArray<LTVoteItem *> *votedItems;

@end

NS_ASSUME_NONNULL_END

