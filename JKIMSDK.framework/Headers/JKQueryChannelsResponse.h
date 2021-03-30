//
//  JKQueryChannelsResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/10.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKChannelResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryChannelsResponse : JKIQResponse

@property (assign, nonatomic, readonly) NSUInteger batchNo;

@property (assign, nonatomic, readonly) NSUInteger batchTotal;

@property (strong, nonatomic, readonly) NSArray<JKChannelResponse *> *channels;

@end

NS_ASSUME_NONNULL_END
