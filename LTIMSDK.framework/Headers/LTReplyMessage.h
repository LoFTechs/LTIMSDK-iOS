//
//  LTReplyMessage.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMEnum.h"
#import "LTTagUser.h"
#import "LTFileInfo.h"
#import "LTLocation.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTReplyMessage : NSObject

@property (strong, nonatomic) NSString *senderID;

@property (strong, nonatomic) NSString *senderNickname;

@property (strong, nonatomic) NSString *msgContent;

@property (strong, nonatomic) NSString *msgID;

@property (assign, nonatomic) LTMessageType msgType;

@property (strong, nonatomic) NSString *displayText;

@property (assign, nonatomic) long long sendTime;//millisecond

@property (strong, nonatomic) NSString *previewUrl;

@property (strong, nonatomic) NSDictionary *extInfo;

@property (strong, nonatomic) NSSet<LTTagUser *> *tagUsers;

@property (strong, nonatomic) LTFileInfo *fileInfo;

@property (strong, nonatomic) LTLocation *location;

@end

NS_ASSUME_NONNULL_END
