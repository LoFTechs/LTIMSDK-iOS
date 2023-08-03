//
//  LTMessageAttrResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2021/1/13.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMResponse.h"

#import "LTMessageAttr.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageAttrResponse : LTIMResponse

@property (strong, nonatomic, readonly) NSArray<LTMessageAttr *> *result;

@end

NS_ASSUME_NONNULL_END
