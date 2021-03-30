//
//  JKQueryUserDeviceNotifyResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/14.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKUserNotifyData.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryUserDeviceNotifyResponse : JKIQResponse

@property (strong, nonatomic, readonly) JKUserNotifyData *notifyData;

@end

NS_ASSUME_NONNULL_END
