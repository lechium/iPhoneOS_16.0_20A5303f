//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8coreidvd17DIPLocationHelper : NSObject
{
    MISSING_TYPE *serviceQueue;	// 8 = 0x8
    MISSING_TYPE *locationManager;	// 16 = 0x10
    MISSING_TYPE *location;	// 24 = 0x18
    MISSING_TYPE *authorizationStatus;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000000d7210
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00100000000d7da0
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000d7c30
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000000d7b90
- (void)dealloc;	// IMP=0x00100000000d71f0
- (id)init;	// IMP=0x00100000000d6b10

@end
