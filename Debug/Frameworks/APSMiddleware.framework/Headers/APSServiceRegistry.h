






#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef id _Nullable (^ProviderBlock) (void);

@interface APSServiceRegistry : NSObject {
    NSDictionary* registryMap;
}
-(_Nullable id)findService:(id)delegate;
-(void)addProvider:(ProviderBlock)provider forProtocol:(id)delegate;
@end

NS_ASSUME_NONNULL_END
