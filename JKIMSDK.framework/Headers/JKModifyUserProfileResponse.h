//
//  JKModifyUserProfileResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/9/2.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKModifyUserProfileResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSArray<NSDictionary *> *userProfiles;

@end

NS_ASSUME_NONNULL_END
