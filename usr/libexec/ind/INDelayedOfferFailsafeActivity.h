//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INActivity, MISSING_TYPE;

@interface INDelayedOfferFailsafeActivity : NSObject
{
    INActivity *_failsafeActivity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000179cc
- (void)onDelayElapsedDisplayDelayedNotification;	// IMP=0x0010000000017753
- (void)stopActivity;	// IMP=0x00100000000176da
- (void)startActivityWithDelaySecs:(long long)arg1;	// IMP=0x00100000000174e2
- (MISSING_TYPE *)init;	// IMP=0x00100000000173a8

@end
