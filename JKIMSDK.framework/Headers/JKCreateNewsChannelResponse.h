//
//  JKCreateNewsChannelResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/9/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKCreateNewsChannelResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSString *subject;

@end

NS_ASSUME_NONNULL_END
