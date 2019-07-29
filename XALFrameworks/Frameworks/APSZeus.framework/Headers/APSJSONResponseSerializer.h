//
//  APSJSONResponseSerializer.h
//  Apollo
//
//  Created by apus on 2019/6/19.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

NS_ASSUME_NONNULL_BEGIN

@class APSZeusResult;
@class APSZeusRequest;

@interface APSJSONResponseSerializer: AFJSONResponseSerializer

/**
 JSON 反序列化，并统一处理 error
 
 @param request APSZeusRequest
 @param error HTTP error
 @return APSZeusResult
 */
- (APSZeusResult *)deserialize:(APSZeusRequest *)request error:(NSError * _Nullable __autoreleasing *)error NS_SWIFT_NOTHROW;

@end

NS_ASSUME_NONNULL_END
