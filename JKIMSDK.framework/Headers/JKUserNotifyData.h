//
//  JKUserNotifyData.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/14.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKUserData.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKUserNotifyData : JKUserData

@property (strong, nonatomic, readonly) NSString *ringtoneSoundID;
@property (strong, nonatomic, readonly) NSString *notificationSoundID;
@property (assign, nonatomic, readonly) long long qat;
@property (assign, nonatomic, readonly) long long muteUntil;
@property (assign, nonatomic, readonly) BOOL isMute;
@property (assign, nonatomic, readonly) BOOL hidingContent;
@property (assign, nonatomic, readonly) BOOL hidingCaller;
@property (strong, nonatomic, readonly) NSString *deviceVoIPToken;
@property (strong, nonatomic, readonly) NSString *deviceType;
@property (strong, nonatomic, readonly) NSString *deviceToken;
@property (strong, nonatomic, readonly) NSString *brandID;

@end

NS_ASSUME_NONNULL_END
