//
//  JKQueryVoteOptionResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/12.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKVoteOptionBallots.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryVoteOptionResponse : JKIQResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@property (strong, nonatomic, readonly) NSArray<JKVoteOptionBallots *> *options;

@end

NS_ASSUME_NONNULL_END
