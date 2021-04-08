//
//  LTQueryVoteOptionResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/12.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTVoteOptionBallots.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryVoteOptionResponse : LTIQResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@property (strong, nonatomic, readonly) NSArray<LTVoteOptionBallots *> *options;

@end

NS_ASSUME_NONNULL_END
