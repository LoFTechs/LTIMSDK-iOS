//
//  LTQueryMessageResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/27.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"
#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryMessageResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) long long markTS;

@property (assign, nonatomic, readonly) NSUInteger count;

@property (strong, nonatomic, readonly) NSArray<LTMessageResponse *> *messages;

@end

NS_ASSUME_NONNULL_END
