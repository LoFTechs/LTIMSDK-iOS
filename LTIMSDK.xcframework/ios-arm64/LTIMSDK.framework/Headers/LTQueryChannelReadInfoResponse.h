//
//  LTQueryChannelReadInfoResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/11.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTIQResponse.h"

#import "LTReadInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTQueryChannelReadInfoResponse : LTIQResponse

@property (strong, nonatomic, readonly) NSString *chID;

@property (strong, nonatomic, readonly) NSArray<LTReadInfo *> *readInfo;

@end

NS_ASSUME_NONNULL_END
