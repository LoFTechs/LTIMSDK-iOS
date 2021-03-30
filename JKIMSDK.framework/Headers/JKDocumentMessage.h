//
//  JKDocumentMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKDocumentMessage : JKFileMessage

@property (strong, nonatomic) NSString *filePath;

@end

NS_ASSUME_NONNULL_END
