//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMPocketStateManager, IPCGuidanceStateReply, NSString;

@interface NavigationIdleTimerProvider : NSObject
{
    _Bool _hasReceivedScreenLayout;	// 8 = 0x8
    IPCGuidanceStateReply *_screenLockedGuidanceUpdate;	// 16 = 0x10
    IPCGuidanceStateReply *_lastGuidanceUpdate;	// 24 = 0x18
    CMPocketStateManager *_pocketStateManager;	// 32 = 0x20
    _Bool _shouldDisableIdleTimer;	// 40 = 0x28
    CDUnknownBlockType _idleStateChangeHandler;	// 48 = 0x30
    CDUnknownBlockType _undimHandler;	// 56 = 0x38
    long long _pocketStateType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000a236c6
@property(nonatomic) long long pocketStateType; // @synthesize pocketStateType=_pocketStateType;
@property(nonatomic) _Bool shouldDisableIdleTimer; // @synthesize shouldDisableIdleTimer=_shouldDisableIdleTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType undimHandler; // @synthesize undimHandler=_undimHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType idleStateChangeHandler; // @synthesize idleStateChangeHandler=_idleStateChangeHandler;
- (unsigned long long)_guidanceUpdate:(id)arg1 isDifferentFromGuidanceUpdate:(id)arg2;	// IMP=0x0010000000a2340e
- (_Bool)_shouldGuidanceUpdateDisplayPersistently:(id)arg1;	// IMP=0x0010000000a2339d
- (void)_updateIdleTimerState;	// IMP=0x0010000000a2303c
- (void)_notifyShouldUndim;	// IMP=0x0010000000a22e9a
- (_Bool)_isInPocket;	// IMP=0x0010000000a22e5d
- (void)updateConfiguration;	// IMP=0x0010000000a22e4b
- (void)updateGuidanceState:(id)arg1;	// IMP=0x0010000000a22a41
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;	// IMP=0x0010000000a227e0
- (void)screenLayoutDidChange;	// IMP=0x0010000000a22631
- (void)dealloc;	// IMP=0x0010000000a224ef
- (id)initWithIdleStateHandler:(CDUnknownBlockType)arg1 undimHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a222f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
