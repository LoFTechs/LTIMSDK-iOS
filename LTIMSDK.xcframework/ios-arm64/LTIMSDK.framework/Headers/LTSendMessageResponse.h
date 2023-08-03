//
//  LTSendMessageResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/15.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"

#import "LTMessageHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTSendMessageResponse : LTMessageResponse

@property (strong, nonatomic, readonly) LTMessage *message;

@end

NS_ASSUME_NONNULL_END
