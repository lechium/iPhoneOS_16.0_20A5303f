//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ISObservable.h"

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

__attribute__((visibility("hidden")))
@interface ISAnimatedImageTimer : ISObservable
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
}

+ (id)sharedTimer;	// IMP=0x006000000002291f
- (void).cxx_destruct;	// IMP=0x00000000000227b6
@property(nonatomic, setter=_setTimestamp:) double timestamp; // @synthesize timestamp=_timestamp;
- (void)_iosDealloc;	// IMP=0x000000000002276c
- (void)_iosAnimationTimerFired:(id)arg1;	// IMP=0x000000000002273b
- (void)_iosUpdateDisplayLink;	// IMP=0x0000000000022619
- (void)_iosInitialization;	// IMP=0x00000000000225d6
- (void)_fireTimerWithInterval:(double)arg1;	// IMP=0x00000000000224d5
- (void)_updateDisplayLink;	// IMP=0x0000000000022476
- (id)mutableChangeObject;	// IMP=0x000000000002246d
- (void)hasObserversDidChange;	// IMP=0x000000000002242c
- (void)dealloc;	// IMP=0x00000000000223ee
- (id)init;	// IMP=0x00000000000223a2

@end

