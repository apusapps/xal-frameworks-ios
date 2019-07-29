// automatically generated, do not modify !!!

#import <FlatBuffers_ObjC/FBTable.h>
#import "APSConfigUpdateData.h"


@interface APSConfigUpdateReturnModuleInfo : FBTable 

@property (nonatomic, strong)NSString *name;

@property (nonatomic, strong)FBMutableArray<NSNumber *> *digests;

@property (nonatomic, assign)int32_t crc32;

@property (nonatomic, assign)int16_t interval;

@property (nonatomic, strong)FBMutableArray<APSConfigUpdateData *> *configData;

@property (nonatomic, assign)int64_t publishTime;

@end
