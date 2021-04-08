//
//  LTMonitorScreenshotMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMonitorScreenshotMessage : LTFileMessage

@property (strong, nonatomic) NSString *filePath;

@property (strong, nonatomic) NSString *thumbnailPath;

@end

NS_ASSUME_NONNULL_END
