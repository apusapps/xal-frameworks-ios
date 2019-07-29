//
//  APSFileUpdateManager.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/25.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^APSFileUpdateCompletionBlock)(void);
@class APSAppUpdateResponse;
@class APSKeyWord;
@class APSCloudEnv;

@interface APSFileUpdateManager : NSObject

@property (nonatomic, strong) NSCache *cache;

+ (instancetype)shared;

- (void)fetchEnv:(APSCloudEnv *)env completion:(APSFileUpdateCompletionBlock)completion;

- (nullable NSData *)dataWithFileName:(NSString *)fileName;
- (nullable NSString *)stringWithFileName:(NSString *)fileName;
- (void)startDownloadFiles;
- (void)downloadNextFile;

- (nullable NSDictionary *)propertyListWithFileName:(NSString *)fileName;
- (void)syncToCache:(NSString *)fileName;
- (nullable NSString *)readFromCache:(NSString *)fileName withKey:(NSString *)key;
- (void)fetchFileUpdateEnv:(APSCloudEnv *)env
                   success:(void (^)(APSAppUpdateResponse *response))success
                   failure:(void (^)(NSError *error)) failure;
@end

NS_ASSUME_NONNULL_END
