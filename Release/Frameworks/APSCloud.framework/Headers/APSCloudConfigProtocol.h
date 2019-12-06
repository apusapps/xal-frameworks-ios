






#import <Foundation/Foundation.h>
#import <APSMiddleware/APSSdkConfig.h>
NS_ASSUME_NONNULL_BEGIN

@protocol APSCloudConfigProtocol<NSObject,APSSdkConfig>


@optional
- (NSString *)fileUpdateUrl;


@optional
- (NSString *)configUrl;


@optional
- (int)version;


@optional
- (int)XOR;

@end

NS_ASSUME_NONNULL_END
