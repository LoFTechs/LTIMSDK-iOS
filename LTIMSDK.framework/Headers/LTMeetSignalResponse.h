//
//  LTMeetSignalResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/9/17.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMeetSignalResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSString *callerID;
@property (strong, nonatomic, readonly) NSString *meetID;
@property (strong, nonatomic, readonly) NSString *resourceID;
@property (strong, nonatomic, readonly) NSString *subject;
@property (strong, nonatomic, readonly) NSString *callerNickname;
@property (assign, nonatomic, readonly) LTMeetStatus meetStatus;


@end

NS_ASSUME_NONNULL_END
