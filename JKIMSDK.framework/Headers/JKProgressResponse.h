//
//  JKProgressResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKMessageHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKProgressResponse : NSObject

@property (assign, nonatomic, readonly) long long totalLength;

@property (assign, nonatomic, readonly) long long loadingBytes;

@property (assign, nonatomic, readonly) JKStorageStatus status;

@end

NS_ASSUME_NONNULL_END
