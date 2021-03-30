//
//  JKSDK+IM.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/8.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <JKIMSDK/JKIMSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKSDK(IM)

+ (JKIMManager * _Nullable)getIMManagerWithUserID:(NSString * _Nonnull)userID;

@end

NS_ASSUME_NONNULL_END
