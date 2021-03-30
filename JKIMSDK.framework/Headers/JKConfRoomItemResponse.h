//
//  JKConfRoomItemResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKConfRoomItemResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSString *chID;

@property (strong, nonatomic, readonly) NSString *creator;

@property (strong, nonatomic, readonly) NSArray<NSString *> *meetDomain;

@property (strong, nonatomic, readonly) NSString *meetID;

@property (assign, nonatomic, readonly) BOOL memberOnly;

@property (assign, nonatomic, readonly) long long startTime;

@property (assign, nonatomic, readonly) long long endTime;

@property (assign, nonatomic, readonly) BOOL passwordProtected;

@property (assign, nonatomic, readonly) NSUInteger ringDuration;

@property (assign, nonatomic, readonly) BOOL canCreateNew;

@property (assign, nonatomic, readonly) NSUInteger customAttr;

@end

NS_ASSUME_NONNULL_END
