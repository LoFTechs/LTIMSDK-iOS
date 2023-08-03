//
//  LTIMSDK+IM.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/8.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <LTIMSDK/LTIMSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTSDK(IM)

+ (LTIMManager * _Nullable)getIMManagerWithUserID:(NSString * _Nonnull)userID;

+ (void)terminateIMManagerWithUserID:(NSString * _Nonnull)userID;

+ (void)cleanIMSDK;

@end

NS_ASSUME_NONNULL_END
