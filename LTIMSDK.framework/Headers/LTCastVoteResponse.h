//
//  LTCastVoteResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/10/5.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTCastVoteResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSString *optionMsgID;

@end

NS_ASSUME_NONNULL_END
