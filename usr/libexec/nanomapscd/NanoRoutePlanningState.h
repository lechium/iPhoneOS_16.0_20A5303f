//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NanoRoutePlanningStateManager, OS_dispatch_queue;

@interface NanoRoutePlanningState : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    long long _previousState;	// 16 = 0x10
    long long _nextState;	// 24 = 0x18
    long long _sessionState;	// 32 = 0x20
    double _timestampStarted;	// 40 = 0x28
    _Bool _active;	// 48 = 0x30
    id <NanoRoutePlanningStateManager> _manager;	// 56 = 0x38
}

+ (long long)requiredInitialStateForRequest:(id)arg1;	// IMP=0x004000000000f27a
- (void).cxx_destruct;	// IMP=0x002000000000f8d6
@property(nonatomic) __weak id <NanoRoutePlanningStateManager> manager; // @synthesize manager=_manager;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) long long sessionState;
- (void)resume;	// IMP=0x001000000000f896
- (void)pause;	// IMP=0x001000000000f890
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000000f715
- (void)stop;	// IMP=0x001000000000f70f
- (void)start;	// IMP=0x001000000000f709
- (void)leaveToState:(long long)arg1;	// IMP=0x001000000000f507
- (void)enterToState:(long long)arg1 fromState:(long long)arg2;	// IMP=0x001000000000f31f
- (id)initWithStateManager:(id)arg1 isolationQueue:(id)arg2;	// IMP=0x001000000000f285

@end

