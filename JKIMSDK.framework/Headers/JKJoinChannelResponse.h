//
//  JKJoinChannelResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"
#import "JKMemberProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKJoinChannelResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSSet<JKMemberProfile *> *members;

@end

NS_ASSUME_NONNULL_END
