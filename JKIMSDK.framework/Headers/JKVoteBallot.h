//
//  JKVoteBallot.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/12.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKVoteBallot : NSObject

@property (strong, nonatomic, readonly) NSString *msgContent;

@property (assign, nonatomic, readonly) JKMessageType msgType;

@property (assign, nonatomic, readonly) long long sendTime;

@property (strong, nonatomic, readonly) NSString *senderID;

@end

NS_ASSUME_NONNULL_END
