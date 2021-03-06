//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAccount, AFAWDSiriRequestRecord, AFAggregator, AFInstanceContext, MISSING_TYPE, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SABaseCommand, SASSpeechFailure, SASSpeechRecognized;
@protocol ADSessionManagerDelegate, ADSessionManagerIntercepting, OS_dispatch_queue, OS_dispatch_source;

@interface ADSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    ADAccount *_account;	// 24 = 0x18
    NSString *_sharedUserIdentifier;	// 32 = 0x20
    NSString *_loggingSharedUserIdentifier;	// 40 = 0x28
    long long _sharedUserIdentifierState;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    _Bool _isRegisteredForSessionDestroyingNotifications;	// 64 = 0x40
    NSString *_connectionMode;	// 72 = 0x48
    NSString *_languageCode;	// 80 = 0x50
    NSMutableArray *_sessions;	// 88 = 0x58
    id <ADSessionManagerDelegate> _delegate;	// 96 = 0x60
    _Bool _callInProcess;	// 104 = 0x68
    _Bool _hasClient;	// 105 = 0x69
    unsigned int _ioConnect;	// 108 = 0x6c
    struct IONotificationPort *_ioNotificationPortRef;	// 112 = 0x70
    unsigned int _ioNotifier;	// 120 = 0x78
    AFAggregator *_aggregator;	// 128 = 0x80
    NSString *_requestId;	// 136 = 0x88
    NSMutableDictionary *_proxiedIdMap;	// 144 = 0x90
    NSMutableDictionary *_reverseProxiedIdMap;	// 152 = 0x98
    NSMutableDictionary *_sessionOriginatedCommandTable;	// 160 = 0xa0
    NSString *_winningSessionId;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_resultObjectsEvaluationTimer;	// 176 = 0xb0
    _Bool _isQueuingResultsForDelayedEvaluation;	// 184 = 0xb8
    _Bool _timerFiredOnce;	// 185 = 0xb9
    _Bool _continueWithPreviousWinner;	// 186 = 0xba
    NSError *_lastSessionError;	// 192 = 0xc0
    int _preferredSessionType;	// 200 = 0xc8
    int _preferredRemoteSessionType;	// 204 = 0xcc
    SASSpeechRecognized *_savedSasSpeechRecognized;	// 208 = 0xd0
    _Bool _savedSasSpeechRecognizedSubmitted;	// 216 = 0xd8
    SASSpeechFailure *_savedSasSpeechFailure;	// 224 = 0xe0
    unsigned int _serverDrivenResultsHoldTime;	// 232 = 0xe8
    _Bool _serverSpeechRecognitionArrived;	// 236 = 0xec
    _Bool _hasActiveRequest;	// 237 = 0xed
    _Bool _needsResetOnRequestBoundary;	// 238 = 0xee
    NSMutableSet *_assertions;	// 240 = 0xf0
    AFAWDSiriRequestRecord *_awdRequestRecord;	// 248 = 0xf8
    id <ADSessionManagerIntercepting> _interceptor;	// 256 = 0x100
    CDUnknownBlockType _sessionResetOnRequestBoundaryCompletion;	// 264 = 0x108
    SABaseCommand *_currentRequest;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000000cc84b
