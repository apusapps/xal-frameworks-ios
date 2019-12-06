







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Deflate : NSObject

+ (nullable NSData *)compress: (NSData *)data;
+ (nullable NSData *)decompress: (NSData *)data;

@end

NS_ASSUME_NONNULL_END
