//
//  JKScheduledMessageResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/28.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"
#import "JKMessageHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKScheduledMessageResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSArray<NSString *> *chIDs;
@property (strong, nonatomic, readonly) NSArray<JKMessage *> *messages;

@end

NS_ASSUME_NONNULL_END
