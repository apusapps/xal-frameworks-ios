//
//  APSAlexManager.h
//  APSAlex
//
//  Created by zhangfenglin on 2019/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAlexManager : NSObject

+(instancetype)shared;
-(void)logEvent:(int)eventId moduleName:(nullable NSString *)moduleName data:(NSDictionary *)data isRealTimeMode:(BOOL)isRealTimeMode;
@end

NS_ASSUME_NONNULL_END
