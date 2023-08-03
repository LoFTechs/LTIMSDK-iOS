//
//  LTChannelProfileResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/6.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelProfileResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSDictionary *channelProfile;

@end

NS_ASSUME_NONNULL_END
