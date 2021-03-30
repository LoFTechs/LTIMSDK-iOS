//
//  JKMessage.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMEnum.h"
#import "JKReplyMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMessage : NSObject

@property (strong, nonatomic) NSString *transID;

@property (strong, nonatomic) NSString *chID;

@property (assign, nonatomic) JKChannelType chType;

@property (strong, nonatomic) NSString *parentMsgID;

@property (strong, nonatomic) JKReplyMessage *replyMessage;

- (JKMessageType)msgType;

@end

NS_ASSUME_NONNULL_END
