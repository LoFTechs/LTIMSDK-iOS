//
//  LTNewsMessageResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/9/1.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTNewsMessageResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSString *fileURL;

@property (strong, nonatomic, readonly) NSString *msgTag;

@property (assign, nonatomic, readonly) long long msgValidTimestamp;

@end

NS_ASSUME_NONNULL_END
