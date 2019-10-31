//
//  APSFcmPushManager.h
//  AFNetworking
//
//  Created by apus on 2019/7/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BindingDeviceRequest : NSObject

@property(nonatomic, copy) NSString *sp;
@property(nonatomic, copy) NSString *platform;
@property(nonatomic, copy) NSString *appId;
@property(nonatomic, copy) NSString *registrationId;
@property(nonatomic, copy) NSString *clientId;
@property(nonatomic, copy) NSString *ext;

@end

@interface BindingDeviceResponse : NSObject

@property(nonatomic, copy) NSString *log_id;
@property(nonatomic, copy) NSString *error_code;
@property(nonatomic, copy) NSString *error_msg;

@end

@class APSPushMessage;
@interface APSFcmPushManager : NSObject

- (void)startWithIsDebug:(BOOL)isDebug
             application:(UIApplication *)application
                   appID:(NSString *)appID
       actionButtonTitle:(NSString *)actionTitle
     actionButtonHandler:(void (^)(APSPushMessage *))actionHandler
          messageHandler:(void (^)(APSPushMessage *))messageHandler;

@end

NS_ASSUME_NONNULL_END
