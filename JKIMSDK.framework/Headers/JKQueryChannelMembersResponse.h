//
//  JKQueryChannelMembersResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/12.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKMemberPrivilege.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryChannelMembersResponse : JKIQResponse

@property (assign, nonatomic, readonly) NSUInteger count;

@property (strong, nonatomic, readonly) NSArray<JKMemberPrivilege *> *members;

@end

NS_ASSUME_NONNULL_END
