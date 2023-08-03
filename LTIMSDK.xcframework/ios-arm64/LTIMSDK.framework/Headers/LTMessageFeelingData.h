//
//  LTMessageFeeling.h
//  LTIMSDK
//
//  Created by Zayn on 2021/12/20.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageFeelingData : NSObject

@property (assign, nonatomic) LTMessageFeelingType feelingType;

@property (assign, nonatomic) long long count;

@end

NS_ASSUME_NONNULL_END
