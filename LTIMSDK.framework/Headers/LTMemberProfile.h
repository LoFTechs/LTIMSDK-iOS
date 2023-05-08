//
//  LTMemberProfile.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/7.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <LTSDK/LTFileInfo.h>

#import "LTUserData.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMemberProfile : LTUserData

@property (strong, nonatomic, readonly) NSString *nickname;

@property (strong, nonatomic, readonly) NSString *profileImageID;

@property (strong, nonatomic, readonly) LTFileInfo *profileImageFileInfo;

@end

NS_ASSUME_NONNULL_END
