//
//  JKCreateMeetRoomResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKConfRoomItemResponse.h"

#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKCreateMeetRoomResponse : JKConfRoomItemResponse

@property (assign, nonatomic, readonly) JKMeetStatus meetStatus;

@end

NS_ASSUME_NONNULL_END
