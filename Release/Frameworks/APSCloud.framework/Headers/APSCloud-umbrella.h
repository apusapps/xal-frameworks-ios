#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "APSCloudConfigProtocol.h"
#import "APSRemoteConfigFactory.h"

FOUNDATION_EXPORT double APSCloudVersionNumber;
FOUNDATION_EXPORT const unsigned char APSCloudVersionString[];

