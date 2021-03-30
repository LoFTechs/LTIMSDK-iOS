//
//  JKUserProfileResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/19.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKSetUserProfileResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSDictionary *userProfile;

@end

NS_ASSUME_NONNULL_END
