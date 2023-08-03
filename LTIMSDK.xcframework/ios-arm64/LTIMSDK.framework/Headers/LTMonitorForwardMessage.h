//
//  LTMonitorForwardMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/21.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMonitorForwardMessage : LTMessage

@property (strong, nonatomic) NSString *msgContent;

@property (strong, nonatomic, nullable) NSDictionary *extInfo;


@end

NS_ASSUME_NONNULL_END
