//
//  JKUserHelper.h
//  JKIMSDK
//
//  Created by Zayn on 2020/8/13.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKIMEnum.h"
#import "JKResponseHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKUserHelper : NSObject

- (JKUserHelper * _Nonnull)init NS_UNAVAILABLE;
+ (JKUserHelper * _Nonnull)new NS_UNAVAILABLE;


#pragma mark - deviceNotifyPreview
- (void)setUserDeviceNotifyPreviewWithTransID:(NSString * _Nonnull)transID hidingSender:(BOOL)hidingSender hidingContent:(BOOL)hidingContent completion:(void (^_Nullable)(JKUserDeviceNotifyPreviewResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - setUserDeviceMute
- (void)setUserDeviceMuteWithTransID:(NSString * _Nonnull)transID muteAll:(BOOL)muteAll time:(NSNumber * _Nullable)time completion:(void (^_Nullable)(JKUserDeviceMuteResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - setDeviceNotifySound
- (void)setDeviceNotifySoundWithTransID:(NSString * _Nonnull)transID soundType:(NSUInteger)soundType soundID:(NSString * _Nonnull)soundID completion:(void (^_Nullable)(JKUserDeviceNotifySoundResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - setUserPushToken
- (void)setUserPushTokenWithTransID:(NSString * _Nonnull)transID key:(NSString * _Nonnull)key completion:(void (^_Nullable)(JKUserPushTokenResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - queryDeviceNotify
- (void)queryDeviceNotifyWithTransID:(NSString * _Nonnull)transID completion:(void (^_Nullable)(JKQueryUserDeviceNotifyResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - setUserNickname
- (void)setUserNicknameWithTransID:(NSString * _Nonnull)transID nickname:(NSString * _Nonnull)nickname completion:(void (^_Nullable)(JKSetUserProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - setUserAvatar
- (void)setUserAvatarWithTransID:(NSString * _Nonnull)transID filePath:(NSString * _Nullable)filePath completion:(void (^_Nullable)(JKSetUserProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion progress:(void (^_Nullable)(JKProgressResponse * _Nullable progressResponse, BOOL isDone))progress;

#pragma mark - downloadPlusMenu
- (void)downloadPlusMenuWithTransID:(NSString * _Nonnull)transID menuID:(NSString * _Nonnull)menuID completion:(void (^_Nullable)(JKDownloadPlusMenuResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - queryPlusMenuList
- (void)queryPlusMenuListWithTransID:(NSString * _Nonnull)transID count:(NSUInteger)count completion:(void (^_Nullable)(JKQueryPlusMenuListResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - queryUserID
- (void)queryUserIDWithTransID:(NSString * _Nonnull)transID phoneNumbers:(NSArray<NSString *> * _Nonnull)phoneNumbers brandID:(NSString * _Nonnull)brandID completion:(void (^_Nullable)(JKQueryUserDataResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - queryPhoneNumber
- (void)queryPhoneNumberWithTransID:(NSString * _Nonnull)transID userIDs:(NSArray<NSString *> * _Nonnull)userIDs completion:(void (^_Nullable)(JKQueryUserDataResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

#pragma mark - queryUserProfile
- (void)queryUserProfileWithTransID:(NSString * _Nonnull)transID userIDs:(NSArray<NSString *> * _Nullable)userIDs phoneNumbers:(NSArray<NSString *> * _Nullable)phoneNumbers completion:(void (^_Nullable)(JKQueryUserProfileResponse * _Nullable response, JKErrorInfo * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
