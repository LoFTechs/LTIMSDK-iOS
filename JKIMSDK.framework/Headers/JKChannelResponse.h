//
//  JKChannelResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/31.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKIMEnum.h"
#import "JKUserPrivilege.h"
#import "JKMemberPrivilege.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKChannelResponse : NSObject

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) JKChannelType chType;

@property (assign, nonatomic, readonly) NSUInteger chProperties;

@property (strong, nonatomic, readonly) NSString *chExtProperties;

@property (strong, nonatomic, readonly) NSString *corpID;

@property (strong, nonatomic, readonly) NSString *corpName;

@property (assign, nonatomic, readonly) long long createTime;

@property (strong, nonatomic, readonly) NSString *createUserID;

@property (assign, nonatomic, readonly) long long inviteTime;

@property (strong, nonatomic, readonly) NSString *inviteUserID;

@property (assign, nonatomic, readonly) long long joinTime;

@property (strong, nonatomic, readonly) NSString *lastMsgContent;

@property (strong, nonatomic, readonly) NSString *lastMsgID;

@property (assign, nonatomic, readonly) JKMessageType lastMsgType;

@property (strong, nonatomic, readonly) NSString *lastMsgSenderID;

@property (strong, nonatomic, readonly) NSString *lastMsgSenderNickname;

@property (strong, nonatomic, readonly) NSString *lastMsgSenderProfileID;

@property (assign, nonatomic, readonly) long long lastMsgTime;

@property (assign, nonatomic, readonly) long long lastReadTime;

@property (assign, nonatomic, readonly) NSUInteger maxMembers;

@property (assign, nonatomic, readonly) NSUInteger minMembers;

@property (assign, nonatomic, readonly) NSUInteger memberCount;

@property (strong, nonatomic, readonly) NSSet<JKMemberPrivilege *> *memberPrivilege;

@property (strong, nonatomic, readonly) JKUserPrivilege *privilege;

@property (strong, nonatomic, readonly) NSString *profileBackImageID;

@property (strong, nonatomic, readonly) NSString *profileImageID;

@property (assign, nonatomic, readonly) NSInteger ranking;

@property (assign, nonatomic, readonly) NSInteger availCategory;

@property (assign, nonatomic, readonly) NSInteger customAttr;

@property (assign, nonatomic, readonly) NSUInteger fileSizeLimit;//KB

@property (assign, nonatomic, readonly) NSUInteger unreadCount;

@property (assign, nonatomic, readonly) long long updateTime;

@property (strong, nonatomic, readonly) NSString *updateUserID;

@property (strong, nonatomic, readonly) NSString *subject;

@property (assign, nonatomic, readonly) BOOL isMute;

@property (strong, nonatomic, readonly) NSString *ringToneID;

@end

NS_ASSUME_NONNULL_END
