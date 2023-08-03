//
//  LTRecallMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2022/12/23.
//  Copyright © 2022 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTRecallMessage : NSObject

@property (strong, nonatomic, readonly) NSString *msgID;

@property (assign, nonatomic, readonly) NSInteger returnCode;

- (LTRecallMessage *)initWithDict:(NSDictionary * _Nullable)dict ;

@end

NS_ASSUME_NONNULL_END
