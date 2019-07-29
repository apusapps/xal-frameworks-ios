//
//  APSHTTPRequestSerializer.h
//  Apollo
//
//  Created by apus on 2019/6/6.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
NS_ASSUME_NONNULL_BEGIN

@class APSZeusRequest;

@interface APSHTTPRequestSerializer: AFHTTPRequestSerializer

@property (nonatomic, strong, readonly, nullable) APSZeusRequest *request;

+ (instancetype)serializerWithRequest:(APSZeusRequest *)request;

@end

NS_ASSUME_NONNULL_END
