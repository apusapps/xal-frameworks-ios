







#import <Foundation/Foundation.h>

#import "APSCloudConfigProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSCloudConfig : NSObject<APSCloudConfigProtocol>


- (void)setConfigUrl:(NSString * _Nonnull)configUrl;


- (void)setFileUpdateUrl:(NSString * _Nonnull)fileUpdateUrl;


- (void)setVersion:(int)version;


- (void)setXOR:(int)XOR;


@end

NS_ASSUME_NONNULL_END
