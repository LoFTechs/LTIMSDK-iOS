//
//  JKInviteMemberResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/4.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKChannelMemberActionResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKInviteMemberResponse : JKChannelMemberActionResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@end

NS_ASSUME_NONNULL_END
