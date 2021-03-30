//
//  JKChannelReadTime.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKChannelReadTime : NSObject

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) JKChannelType chType;

@property (assign, nonatomic, readonly) long long lastReadTime;

@end

NS_ASSUME_NONNULL_END
