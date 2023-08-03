//
//  LTForwardMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2022/5/30.
//  Copyright © 2022 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTForwardMessage : NSObject

@property (assign, nonatomic, readonly) NSInteger returnCode;
@property (strong, nonatomic, readonly) NSString *chID;
@property (strong, nonatomic, readonly) NSString *msgID;

@end

NS_ASSUME_NONNULL_END
