//
//  LTMemberRoleResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/5.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"
#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMemberRoleResponse : LTMessageResponse

@property (assign, nonatomic, readonly) LTChannelRole roleID;

@property (strong, nonatomic, readonly) NSString *memberUserID;

@end

NS_ASSUME_NONNULL_END
