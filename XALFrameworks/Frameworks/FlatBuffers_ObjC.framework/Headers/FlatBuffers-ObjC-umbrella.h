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

#import "FBConstants.h"
#import "FBMutableArray.h"
#import "FBMutableData.h"
#import "FBTable.h"

FOUNDATION_EXPORT double FlatBuffers_ObjCVersionNumber;
FOUNDATION_EXPORT const unsigned char FlatBuffers_ObjCVersionString[];

