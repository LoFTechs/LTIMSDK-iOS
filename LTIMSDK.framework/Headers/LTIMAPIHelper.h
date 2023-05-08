//
//  LTIMAPIHelper.h
//  LTIMSDK
//
//  Created by shane on 2022/10/7.
//  Copyright © 2022 Sheng-Tsang Uou. All rights reserved.
//

#import <LTSDK/LTSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTIMAPIHelper : NSObject
+ (void)queryUserProfileWithUserIDs:(NSArray<NSString *> * _Nullable)userIDs phoneNumbers:(NSArray<NSString *> * _Nullable)phoneNumbers user:(LTUser *_Nonnull)user completion:(void (^_Nullable)(LTResponse * _Nonnull response, NSDictionary * _Nullable dict))completion;

+ (void)createChannelWithChID:(NSString * _Nonnull)channelID chType:(NSString * _Nonnull)chType subject:(NSString * _Nonnull)subject user:(LTUser *_Nonnull)user userObjects:(NSArray * _Nonnull)userObjects hasCPAcc:(BOOL)hasCPAcc completion:(void (^_Nullable)(LTResponse * _Nonnull response, NSDictionary * _Nullable dict))completion;

+ (void)create33OneToOneWithContactID:(NSString * _Nonnull)contactID propertyID:(NSString * _Nonnull)propertyID user:(LTUser *_Nonnull)user completion:(void (^_Nullable)(LTResponse * _Nonnull response, NSDictionary * _Nullable dict))completion;

+ (void)sendMessageWithDict:(NSString *_Nonnull)dict user:(LTUser *_Nonnull)user completion:(void (^_Nullable)(LTResponse * _Nonnull response, NSDictionary * _Nullable dict))comcompletion;

+ (void)broadcastWithMessages:(NSArray * _Nonnull)messages channels:(NSArray * _Nonnull)channels user:(LTUser *_Nonnull)user  completion:(void (^_Nullable)(LTResponse * _Nonnull response, NSDictionary * _Nullable dict))completion;

@end

NS_ASSUME_NONNULL_END
