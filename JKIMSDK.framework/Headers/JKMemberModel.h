//
//  JKMemberModel.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMemberModel : NSObject

@property (strong, nonatomic, nonnull) NSString *userID;

@property (strong, nonatomic, nullable) NSString *chNickname;

@property (strong, nonatomic, nullable) NSString *chProfileID;

@property (assign, nonatomic) JKChannelRole roleID;

@property (assign, nonatomic) JKUserSource source;

@end

NS_ASSUME_NONNULL_END
