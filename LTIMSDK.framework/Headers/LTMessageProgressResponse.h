//
//  LTMessageProgressResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/10.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LTProgressResponse.h"
#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMessageProgressResponse : LTProgressResponse

@property (assign, nonatomic, readonly) BOOL isThumbnail;

@end

NS_ASSUME_NONNULL_END
