//
//  LTChannelReadTime.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelReadTime : NSObject

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) LTChannelType chType;

@property (assign, nonatomic, readonly) long long lastReadTime;

@end

NS_ASSUME_NONNULL_END
