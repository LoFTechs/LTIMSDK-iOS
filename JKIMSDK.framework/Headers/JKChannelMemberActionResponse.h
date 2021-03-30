//
//  JKChannelMemberActionResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/20.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"
#import "JKMemberProfile.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKChannelMemberActionResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSSet<JKMemberProfile *> *members;

@end

NS_ASSUME_NONNULL_END
