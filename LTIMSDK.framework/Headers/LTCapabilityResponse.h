//
//  LTCapabilityResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2021/1/15.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMResponse.h"

typedef NS_OPTIONS(NSUInteger, LTCapability) {
    LTCapabilityNone = 0 << 0,
    LTCapabilityPin = 1 << 0
};

NS_ASSUME_NONNULL_BEGIN

@interface LTCapabilityResponse : LTIMResponse

@property (assign, nonatomic, readonly) LTCapability capability;

@end

NS_ASSUME_NONNULL_END
