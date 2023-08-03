//
//  LTPushChannelActiveUserResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2022/5/9.
//  Copyright © 2022 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTPushChannelActiveUserResponse : NSObject

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) NSInteger activeCount;

@property (assign, nonatomic, readonly) NSInteger memberCount;

@end

NS_ASSUME_NONNULL_END
