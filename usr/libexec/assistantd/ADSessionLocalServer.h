//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADSessionLocalConnection, AFInstanceContext, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ADSessionLocalServer
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADSessionLocalConnection *_serverConnection;	// 16 = 0x10
    struct __CFDictionary *_commandMap;	// 24 = 0x18
    _Bool _hasActiveRequest;	// 32 = 0x20
    double _requestStartTime;	// 40 = 0x28
    double _loadRetryStartTime;	// 48 = 0x30
    NSString *_sessionInitCommandId;	// 56 = 0x38
    AFInstanceContext *_instanceContext;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002a2a94
- (void)_sendAssistantDataChangedSinceAnchor:(id)arg1 refId:(id)arg2;	// IMP=0x00100000002a2888
- (void)siriConnection:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x00100000002a2781
- (void)siriConnectionDidClose:(id)arg1;	// IMP=0x00100000002a26a5
- (void)siriConnection:(id)arg1 didReceiveAceObject:(id)arg2;	// IMP=0x00100000002a259d
- (void)siriConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 delay:(double)arg3;	// IMP=0x00100000002a24ac
- (void)siriConnection:(id)arg1 willStartWithConnectionType:(id)arg2;	// IMP=0x00100000002a2450
- (_Bool)_shouldRetry;	// IMP=0x00100000002a23b1
- (void)_sendLoadAssistant;	// IMP=0x00100000002a1f8c
- (void)_sendServerCommands:(id)arg1;	// IMP=0x00100000002a1e62
- (void)_sendServerCommand:(id)arg1;	// IMP=0x00100000002a19d8
- (void)sendCommand:(id)arg1;	// IMP=0x00100000002a18d8
- (void)_handleAceObject:(id)arg1;	// IMP=0x00100000002a1706
- (void)_saCommandIgnored:(id)arg1;	// IMP=0x00100000002a16f2
- (void)_saSetConnectionHeader:(id)arg1;	// IMP=0x00100000002a16ec
- (void)_saAssistantLoaded:(id)arg1;	// IMP=0x00100000002a143d
- (void)_saCommandFailed:(id)arg1;	// IMP=0x00100000002a11c1
- (void)_assistantFailedForReason:(id)arg1 error:(id)arg2;	// IMP=0x00100000002a10e3
- (void)_saAssistantNotReady:(id)arg1;	// IMP=0x00100000002a0de8
- (_Bool)sessionIsActive;	// IMP=0x00100000002a0d9f
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x00100000002a0c53
- (void)_resetServerConnectionSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002a0b2e
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a0b15
- (void)_startSession;	// IMP=0x00100000002a0a40
- (void)_startConnection;	// IMP=0x00100000002a0991
- (_Bool)supportsSync;	// IMP=0x00100000002a0989
- (void)dealloc;	// IMP=0x00100000002a0905
- (id)initOnQueue:(id)arg1 withAccount:(id)arg2 languageCode:(id)arg3 connectionMode:(id)arg4 sharedUserIdentifier:(id)arg5 loggingSharedUserIdentifier:(id)arg6 instanceContext:(id)arg7;	// IMP=0x00100000002a0707

@end

