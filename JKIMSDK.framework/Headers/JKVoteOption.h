//
//  JKVoteOption.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/10.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "JKIMEnum.h"
#import "JKVoteFileInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKVoteOption : NSObject

@property (strong, nonatomic) NSString *msgID;
@property (strong, nonatomic) NSString *msgCategory;
@property (strong, nonatomic) NSString *msgContent;
@property (assign, nonatomic) JKMessageType msgType;
@property (assign, nonatomic, readonly) NSUInteger count;
@property (strong, nonatomic) NSArray<JKVoteFileInfo *> *fileInfos;

@end

NS_ASSUME_NONNULL_END
