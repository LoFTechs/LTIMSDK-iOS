//
//  LTBroadcastMessageResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2022/5/27.
//  Copyright © 2022 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTIMResponse.h"
#import "LTBroadcastMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTBroadcastMessageResponse : LTIMResponse

@property (assign, nonatomic, readonly) NSInteger returnCode;
@property (strong, nonatomic, readonly) NSArray<NSArray<LTBroadcastMessage *> *> *messages;

@end

NS_ASSUME_NONNULL_END
