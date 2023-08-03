//
//  LTMessageFeelingUser.h
//  LTIMSDK
//
//  Created by Zayn on 2021/12/20.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageFeelingUser : NSObject

@property (strong, nonatomic, readonly) NSString *userID;

@property (assign, nonatomic, readonly) long long sendTime;//millisecond

@property (assign, nonatomic, readonly) LTMessageFeelingType feelingType;

@end

NS_ASSUME_NONNULL_END
