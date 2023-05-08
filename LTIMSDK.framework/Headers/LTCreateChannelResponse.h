//
//  LTCreateChannelResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/22.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTChannelMemberActionResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTCreateChannelResponse : LTChannelMemberActionResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@end

NS_ASSUME_NONNULL_END
