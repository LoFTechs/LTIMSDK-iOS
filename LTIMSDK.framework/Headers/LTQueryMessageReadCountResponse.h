//
//  LTQueryMessageReadCountResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/18.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"
#import "LTMessageReadCount.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryMessageReadCountResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSArray<LTMessageReadCount *> *result;

@end

NS_ASSUME_NONNULL_END
