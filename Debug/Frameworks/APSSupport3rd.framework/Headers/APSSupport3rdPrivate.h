







#if DU_POD_INCLUDE
#import "APSDuManager.h"
#endif

#if FLURRY_POD_INCLUDE
#import "APSFlurryManager.h"
#endif

#if BRANCH_POD_INCLUDE
#import "APSBranchManager.h"
#endif


NS_ASSUME_NONNULL_BEGIN

#if DU_POD_INCLUDE
@interface APSDuManager (protect)


- (NSString *)getDID;
- (void)getDIDBlock:(void (^)(NSString * _Nullable deviceID))block;
- (void)start;

@end

#endif

#if FLURRY_POD_INCLUDE
@interface APSFlurryManager (protect)


- (void)start;
- (void)logEvent:(nonnull NSString *)eventName;
- (void)logEvent:(nonnull NSString *)eventName
  withParameters:(nullable NSDictionary *)parameters;

@end
#endif


NS_ASSUME_NONNULL_END
