//
//  JKSetChannelMemberProfileResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"
#import "JKMemberProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKSetChannelMemberProfileResponse : JKMessageResponse

@property (strong, nonatomic, readonly) JKMemberProfile *member;

@end

NS_ASSUME_NONNULL_END
