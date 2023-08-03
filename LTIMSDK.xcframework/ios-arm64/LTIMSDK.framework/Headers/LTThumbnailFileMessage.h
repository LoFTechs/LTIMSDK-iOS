//
//  LTThumbnailFileMessage.h
//  LTIMSDK
//
//  Created by shanezhang on 2021/5/14.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import "LTFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTThumbnailFileMessage : LTFileMessage

@property (strong, nonatomic) LTFileInfo *thumbnailFileInfo;

@property (strong, nonatomic) NSString *thumbnailPath;

@end

NS_ASSUME_NONNULL_END
