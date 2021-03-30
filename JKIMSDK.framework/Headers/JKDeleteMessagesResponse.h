//
//  JKDeleteMessagesResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/7.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKDeleteMessagesResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSString *deleteMsgID;

@end

NS_ASSUME_NONNULL_END
