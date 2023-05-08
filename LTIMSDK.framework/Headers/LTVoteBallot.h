//
//  LTVoteBallot.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/12.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTVoteBallot : NSObject

@property (strong, nonatomic, readonly) NSString *msgContent;

@property (assign, nonatomic, readonly) LTMessageType msgType;

@property (assign, nonatomic, readonly) long long sendTime;

@property (strong, nonatomic, readonly) NSString *senderID;

@end

NS_ASSUME_NONNULL_END
