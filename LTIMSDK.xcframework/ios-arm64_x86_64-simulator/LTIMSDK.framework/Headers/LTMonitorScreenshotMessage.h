//
//  LTMonitorScreenshotMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/21.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTThumbnailFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMonitorScreenshotMessage : LTThumbnailFileMessage

@property (strong, nonatomic) NSString *filePath;

@end

NS_ASSUME_NONNULL_END
