//
//  APSFileDownloader.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/24.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSFileDownloader : NSObject

+ (instancetype)shared;

- (NSURL *)fileUpdateFolder;

- (NSURL *)fileUpdateFolderWithDefault:(BOOL) isDefault;

- (NSURLSessionDownloadTask *)downloadWithFileName:(NSString *)fileName
                                           fileUrl:(NSString *)fileUrl
                                           success:(nullable void(^)(bool result, bool temped))success
                                           failure:(nullable void(^)(NSError * _Nullable error))failure;

@end

NS_ASSUME_NONNULL_END
