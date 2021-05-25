//
//  LTMeetHelper.h
//  LTIMSDK
//
//  Created by Zayn on 2020/8/17.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "LTIMEnum.h"
#import "LTResponseHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTMeetHelper : NSObject

- (LTMeetHelper * _Nonnull)init NS_UNAVAILABLE;
+ (LTMeetHelper * _Nonnull)new NS_UNAVAILABLE;

#pragma mark - sendMeetInvite
- (void)sendMeetInviteMessage:(LTMeetInviteMessage *)message completion:(void (^)(LTSendMessageResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - queryMeetRoomInfo
- (void)queryMeetRoomInfoWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID completion:(void (^_Nullable)(LTQueryMeetRoomInfoResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;
- (void)queryMeetRoomInfoWithTransID:(NSString * _Nonnull)transID meetID:(NSString * _Nonnull)meetID completion:(void (^_Nullable)(LTQueryMeetRoomInfoResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - createMeetRoom
- (void)createMeetRoomWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID memberOnly:(BOOL)memberOnly startTime:(NSTimeInterval)startTime duration:(long long)duration completion:(void (^_Nullable)(LTCreateMeetRoomResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - checkMeetRoomPassword
- (void)checkMeetRoomPasswordWithTransID:(NSString * _Nonnull)transID meetID:(NSString * _Nonnull)meetID password:(NSString * _Nonnull)password completion:(void (^_Nullable)(LTCheckMeetPasswordResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

#pragma mark - setConfRoomSignal
- (void)answerMeetWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID meetID:(NSString * _Nonnull)meetID callerID:(NSString * _Nullable)callerID callerNickname:(NSString * _Nullable)callerNickname subject:(NSString * _Nullable)subject completion:(void (^_Nullable)(LTSetMeetSignalResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;
- (void)rejectMeetWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID meetID:(NSString * _Nonnull)meetID callerID:(NSString * _Nullable)callerID callerNickname:(NSString * _Nullable)callerNickname subject:(NSString * _Nullable)subject completion:(void (^_Nullable)(LTSetMeetSignalResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;
- (void)busyMeetWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID meetID:(NSString * _Nonnull)meetID callerID:(NSString * _Nullable)callerID callerNickname:(NSString * _Nullable)callerNickname subject:(NSString * _Nullable)subject completion:(void (^_Nullable)(LTSetMeetSignalResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;
- (void)ignoreMeetWithTransID:(NSString * _Nonnull)transID chID:(NSString * _Nonnull)chID meetID:(NSString * _Nonnull)meetID callerID:(NSString * _Nullable)callerID callerNickname:(NSString * _Nullable)callerNickname subject:(NSString * _Nullable)subject completion:(void (^_Nullable)(LTSetMeetSignalResponse * _Nullable response, LTErrorInfo * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
