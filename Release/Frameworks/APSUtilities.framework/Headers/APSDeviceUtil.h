






#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class CTCarrier;

@interface APSDeviceUtil : NSObject
+ (NSString *)IDFA;
+ (NSString *)IDFV;
+ (NSString *)model;
+ (NSString *)packageName;
+ (NSString *)packageNameEx;

+ (long)versionCode;
+ (NSString *)versionName;
+ (int)sdkLevel;
+ (BOOL)isJailbreak;
+ (nullable CTCarrier *)carrier;
+ (BOOL)hasSimCard;
+ (NSString *_Nullable)mobileCountryCode;
+ (NSString *_Nullable)mcc;
+ (NSString *_Nullable)mnc;
+ (NSString *_Nullable)mccMnc;
+ (NSArray *_Nullable)ssid;
+ (NSString *_Nullable)mccCountryCode;
+ (NSString *)saveUUID;
+ (NSString *)getUUID;
+ (void)deleteUUID;
@end

NS_ASSUME_NONNULL_END
