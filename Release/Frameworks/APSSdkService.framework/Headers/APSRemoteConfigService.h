







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSRemoteConfigService <NSObject>


- (void)start:(nullable void (^)(void))completion;


- (void)fetchRemoteConfig:(BOOL)isAuto completion:(nullable void (^)(void))completion;




- (NSData *)getFileDataWithName:(NSString *)fileName;


- (NSString *)getFileStringWithName:(NSString *)fileName;


- (NSString *)getPropertyValueWithName:(NSString *)fileName
                                   key:(NSString *)key
                          defaultValue:(NSString *)defaultValue;


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
