//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VKTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKThrottledGate : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _maxAvailableTickets;	// 16 = 0x10
    double _availableTickets;	// 24 = 0x18
    double _refreshRate;	// 32 = 0x20
    NSMutableArray *_waitingJobs;	// 40 = 0x28
    VKTimer *_timer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000230121
- (_Bool)_dispatchWaitingJobsIfNecessary;	// IMP=0x0000000000230038
- (_Bool)_replenishAvailableJobsIfNecessary;	// IMP=0x000000000023000d
- (void)_timerFired:(id)arg1;	// IMP=0x000000000022ffb1
- (void)dispatch:(CDUnknownBlockType)arg1;	// IMP=0x000000000022ff29
- (void)_ensureTimer;	// IMP=0x000000000022fecc
- (id)description;	// IMP=0x000000000022fe15
- (void)dealloc;	// IMP=0x000000000022fdd3
- (id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3;	// IMP=0x000000000022fcee

@end
