//
//  JKUnreadChannel.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKUnreadChannel : NSObject

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) NSUInteger count;

@end

NS_ASSUME_NONNULL_END
