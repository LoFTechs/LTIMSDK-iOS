//
//  LTIMManager.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/8.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <LTSDK/LTSDK.h>
#import <UserNotifications/UserNotifications.h>

#import "LTIMEnum.h"
#import "LTIMManagerDelegate.h"
#import "LTResponseHeader.h"

NS_ASSUME_NONNULL_BEGIN

@class LTMessageHelper, LTChannelHelper, LTUserHelper, LTMeetHelper;
@interface LTIMManager : NSObject

@property (weak, nonatomic) id<LTIMManagerDelegate> delegate;

@property (strong, nonatomic, readonly) LTUser *user;

@property (strong, nonatomic, readonly, nullable) LTMessageHelper *messageHelper;

@property (strong, nonatomic, readonly, nullable) LTChannelHelper *channelHelper;

@property (strong, nonatomic, readonly, nullable) LTUserHelper *userHelper;

@property (strong, nonatomic, readonly, nullable) LTMeetHelper *meetHelper;

@property (assign, nonatomic) BOOL ignoreSelfIncoming;//default:YES

- (void)connectWithCompletion:(void (^_Nullable)(BOOL success, LTErrorInfo * _Nullable error))completion;
- (void)disconnectWithCompletion:(void (^_Nullable)(BOOL success, LTErrorInfo * _Nullable error))completion;
- (void)terminate;
- (BOOL)isConnected;

- (LTIMManager * _Nonnull)init NS_UNAVAILABLE;
+ (LTIMManager * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
