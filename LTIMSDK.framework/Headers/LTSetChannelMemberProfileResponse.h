//
//  LTSetChannelMemberProfileResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"
#import "LTMemberProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTSetChannelMemberProfileResponse : LTMessageResponse

@property (strong, nonatomic, readonly) LTMemberProfile *member;

@property (strong, nonatomic, readonly) NSArray<LTMemberProfile *>*members;

@end

NS_ASSUME_NONNULL_END
