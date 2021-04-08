//
//  LTCustomMessageWithNotification.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/22.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTCustomMessageWithNotification : LTMessage

@property (strong, nonatomic) NSString *msgContent;

@property (strong, nonatomic) NSString *msgCategory;

@property (strong, nonatomic) NSDictionary *extInfo;

@end

NS_ASSUME_NONNULL_END
