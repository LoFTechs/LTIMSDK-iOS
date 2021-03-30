//
//  JKQueryVoteResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKCreateVoteResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryVoteResponse : JKIQResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@property (assign, nonatomic, readonly) long long markTS;

@property (strong, nonatomic, readonly) NSString *chID;

@property (strong, nonatomic, readonly) NSArray<JKCreateVoteResponse *> *votes;

@end

NS_ASSUME_NONNULL_END
