//
//  LTDeleteMessagesResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/7.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTDeleteMessagesResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSString *deleteMsgID;

@end

NS_ASSUME_NONNULL_END
