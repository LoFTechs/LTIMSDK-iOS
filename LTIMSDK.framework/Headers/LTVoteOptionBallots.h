//
//  LTVoteOptionBallots.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/12.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTVoteOption.h"

#import "LTVoteBallot.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTVoteOptionBallots : LTVoteOption

@property (strong, nonatomic, readonly) NSArray<LTVoteBallot *> *ballots;

@end

NS_ASSUME_NONNULL_END
