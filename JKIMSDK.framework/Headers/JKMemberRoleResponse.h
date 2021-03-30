//
//  JKMemberRoleResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/5.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"
#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMemberRoleResponse : JKMessageResponse

@property (assign, nonatomic, readonly) JKChannelRole roleID;

@property (strong, nonatomic, readonly) NSString *memberUserID;

@end

NS_ASSUME_NONNULL_END
