//
//  APSCloudKeyValueTable.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/25.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class FMDatabase;
@interface APSCloudKeyValueTable : NSObject
- (instancetype)initWithDatabase:(FMDatabase *)fmdb;
- (nullable NSArray *)readAllkeys;
- (nullable NSString *)readValueForkey:(NSString *)key;
- (BOOL)updateWithArray:(NSArray *)array;

@end

NS_ASSUME_NONNULL_END
