//
//  JKNewsMessageResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/9/1.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKNewsMessageResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSString *fileURL;

@property (strong, nonatomic, readonly) NSString *msgTag;

@property (assign, nonatomic, readonly) long long msgValidTimestamp;

@end

NS_ASSUME_NONNULL_END
