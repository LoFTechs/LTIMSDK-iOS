//
//  JKLeaveChannelResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/4.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKChannelMemberActionResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKLeaveChannelResponse : JKChannelMemberActionResponse

@property (assign, nonatomic, readonly) NSUInteger channelUpdate;

@property (strong, nonatomic, readonly) NSNumber *memberCount;

@end

NS_ASSUME_NONNULL_END
