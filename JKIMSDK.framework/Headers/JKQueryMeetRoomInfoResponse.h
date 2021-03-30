//
//  JKQueryMeetRoomInfoResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKConfRoomItemResponse.h"
#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryMeetRoomInfoResponse : JKIQResponse

@property (assign, nonatomic, readonly) JKMeetStatus meetStatus;
@property (strong, nonatomic, readonly) NSArray<JKConfRoomItemResponse *> *result;

@end

NS_ASSUME_NONNULL_END
