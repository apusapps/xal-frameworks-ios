//
//  XALByteArray.h
//  Apollo
//
//  Created by apus on 2019/6/13.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XALByteArray : NSObject

@property (nonatomic, strong) NSMutableData *data;

@property (nonatomic, assign) BOOL bigEndian;
@property (nonatomic, assign) NSUInteger position;
@property (nonatomic, assign, readonly) NSUInteger capacity;
@property (nonatomic, assign, readonly) BOOL available;
@property (nonatomic, assign, readonly) NSUInteger availableLength;

- (instancetype)initWithLength:(NSUInteger)length bigEndian:(BOOL)bigEndian;

- (instancetype)initWithBytes:(Byte *)bytes length:(NSUInteger)length;

- (instancetype)initWithData:(NSData *)data bigEndian:(BOOL)bigEndian;

- (instancetype)initWithUrl:(NSURL *)url bigEndian:(BOOL)bigEndian;

- (instancetype)initWithName:(NSString *)name bigEndian:(BOOL)bigEndian;

- (instancetype)initWithBigEndian:(BOOL)bigEndia;

#pragma mark - replace values

- (void)replaceData:(NSData *)data;
- (void)replaceDataBloak:(NSData *)block;
- (void)replaceUInt:(NSUInteger)value;
- (void)replaceBytesInsize:(NSUInteger)size withBytes:(const void *)bytes;

#pragma mark - read values

- (NSData *)readData;
- (nullable NSData *)readDataWithLength:(NSUInteger)length;
- (NSString *)readUTFStringWithEncoding:(NSStringEncoding)encoding;
- (NSString *)readUTFStringWithLength:(NSUInteger)length encoding:(NSStringEncoding)encoding;

- (double)readDouble;
- (float)readFloat;
- (BOOL)readBool;

- (UInt8)readUInt8;
- (SInt8)readSInt8;

- (UInt16)readUInt16;
- (SInt16)readSInt16;

- (NSUInteger)readUInt;
- (NSInteger)readInt;

- (UInt32)readUInt32;
- (SInt32)readSInt32;

- (UInt64)readUInt64;
- (SInt64)readSInt64;

#pragma mark - append values

- (void)appendLength:(NSUInteger)value;
- (void)appendData:(NSData *)data includeLength:(BOOL)includeLength;
- (void)appendUTFString:(NSString *)string includeLength:(BOOL)includeLength encoding:(NSStringEncoding)encoding;

- (void)appendFloat:(float)value;
- (void)appendDouble:(double)value;
- (void)appendBool:(BOOL)value;

- (void)appendUInt8:(UInt8)value;
- (void)appendSInt8:(SInt8)value;

- (void)appendUInt16:(UInt16)value;
- (void)appendSInt16:(SInt16)value;

- (void)appendUInt:(NSUInteger)value;
- (void)appendSInt:(NSInteger)value;

- (void)appendUInt32:(UInt32)value;
- (void)appendSInt32:(SInt32)value;

- (void)appendUInt64:(UInt64)value;
- (void)appendSInt64:(SInt64)value;

- (void)appendEmptyBytesWithLength:(NSUInteger)length;

@end

NS_ASSUME_NONNULL_END
