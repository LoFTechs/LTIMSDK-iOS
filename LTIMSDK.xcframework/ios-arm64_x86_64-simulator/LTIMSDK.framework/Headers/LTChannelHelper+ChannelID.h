//
//  LTChannelHelper+ChannelID.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/12.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTChannelHelper.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelHelper(ChannelID)

- (NSString * _Nonnull)getSingleChannelIDWithUserID:(NSString * _Nonnull)userID;

- (NSString * _Nonnull)getFanSingleChannelIDWithFanChID:(NSString * _Nonnull)chID fanUserID:(NSString * _Nonnull)userID;

- (NSString * _Nonnull)getSelfChannelID;

- (NSString * _Nonnull)getScheduledChannelID;

@end

NS_ASSUME_NONNULL_END
