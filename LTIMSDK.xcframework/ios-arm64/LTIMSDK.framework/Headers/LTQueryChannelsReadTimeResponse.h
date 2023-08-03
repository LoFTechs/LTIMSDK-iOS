//
//  LTQueryChannelsReadTimeResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTChannelReadTime.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryChannelsReadTimeResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSArray<LTChannelReadTime *> *channels;

@end

NS_ASSUME_NONNULL_END
