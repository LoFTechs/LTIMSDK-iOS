//
//  JKFileMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKFileMessage : JKMessage

@property (strong, nonatomic) NSString *fileName;

@property (strong, nonatomic) NSDictionary *extInfo;

@property (strong, nonatomic) JKFileInfo *fileInfo;

@end

NS_ASSUME_NONNULL_END
