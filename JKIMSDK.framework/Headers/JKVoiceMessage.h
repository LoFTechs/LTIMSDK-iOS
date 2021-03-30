//
//  JKVoiceMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKFileMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKVoiceMessage : JKFileMessage

@property (strong, nonatomic) NSString *voicePath;

@end

NS_ASSUME_NONNULL_END
