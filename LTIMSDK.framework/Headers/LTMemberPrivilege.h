//
//  LTMemberPrivilege.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/3.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMemberPrivilege : NSObject

@property (assign, nonatomic, readonly) LTChannelRole affID;

@property (assign, nonatomic, readonly) NSUInteger affPriv;

@property (strong, nonatomic, readonly) NSString *brandID;

@property (assign, nonatomic, readonly) BOOL isChNickname;

@property (assign, nonatomic, readonly) BOOL isChProfileImage;

@property (strong, nonatomic, readonly) NSString *inviterNickname;

@property (assign, nonatomic, readonly) LTJoinMethod joinMethod;

@property (assign, nonatomic, readonly) long long joinTime;

@property (assign, nonatomic, readonly) long long lastReadTime;

@property (strong, nonatomic, readonly) NSString *nickname;

@property (strong, nonatomic, readonly) NSString *phoneNumber;

@property (strong, nonatomic, readonly) NSString *profileID;

@property (strong, nonatomic, readonly) LTFileInfo *profileImageFileInfo;

@property (assign, nonatomic, readonly) LTChannelRole roleID;

@property (strong, nonatomic, readonly) NSString *userID;

@end

NS_ASSUME_NONNULL_END
