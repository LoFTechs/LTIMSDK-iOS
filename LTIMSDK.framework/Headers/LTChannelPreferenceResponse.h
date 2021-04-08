//
//  LTChannelPreferenceResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/6.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"
#import "LTChannelPreference.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelPreferenceResponse : LTMessageResponse

@property (strong, nonatomic, readonly) LTChannelPreference *channelPreference;

@end

NS_ASSUME_NONNULL_END
