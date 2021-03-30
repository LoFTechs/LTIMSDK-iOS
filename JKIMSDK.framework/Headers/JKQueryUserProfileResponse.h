//
//  JKQueryUserProfileResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/20.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKUserProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryUserProfileResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSArray<JKUserProfile *> *result;

@end

NS_ASSUME_NONNULL_END
