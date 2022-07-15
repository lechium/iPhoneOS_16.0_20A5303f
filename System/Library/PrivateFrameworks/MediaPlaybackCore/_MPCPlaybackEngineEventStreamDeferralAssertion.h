//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEventStream, MSVBlockGuard, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _invalidated;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    MPCPlaybackEngineEventStream *_eventStream;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
    MSVBlockGuard *_timeoutGuard;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015fb30
@property(readonly, nonatomic) MSVBlockGuard *timeoutGuard; // @synthesize timeoutGuard=_timeoutGuard;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) __weak MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidate;	// IMP=0x000000000015f957
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000015f8cc
- (id)initWithEventStream:(id)arg1 reason:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000015f74f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
