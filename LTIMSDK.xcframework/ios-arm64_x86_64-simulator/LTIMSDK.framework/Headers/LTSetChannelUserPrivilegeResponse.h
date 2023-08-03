//
//  LTSetChannelUserPrivilegeResponse.h
//  LTIMSDK
//
//  Created by shanezhang on 2021/12/17.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTSetChannelUserPrivilegeResponse : LTIMResponse
@property (strong, nonatomic, readonly) NSString *chID;
@property (strong, nonatomic, readonly) NSString *userID;
@property (strong, nonatomic, readonly) NSString *canSendMsg;
@end

NS_ASSUME_NONNULL_END
