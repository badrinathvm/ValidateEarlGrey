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

#import "EDOClientService.h"
#import "EDOClientServiceStatsCollector.h"
#import "EDOHostNamingService.h"
#import "EDOHostService.h"
#import "EDORemoteVariable.h"
#import "EDOServiceError.h"
#import "EDOServiceException.h"
#import "EDOServicePort.h"
#import "NSObject+EDOValueObject.h"
#import "EDODeviceConnector.h"
#import "EDODeviceDetector.h"

FOUNDATION_EXPORT double eDistantObjectVersionNumber;
FOUNDATION_EXPORT const unsigned char eDistantObjectVersionString[];

