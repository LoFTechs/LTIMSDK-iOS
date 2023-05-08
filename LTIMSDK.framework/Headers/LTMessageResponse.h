//
//  LTMessageResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/17.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIMResponse.h"

#import "LTIMEnum.h"
#import "LTRecallStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageResponse : LTIMResponse

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) LTChannelType chType;

@property (strong, nonatomic, readonly) NSString *msgContent;

@property (strong, nonatomic, readonly) NSString *msgCategory;

@property (strong, nonatomic, readonly) NSString *msgID;

@property (assign, nonatomic, readonly) LTMessageType msgType;

@property (strong, nonatomic, readonly) NSString *senderID;

@property (strong, nonatomic, readonly) NSString *senderNickname;

@property (strong, nonatomic, readonly) NSString *senderProfileID;

@property (assign, nonatomic, readonly) long long sendTime;//millisecond

@property (assign, nonatomic, readonly) BOOL encrypted;

@property (assign, nonatomic, readonly) BOOL isRead;

@property (strong, nonatomic, readonly) NSString *extInfo;

@property (strong, nonatomic, readonly, nullable) LTRecallStatus *recallStatus;

@property (assign, nonatomic, readonly) long long timeToSend;//millisecond

@property (strong, nonatomic, readonly) NSString *groupID;

@end

NS_ASSUME_NONNULL_END
