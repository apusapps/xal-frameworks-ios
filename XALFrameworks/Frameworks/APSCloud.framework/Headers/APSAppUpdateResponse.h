// automatically generated, do not modify !!!

#import <FlatBuffers_ObjC/FBTable.h>
#import "APSApkUpdateData.h"
#import "APSFileUpdateData.h"


@interface APSAppUpdateResponse : FBTable 

@property (nonatomic, strong)NSString *logId;

@property (nonatomic, assign)int16_t errorCode;

@property (nonatomic, assign)int16_t interval;

@property (nonatomic, strong)FBMutableArray<APSApkUpdateData *> *apkUpdateData;

@property (nonatomic, strong)FBMutableArray<APSFileUpdateData *> *fileUpdateData;

@property (nonatomic, assign)int32_t dimensionsCrc32;

@property (nonatomic, assign)int64_t serverTime;

@end
