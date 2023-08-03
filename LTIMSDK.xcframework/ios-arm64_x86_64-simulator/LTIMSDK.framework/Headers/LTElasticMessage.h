//
//  LTElasticMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/10/6.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTElasticMessage : LTMessage

@property (strong, nonatomic) NSDictionary *elastic;

@end

NS_ASSUME_NONNULL_END
