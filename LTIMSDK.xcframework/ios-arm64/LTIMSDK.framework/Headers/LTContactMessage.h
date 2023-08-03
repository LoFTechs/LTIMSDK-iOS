//
//  LTContactMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/17.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTThumbnailFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTContactMessage : LTThumbnailFileMessage

@property (strong, nonatomic) NSString *contactPath;

@end


NS_ASSUME_NONNULL_END
