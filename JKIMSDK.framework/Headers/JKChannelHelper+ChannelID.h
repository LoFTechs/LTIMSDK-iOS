//
//  JKChannelHelper+ChannelID.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/12.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKChannelHelper.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKChannelHelper(ChannelID)

- (NSString * _Nonnull)getSingleChannelIDWithUserID:(NSString * _Nonnull)userID;

- (NSString * _Nonnull)getFanSingleChannelIDWithFanChID:(NSString * _Nonnull)chID fanUserID:(NSString * _Nonnull)userID;

- (NSString * _Nonnull)getSelfChannelID;

- (NSString * _Nonnull)getScheduledChannelID;

@end

NS_ASSUME_NONNULL_END
