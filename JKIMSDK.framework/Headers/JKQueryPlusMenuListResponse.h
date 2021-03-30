//
//  JKQueryPlusMenuListResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/14.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKPlusMenuInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryPlusMenuListResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSArray<JKPlusMenuInfo *> *menuInfos;

@end

NS_ASSUME_NONNULL_END
