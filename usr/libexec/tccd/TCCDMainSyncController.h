//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACXDeviceConnection, NSMutableDictionary, NSString, PSYSyncCoordinator;

@interface TCCDMainSyncController
{
    _Bool _waitingForACXResync;	// 8 = 0x8
    Class _psySyncCoordinatorClass;	// 16 = 0x10
    Class _acxDeviceConnectionClass;	// 24 = 0x18
    PSYSyncCoordinator *_syncCoordinator;	// 32 = 0x20
    ACXDeviceConnection *_acxDeviceConnection;	// 40 = 0x28
    NSMutableDictionary *_perDeviceReplicaIdentiferToWatchAppInfo;	// 48 = 0x30
    NSMutableDictionary *_perDeviceMainIdentiferToReplicaIdentifier;	// 56 = 0x38
    CDUnknownBlockType _pendingPostPairingContinuation;	// 64 = 0x40
}

+ (id)currentArchiveVersion;	// IMP=0x0020000000001ada
+ (id)allowedClassesForWatchKitAppInfoUnarchiving;	// IMP=0x00100000000019f9
+ (id)sharedSyncController;	// IMP=0x0010000000001994
- (void).cxx_destruct;	// IMP=0x0020000000007ef9
@property _Bool waitingForACXResync; // @synthesize waitingForACXResync=_waitingForACXResync;
@property(copy) CDUnknownBlockType pendingPostPairingContinuation; // @synthesize pendingPostPairingContinuation=_pendingPostPairingContinuation;
@property(retain) NSMutableDictionary *perDeviceMainIdentiferToReplicaIdentifier; // @synthesize perDeviceMainIdentiferToReplicaIdentifier=_perDeviceMainIdentiferToReplicaIdentifier;
@property(retain) NSMutableDictionary *perDeviceReplicaIdentiferToWatchAppInfo; // @synthesize perDeviceReplicaIdentiferToWatchAppInfo=_perDeviceReplicaIdentiferToWatchAppInfo;
@property(retain) ACXDeviceConnection *acxDeviceConnection; // @synthesize acxDeviceConnection=_acxDeviceConnection;
@property(retain) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain) Class acxDeviceConnectionClass; // @synthesize acxDeviceConnectionClass=_acxDeviceConnectionClass;
@property(retain) Class psySyncCoordinatorClass; // @synthesize psySyncCoordinatorClass=_psySyncCoordinatorClass;
- (void)testMainResetSync;	// IMP=0x0010000000007ccf
- (id)_syncStatusDescriptionString;	// IMP=0x001000000000795d
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;	// IMP=0x001000000000761f
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x0010000000006f65
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x0010000000006b69
- (void)_updateInstalledWatchKitApps;	// IMP=0x0010000000006b55
- (void)_updateInstalledWatchKitAppsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000690b
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x00100000000068c5
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000006449
- (void)syncOverrideUpdateForServiceIdentifier:(id)arg1 updateType:(unsigned long long)arg2;	// IMP=0x0010000000006391
- (void)syncAccessUpdateForServiceIdentifier:(id)arg1 clientIdentifier:(id)arg2 clientType:(int)arg3 accessStatus:(unsigned long long)arg4 authorizationVersion:(unsigned long long)arg5 updateType:(unsigned long long)arg6;	// IMP=0x0010000000006283
- (void)registerMainClientIdentifier:(id)arg1 forReplicaClientIdentifier:(id)arg2;	// IMP=0x0010000000005f0e
- (id)mainClientIdentifierForReplicaClientIdentifier:(id)arg1;	// IMP=0x0010000000005cc7
- (id)replicaClientIdentifierForMainClientIdentifier:(id)arg1;	// IMP=0x0010000000005a09
- (void)_handleAccessRequestMessageFromReplica:(id)arg1;	// IMP=0x0010000000005958
- (void)_sendSyncSessionDidFinishWithResult:(unsigned int)arg1 error:(id)arg2;	// IMP=0x0010000000005688
- (void)_failCoordinatorSyncSession:(id)arg1 message:(id)arg2 code:(long long)arg3;	// IMP=0x0010000000005548
- (id)_beginResetSyncHook;	// IMP=0x0010000000005257
- (void)_didUnPairDeviceHook;	// IMP=0x0010000000005155
- (void)_didPairToNewDeviceHookWithContinuation:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004ff5
- (void)_handlePairingSession;	// IMP=0x0010000000004c75
- (void)_didReturnToPreviouslyPairedDeviceHookWithContinuation:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004b50
- (CDUnknownBlockType)_makePendingPostPairingContinuation:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004994
- (_Bool)_initializeSyncEngineAfterDeviceUnlockHook;	// IMP=0x0010000000004750
- (void)_getInstalledWatchKitAppsWithContinuation:(CDUnknownBlockType)arg1 pairingType:(unsigned int)arg2;	// IMP=0x0010000000003b36
- (void)_gotInstalledWatchKitApps:(id)arg1 continuation:(CDUnknownBlockType)arg2 pairingType:(unsigned int)arg3;	// IMP=0x001000000000395c
- (id)_changesFromUpdatingPerDeviceInstalledWatchKitApps:(id)arg1 paringType:(unsigned int)arg2;	// IMP=0x0010000000002890
- (void)_writeSavedWatchKitAppInfo;	// IMP=0x0010000000002538
- (void)_loadSavedWatchKitAppInfo;	// IMP=0x0010000000002062
- (void)_computeMainIdentifiersFromWatchKitAppInfo;	// IMP=0x0010000000001e12
- (void)_removeWatchKitAppInfoFile;	// IMP=0x0010000000001d20
- (id)_savedWatchKitAppInfoFile;	// IMP=0x0010000000001c93
- (_Bool)_initializeSyncEngineHook;	// IMP=0x0010000000001bd6
- (id)initWithAsyncSyncEngineInitialization;	// IMP=0x0010000000001b8c
- (id)init;	// IMP=0x0010000000001ae7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
