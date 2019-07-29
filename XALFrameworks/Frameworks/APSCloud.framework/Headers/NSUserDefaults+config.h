//
//  NSUserDefaults+config.h
//  APSConfigDemo
//
//  Created by apus on 2019/7/1.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSUserDefaults (config)

@property (nonatomic, assign) int XALGlobalKVDimensions32;
@property (nonatomic, assign) int XALGlobDimensionsCrc32;
@property (nonatomic, strong) NSString *XALGlobalKVToken;
@property (nonatomic, assign) NSTimeInterval XALConfigLastFetchTime;

@end

NS_ASSUME_NONNULL_END
