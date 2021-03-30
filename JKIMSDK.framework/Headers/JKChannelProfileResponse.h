//
//  JKChannelProfileResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/6.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKChannelProfileResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSDictionary *channelProfile;

@end

NS_ASSUME_NONNULL_END
