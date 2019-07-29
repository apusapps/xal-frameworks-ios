//
//  APSXALHeader.h
//  Adjust
//
//  Created by apus on 2019/7/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSXALHeader : NSObject

@property(nonatomic, assign) UInt8 protocolVerstion;
@property(nonatomic, assign) UInt32 count;
@property(nonatomic, assign) UInt32 crc;
@property(nonatomic, assign) UInt32 crcName;
@property(nonatomic, assign) UInt32 versionCode;
@property(nonatomic, assign) UInt8 type;
@property(nonatomic, copy) NSString *tokenId;
@property(nonatomic, assign) UInt32 requestCount;

@end

NS_ASSUME_NONNULL_END
