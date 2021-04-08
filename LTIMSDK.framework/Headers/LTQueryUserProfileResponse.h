//
//  LTQueryUserProfileResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/20.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTUserProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryUserProfileResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSArray<LTUserProfile *> *result;

@end

NS_ASSUME_NONNULL_END
