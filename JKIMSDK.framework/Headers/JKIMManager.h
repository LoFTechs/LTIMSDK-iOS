//
//  JKIMManager.h
//  JKIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/8.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <JKSDK/JKSDK.h>
#import "JKIMEnum.h"
#import "JKResponseHeader.h"
#import "JKIMManagerDelegate.h"

#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

@class JKMessageHelper, JKChannelHelper, JKUserHelper, JKMeetHelper;
@interface JKIMManager : NSObject

@property (weak, nonatomic) id<JKIMManagerDelegate> delegate;

@property (strong, nonatomic, readonly) JKUser *user;

@property (strong, nonatomic, readonly) JKMessageHelper *messageHelper;

@property (strong, nonatomic, readonly) JKChannelHelper *channelHelper;

@property (strong, nonatomic, readonly) JKUserHelper *userHelper;

@property (strong, nonatomic, readonly) JKMeetHelper *meetHelper;

@property (assign, nonatomic) BOOL ignoreSelfIncoming;//default:YES

- (void)connectWithCompletion:(void (^_Nullable)(BOOL success, JKErrorInfo * _Nullable error))completion;
- (void)disconnectWithCompletion:(void (^_Nullable)(BOOL success, JKErrorInfo * _Nullable error))completion;
- (void)terminate;
- (BOOL)isConnected;

- (JKIMManager * _Nonnull)init NS_UNAVAILABLE;
+ (JKIMManager * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
