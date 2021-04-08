//
//  LTLocation.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTLocation : NSObject

@property (strong, nonatomic) NSString *address;

@property (assign, nonatomic) double latitude;

@property (assign, nonatomic) double longitude;

@end

NS_ASSUME_NONNULL_END
