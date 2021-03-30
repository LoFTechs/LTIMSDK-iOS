//
//  JKQueryUnreadChannelsResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKUnreadChannel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryUnreadChannelsResponse : JKIQResponse

@property (assign, nonatomic, readonly) NSUInteger totalUnread;

@property (strong, nonatomic, readonly) NSArray<JKUnreadChannel *> *result;

@end

NS_ASSUME_NONNULL_END
