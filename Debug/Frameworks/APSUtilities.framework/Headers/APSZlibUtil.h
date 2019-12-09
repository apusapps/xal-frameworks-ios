






#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSZlibUtil : NSObject
+ (nullable NSData *)compress:(NSData *)data;
+ (nullable NSData *)uncompress:(NSData *)data;
+ (NSData *)compressWithString:(NSString *)str;
+ (NSString *)uncompressToString:(NSData *)data;
@end

NS_ASSUME_NONNULL_END
