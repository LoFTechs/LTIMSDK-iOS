//
//  LTVoteFileInfo.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/10.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTVoteFileInfo : NSObject

@property (strong, nonatomic) NSString *filename;
@property (strong, nonatomic) NSString *order;
@property (strong, nonatomic) NSString *ownerDomain;
@property (strong, nonatomic) NSString *ownerID;

@end

NS_ASSUME_NONNULL_END
