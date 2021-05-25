//
//  LTVideoMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTThumbnailFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTVideoMessage : LTThumbnailFileMessage

@property (strong, nonatomic) NSString *videoPath;

@end

NS_ASSUME_NONNULL_END
