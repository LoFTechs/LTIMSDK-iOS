//
//  LTVoteItem.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/10.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTVoteItem : NSObject

@property (strong, nonatomic, readonly) NSString *optionMsgID;
@property (strong, nonatomic, readonly) NSString *optionContent;
@property (assign, nonatomic, readonly) long long votedTime;//mile second

@end

NS_ASSUME_NONNULL_END
