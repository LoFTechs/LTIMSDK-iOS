//
//  JKFileInfo.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKFileInfo : NSObject

@property (strong, nonatomic) NSString *fileName;

@property (strong, nonatomic) NSString *remoteFilePath;

@property (strong, nonatomic) NSString *fileContentType;

@property (strong, nonatomic) NSString *thumbnailName;

@property (strong, nonatomic) NSString *remoteThumbnailPath;

@property (strong, nonatomic) NSString *thumbnailContentType;

@property (assign, nonatomic) long long fileSize;

@property (assign, nonatomic) long long thumbnailSize;

@property (strong, nonatomic) NSString *storageID;

@property (strong, nonatomic) NSString *storageDomain;

@property (strong, nonatomic) NSString *endpointName;

@end

NS_ASSUME_NONNULL_END
