//
//  APSNetworkPrivate.h
//  Apollo
//
//  Created by apus on 2019/6/11.
//  Copyright © 2019 apus.cuixuerui.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APSZeusRequest.h"
#import "APSHTTPRequestSerializer.h"
NS_ASSUME_NONNULL_BEGIN

@interface APSZeusRequest (Setter)

@property (nonatomic, strong, readwrite) NSURLSessionTask *requestTask;
@property (nonatomic, strong, readwrite, nullable) id responseData;
@property (nonatomic, strong, readwrite, nullable) NSError *error;

@end

@interface APSHTTPRequestSerializer (Setter)

@property (nonatomic, strong, readwrite) APSZeusRequest *request;

@end

NS_ASSUME_NONNULL_END
