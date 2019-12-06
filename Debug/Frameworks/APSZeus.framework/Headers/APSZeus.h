







#import <Foundation/Foundation.h>
#import "APSZeusRequest.h"
NS_ASSUME_NONNULL_BEGIN
@class APSZeus;
typedef APSZeus *_Nonnull(^APSZeusRequestSerializerTypeBlock)(APSRequestSerializerType type);
typedef APSZeus *_Nonnull(^APSZeusResponseSerializerTypeBlock)(APSResponseSerializerType type);
typedef APSZeus *_Nonnull(^APSZeusRequestMethedBlock)(APSRequestMethod methed);
typedef APSZeus *_Nonnull(^APSZeusXorKeyBlock)(UInt8 xorKey);
typedef APSZeus *_Nonnull(^APSZeusProtocolVCBlock)(UInt8 version);
typedef APSZeus *_Nonnull(^APSZeusCompressBlock)(BOOL value);
typedef APSZeus *_Nonnull(^APSZeusInsertAtBeginBodyBlock)(UInt16 value);
typedef APSZeus *_Nonnull(^APSZeusPackageNameBlock)(NSString* name);
typedef APSZeus *_Nonnull(^APSZeusReleaseVersionBlock)(UInt32 version);
typedef APSZeus *_Nonnull(^APSZeusBigEndianBlock)(BOOL value);
typedef APSZeus *_Nonnull(^APSZeusUploadOSTypeBlock)(BOOL value);
typedef APSZeus *_Nonnull(^APSZeusNonProtocolBlock)(void);
typedef APSZeus *_Nonnull(^APSZeusHeadersBlock)(NSDictionary<NSString *, NSString *> * headers);

@interface APSZeus: APSZeusRequest {
    APSRequestSerializerType                _requestSerializerType;
    APSResponseSerializerType               _responseSerializerType;
    APSRequestMethod                        _requestMethod;
    UInt8                                   _version;
    UInt8                                   _xorKey;
    BOOL                                    _compress;
    UInt16                                  _insertAtBeginBody;
    BOOL                                    _uploadOSType;
    NSString *                              _packageName;
    SInt32                                  _releaseVersion;
    BOOL                                    _bigEndian;
    BOOL                                    _nonProtocol;
    NSString *                              _url;
    NSData *                                _requestData;
    id                                      _argument;
    NSDictionary<NSString *, NSString *> *  _headers;
}




@property (nonatomic, copy, readonly) APSZeusRequestSerializerTypeBlock requestSerializerTypePromise;


@property (nonatomic, copy, readonly) APSZeusResponseSerializerTypeBlock responseSerializerTypePromise;



@property (nonatomic, copy, readonly) APSZeusRequestMethedBlock requestMethedPromise;


@property (nonatomic, copy, readonly) APSZeusXorKeyBlock xorkeyPromise;


@property (nonatomic, copy, readonly) APSZeusProtocolVCBlock protocolVCPromise;


@property (nonatomic, copy, readonly) APSZeusCompressBlock compressPromise;


@property (nonatomic, copy, readonly) APSZeusInsertAtBeginBodyBlock insertAtBeginBodyPromise;


@property (nonatomic, copy, readonly) APSZeusPackageNameBlock packageNamePromise;


@property (nonatomic, copy, readonly) APSZeusReleaseVersionBlock releaseVersionPromise;


@property (nonatomic, copy, readonly) APSZeusBigEndianBlock bigEndianPromise;


@property (nonatomic, copy, readonly) APSZeusUploadOSTypeBlock uploadOSTypePromise;


@property (nonatomic, copy, readonly) APSZeusNonProtocolBlock nonProtocolPromise;


@property (nonatomic, copy, readonly) APSZeusHeadersBlock headersPromise;


@property (nonatomic, copy, readonly) APSZeus * GET;


@property (nonatomic, copy, readonly) APSZeus * POST;


- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;


- (instancetype)initWithFBSUrl:(NSString *)url
                requestData:(NSData *)data
                    xorKey:(UInt8)xorKey
                   version:(UInt8)version;


- (instancetype)initWithFBSUrl:(NSString *)url
                requestData:(NSData *)data;


- (instancetype)initWithJSONUrl:(NSString *)url
            requestArgument:(nullable id)argument;


- (instancetype)initWithJSONUrl:(NSString *)url
                requestArgument:(nullable id)argument
                         methed:(APSRequestMethod)methed;



- (instancetype)initWithDownloadURL:(NSString *)url
                     filePath:(nullable NSString *)filePath
                    requestArgument:(nullable id)argument;



@end


NS_ASSUME_NONNULL_END
