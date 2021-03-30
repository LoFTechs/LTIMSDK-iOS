//
//  JKQueryMessageResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/27.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryMessageResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) long long markTS;

@property (assign, nonatomic, readonly) NSUInteger count;

@property (strong, nonatomic, readonly) NSArray<JKMessageResponse *> *messages;

@end

NS_ASSUME_NONNULL_END
