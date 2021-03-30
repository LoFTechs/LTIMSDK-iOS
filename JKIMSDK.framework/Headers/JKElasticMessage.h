//
//  JKElasticMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/10/6.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKElasticMessage : JKMessage

@property (strong, nonatomic) NSDictionary *elastic;

@end

NS_ASSUME_NONNULL_END
