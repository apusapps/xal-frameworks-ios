// automatically generated, do not modify !!!

#import <FlatBuffers_ObjC/FBTable.h>
#import "APSKeyWord.h"
#import "APSApkUpdateRequestInfo.h"
#import "APSFileUpdateRequestInfo.h"


@interface APSAppUpdateRequest : FBTable 

@property (nonatomic, strong)NSString *locale;

@property (nonatomic, strong)NSString *ip;

@property (nonatomic, assign)int64_t clientTime;

@property (nonatomic, assign)int16_t localZone;

@property (nonatomic, strong)NSString *clientID;

@property (nonatomic, strong)NSString *ocid;

@property (nonatomic, strong)NSString *channel;

@property (nonatomic, strong)NSString *packageName;

@property (nonatomic, assign)int32_t versionCode;

@property (nonatomic, strong)NSString *versionName;

@property (nonatomic, assign)int64_t installTime;

@property (nonatomic, assign)int64_t updateTime;

@property (nonatomic, strong)FBMutableArray<NSString *> *tags;

@property (nonatomic, strong)FBMutableArray<APSKeyWord *> *keyWords;

@property (nonatomic, strong)NSString *token;

@property (nonatomic, strong)FBMutableArray<APSApkUpdateRequestInfo *> *apkUpdateRequestInfo;

@property (nonatomic, strong)FBMutableArray<APSFileUpdateRequestInfo *> *fileUpdateRequestInfo;

@property (nonatomic, assign)int32_t dimensionsCrc32;

@property (nonatomic, assign)int32_t sdkLevel;

@property (nonatomic, strong)NSString *installerSource;

@property (nonatomic, strong)NSString *simCountryCode;

@property (nonatomic, strong)NSString *networkCountryCode;

@property (nonatomic, strong)NSString *appId;

@end
