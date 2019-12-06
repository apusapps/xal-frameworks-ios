






#import <Foundation/Foundation.h>
#import "APSProvider.h"

NS_ASSUME_NONNULL_BEGIN

@class APSSdkRegistry;
@class APSServiceRegistry;
@class APSOptionRegistry;
@class APSAppInfo;

@interface APSBridge : NSObject {
    APSSdkRegistry* sdkRegistry;
    APSServiceRegistry* serviceRegistry;
    APSOptionRegistry* optionRegistry;
    APSAppInfo* appInfo;
}

-(APSSdkRegistry *)getSdks;

-(APSServiceRegistry *)getServices;

-(id)getSdk:(id)delegate;

-(_Nullable id)findSdk:(id)delegate;

-(_Nullable id)findService:(id)delegate;

-(void)customOption:(id)option;

-(_Nullable id)getOption:(id)delegate;
-(void)setAppInfo:(APSAppInfo *)appInfo;
-(APSAppInfo *)getAppInfo;
@end

NS_ASSUME_NONNULL_END
