//
//  LTChannelPreference.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/6.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTChannelPreference : NSObject

@property (strong, nonatomic, readonly) NSString *ringToneID;

@property (strong, nonatomic, readonly) NSString *nickname;

@property (assign, nonatomic, readonly) BOOL isMute;

@end

NS_ASSUME_NONNULL_END
