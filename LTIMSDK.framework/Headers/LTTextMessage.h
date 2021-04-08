//
//  LTTextMessage.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessage.h"
#import "LTTagUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTTextMessage : LTMessage

@property (strong, nonatomic) NSString *msgContent;

@property (strong, nonatomic) NSDictionary *extInfo;

@property (strong, nonatomic) NSSet<LTTagUser *> *tagUsers;

@end

NS_ASSUME_NONNULL_END
