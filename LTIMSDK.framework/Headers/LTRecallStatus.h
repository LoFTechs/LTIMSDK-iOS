//
//  LTRecallStatus.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/31.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTRecallStatus : NSObject

@property (assign, nonatomic, readonly) BOOL silentMode;

@property (assign, nonatomic, readonly) long long recallTime;

@property (strong, nonatomic, readonly) NSString *recallBy;

@property (strong, nonatomic, readonly) NSString *senderNickname;

@end

NS_ASSUME_NONNULL_END
