//
//  JKCustomMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/3.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessage.h"

typedef NS_OPTIONS(NSUInteger, JKMessageAttribute) {
    JKMessageAttributeNone = 0 << 0,
    JKMessageAttributeSaveMsg = 1 << 0,
    JKMessageAttributeSendOnlineUsers = 1 << 1,
    JKMessageAttributeSendInChannelUsers = 1 << 2,
    JKMessageAttributeSendNotification = 1 << 3,
    JKMessageAttributeAddUnreadCount = 1 << 4,
    JKMessageAttributeUpdateChLastMsg = 1 << 5
};

NS_ASSUME_NONNULL_BEGIN

@interface JKCustomMessage : JKMessage

@property (assign, nonatomic) JKMessageAttribute attributes;

@property (strong, nonatomic) NSString *msgContent;

@property (strong, nonatomic) NSString *msgCategory;

@property (strong, nonatomic) NSDictionary *extInfo;

@end

NS_ASSUME_NONNULL_END
