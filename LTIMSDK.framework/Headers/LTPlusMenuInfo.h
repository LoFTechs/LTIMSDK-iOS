//
//  LTPlusMenuInfo.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/14.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTPlusMenuInfo : NSObject

@property (strong, nonatomic, readonly) NSString *plusMenuID;

@property (strong, nonatomic, readonly) NSString *ownerID;

@property (assign, nonatomic, readonly) long long linkedTime;

@property (strong, nonatomic, readonly) NSString *userID;

@end

NS_ASSUME_NONNULL_END
