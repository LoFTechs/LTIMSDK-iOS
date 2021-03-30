//
//  JKMessageAttrResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2021/1/13.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMResponse.h"
#import "JKMessageAttr.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMessageAttrResponse : JKIMResponse

@property (strong, nonatomic, readonly) NSArray<JKMessageAttr *> *result;

@end

NS_ASSUME_NONNULL_END
