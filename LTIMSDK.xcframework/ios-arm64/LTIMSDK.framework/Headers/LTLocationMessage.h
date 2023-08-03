//
//  LTLocationMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/15.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTLocationMessage : LTMessage

@property (strong, nonatomic) LTLocation *location;

@property (strong, nonatomic) NSDictionary *extInfo;

@end

NS_ASSUME_NONNULL_END
