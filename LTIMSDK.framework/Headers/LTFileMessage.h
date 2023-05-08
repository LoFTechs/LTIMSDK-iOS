//
//  LTFileMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/17.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTFileMessage : LTMessage

@property (strong, nonatomic) NSString *fileName;

@property (strong, nonatomic, nullable) NSDictionary *extInfo;

@property (strong, nonatomic) LTFileInfo *fileInfo;

@end

NS_ASSUME_NONNULL_END
