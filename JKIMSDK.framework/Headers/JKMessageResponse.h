//
//  JKMessageResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMResponse.h"
#import "JKIMEnum.h"
#import "JKRecallStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMessageResponse : JKIMResponse

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) JKChannelType chType;

@property (strong, nonatomic, readonly) NSString *msgContent;

@property (strong, nonatomic, readonly) NSString *msgCategory;

@property (strong, nonatomic, readonly) NSString *msgID;

@property (assign, nonatomic, readonly) JKMessageType msgType;

@property (strong, nonatomic, readonly) NSString *senderID;

@property (strong, nonatomic, readonly) NSString *senderNickname;

@property (strong, nonatomic, readonly) NSString *senderProfileID;

@property (assign, nonatomic, readonly) long long sendTime;//millisecond

@property (assign, nonatomic, readonly) BOOL encrypted;

@property (assign, nonatomic, readonly) BOOL isRead;

@property (strong, nonatomic, readonly) NSString *extInfo;

@property (strong, nonatomic, readonly) JKRecallStatus *recallStatus;

@property (assign, nonatomic, readonly) long long timeToSend;//millisecond

@end

NS_ASSUME_NONNULL_END
