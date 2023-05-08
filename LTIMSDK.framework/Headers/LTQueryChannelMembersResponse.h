//
//  LTQueryChannelMembersResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/12.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTMemberPrivilege.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryChannelMembersResponse : LTIQResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@property (strong, nonatomic, readonly) NSArray<LTMemberPrivilege *> *members;

@end

NS_ASSUME_NONNULL_END
