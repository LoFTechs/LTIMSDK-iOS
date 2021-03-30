//
//  JKTextMessage.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessage.h"
#import "JKTagUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKTextMessage : JKMessage

@property (strong, nonatomic) NSString *msgContent;

@property (strong, nonatomic) NSDictionary *extInfo;

@property (strong, nonatomic) NSSet<JKTagUser *> *tagUsers;

@end

NS_ASSUME_NONNULL_END
