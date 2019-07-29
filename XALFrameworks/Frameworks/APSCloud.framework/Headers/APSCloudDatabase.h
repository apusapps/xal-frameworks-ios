//
//  APSCloudDatabase.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/25.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@class APSFileUpdateData;
@class APSCloudKeyValueTable;
@class APSCloudModuleTable;
@class APSCloudFileUpdateTable;

@interface APSCloudDatabase : NSObject

@property (nonatomic, strong) APSCloudKeyValueTable *keyValueTable;
@property (nonatomic, strong) APSCloudModuleTable *moduleTable;
@property (nonatomic, strong) APSCloudFileUpdateTable *fileUpdateTable;

+ (instancetype)shared;

- (NSArray *)readAllModules;
- (NSArray *)readAllKeys;
- (NSArray *)readAllFileUpdateKeys;
- (NSArray *)readAllFileUpdateList;
- (NSArray *)readFileUpdateList;
- (NSString *)readValueForKey:(NSString *)key;
- (APSFileUpdateData *)readFileUpdateDataForName:(NSString *)fileName;

- (BOOL)updateModulesTableWithArray:(NSArray *)array;
- (BOOL)updateKeyValueTablesWithArray:(NSArray *)array;
- (BOOL)updateFileTableWithName:(NSString *)fileName status:(NSInteger) status;
- (BOOL)updateFileTableWithArray:(NSArray *)array;

- (NSString *)listModuleTable;
- (NSString *)listKeyValueTable;
- (NSString *)listFileUpdateTable;

@end

NS_ASSUME_NONNULL_END
