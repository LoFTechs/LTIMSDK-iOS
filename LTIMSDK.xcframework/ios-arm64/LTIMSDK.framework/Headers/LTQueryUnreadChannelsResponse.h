//
//  LTQueryUnreadChannelsResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTUnreadChannel.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryUnreadChannelsResponse : LTIQResponse

@property (assign, nonatomic, readonly) NSUInteger totalUnread;

@property (strong, nonatomic, readonly) NSArray<LTUnreadChannel *> *result;

@end

NS_ASSUME_NONNULL_END
