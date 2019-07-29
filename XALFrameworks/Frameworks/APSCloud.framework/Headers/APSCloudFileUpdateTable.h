//
//  APSCloudFileUpdateTable.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/25.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class FMDatabase;
@class APSFileUpdateData;

@interface APSCloudFileUpdateTable : NSObject

- (instancetype)initWithDatabase:(FMDatabase *)fmdb;
- (NSArray *)readAll;

- (NSArray *)read;
- (nullable APSFileUpdateData *)readWithName:(NSString *)name;
- (BOOL)updateWithFileName:(NSString *)fileName status:(NSInteger)status;

- (BOOL)updateWithModules:(NSArray *)modules;

@end

NS_ASSUME_NONNULL_END
