//
//  JKMeetInviteMessage.h
//  JKIMSDK
//
//  Created by Zayn on 2020/7/22.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMeetInviteMessage : JKMessage

@property (strong, nonatomic) NSString *msgContent;

@property (assign, nonatomic, readonly) NSUInteger ringDuration;//RP only

@end

NS_ASSUME_NONNULL_END
