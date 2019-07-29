//
//  APSCloudPrivate.h
//  APSConfigDemo
//
//  Created by apus on 2019/7/3.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APSCloudEnv.h"
#import "APSCloudConfig.h"
NS_ASSUME_NONNULL_BEGIN

@interface APSCloudEnv (Setter)
@property (nonatomic, copy, readwrite) NSString *fileUpdateUrl;
@property (nonatomic, copy, readwrite) NSString *configUrl;
@property (nonatomic, assign, readwrite) int XOR;
@property (nonatomic, assign, readwrite) int version;
@property (nonatomic, assign, readwrite) int cacheCountLimit;
@property (nonatomic, assign, readwrite) int periodicTimeInterval;

@end

@interface APSCloudConfig (Setter)
@property (nonatomic, copy) NSArray *defaultModules;

@end

NS_ASSUME_NONNULL_END
