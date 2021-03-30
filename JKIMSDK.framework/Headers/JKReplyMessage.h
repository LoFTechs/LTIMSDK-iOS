//
//  JKReplyMessage.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMEnum.h"
#import "JKTagUser.h"
#import "JKFileInfo.h"
#import "JKLocation.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKReplyMessage : NSObject

@property (strong, nonatomic) NSString *senderID;

@property (strong, nonatomic) NSString *senderNickname;

@property (strong, nonatomic) NSString *msgContent;

@property (strong, nonatomic) NSString *msgID;

@property (assign, nonatomic) JKMessageType msgType;

@property (strong, nonatomic) NSString *displayText;

@property (assign, nonatomic) long long sendTime;//millisecond

@property (strong, nonatomic) NSString *previewUrl;

@property (strong, nonatomic) NSDictionary *extInfo;

@property (strong, nonatomic) NSSet<JKTagUser *> *tagUsers;

@property (strong, nonatomic) JKFileInfo *fileInfo;

@property (strong, nonatomic) JKLocation *location;

@end

NS_ASSUME_NONNULL_END
