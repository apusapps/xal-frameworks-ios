//
//  APSEventLogger.h
//  APSAlex
//
//  Created by zhangfenglin on 2019/5/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSEventLogger : NSObject
+(void)logEvent:(int)eventId;
+(void)logEvent:(int)eventId withData:(nullable NSData*)data;
+(void)logEvent:(nullable NSString*)moduleName withEventId:(int)eventId andData:(nullable NSData*)data;
@end

NS_ASSUME_NONNULL_END
