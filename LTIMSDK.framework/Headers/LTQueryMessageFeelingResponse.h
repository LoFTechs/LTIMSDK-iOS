//
//  LTQueryMessageFeelingResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2021/12/20.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"
#import "LTMessageFeelingResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryMessageFeelingResponse : LTIQResponse
 
@property (strong, nonatomic, readonly) NSArray<LTMessageFeelingResponse *> *results;

@end

NS_ASSUME_NONNULL_END
