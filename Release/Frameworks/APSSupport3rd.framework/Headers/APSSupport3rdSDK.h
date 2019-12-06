






#import <Foundation/Foundation.h>

@class APSBridge;

NS_ASSUME_NONNULL_BEGIN

@interface APSSupport3rdSDK : NSObject

@property (nonatomic, strong) APSBridge *bridge;

- (instancetype)initWithBridge:(APSBridge *)bridge;

@end

NS_ASSUME_NONNULL_END
