






#import <Foundation/Foundation.h>
#import <APSMiddleware/APSSdkConfig.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSEventLoggerConfigDelegate <NSObject, APSSdkConfig>
- (BOOL)isRealModel;
- (NSString*)getRecordProductURL;
- (NSString*)getRecordAdsURL;
- (NSString*)getReportURL;
@end

NS_ASSUME_NONNULL_END
