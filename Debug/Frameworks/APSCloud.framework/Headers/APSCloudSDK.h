







#import <Foundation/Foundation.h>
#import <APSMiddleware/APSFactory.h>
#import <APSMiddleware/APSSdkEntry.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSConfigSDKProtocol <NSObject>

@end

@interface APSCloudSDK : NSObject<APSConfigSDKProtocol, APSSdkEntry>

@property (nonatomic, strong) APSBridge *bridge;

- (instancetype)initWithBridge:(APSBridge *)bridge;

@end

NS_ASSUME_NONNULL_END
