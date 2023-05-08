//
//  LTQueryMeetRoomInfoResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTConfRoomItemResponse.h"
#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryMeetRoomInfoResponse : LTIQResponse

@property (assign, nonatomic, readonly) LTMeetStatus meetStatus;
@property (strong, nonatomic, readonly) NSArray<LTConfRoomItemResponse *> *result;

@end

NS_ASSUME_NONNULL_END
