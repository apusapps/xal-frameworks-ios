







#import <Foundation/Foundation.h>
#import <APSSdkService/APSRemoteConfigService.h>
#import <APSMiddleware/APSSdkEntry.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(int, APSRemoteConfigActionType) {
    APSRemoteConfigActionTypeTaken = 0,     
    APSRemoteConfigActionTypeDelete = 1,    
    APSRemoteConfigActionTypeUntaken = -1   
};

@class APSCloudEnv;

@interface APSRemoteConfig : NSObject<APSRemoteConfigService>

@property (nonatomic, strong) NSArray *modules;
@property (nonatomic, strong) APSCloudEnv *Env;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
