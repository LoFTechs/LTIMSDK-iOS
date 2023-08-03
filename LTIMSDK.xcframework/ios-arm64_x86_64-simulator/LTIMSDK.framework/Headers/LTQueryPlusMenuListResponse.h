//
//  LTQueryPlusMenuListResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/14.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTPlusMenuInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryPlusMenuListResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSArray<LTPlusMenuInfo *> *menuInfos;

@end

NS_ASSUME_NONNULL_END
