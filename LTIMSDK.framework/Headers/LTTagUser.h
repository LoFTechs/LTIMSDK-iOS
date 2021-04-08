//
//  LTTagUser.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTTagUser : NSObject

@property (strong, nonatomic) NSString *userID;

@property (assign, nonatomic) NSUInteger start;

@property (assign, nonatomic) NSUInteger length;

@end

NS_ASSUME_NONNULL_END
