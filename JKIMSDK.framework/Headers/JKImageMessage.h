//
//  JKImageMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKImageMessage : JKFileMessage

@property (strong, nonatomic) NSString *imagePath;

@property (strong, nonatomic) NSString *thumbnailPath;

@end

NS_ASSUME_NONNULL_END
