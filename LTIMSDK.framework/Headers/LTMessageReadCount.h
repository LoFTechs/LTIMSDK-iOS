//
//  LTMessageReadCount.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/18.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageReadCount : NSObject

@property (strong, nonatomic, readonly) NSString *msgID;

@property (assign, nonatomic, readonly) NSUInteger count;

@end

NS_ASSUME_NONNULL_END
