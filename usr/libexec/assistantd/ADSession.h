//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAccount, AFAWDSiriRequestRecord, MISSING_TYPE, NSMutableArray, NSMutableSet, NSString, SASetAssistantData, SiriCoreConnectionType;
@protocol ADSessionDelegate, OS_dispatch_queue;

@interface ADSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADAccount *_account;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    NSString *_connectionMode;	// 32 = 0x20
    NSString *_pendingAssistantDataAnchor;	// 40 = 0x28
    NSMutableArray *_pendingCommands;	// 48 = 0x30
    NSMutableSet *_limboIds;	// 56 = 0x38
    NSMutableArray *_sendBuffer;	// 64 = 0x40
    SiriCoreConnectionType *_currentConnectionType;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    id <ADSessionDelegate> _delegate;	// 88 = 0x58
    _Bool _shouldSendAssistantData;	// 96 = 0x60
    _Bool _assistantDataRequested;	// 97 = 0x61
    SASetAssistantData *_cachedAssistantData;	// 104 = 0x68
    NSString *_assistantDataRefId;	// 112 = 0x70
    _Bool _dormant;	// 120 = 0x78
    NSMutableArray *_dormantQueue;	// 128 = 0x80
    int _sessionType;	// 136 = 0x88
    NSString *_sessionId;	// 144 = 0x90
    NSMutableArray *_resultObjectsQueue;	// 152 = 0x98
    long long _resultUsefulnessScore;	// 160 = 0xa0
    _Bool _hasUsefulnessScore;	// 168 = 0xa8
    NSString *_requestId;	// 176 = 0xb0
    _Bool _canHandleRequest;	// 184 = 0xb8
    AFAWDSiriRequestRecord *_awdRequestRecord;	// 192 = 0xc0
    _Bool _sessionRequiresServerConnection;	// 200 = 0xc8
    NSString *_sharedUserIdentifier;	// 208 = 0xd0
    NSString *_loggingSharedUserIdentifier;	// 216 = 0xd8
}

