// automatically generated, do not modify !!!

#import <FlatBuffers_ObjC/FBTable.h>
#import "APSConfigUpdateReturnModuleInfo.h"


@interface APSConfigUpdateResponse : FBTable 

@property (nonatomic, strong)NSString *logId;

@property (nonatomic, assign)int16_t errorCode;

@property (nonatomic, assign)int16_t interval;

@property (nonatomic, assign)int32_t dimensionsCrc32;

@property (nonatomic, strong)NSString *token;

@property (nonatomic, strong)FBMutableArray<APSConfigUpdateReturnModuleInfo *> *updateData;

@property (nonatomic, assign)int64_t serverTime;

@end
