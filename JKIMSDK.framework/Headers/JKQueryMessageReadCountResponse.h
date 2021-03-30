//
//  JKQueryMessageReadCountResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/18.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKMessageReadCount.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryMessageReadCountResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSArray<JKMessageReadCount *> *result;

@end

NS_ASSUME_NONNULL_END
