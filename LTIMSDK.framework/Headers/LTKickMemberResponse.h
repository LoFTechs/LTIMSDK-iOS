//
//  LTKickMemberResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/5.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTChannelMemberActionResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTKickMemberResponse : LTChannelMemberActionResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@property (assign, nonatomic, readonly) NSUInteger reason;

@property (assign, nonatomic, readonly) NSUInteger channelUpdate;

@property (strong, nonatomic, readonly) NSNumber *memberCount;

@end

NS_ASSUME_NONNULL_END
