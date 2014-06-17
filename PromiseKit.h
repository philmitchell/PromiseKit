#import "PromiseKit/Promise.h"
#ifdef PMK_CORELOCATION
#import "PromiseKit+CoreLocation.h"
#endif
#ifdef PMK_FOUNDATION
#import "PromiseKit+Foundation.h"
#endif
#ifdef PMK_UIKIT
#import "PromiseKit+UIKit.h"
#endif
#ifdef PMK_MAPKIT
#import "PromiseKit+MapKit.h"
#endif
#ifdef PMK_SOCIAL
#import "PromiseKit+Social.h"
#endif
#ifdef PMK_STOREKIT
#import "PromiseKit+StoreKit.h"
#endif

#ifndef PMK_NO_UNPREFIXATION
// I used a typedef but it broke the tests, turns out typedefs are new
// types that have consequences with isKindOfClass and that
// NOTE I will remove this at 1.0
#define Promise PMKPromise
#endif