+ (int)_adSessionTypeFromString:(id)arg1;	// IMP=0x00200000001c232e
+ (Class)sessionClassForType:(int)arg1;	// IMP=0x00100000001c1a34
- (void).cxx_destruct;	// IMP=0x00200000001c4386
@property(nonatomic) _Bool dormant; // @synthesize dormant=_dormant;
@property(nonatomic) __weak id <ADSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *connectionMode; // @synthesize connectionMode=_connectionMode;
@property(copy, nonatomic) NSString *loggingSharedUserIdentifier; // @synthesize loggingSharedUserIdentifier=_loggingSharedUserIdentifier;
@property(copy, nonatomic) NSString *sharedUserIdentifier; // @synthesize sharedUserIdentifier=_sharedUserIdentifier;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)hasUsefulnessScore;	// IMP=0x00100000001c42aa
- (long long)usefulnessScore;	// IMP=0x00100000001c429d
- (_Bool)hasResultObjects;	// IMP=0x00100000001c427d
- (void)setOrUpdateUsefulnessScore:(id)arg1;	// IMP=0x00100000001c4246
- (id)dequeueResultObjects;	// IMP=0x00100000001c41dc
- (void)queueResultObjects:(id)arg1;	// IMP=0x00100000001c4173
- (id)_currentConnectionType;	// IMP=0x00100000001c4165
- (void)_setCurrentConnectionType:(id)arg1;	// IMP=0x00100000001c40e3
- (void)_handleAceObject:(id)arg1;	// IMP=0x00100000001c40dd
- (id)_account;	// IMP=0x00100000001c40cf
- (void)_resetServerConnectionSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c40c9
- (void)_cancelSynchronously:(_Bool)arg1;	// IMP=0x00100000001c405e
- (id)connection;	// IMP=0x00100000001c4056
- (void)_startConnection;	// IMP=0x00100000001c4050
- (void)_startSession;	// IMP=0x00100000001c404a
- (MISSING_TYPE *)sendRemoteGizmoDeviceToServer: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001c4044
- (id)sessionId;	// IMP=0x00100000001c4033
- (_Bool)sessionIsWaitingForAssistantData;	// IMP=0x00100000001c4021
- (_Bool)sessionIsAttemptingTryOrRetry;	// IMP=0x00100000001c4013
- (_Bool)sessionIsActive;	// IMP=0x00100000001c4005
- (_Bool)hasLoadedAssistant;	// IMP=0x00100000001c3ff7
- (void)resetConnection;	// IMP=0x00100000001c3fae
- (void)cancelSessionRequest:(id)arg1;	// IMP=0x00100000001c3e60
- (void)cancelSynchronously;	// IMP=0x00100000001c3e49
- (void)cancel;	// IMP=0x00100000001c3e35
- (void)retryNakedCommandsIfNeeded;	// IMP=0x00100000001c3e2f
- (void)resetRetryManager;	// IMP=0x00100000001c3e29
- (void)startRetry;	// IMP=0x00100000001c3e23
- (void)prepareForRetry;	// IMP=0x00100000001c3d6c
- (id)currentConnectionPreCachedMetrics;	// IMP=0x00100000001c3d64
- (void)getConnectionMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c3d4e
- (void)delegateDidHandleCommand:(id)arg1 didRecognizeSpeech:(_Bool)arg2;	// IMP=0x00100000001c3d48
- (void)handleCommand:(id)arg1;	// IMP=0x00100000001c3ca0
- (void)sendCommands:(id)arg1 opportunistically:(_Bool)arg2;	// IMP=0x00100000001c3b04
- (void)sendCommand:(id)arg1 opportunistically:(_Bool)arg2;	// IMP=0x00100000001c3799
- (_Bool)canHandleRequest;	// IMP=0x00100000001c378d
- (void)setCanHandleRequest:(_Bool)arg1;	// IMP=0x00100000001c3781
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x00100000001c377b
- (void)endRetryableRequestForCommandAceId:(id)arg1 refId:(id)arg2;	// IMP=0x00100000001c3775
- (void)beginRetryableRequest:(id)arg1;	// IMP=0x00100000001c376f
- (void)refreshValidationData;	// IMP=0x00100000001c36d1
- (void)beginUpdatingAssistantData;	// IMP=0x00100000001c3660
- (void)eagerlyFetchAssistantData;	// IMP=0x00100000001c359c
- (void)preheatAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000001c3441
- (void)_probeSessionIfIdle;	// IMP=0x00100000001c343b
- (void)_releaseDormancySuspension;	// IMP=0x00100000001c3435
- (void)_forceFastDormancy;	// IMP=0x00100000001c342f
- (void)_setDormantWithStyle:(long long)arg1;	// IMP=0x00100000001c32f4
- (void)_sendPendingDormantCommands;	// IMP=0x00100000001c3201
- (void)_pendDormantCommand:(id)arg1;	// IMP=0x00100000001c319b
- (void)_saGetAssistantData:(id)arg1;	// IMP=0x00100000001c3116
- (void)_setAssistantDataAnchorIfNeeded:(id)arg1;	// IMP=0x00100000001c2ea6
- (void)assistantDataManager:(id)arg1 didUpdateAssistantData:(id)arg2;	// IMP=0x00100000001c2b88
- (void)_sendAssistantDataChangedSinceAnchor:(id)arg1 refId:(id)arg2;	// IMP=0x00100000001c28e2
- (void)_removeRequestForAssistantData;	// IMP=0x00100000001c287a
- (void)_requestForAssistantData;	// IMP=0x00100000001c2800
- (_Bool)_waitingForAssistantData;	// IMP=0x00100000001c27e3
- (_Bool)_shouldSendAssistantData;	// IMP=0x00100000001c27da
- (void)_setPendingAssistantDataAnchor:(id)arg1;	// IMP=0x00100000001c27c9
- (id)_cachedAssistantData;	// IMP=0x00100000001c27bb
- (void)doSendPostProcessing:(id)arg1;	// IMP=0x00100000001c27b5
- (void)doSendPreProcessing:(id)arg1;	// IMP=0x00100000001c27af
- (void)_sendDestroyAssistant;	// IMP=0x00100000001c2728
- (void)_sendCommandFailedWithRefId:(id)arg1;	// IMP=0x00100000001c26af
- (void)_sendServerCommands:(id)arg1;	// IMP=0x00100000001c267d
- (void)_sendServerCommand:(id)arg1;	// IMP=0x00100000001c264b
- (void)_informDelegateCannotHandleRequest:(id)arg1 error:(id)arg2;	// IMP=0x00100000001c25cf
- (void)_informDelegateWillRetryOnError:(id)arg1;	// IMP=0x00100000001c2573
- (void)_informDelegateOfError:(id)arg1;	// IMP=0x00100000001c2514
- (void)_passObjectToDelegate:(id)arg1;	// IMP=0x00100000001c24b8
- (_Bool)_commandRequiresServerConnection:(id)arg1;	// IMP=0x00100000001c23e9
- (_Bool)sessionRequiresServerConnection;	// IMP=0x00100000001c23dd
- (id)awdRequestRecord;	// IMP=0x00100000001c23cc
- (void)setAWDRequestRecord:(id)arg1;	// IMP=0x00100000001c23b8
- (id)_requestId;	// IMP=0x00100000001c23a7
- (void)_setRequestId:(id)arg1;	// IMP=0x00100000001c2393
- (id)_adSessionTypeString;	// IMP=0x00100000001c22e0
- (void)_setSessionId:(id)arg1;	// IMP=0x00100000001c22cc
- (id)_saConnectionType;	// IMP=0x00100000001c2167
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c2161
- (void)_resetSessionRequiresServerConnection;	// IMP=0x00100000001c20a1
- (void)_clearSendBuffer;	// IMP=0x00100000001c2087
- (id)_sendBuffer;	// IMP=0x00100000001c2079
- (void)_clearLimbo;	// IMP=0x00100000001c2040
- (void)_sendLimboCommand:(id)arg1;	// IMP=0x00100000001c1f3a
- (void)_sendAssistantDataAndPendingCommandsIfNeeded:(id)arg1;	// IMP=0x00100000001c1ed2
- (void)_sendPendingCommands;	// IMP=0x00100000001c1cca
- (void)_addPendingCommand:(id)arg1;	// IMP=0x00100000001c1c52
- (_Bool)_refIdIsLimboId:(id)arg1;	// IMP=0x00100000001c1c3c
- (void)_removeLimboId:(id)arg1;	// IMP=0x00100000001c1c26
- (void)_addLimboId:(id)arg1;	// IMP=0x00100000001c1bcc
- (id)_pendingCommands;	// IMP=0x00100000001c1b91
- (void)_setSessionOpened;	// IMP=0x00100000001c1b7a
- (_Bool)supportsSync;	// IMP=0x00100000001c1b72
- (void)dealloc;	// IMP=0x00100000001c1b43
- (id)initOnQueue:(id)arg1 withAccount:(id)arg2 languageCode:(id)arg3 connectionMode:(id)arg4 sharedUserIdentifier:(id)arg5 loggingSharedUserIdentifier:(id)arg6 instanceContext:(id)arg7;	// IMP=0x00100000001c1b14
- (id)initOnQueue:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000001c1a6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

