//
//  JKVoteOptionBallots.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/12.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKVoteOption.h"

#import "JKVoteBallot.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKVoteOptionBallots : JKVoteOption

@property (strong, nonatomic, readonly) NSArray<JKVoteBallot *> *ballots;

@end

NS_ASSUME_NONNULL_END
