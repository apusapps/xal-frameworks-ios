//
//  APSSendTable.h
//  Adjust
//
//  Created by apus on 2019/7/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class FMDatabase;
@interface APSSendTable : NSObject

- (instancetype)init:(FMDatabase *)db;
- (NSDictionary *)insertWithIdList:(NSArray *)idList;
- (NSDictionary *)getSendEvents;
- (NSArray *)getEventListWithId:(NSInteger)ID;
- (BOOL)deleteWithID:(NSInteger)ID;
- (NSUInteger)count;
- (NSString *)dump;
@end

NS_ASSUME_NONNULL_END
