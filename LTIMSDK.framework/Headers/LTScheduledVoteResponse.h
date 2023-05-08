//
//  LTScheduledVoteResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/11.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTCreateVoteResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTScheduledVoteResponse : LTCreateVoteResponse

@property (strong, nonatomic, readonly) NSString *voteChID;

@property (assign, nonatomic, readonly) LTChannelType voteChType;

@property (strong, nonatomic, readonly) NSString *voteMsgID;

@property (assign, nonatomic, readonly) LTMessageType voteMsgType;

@end

NS_ASSUME_NONNULL_END
