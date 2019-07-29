//
//  NSData+Encrypt.h
//  Apollo
//
//  Created by apus on 2019/6/17.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (Encrypt)

- (NSData *)xorWithKey:(UInt8)key;
- (NSUInteger)crc32;
@end

NS_ASSUME_NONNULL_END
