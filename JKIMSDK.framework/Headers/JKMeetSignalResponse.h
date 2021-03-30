//
//  JKMeetSignalResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/9/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKMeetSignalResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSString *callerID;
@property (strong, nonatomic, readonly) NSString *meetID;
@property (strong, nonatomic, readonly) NSString *resourceID;
@property (strong, nonatomic, readonly) NSString *subject;
@property (strong, nonatomic, readonly) NSString *callerNickname;
@property (assign, nonatomic, readonly) JKMeetStatus meetStatus;


@end

NS_ASSUME_NONNULL_END
