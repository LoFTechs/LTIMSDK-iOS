//
//  LTQueryVoteResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTCreateVoteResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryVoteResponse : LTIQResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@property (assign, nonatomic, readonly) long long markTS;

@property (strong, nonatomic, readonly) NSString *chID;

@property (strong, nonatomic, readonly) NSArray<LTCreateVoteResponse *> *votes;

@end

NS_ASSUME_NONNULL_END
