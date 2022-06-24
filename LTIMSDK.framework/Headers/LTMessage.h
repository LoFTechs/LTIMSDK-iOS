//
//  LTMessage.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMEnum.h"
#import "LTReplyMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessage : NSObject

@property (strong, nonatomic) NSString *transID;

@property (strong, nonatomic) NSString *chID;

@property (assign, nonatomic) LTChannelType chType;

@property (strong, nonatomic) NSString *parentMsgID;

@property (strong, nonatomic) LTReplyMessage *replyMessage;

@property (strong, nonatomic) NSString *customInfo;

@property (strong, nonatomic) NSString *groupID;

@property (assign, nonatomic) LTChannelRole toRoleID;

- (LTMessageType)msgType;

@end

NS_ASSUME_NONNULL_END
