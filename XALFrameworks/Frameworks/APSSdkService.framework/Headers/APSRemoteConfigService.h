//
//  APSRemoteConfigService.h
//  APSConfigDemo
//
//  Created by apus on 2019/7/1.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSRemoteConfigService <NSObject>

- (void)fetchRemoteConfig:(BOOL)isAuto completion:(nullable void (^)(void))completion;
- (void)start:(nullable void (^)(void))completion;

#pragma mark 文件云控信息
- (NSData *)getFileDataWithName:(NSString *)fileName;
- (NSString *)getFileStringWithName:(NSString *)fileName;
- (NSString *)getPropertyValueWithName:(NSString *)fileName
                                   key:(NSString *)key
                          defaultValue:(NSString *)defaultValue;
#pragma mark 配置云控信息
- (NSString *)getStringWithKey:(NSString *)key defaultValue:(NSString *)defaultValue;
- (int)getIntWithKey:(NSString *)key defaultValue:(int)defaultValue;
- (double)getDoubleWithKey:(NSString *)key defaultValue:(double)defaultValue;
- (BOOL)getBoolWithKey:(NSString *)key defaultValue:(BOOL)defaultValue;

- (void)addRemoteConfigModules:(NSArray<NSString *> *)modules;
- (void)removeRemoteConfigModules:(NSArray<NSString *> *)modules;

#pragma DEBUG
@optional
- (NSCache *)getCache;
@optional
- (NSArray<NSString *> *)allKeys;
@optional
- (NSString *)moduleTable;
@optional
- (NSString *)kvTable;
@optional
- (NSCache *)getFileUpdateCache;
@optional
- (NSString *)fileUpdateTable;
@optional
- (NSArray<NSString *> *)allFileUpdateKeys;

@end

NS_ASSUME_NONNULL_END
