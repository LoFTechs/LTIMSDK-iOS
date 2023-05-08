//
//  LTCheckMeetPasswordResponse.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTCheckMeetPasswordResponse : LTIQResponse

@property (assign, nonatomic, readonly) LTMeetStatus meetStatus;
@property (assign, nonatomic, readonly) BOOL passwordProtected;

@end

NS_ASSUME_NONNULL_END
