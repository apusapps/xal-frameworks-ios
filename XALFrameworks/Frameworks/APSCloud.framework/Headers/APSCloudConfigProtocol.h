//
//  APSCloudConfigProtocol.h
//  APSCloud
//
//  Created by apus on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import <APSMiddleware/APSSdkConfig.h>
NS_ASSUME_NONNULL_BEGIN

@protocol APSCloudConfigProtocol<NSObject,APSSdkConfig>

- (NSString *)fileUpdateUrl;
- (NSString *)configUrl;

@optional
- (int)version;

@optional
- (int)XOR;

@end

NS_ASSUME_NONNULL_END
