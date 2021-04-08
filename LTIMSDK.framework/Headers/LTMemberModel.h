//
//  LTMemberModel.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMemberModel : NSObject

@property (strong, nonatomic, nonnull) NSString *userID;

@property (strong, nonatomic, nullable) NSString *chNickname;

@property (strong, nonatomic, nullable) NSString *chProfileID;

@property (assign, nonatomic) LTChannelRole roleID;

@property (assign, nonatomic) LTUserSource source;

@end

NS_ASSUME_NONNULL_END
