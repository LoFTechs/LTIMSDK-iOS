//
//  JKQueryChannelsReadTimeResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKChannelReadTime.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryChannelsReadTimeResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSArray<JKChannelReadTime *> *channels;

@end

NS_ASSUME_NONNULL_END
