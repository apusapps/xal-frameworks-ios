






#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSUserTagService <NSObject>
-(NSString *)getKeywordInfo:(NSString *)key;
-(NSDictionary *)getAllKeywords;
-(void)executeTask:(NSString *)fromSource;
-(void)start;
@end

NS_ASSUME_NONNULL_END
