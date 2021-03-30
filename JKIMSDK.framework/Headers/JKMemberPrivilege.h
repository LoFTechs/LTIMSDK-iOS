//
//  JKMemberPrivilege.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/3.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMemberPrivilege : NSObject

@property (assign, nonatomic, readonly) JKChannelRole affID;

@property (assign, nonatomic, readonly) NSUInteger affPriv;

@property (strong, nonatomic, readonly) NSString *brandID;

@property (assign, nonatomic, readonly) BOOL isChNickname;

@property (assign, nonatomic, readonly) BOOL isChProfileImage;

@property (strong, nonatomic, readonly) NSString *inviterNickname;

@property (assign, nonatomic, readonly) JKJoinMethod joinMethod;

@property (assign, nonatomic, readonly) long long joinTime;

@property (assign, nonatomic, readonly) long long lastReadTime;

@property (strong, nonatomic, readonly) NSString *nickname;

@property (strong, nonatomic, readonly) NSString *phoneNumber;

@property (strong, nonatomic, readonly) NSString *profileID;

@property (assign, nonatomic, readonly) JKChannelRole roleID;

@property (strong, nonatomic, readonly) NSString *userID;

@end

NS_ASSUME_NONNULL_END
