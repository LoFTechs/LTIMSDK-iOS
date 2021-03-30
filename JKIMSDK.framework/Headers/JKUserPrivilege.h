//
//  JKUserPrivilege.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/3.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKUserPrivilege : NSObject

@property (assign, nonatomic, readonly) JKChannelRole affID;

@property (assign, nonatomic, readonly) NSUInteger affPriv;

@property (assign, nonatomic, readonly) NSUInteger banMembers;

@property (assign, nonatomic, readonly) NSUInteger canSendMsgType;

@property (assign, nonatomic, readonly) NSUInteger getMemberList;

@property (assign, nonatomic, readonly) NSUInteger inviteRoleID;

@property (assign, nonatomic, readonly) NSUInteger kickRoleID;

@property (assign, nonatomic, readonly) NSUInteger recvMsg;

@property (assign, nonatomic, readonly) NSUInteger recvPres;

@property (assign, nonatomic, readonly) JKChannelRole roleID;

@property (assign, nonatomic, readonly) NSUInteger rolePriv;

@property (assign, nonatomic, readonly) NSUInteger setMemberAffID;

@property (assign, nonatomic, readonly) NSUInteger setMemberRoleID;

@end

NS_ASSUME_NONNULL_END
