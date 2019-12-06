






#import <Foundation/Foundation.h>
#import <APSMiddleware/APSFactory.h>

NS_ASSUME_NONNULL_BEGIN
@class APSBridge;
@class APSActivate;

@interface APSActivateFactory : NSObject<APSFactory>
{
    APSBridge* bridge;
    APSActivate* activate;
}
@end

NS_ASSUME_NONNULL_END
