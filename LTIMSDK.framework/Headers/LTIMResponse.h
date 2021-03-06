//
//  LTIMResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/3.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTIMResponse : NSObject

@property (strong, nonatomic, readonly) NSString *transID;

@end

NS_ASSUME_NONNULL_END
