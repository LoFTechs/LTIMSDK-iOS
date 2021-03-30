//
//  JKMessageResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/15.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"
#import "JKMessageHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKSendMessageResponse : JKMessageResponse

@property (strong, nonatomic, readonly) JKMessage *message;

@end

NS_ASSUME_NONNULL_END
