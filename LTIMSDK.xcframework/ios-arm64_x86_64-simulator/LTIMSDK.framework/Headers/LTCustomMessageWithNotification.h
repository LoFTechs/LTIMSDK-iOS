//
//  LTCustomMessageWithNotification.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/22.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTCustomMessageWithNotification : LTMessage

@property (strong, nonatomic, nullable) NSString *msgContent;

@property (strong, nonatomic, nullable) NSString *msgCategory;

@property (strong, nonatomic, nullable) NSDictionary *extInfo;

@end

NS_ASSUME_NONNULL_END