@property(nonatomic) __weak id <ADSessionManagerIntercepting> interceptor; // @synthesize interceptor=_interceptor;
@property(nonatomic) __weak id <ADSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)speechError:(id)arg1;	// IMP=0x00100000000cc371
- (void)_propagateCachedSpeechErrorToLocalSessions;	// IMP=0x00100000000cc1d2
- (void)_mapAndSendSpeechFailure:(id)arg1 toLocalSession:(id)arg2;	// IMP=0x00100000000cc0e9
- (void)handleCommandInLocalSession:(id)arg1;	// IMP=0x00100000000cbd2b
- (void)sendCommandToLocalSession:(id)arg1;	// IMP=0x00100000000cbc3d
- (void)_logContextForWinningSession:(id)arg1 forReason:(id)arg2 forRemoteSessionScore:(long long)arg3 forLocalSessionScore:(long long)arg4;	// IMP=0x00100000000cba2e
- (void)_resetWinningState;	// IMP=0x00100000000cb918
- (_Bool)_reverseMapSessionRequestIdToADRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000cb73c
- (id)_mapADRequestIdToSessionRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000cb6d6
- (id)_keyForRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000cb62b
- (_Bool)_canStartLocalSession;	// IMP=0x00100000000cb4fa
- (_Bool)_hasAtleastOneActiveSessionBesides:(id)arg1;	// IMP=0x00100000000cb22e
- (void)refreshValidationData;	// IMP=0x00100000000cb0e5
- (void)setHasClient:(_Bool)arg1;	// IMP=0x00100000000cb0dc
- (_Bool)hasClient;	// IMP=0x00100000000cb0d3
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cad60
- (void)setAWDRequestRecordMetrics:(id)arg1;	// IMP=0x00100000000cac0b
- (void)_logMetricsForSessionFailure:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ca248
- (void)_logCommandToMetrics:(id)arg1 forSession:(id)arg2 outbound:(_Bool)arg3;	// IMP=0x00100000000c9f29
- (void)getConnectionMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9b5f
- (void)updateConnectionSetConnectionType:(unsigned int)arg1;	// IMP=0x00100000000c9b13
- (void)updateConnectionDidFailAggdMetrics;	// IMP=0x00100000000c9ad6
- (void)updateConnectionDidDropAggdMetrics;	// IMP=0x00100000000c9a99
- (id)aggregator;	// IMP=0x00100000000c9a52
- (id)sessionRequestIdForRefId:(id)arg1;	// IMP=0x00100000000c9882
- (void)setRequestId:(id)arg1;	// IMP=0x00100000000c8f7a
- (void)_resetSessionOnRequestBoundaryIfNeeded;	// IMP=0x00100000000c8ba6
- (void)relinquishAssertion:(id)arg1;	// IMP=0x00100000000c8ad0
- (id)acquireAssertionForReason:(id)arg1;	// IMP=0x00100000000c89d0
- (void)_clearSessions;	// IMP=0x00100000000c89b3
- (void)_addSession:(id)arg1;	// IMP=0x00100000000c8959
- (_Bool)hasSessionRequiringServerConnection;	// IMP=0x00100000000c86e1
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x00100000000c844d
- (void)sendRawCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00100000000c8428
- (void)sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00100000000c8400
- (void)setCurrentRequest:(id)arg1;	// IMP=0x00100000000c8333
- (void)_sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3 doSendPreProcessing:(_Bool)arg4 doSendPostProcessing:(_Bool)arg5;	// IMP=0x00100000000c7546
- (void)delegateDidHandleCommand:(id)arg1;	// IMP=0x00100000000c729f
- (void)handleCommand:(id)arg1;	// IMP=0x00100000000c70e2
- (void)_convertEmbeddedRequestIds:(id)arg1 originalCommand:(id)arg2 session:(id)arg3;	// IMP=0x00100000000c7002
- (_Bool)_allowWhitelistedCommands:(id)arg1;	// IMP=0x00100000000c6f56
- (_Bool)_filterUnsupportedCommands:(id)arg1 inGroup:(id)arg2 onSession:(id)arg3;	// IMP=0x00100000000c6e2c
- (void)assistantSessionConnectionDidClose:(id)arg1;	// IMP=0x00100000000c6df5
- (void)assistantSessionRetryingRequest:(id)arg1;	// IMP=0x00100000000c6d41
- (void)assistantSessionDictationHIPAAMDMStatusDidChange;	// IMP=0x00100000000c6d2f
- (MISSING_TYPE *)assistantSession:beginSessionRetryPreferringWWAN: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000c6c1a
- (void)assistantSession:(id)arg1 willRetryOnError:(id)arg2;	// IMP=0x00100000000c6b49
- (void)assistantSession:(id)arg1 didLoadAssistantSyncRequested:(_Bool)arg2;	// IMP=0x00100000000c6b04
- (void)assistantSessionDidDestroyAssistant:(id)arg1;	// IMP=0x00100000000c6ace
- (void)assistantSessionDidCreateAssistant:(id)arg1;	// IMP=0x00100000000c6a1a
- (void)assistantSession:(id)arg1 didChangeRequestIdFrom:(id)arg2 toId:(id)arg3;	// IMP=0x00100000000c678e
- (id)assistantSessionCommandsToRestoreStateOnNewConnection:(id)arg1;	// IMP=0x00100000000c6745
- (_Bool)assistantSessionShouldAttemptRetry:(id)arg1;	// IMP=0x00100000000c668b
- (void)assistantSessionConnectionDidReset:(id)arg1;	// IMP=0x00100000000c6507
- (_Bool)assistantSessionShouldRestartConnectionOnWiFi:(id)arg1;	// IMP=0x00100000000c64f0
- (_Bool)assistantSessionShouldLogVisibleRequestFailure:(id)arg1 forError:(id)arg2;	// IMP=0x00100000000c63f3
- (void)assistantSession:(id)arg1 receivedError:(id)arg2 isRetryableError:(_Bool)arg3;	// IMP=0x00100000000c6031
- (void)assistantSession:(id)arg1 cannotHandleRequest:(id)arg2 error:(id)arg3;	// IMP=0x00100000000c5c8c
- (void)assistantSession:(id)arg1 receivedCommand:(id)arg2;	// IMP=0x00100000000c56ac
- (void)assistantSession:(id)arg1 didOpenConnectionWithPolicyId:(id)arg2 routeId:(id)arg3 connectionDelay:(double)arg4;	// IMP=0x00100000000c53b9
- (void)assistantSessionWillStartConnection:(id)arg1;	// IMP=0x00100000000c5305
- (_Bool)assistantSessionShouldPrewarmConnetion:(id)arg1;	// IMP=0x00100000000c52ca
- (void)sendRemoteGizmoDeviceToServer:(id)arg1;	// IMP=0x00100000000c516b
- (void)resetSessionsIfRequiredBasedOnOrchestrationMode:(_Bool)arg1;	// IMP=0x00100000000c5028
- (void)_resetWinningStateAndPurgeRequestMaps;	// IMP=0x00100000000c4ffa
- (void)resetWinningState;	// IMP=0x00100000000c4fe1
- (_Bool)hasActiveSessionForSendingMetrics;	// IMP=0x00100000000c4d76
- (void)adviseSessionArbiterToContinueWithPreviousWinner:(_Bool)arg1;	// IMP=0x00100000000c4d22
- (void)_pickDefaultWinnerWithDroppingSession:(id)arg1;	// IMP=0x00100000000c47e4
- (void)_cancelOtherSessionRequests:(id)arg1 forRefId:(id)arg2;	// IMP=0x00100000000c4358
- (_Bool)_haveUsefulness:(id)arg1 usefulnessScore:(id *)arg2;	// IMP=0x00100000000c42eb
- (_Bool)_isDestructive:(id)arg1;	// IMP=0x00100000000c3f15
- (void)_queueResultObject:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000c3cc2
- (void)_resetResultObjectsTimer;	// IMP=0x00100000000c3c83
- (void)_resultObjectsTimerFired:(id)arg1;	// IMP=0x00100000000c3b91
- (void)_startResultObjectsTimer;	// IMP=0x00100000000c3a22
- (unsigned int)_resultObjectsHoldTime;	// IMP=0x00100000000c39c9
- (_Bool)_evaluateResultObjects;	// IMP=0x00100000000c308b
- (int)_preferredSessionType;	// IMP=0x00100000000c305c
- (void)updateForCallIsLikelyDueToRequest:(_Bool)arg1;	// IMP=0x00100000000c2f26
- (void)updateForCallState:(_Bool)arg1;	// IMP=0x00100000000c2f18
- (void)_unregisterForSleepNotification;	// IMP=0x00100000000c2ea7
- (void)_registerForSleepNotification;	// IMP=0x00100000000c2dc8
- (void)_powerChangedMessageType:(unsigned int)arg1 notificationID:(long long)arg2;	// IMP=0x00100000000c2c86
- (void)_languageCodeDidChange:(id)arg1;	// IMP=0x00100000000c2ad5
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00100000000c2946
- (void)_unregisterForPossibleSessionDestroyingNotifications;	// IMP=0x00100000000c28d1
- (void)_registerForPossibleSessionDestroyingNotifications;	// IMP=0x00100000000c2855
- (id)_saConnectionMode;	// IMP=0x00100000000c27e5
- (void)_sharedAssistantdIdentifierDidChange:(id)arg1;	// IMP=0x00100000000c26c3
- (void)_updateSharedUserIdentifiers;	// IMP=0x00100000000c25f4
- (id)languageCode;	// IMP=0x00100000000c25e2
- (id)_languageCode;	// IMP=0x00100000000c2569
- (void)_purgeRequestMaps;	// IMP=0x00100000000c24a4
- (void)endRetryableRequestForCommand:(id)arg1;	// IMP=0x00100000000c220d
- (void)resetRetryManager;	// IMP=0x00100000000c20e4
- (void)startRetry;	// IMP=0x00100000000c1f89
- (void)resetSessionsAtNextRequestBoundaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c1db1
- (void)resetSessionsAtNextRequestBoundary;	// IMP=0x00100000000c1d9d
- (void)resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000c1d8b
- (void)_resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000c19a5
- (void)cancelSessions;	// IMP=0x00100000000c1993
- (void)cancelSynchronously;	// IMP=0x00100000000c1969
- (void)cancel;	// IMP=0x00100000000c18a6
- (void)_cancelSynchronously:(_Bool)arg1;	// IMP=0x00100000000c1717
- (void)beginUpdatingAssistantData;	// IMP=0x00100000000c15ce
- (void)preheatSessions;	// IMP=0x00100000000c15b7
- (void)preheatAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000c1448
- (void)_startSession:(int)arg1 makeQuiet:(_Bool)arg2;	// IMP=0x00100000000c122b
- (void)_startSessions:(_Bool)arg1;	// IMP=0x00100000000c0ef6
- (void)dealloc;	// IMP=0x00100000000c0d9f
- (id)initOnQueue:(id)arg1 account:(id)arg2 instanceContext:(id)arg3;	// IMP=0x00100000000c0b98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

