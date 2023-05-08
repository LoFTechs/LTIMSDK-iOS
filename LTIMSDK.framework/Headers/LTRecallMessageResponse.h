//
//  LTRecallMessageResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2022/12/23.
//  Copyright © 2022 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTRecallMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTRecallMessageResponse : NSObject

@property (assign, nonatomic, readonly) NSInteger returnCode;

@property (strong, nonatomic, readonly) NSArray<LTRecallMessage *> *recallMessages;

- (LTRecallMessageResponse *)initWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
