//
//  LTMemberProfile.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/7.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTUserData.h"
#import <LTSDK/LTFileInfo.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTMemberProfile : LTUserData

@property (strong, nonatomic, readonly) NSString *nickname;

@property (strong, nonatomic, readonly) NSString *profileImageID;

@property (strong, nonatomic, readonly) LTFileInfo *profileImageFileInfo;

@end

NS_ASSUME_NONNULL_END
