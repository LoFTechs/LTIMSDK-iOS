//
//  LTForwardMessageResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2022/5/30.
//  Copyright © 2022 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTIMResponse.h"
#import "LTForwardMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTForwardMessageResponse : LTIMResponse

@property (assign, nonatomic, readonly) NSInteger returnCode;
@property (strong, nonatomic, readonly) NSArray<NSArray<LTForwardMessage *> *> *messages;

@end

NS_ASSUME_NONNULL_END
