//
//  LTReadInfo.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTReadInfo : NSObject

@property (strong, nonatomic, readonly) NSString *userID;

@property (assign, nonatomic, readonly) long long lastReadTime;

@property (assign, nonatomic, readonly) long long userReadTime;

@end

NS_ASSUME_NONNULL_END
