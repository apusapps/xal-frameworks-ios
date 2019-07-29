//
//  APSConfigUpdateResponse+save.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/28.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import "APSConfigUpdateResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSConfigUpdateResponse (UpateReturnInfo)

- (BOOL)syncToModulesDB;
- (NSArray *)keyValueArray;
- (BOOL)syncToKeyValuesDB;
- (instancetype)initWithData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
