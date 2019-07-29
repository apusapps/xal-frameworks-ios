//
//  APSEventTable.h
//  Adjust
//
//  Created by apus on 2019/7/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class FMDatabase, EventRecord;

@interface APSEventTable : NSObject

- (instancetype)init:(FMDatabase *)db;
- (BOOL)insertEvents:(NSArray<EventRecord *> *)events;
- (NSArray *)selectFromeIDs:(NSString *)idListStr;
- (BOOL)deleteWithIDs:(NSArray *)idList;
- (NSArray *)getRecordListWithIDArray:(NSArray *)IDArray;
- (NSDictionary *)getRecordListWithLimit:(NSInteger)limit;
- (NSUInteger)count;
- (NSUInteger)productCount;
- (NSUInteger)starkSDKCount;
- (NSString *)dump;
@end

NS_ASSUME_NONNULL_END
