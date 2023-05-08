//
//  LTInviteMemberResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/4.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTChannelMemberActionResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTInviteMemberResponse : LTChannelMemberActionResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@end

NS_ASSUME_NONNULL_END
