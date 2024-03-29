//
//  LTUserData.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/7.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTUserData : NSObject

@property (strong, nonatomic, readonly) NSString *userID;

@property (strong, nonatomic, readonly) NSString *phoneNumber;

@end

NS_ASSUME_NONNULL_END
