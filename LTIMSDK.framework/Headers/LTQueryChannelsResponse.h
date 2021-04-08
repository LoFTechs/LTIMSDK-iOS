//
//  LTQueryChannelsResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/10.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"
#import "LTChannelResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryChannelsResponse : LTIQResponse

@property (assign, nonatomic, readonly) NSUInteger batchNo;

@property (assign, nonatomic, readonly) NSUInteger batchTotal;

@property (strong, nonatomic, readonly) NSArray<LTChannelResponse *> *channels;

@end

NS_ASSUME_NONNULL_END
