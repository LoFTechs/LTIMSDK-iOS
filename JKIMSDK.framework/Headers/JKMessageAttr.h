//
//  JKMessageAttr.h
//  JKIMSDK
//
//  Created by Zayn on 2021/1/13.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKMessageAttr : NSObject

@property (strong, nonatomic) NSString *msgID;

@property (strong, nonatomic) NSString *chID;

@property (assign, nonatomic) long long msgTime;

@property (assign, nonatomic) NSUInteger status;

@property (assign, nonatomic, readonly) long long updateTime;

@property (assign, nonatomic, readonly) long long validTime;

@end

NS_ASSUME_NONNULL_END
