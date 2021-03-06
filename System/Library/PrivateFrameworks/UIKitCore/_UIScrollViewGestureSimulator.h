//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSThread, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewGestureSimulator : NSObject
{
    struct __CFRunLoopSource *_mainThreadRunLoopSource;	// 8 = 0x8
    NSMutableArray *_simulatedGestures;	// 16 = 0x10
    NSThread *_workThread;	// 24 = 0x18
    CADisplayLink *_displayLink;	// 32 = 0x20
    NSTimer *_timer;	// 40 = 0x28
    _Bool _hasSimulatedGestures;	// 48 = 0x30
    double _lastWakeUpTime;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00600000013a4e08
- (void).cxx_destruct;	// IMP=0x00000000013a5656
- (void)_update;	// IMP=0x00000000013a5483
- (void)_setHasSimulatedGestures:(id)arg1;	// IMP=0x00000000013a5460
- (void)_signalMainThreadIfNecessary;	// IMP=0x00000000013a542a
- (void)_displayLinkDidFire:(id)arg1;	// IMP=0x00000000013a5418
- (void)_threadMain;	// IMP=0x00000000013a5114
- (void)simulateGestureWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;	// IMP=0x00000000013a4f9a
- (void)dealloc;	// IMP=0x00000000013a4f58
- (id)init;	// IMP=0x00000000013a4e8d

@end

