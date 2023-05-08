//
//  LTChannelByLastMsgTimeResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2022/5/5.
//  Copyright © 2022 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTChannelResponse.h"

#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelByLastMsgTimeResponse : LTChannelResponse

@property (strong, nonatomic, readonly) NSString *memo;

@property (assign, nonatomic, readonly) NSUInteger userAttr;

@property (assign, nonatomic, readonly) LTUserSetting userSetting;

@end

NS_ASSUME_NONNULL_END
