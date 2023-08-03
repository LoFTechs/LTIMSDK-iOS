//
//  LTQueryMessageFeelingUsersResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2021/12/20.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTIMEnum.h"
#import "LTMessageFeelingUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryMessageFeelingUsersResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSString *msgID;

@property (assign, nonatomic, readonly) LTMessageFeelingType feelingType;

@property (strong, nonatomic, readonly) NSArray<LTMessageFeelingUser *> *users;

@end

NS_ASSUME_NONNULL_END
