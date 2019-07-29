//
//  APSCloudLogManager.h
//  AFNetworking
//
//  Created by apus on 2019/7/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSCloudLogManager : NSObject

@property (nonatomic, copy, readonly) NSString *currentDateString;

+ (instancetype)shared;

- (void)writeConfig:(NSString *)config;
- (void)writeFileConfig:(NSString *)config;

@end

NS_ASSUME_NONNULL_END
