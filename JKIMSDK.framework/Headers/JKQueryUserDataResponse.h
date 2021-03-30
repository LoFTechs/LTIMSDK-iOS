//
//  JKQueryUserDataResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/20.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKUserData.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryUserDataResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSArray<JKUserData *> *result;

@end

NS_ASSUME_NONNULL_END
