//
//  APSRemoteConfigRequest.h
//  APSConfigDemo
//
//  Created by apus on 2019/6/28.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APSConfigUpdateResponse.h"

NS_ASSUME_NONNULL_BEGIN
@class APSCloudEnv;

@interface APSRemoteConfigRequest : NSObject

+ (void)fetchRemoteConfigWithModules:(NSArray *)updateModules
                                 env:(APSCloudEnv *)env
                             success:(void (^)(APSConfigUpdateResponse * _Nonnull))success
                             failure:(void (^)(NSError * _Nonnull))failure;
@end

NS_ASSUME_NONNULL_END
