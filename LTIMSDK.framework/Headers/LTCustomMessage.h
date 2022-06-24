//
//  LTCustomMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/3.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessage.h"

typedef NS_OPTIONS(NSUInteger, LTMessageAttribute) {
    LTMessageAttributeNone = 0 << 0,
    LTMessageAttributeSaveMsg = 1 << 0,
    LTMessageAttributeSendOnlineUsers = 1 << 1,
    LTMessageAttributeSendInChannelUsers = 1 << 2,
    LTMessageAttributeSendNotification = 1 << 3,
    LTMessageAttributeAddUnreadCount = 1 << 4,
    LTMessageAttributeUpdateChLastMsg = 1 << 5
};

NS_ASSUME_NONNULL_BEGIN

@interface LTCustomMessage : LTMessage

@property (assign, nonatomic) LTMessageAttribute attributes;

@property (strong, nonatomic, nullable) NSString *msgContent;

@property (strong, nonatomic, nullable) NSString *msgCategory;

@property (strong, nonatomic, nullable) NSDictionary *extInfo;

@end

NS_ASSUME_NONNULL_END
