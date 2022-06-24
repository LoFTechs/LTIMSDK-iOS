//
//  LTStickerMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/15.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTStickerMessage : LTMessage

@property (strong, nonatomic, nullable) NSString *msgContent;

@property (strong, nonatomic, nullable) NSDictionary *extInfo;

@end

NS_ASSUME_NONNULL_END
