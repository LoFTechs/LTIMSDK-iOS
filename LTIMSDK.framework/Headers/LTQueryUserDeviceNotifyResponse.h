//
//  LTQueryUserDeviceNotifyResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/14.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTUserNotifyData.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryUserDeviceNotifyResponse : LTIQResponse

@property (strong, nonatomic, readonly) LTUserNotifyData *notifyData;

@end

NS_ASSUME_NONNULL_END
