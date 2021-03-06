//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACXDevice, NPSDomainAccessor, NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACXGizmoState : NSObject
{
    _Bool _needsReunionSync;	// 8 = 0x8
    _Bool _hasCompletedInitialPairedSync;	// 9 = 0x9
    ACXDevice *_device;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NPSDomainAccessor *_npsDomain;	// 32 = 0x20
    NSMutableDictionary *_appStates;	// 40 = 0x28
    NSMutableSet *_pendingAppUpdateStates;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_cleanUpPendingUpdateStateTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000554c6
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cleanUpPendingUpdateStateTimer; // @synthesize cleanUpPendingUpdateStateTimer=_cleanUpPendingUpdateStateTimer;
@property(readonly, nonatomic) NSMutableSet *pendingAppUpdateStates; // @synthesize pendingAppUpdateStates=_pendingAppUpdateStates;
@property(retain, nonatomic) NSMutableDictionary *appStates; // @synthesize appStates=_appStates;
@property(readonly, nonatomic) NPSDomainAccessor *npsDomain; // @synthesize npsDomain=_npsDomain;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(readonly, nonatomic) ACXDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) _Bool hasCompletedInitialPairedSync; // @synthesize hasCompletedInitialPairedSync=_hasCompletedInitialPairedSync;
- (void)initialPairedSyncComplete;	// IMP=0x0010000000055382
- (void)_removeSockPuppetSettings;	// IMP=0x001000000005528e
- (_Bool)_init_migrateSockPuppetSettings;	// IMP=0x0010000000054b1d
- (void)noteTrustAddedApps:(id)arg1 trustRemovedApps:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053e6b
- (void)processNewStatusUpdates:(id)arg1 updatedStatusUpdates:(id)arg2 removedStatusUpdates:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005396c
- (_Bool)_onQueue_pendingInstallStateShouldBeIgnoredForApp:(id)arg1 existingState:(id)arg2 newState:(id)arg3;	// IMP=0x00100000000537ce
- (void)noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 transitioningAppBundleIDs:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000052036
- (id)bundleIDsOfAllInstalledApps;	// IMP=0x0010000000051e6e
- (void)dumpCurrentStateToLog;	// IMP=0x0010000000051c7d
- (long long)exportedAppStateForDeviceState:(unsigned long long)arg1;	// IMP=0x0010000000051c22
- (void)setWatchKitAppExecutableHash:(id)arg1 forApp:(id)arg2;	// IMP=0x0010000000051aca
- (id)watchKitAppExecutableHashForBundleID:(id)arg1;	// IMP=0x0010000000051900
- (id)preferencesForApplicationWithIdentifier:(id)arg1;	// IMP=0x0010000000051543
- (void)cancelUpdatePendingForCompanionApp:(id)arg1;	// IMP=0x0010000000051475
- (void)_onQueue_cancelUpdatePendingForCompanionApp:(id)arg1;	// IMP=0x0010000000051306
- (void)setUpdatePendingForCompanionApp:(id)arg1;	// IMP=0x0010000000051238
- (void)_onQueue_setUpdatePendingForCompanionApp:(id)arg1;	// IMP=0x001000000005110b
- (_Bool)updatePendingForCompanionApp:(id)arg1;	// IMP=0x0010000000050fd3
- (_Bool)_onQueue_updatePendingForCompanionApp:(id)arg1;	// IMP=0x0010000000050f0b
- (void)_onQueue_setUpPendingUpdateStateTimer;	// IMP=0x0010000000050d19
- (void)_onQueue_cancelPendingUpdateStateTimer;	// IMP=0x0010000000050c57
- (_Bool)_onQueue_cleanUpExpiredPendingUpdateStates;	// IMP=0x00100000000509eb
@property(readonly, copy, nonatomic) NSDictionary *pendingApps;
- (void)purgeInstallStatusForApps:(id)arg1;	// IMP=0x00100000000506bb
- (void)markInstalledAsPending;	// IMP=0x0010000000050452
- (void)clearPendingInstallations;	// IMP=0x00100000000501e6
- (_Bool)iterateInstallStatusAndClearNeedsReunionSyncWithIterator:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fdd3
- (_Bool)setInstallStatusForApps:(id)arg1 sendNotification:(_Bool)arg2 withUpdatePredicate:(CDUnknownBlockType)arg3;	// IMP=0x001000000004fc19
- (_Bool)_onQueue_setInstallStatusForApps:(id)arg1 sendNotification:(_Bool)arg2 withUpdatePredicate:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f492
- (_Bool)setInstallStatusForApps:(id)arg1;	// IMP=0x001000000004f478
- (void)setInstallStatus:(unsigned long long)arg1 forApp:(id)arg2 companionBundleID:(id)arg3;	// IMP=0x001000000004f0f0
- (void)regenerateAllUniqueInstallIDs;	// IMP=0x001000000004f022
- (id)appStateForApp:(id)arg1;	// IMP=0x001000000004ee60
- (id)uniqueInstallIDForApp:(id)arg1;	// IMP=0x001000000004ec69
- (unsigned long long)installStatusForApp:(id)arg1;	// IMP=0x001000000004eada
@property(nonatomic) _Bool needsReunionSync;
@property(readonly, nonatomic) _Bool initiallyInstallAllApps;
@property(readonly, nonatomic) _Bool alwaysInstallApps;
- (void)_onQueue_saveState;	// IMP=0x001000000004e265
- (void)_init_loadState;	// IMP=0x001000000004d589
@property(readonly, nonatomic) _Bool gizmoIsActivePairedDevice;
- (id)initWithDevice:(id)arg1;	// IMP=0x001000000004d3f4

@end

