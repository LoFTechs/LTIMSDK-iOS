//
//  LTPostBackTextMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/21.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTPostBackTextMessage : LTMessage

@property (strong, nonatomic) NSString *msgContent;

@end

NS_ASSUME_NONNULL_END
