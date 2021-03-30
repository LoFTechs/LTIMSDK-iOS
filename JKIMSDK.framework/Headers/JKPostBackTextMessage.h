//
//  JKPostBackTextMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKPostBackTextMessage : JKMessage

@property (strong, nonatomic) NSString *msgContent;

@end

NS_ASSUME_NONNULL_END
