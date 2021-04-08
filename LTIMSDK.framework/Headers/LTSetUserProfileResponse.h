//
//  LTSetUserProfileResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/19.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTSetUserProfileResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSDictionary *userProfile;

@end

NS_ASSUME_NONNULL_END
