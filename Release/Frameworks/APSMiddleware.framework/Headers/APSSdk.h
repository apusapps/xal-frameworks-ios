






#import <Foundation/Foundation.h>
#import "APSBridge.h"
#import "APSIBoot.h"

NS_ASSUME_NONNULL_BEGIN

@class APSAppInfo;

@interface APSSdk : NSObject
{
    APSBridge* bridge;
    APSAppInfo* appInfo;
    id<APSIBoot> boot;
}

+(APSBridge *)getBridge;

+(_Nullable id)findSdk:(id)delegate;

+(id)getSdk:(id)delegate;

+(_Nullable id)findService:(id)delegate;

+(void)customOption:(id)option;

+(_Nullable id)getOption:(id)delegate;

+(void)setAppInfo:(APSAppInfo *)appInfo;

+(APSAppInfo *)getAppInfo;

+(void)didFinishLaunching:(APSAppInfo *)appInfo boot:(id<APSIBoot>)boot;

+(void)entryHomePage:(NSString*)pageName;
@end

NS_ASSUME_NONNULL_END
