//
//  LTImageMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/16.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTThumbnailFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTImageMessage : LTThumbnailFileMessage

@property (strong, nonatomic) NSString *imagePath;

@end

NS_ASSUME_NONNULL_END
