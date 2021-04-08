//
//  LTVoteOption.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/10.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LTIMEnum.h"
#import "LTVoteFileInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTVoteOption : NSObject

@property (strong, nonatomic) NSString *msgID;
@property (strong, nonatomic) NSString *msgCategory;
@property (strong, nonatomic) NSString *msgContent;
@property (assign, nonatomic) LTMessageType msgType;
@property (assign, nonatomic, readonly) NSUInteger count;
@property (strong, nonatomic) NSArray<LTVoteFileInfo *> *fileInfos;

@end

NS_ASSUME_NONNULL_END
