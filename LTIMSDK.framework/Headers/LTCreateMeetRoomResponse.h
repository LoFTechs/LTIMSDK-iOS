//
//  LTCreateMeetRoomResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTConfRoomItemResponse.h"

#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTCreateMeetRoomResponse : LTConfRoomItemResponse

@property (assign, nonatomic, readonly) LTMeetStatus meetStatus;

@end

NS_ASSUME_NONNULL_END
