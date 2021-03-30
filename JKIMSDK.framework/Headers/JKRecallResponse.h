//
//  JKRecallResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/8/31.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKMessageResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKRecallResponse : JKMessageResponse

@property (strong, nonatomic, readonly) NSString *recallMsgID;

@end

NS_ASSUME_NONNULL_END
