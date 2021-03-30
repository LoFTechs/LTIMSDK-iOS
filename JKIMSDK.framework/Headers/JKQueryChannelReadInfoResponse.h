//
//  JKQueryChannelReadInfoResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIQResponse.h"
#import "JKReadInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKQueryChannelReadInfoResponse : JKIQResponse

@property (strong, nonatomic, readonly) NSString *chID;

@property (strong, nonatomic, readonly) NSArray<JKReadInfo *> *readInfo;

@end

NS_ASSUME_NONNULL_END
