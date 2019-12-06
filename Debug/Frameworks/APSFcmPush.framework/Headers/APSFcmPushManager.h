






#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class APSPushMessage;
@interface APSFcmPushManager : NSObject

+(APSFcmPushManager *)shareManager;



- (void)startWithIsDebug:(BOOL)isDebug
             application:(UIApplication *)application
                   appID:(NSString *)appID
       actionButtonTitle:(NSString *)actionTitle
     actionButtonHandler:(void (^)(APSPushMessage *))actionHandler
          messageHandler:(void (^)(APSPushMessage *))messageHandler;

@end

NS_ASSUME_NONNULL_END
