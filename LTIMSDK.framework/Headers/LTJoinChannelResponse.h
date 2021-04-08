//
//  LTJoinChannelResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"
#import "LTMemberProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTJoinChannelResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSSet<LTMemberProfile *> *members;

@end

NS_ASSUME_NONNULL_END
