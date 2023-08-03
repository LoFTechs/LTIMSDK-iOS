//
//  LTMessageFeelingResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2021/12/20.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageFeelingData.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageFeelingResponse : NSObject

@property (strong, nonatomic, readonly) NSString *msgID;

@property (strong, nonatomic, readonly) NSArray<LTMessageFeelingData *> *data;

@end

NS_ASSUME_NONNULL_END
