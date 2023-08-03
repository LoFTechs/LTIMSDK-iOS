//
//  LTRecallResponse.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/31.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import "LTMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTRecallResponse : LTMessageResponse

@property (strong, nonatomic, readonly) NSString *recallMsgID;

@end

NS_ASSUME_NONNULL_END
