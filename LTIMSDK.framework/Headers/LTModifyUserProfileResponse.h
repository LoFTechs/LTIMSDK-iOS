//
//  LTModifyUserProfileResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/9/2.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTModifyUserProfileResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSArray<NSDictionary *> *userProfiles;

@end

NS_ASSUME_NONNULL_END
