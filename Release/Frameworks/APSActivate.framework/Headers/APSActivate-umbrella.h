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

#import "APSActivateConfigDelegate.h"
#import "APSActivateFactory.h"
#import "APSActivateDelegate.h"
#import "APSUserTagConfigDelegate.h"

FOUNDATION_EXPORT double APSActivateVersionNumber;
FOUNDATION_EXPORT const unsigned char APSActivateVersionString[];

