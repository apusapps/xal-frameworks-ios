






#import <Foundation/Foundation.h>
#import "APSZeusResult.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, APSRequestMethod) {
    APSRequestMethodGET = 0,
    APSRequestMethodPOST,
    APSRequestMethodHEAD,
    APSRequestMethodPUT,
    APSRequestMethodDELETE,
    APSRequestMethodPATCH,
};



typedef NS_ENUM(NSUInteger, APSRequestSerializerType) {
    APSRequestSerializerTypeJSON,
    APSRequestSerializerTypeFBS,
};

typedef NS_ENUM(NSUInteger, APSResponseSerializerType) {
    APSResponseSerializerTypeJSON,
    APSResponseSerializerTypeFBS,
};

@protocol AFMultipartFormData;

typedef void (^AFConstructingBlock)(id<AFMultipartFormData> formData);
typedef void (^AFURLSessionTaskProgressBlock)(NSProgress * progress);

@class APSZeusRequest;
@class APSResponseCode;

typedef void(^APSResultCompletionBlock)(__kindof  APSZeusResult * _Nullable result);
typedef void(^APSFailureCompletionBlock)(__kindof NSError *error, APSResponseCode * _Nullable responseCode);

@interface APSZeusRequest : NSObject




@property (nonatomic, strong, readonly) NSURLSessionTask *requestTask;

@property (nonatomic, strong, readonly) NSURLRequest *currentRequest;

@property (nonatomic, strong, readonly) NSURLRequest *originalRequest;

@property (nonatomic, strong, readonly) NSHTTPURLResponse *response;

@property (nonatomic, strong, readonly, nullable) NSDictionary *responseHeaders;

@property (nonatomic, strong, readonly, nullable) id responseData;

@property (nonatomic, strong, readonly, nullable) NSError *error;


@property (nonatomic, copy, nullable) NSString *resumableDownloadPath;


@property (nonatomic, copy, nullable) AFURLSessionTaskProgressBlock resumableDownloadProgressBlock;


@property (nonatomic, copy, nullable) APSResultCompletionBlock successResultBlock;


@property (nonatomic, copy, nullable) APSResultCompletionBlock failureResultBlock;


@property (nonatomic, copy, nullable) APSResultCompletionBlock completionResultBlock;



- (void)downloadtWithSuccess:(nullable APSResultCompletionBlock)success
                    progress:(nullable AFURLSessionTaskProgressBlock)progress
                     failure:(nullable APSResultCompletionBlock)failure;

- (void)requestWithSuccess:(nullable APSResultCompletionBlock)success
                   failure:(nullable APSResultCompletionBlock)failure;

- (void)requestCompletion:(nullable APSResultCompletionBlock) completion;


- (void)clearCompletionBlock;




- (NSString *)url;


- (NSString *)host;


- (NSString *)path;


- (NSTimeInterval)requestTimeoutInterval;


- (nullable id)requestArgument;


- (APSRequestMethod)requestMethod;


- (APSRequestSerializerType)requestSerializerType;


- (APSResponseSerializerType)responseSerializerType;


- (nullable NSDictionary<NSString *, NSString *> *)requestHeaderFieldValueDictionary;


- (nullable NSArray<NSString *> *)requestAuthorizationHeaderFieldArray;

- (BOOL)allowsCellularAccess;



- (UInt8)version;

- (UInt8)xorKey;

- (BOOL)compress;

- (nullable NSString*)packageName;

- (SInt32)releaseVersion;

- (BOOL)bigEndian;

- (BOOL)nonProtocol;

- (UInt16)insertAtBeginBody;

- (BOOL)uploadOSType;

@end

NS_ASSUME_NONNULL_END
