//
//  LTScheduledMessageResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/28.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"

#import "LTMessageHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTScheduledMessageResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSArray<NSString *> *chIDs;
@property (strong, nonatomic, readonly) NSArray<LTMessage *> *messages;

@end

NS_ASSUME_NONNULL_END
