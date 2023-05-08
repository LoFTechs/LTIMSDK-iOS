//
//  LTDocumentMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/17.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTDocumentMessage : LTFileMessage

@property (strong, nonatomic) NSString *filePath;

@end

NS_ASSUME_NONNULL_END
