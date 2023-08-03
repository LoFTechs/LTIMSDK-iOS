//
//  LTMeetInviteMessage.h
//  LTIMSDK
//
//  Created by Zayn on 2020/7/22.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMeetInviteMessage : LTMessage

@property (strong, nonatomic) NSString *msgContent;

@property (assign, nonatomic, readonly) NSUInteger ringDuration;//RP only

@end

NS_ASSUME_NONNULL_END
