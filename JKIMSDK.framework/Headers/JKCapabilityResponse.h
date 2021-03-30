//
//  JKCapabilityResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2021/1/15.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMResponse.h"

typedef NS_OPTIONS(NSUInteger, JKCapability) {
    JKCapabilityNone = 0 << 0,
    JKCapabilityPin = 1 << 0
};

NS_ASSUME_NONNULL_BEGIN

@interface JKCapabilityResponse : JKIMResponse

@property (assign, nonatomic, readonly) JKCapability capability;

@end

NS_ASSUME_NONNULL_END
