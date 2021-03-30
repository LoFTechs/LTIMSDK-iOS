//
//  JKLocationMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/15.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKLocationMessage : JKMessage

@property (strong, nonatomic) JKLocation *location;

@property (strong, nonatomic) NSDictionary *extInfo;

@end

NS_ASSUME_NONNULL_END
