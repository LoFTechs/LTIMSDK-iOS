//
//  JKMessageReadUser.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/18.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKMessageReadUser : NSObject

@property (strong, nonatomic, readonly) NSString *userID;

@property (assign, nonatomic, readonly) long long readTime;

@end

NS_ASSUME_NONNULL_END
