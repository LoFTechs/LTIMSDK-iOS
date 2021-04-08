//
//  LTQueryUserDataResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/20.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTUserData.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryUserDataResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSArray<LTUserData *> *result;

@end

NS_ASSUME_NONNULL_END
