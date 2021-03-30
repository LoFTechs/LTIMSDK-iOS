//
//  JKQueryMessageReadUsersResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/18.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKMessageReadUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryMessageReadUsersResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSString *msgID;

@property (strong, nonatomic, readonly) NSArray<JKMessageReadUser *> *users;

@end

NS_ASSUME_NONNULL_END
