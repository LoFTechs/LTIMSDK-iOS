//
//  JKChannelPreferenceResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/6.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"
#import "JKChannelPreference.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKChannelPreferenceResponse : JKMessageResponse

@property (strong, nonatomic, readonly) JKChannelPreference *channelPreference;

@end

NS_ASSUME_NONNULL_END
