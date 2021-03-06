//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SYSession.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingSyncAllObjectsSession : SYSession
{
    NSObject<OS_os_activity> *_sessionActivity;	// 8 = 0x8
    unsigned int _state;	// 16 = 0x10
    _Bool _errorIsLocal;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_sessionTimer;	// 32 = 0x20
    double _sessionStartTime;	// 40 = 0x28
    NSMutableArray *_changesToSend;	// 48 = 0x30
    _Bool _cancelled;	// 56 = 0x38
    _Bool canRestart;	// 57 = 0x39
    _Bool canRollback;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x0000000000033466
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x0000000000033456
- (_Bool)canRollback;	// IMP=0x0000000000033444
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x0000000000033434
- (_Bool)canRestart;	// IMP=0x0000000000033422
- (_Bool)wasCancelled;	// IMP=0x0000000000033410
- (_Bool)_handleBatchSyncEndResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003319b
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000003308d
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032994
- (void)_installStateListener;	// IMP=0x000000000003287c
- (void)_installTimers;	// IMP=0x0000000000032568
- (void)_processNextState;	// IMP=0x000000000003233f
- (void)_sessionCompleteWithError:(id)arg1;	// IMP=0x0000000000032129
- (void)_sessionFailed;	// IMP=0x000000000003209c
- (void)_sendChanges;	// IMP=0x0000000000031db6
- (void)_fetchChanges;	// IMP=0x00000000000316e7
- (double)remainingSessionTime;	// IMP=0x0000000000031676
- (unsigned long long)protocolVersion;	// IMP=0x000000000003166b
- (_Bool)isSending;	// IMP=0x0000000000031663
- (_Bool)isResetSync;	// IMP=0x000000000003165b
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x0000000000031526
- (void)setState:(unsigned int)arg1;	// IMP=0x00000000000313dc
- (unsigned int)state;	// IMP=0x00000000000313a0
- (id)initWithService:(id)arg1;	// IMP=0x0000000000031250

@end

