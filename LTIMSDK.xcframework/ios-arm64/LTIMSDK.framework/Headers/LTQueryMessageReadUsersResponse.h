//
//  LTQueryMessageReadUsersResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/18.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTMessageReadUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryMessageReadUsersResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSString *msgID;

@property (strong, nonatomic, readonly) NSArray<LTMessageReadUser *> *users;

@end

NS_ASSUME_NONNULL_END
