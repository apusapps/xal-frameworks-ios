//
//  APSAlexDatabase.h
//  APSAlex
//
//  Created by zhangfenglin on 2019/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class FMDatabase;
@class APSAlexEventTable;
@class APSAlexSendTable;

@interface APSAlexDatabase : NSObject
{
    @private
    FMDatabase* db;
    APSAlexEventTable* eventTable;
    APSAlexSendTable* sendTable;
}
+(instancetype)shared;
-(void)setupDB;
@end

NS_ASSUME_NONNULL_END
