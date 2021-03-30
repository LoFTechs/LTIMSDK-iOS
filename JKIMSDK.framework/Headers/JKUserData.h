//
//  JKUserData.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/7.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKUserData : NSObject

@property (strong, nonatomic, readonly) NSString *userID;

@property (strong, nonatomic, readonly) NSString *phoneNumber;

@end

NS_ASSUME_NONNULL_END
