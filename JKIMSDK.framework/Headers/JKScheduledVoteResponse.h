//
//  JKScheduledVoteResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKCreateVoteResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKScheduledVoteResponse : JKCreateVoteResponse

@property (strong, nonatomic, readonly) NSString *voteChID;

@property (assign, nonatomic, readonly) JKChannelType voteChType;

@property (strong, nonatomic, readonly) NSString *voteMsgID;

@property (assign, nonatomic, readonly) JKMessageType voteMsgType;

@end

NS_ASSUME_NONNULL_END
