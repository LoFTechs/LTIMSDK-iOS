//
//  LTQueryChannelsByLastMsgTimeResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2022/5/5.
//  Copyright © 2022 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIQResponse.h"
#import "LTChannelByLastMsgTimeResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryChannelsByLastMsgTimeResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSArray<LTChannelByLastMsgTimeResponse *> *channels;

@end

NS_ASSUME_NONNULL_END
