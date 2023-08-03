//
//  LTChannelMemberActionResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/20.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"
#import "LTMemberProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelMemberActionResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSSet<LTMemberProfile *> *members;

@end

NS_ASSUME_NONNULL_END
