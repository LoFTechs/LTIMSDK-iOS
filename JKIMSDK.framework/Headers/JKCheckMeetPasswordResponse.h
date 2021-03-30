//
//  JKCheckMeetPasswordResponse.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"

#import "JKIMEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKCheckMeetPasswordResponse : JKIQResponse

@property (assign, nonatomic, readonly) JKMeetStatus meetStatus;
@property (assign, nonatomic, readonly) BOOL passwordProtected;

@end

NS_ASSUME_NONNULL_END
