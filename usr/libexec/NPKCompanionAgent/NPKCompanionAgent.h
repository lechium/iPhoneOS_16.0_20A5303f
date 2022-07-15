//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NPDBulletinManager, NPDCardSetupReminderNotificationScheduler, NPDCompanionMaintenanceService, NPDCompanionPassSyncService, NPDCompanionPaymentPassDatabase, NPDCompanionPeerPaymentStatusObserver, NPDDemoModePassCopier, NPDOutstandingPassDeletionStore, NPKCompanionCatalogManager, NPKCompanionViewServiceConnectionManager, NPKGizmoDatabase, NPKIDVRemoteDevicesManager, NPKRemoteAdminConnectionServiceAgent, NPKWorkQueue, NPSDomainAccessor, NPSManager, NSDate, NSHashTable, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, NSXPCListener, PKPassLibrary, PSYSyncCoordinator;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKCompanionAgent : NSObject
{
    PKPassLibrary *_passLibrary;	// 8 = 0x8
    _Bool _shouldDropIDSMessages;	// 16 = 0x10
    _Bool _wasLimitPush;	// 17 = 0x11
    _Bool _gizmoWaitingForRelevantPasses;	// 18 = 0x12
    _Bool _hasCandidateRelevantPasses;	// 19 = 0x13
    int _capabilityUpdateNotificationToken;	// 20 = 0x14
    NSNumber *_lastKnownResyncID;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_stopDroppingIDSMessagesTimer;	// 32 = 0x20
    NSString *_initializedPairingIdentifier;	// 40 = 0x28
    PSYSyncCoordinator *_pairedSyncCoordinator;	// 48 = 0x30
    NSXPCListener *_xpcListener;	// 56 = 0x38
    NSXPCListener *_libraryListener;	// 64 = 0x40
    NPKWorkQueue *_workQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_activeClientsQueue;	// 80 = 0x50
    NSHashTable *_activeCompanionAgentClientsHashTable;	// 88 = 0x58
    NSHashTable *_activePassLibraryClientsHashTable;	// 96 = 0x60
    NPKRemoteAdminConnectionServiceAgent *_remoteAdminConnectionServiceAgent;	// 104 = 0x68
    NSSet *_lastSeenRelevantPassInfo;	// 112 = 0x70
    NSDate *_lastRelevantPassInfoSendDate;	// 120 = 0x78
    NSDate *_lastRelevantPassRequestDate;	// 128 = 0x80
    NPKGizmoDatabase *_gizmoDatabase;	// 136 = 0x88
    NPDCompanionPaymentPassDatabase *_companionPaymentPassDatabase;	// 144 = 0x90
    NPKCompanionCatalogManager *_companionCatalogManager;	// 152 = 0x98
    NPDBulletinManager *_bulletinManager;	// 160 = 0xa0
    NPDCardSetupReminderNotificationScheduler *_bulletinScheduler;	// 168 = 0xa8
    NPDCompanionPeerPaymentStatusObserver *_companionPeerPaymentStatusObserver;	// 176 = 0xb0
    NPSManager *_npsManager;	// 184 = 0xb8
    NPSDomainAccessor *_npsDomainAccessor;	// 192 = 0xc0
    NSMutableArray *_performAfterDatabaseUnlocksAndPairedSyncAllowed;	// 200 = 0xc8
    NSMutableArray *_performAfterDatabaseUnlocks;	// 208 = 0xd0
    NPDOutstandingPassDeletionStore *_outstandingDeletionStore;	// 216 = 0xd8
    NSMutableSet *_reconcileWorkQueues;	// 224 = 0xe0
    NSMutableArray *_watchOfferProvisioningCompletionHandlers;	// 232 = 0xe8
    IDSService *_generalService;	// 240 = 0xf0
    IDSService *_relevancyService;	// 248 = 0xf8
    NPDCompanionPassSyncService *_passSyncService;	// 256 = 0x100
    NPDCompanionMaintenanceService *_maintenanceService;	// 264 = 0x108
    NPDDemoModePassCopier *_demoModePassCopier;	// 272 = 0x110
    NPKIDVRemoteDevicesManager *_remoteDeviceManager;	// 280 = 0x118
    NPKCompanionViewServiceConnectionManager *_viewServiceConnectionManager;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x002000000002641a
@property(nonatomic) int capabilityUpdateNotificationToken; // @synthesize capabilityUpdateNotificationToken=_capabilityUpdateNotificationToken;
@property(retain, nonatomic) NPKCompanionViewServiceConnectionManager *viewServiceConnectionManager; // @synthesize viewServiceConnectionManager=_viewServiceConnectionManager;
@property(readonly, nonatomic) NPKIDVRemoteDevicesManager *remoteDeviceManager; // @synthesize remoteDeviceManager=_remoteDeviceManager;
@property(retain, nonatomic) NPDDemoModePassCopier *demoModePassCopier; // @synthesize demoModePassCopier=_demoModePassCopier;
@property(retain, nonatomic) NPDCompanionMaintenanceService *maintenanceService; // @synthesize maintenanceService=_maintenanceService;
@property(retain, nonatomic) NPDCompanionPassSyncService *passSyncService; // @synthesize passSyncService=_passSyncService;
@property(retain, nonatomic) IDSService *relevancyService; // @synthesize relevancyService=_relevancyService;
@property(retain, nonatomic) IDSService *generalService; // @synthesize generalService=_generalService;
@property(retain, nonatomic) NSMutableArray *watchOfferProvisioningCompletionHandlers; // @synthesize watchOfferProvisioningCompletionHandlers=_watchOfferProvisioningCompletionHandlers;
@property(retain, nonatomic) NSMutableSet *reconcileWorkQueues; // @synthesize reconcileWorkQueues=_reconcileWorkQueues;
@property(retain, nonatomic) NPDOutstandingPassDeletionStore *outstandingDeletionStore; // @synthesize outstandingDeletionStore=_outstandingDeletionStore;
@property(retain, nonatomic) NSMutableArray *performAfterDatabaseUnlocks; // @synthesize performAfterDatabaseUnlocks=_performAfterDatabaseUnlocks;
@property(retain, nonatomic) NSMutableArray *performAfterDatabaseUnlocksAndPairedSyncAllowed; // @synthesize performAfterDatabaseUnlocksAndPairedSyncAllowed=_performAfterDatabaseUnlocksAndPairedSyncAllowed;
@property(retain) NPSDomainAccessor *npsDomainAccessor; // @synthesize npsDomainAccessor=_npsDomainAccessor;
@property(retain) NPSManager *npsManager; // @synthesize npsManager=_npsManager;
@property(retain, nonatomic) NPDCompanionPeerPaymentStatusObserver *companionPeerPaymentStatusObserver; // @synthesize companionPeerPaymentStatusObserver=_companionPeerPaymentStatusObserver;
@property(retain, nonatomic) NPDCardSetupReminderNotificationScheduler *bulletinScheduler; // @synthesize bulletinScheduler=_bulletinScheduler;
@property(retain, nonatomic) NPDBulletinManager *bulletinManager; // @synthesize bulletinManager=_bulletinManager;
@property(retain) NPKCompanionCatalogManager *companionCatalogManager; // @synthesize companionCatalogManager=_companionCatalogManager;
// Error: Property attributes should begin with the type ('T') attribute, property name: companionPaymentPassDatabase
// Property attributes: (null)

@property(retain) NPKGizmoDatabase *gizmoDatabase; // @synthesize gizmoDatabase=_gizmoDatabase;
@property(nonatomic) _Bool hasCandidateRelevantPasses; // @synthesize hasCandidateRelevantPasses=_hasCandidateRelevantPasses;
@property(nonatomic, getter=isGizmoWaitingForRelevantPasses) _Bool gizmoWaitingForRelevantPasses; // @synthesize gizmoWaitingForRelevantPasses=_gizmoWaitingForRelevantPasses;
@property(retain, nonatomic) NSDate *lastRelevantPassRequestDate; // @synthesize lastRelevantPassRequestDate=_lastRelevantPassRequestDate;
@property(retain, nonatomic) NSDate *lastRelevantPassInfoSendDate; // @synthesize lastRelevantPassInfoSendDate=_lastRelevantPassInfoSendDate;
@property(retain) NSSet *lastSeenRelevantPassInfo; // @synthesize lastSeenRelevantPassInfo=_lastSeenRelevantPassInfo;
@property(retain) NPKRemoteAdminConnectionServiceAgent *remoteAdminConnectionServiceAgent; // @synthesize remoteAdminConnectionServiceAgent=_remoteAdminConnectionServiceAgent;
@property(retain, nonatomic) NSHashTable *activePassLibraryClientsHashTable; // @synthesize activePassLibraryClientsHashTable=_activePassLibraryClientsHashTable;
@property(retain, nonatomic) NSHashTable *activeCompanionAgentClientsHashTable; // @synthesize activeCompanionAgentClientsHashTable=_activeCompanionAgentClientsHashTable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activeClientsQueue; // @synthesize activeClientsQueue=_activeClientsQueue;
@property(retain) NPKWorkQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSXPCListener *libraryListener; // @synthesize libraryListener=_libraryListener;
@property(retain) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(nonatomic) _Bool wasLimitPush; // @synthesize wasLimitPush=_wasLimitPush;
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // @synthesize pairedSyncCoordinator=_pairedSyncCoordinator;
@property(retain, nonatomic) NSString *initializedPairingIdentifier; // @synthesize initializedPairingIdentifier=_initializedPairingIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *stopDroppingIDSMessagesTimer; // @synthesize stopDroppingIDSMessagesTimer=_stopDroppingIDSMessagesTimer;
@property(nonatomic) _Bool shouldDropIDSMessages; // @synthesize shouldDropIDSMessages=_shouldDropIDSMessages;
@property(retain, nonatomic) NSNumber *lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
- (void)_handlePotentialMessageServiceEnabledChangeWithPreviousSettings:(unsigned long long)arg1 newSettings:(unsigned long long)arg2 uniqueID:(id)arg3;	// IMP=0x0010000000025b9b
- (void)_handlePotentialTransactionServiceEnabledChangeWithPreviousSettings:(unsigned long long)arg1 newSettings:(unsigned long long)arg2 uniqueID:(id)arg3;	// IMP=0x00100000000257a5
- (void)notifySettingsChangedForPassWithUniqueID:(id)arg1 previousSettings:(unsigned long long)arg2 newSettings:(unsigned long long)arg3;	// IMP=0x0010000000025625
- (void)markPendingTransactionAsProcessedForPassWithUniqueID:(id)arg1;	// IMP=0x00100000000255b3
- (void)fetchPendingTransactionForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002552d
- (void)handleUpdatedSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x0010000000024f10
- (unsigned long long)versionForCompleteHash;	// IMP=0x0010000000024f05
- (void)_registerForFirstDeviceUnlockNotifications;	// IMP=0x0010000000024eff
- (void)_performAfterFirstDeviceUnlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024c1a
- (void)_performAfterFirstDeviceUnlockAndPairedSyncAllowed:(CDUnknownBlockType)arg1;	// IMP=0x00100000000248cf
- (void)_doPostUnlockPairedSyncAllowedWork;	// IMP=0x0010000000024463
- (void)_handleFirstDeviceUnlock;	// IMP=0x00100000000243aa
- (void)fetchCatalogIfChanged:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023ffa
- (void)start;	// IMP=0x0010000000023ff4
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x0010000000023ed2
- (void)passLibraryRequestsMigrateData:(id)arg1;	// IMP=0x0010000000023ecc
- (void)passLibrary:(id)arg1 requestsAdditionOfPasses:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000023ba4
- (void)passLibrary:(id)arg1 requestsDeletionOfPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000023ac4
- (void)remoteDevicesManager:(id)arg1 provisionedCredentialCountsForType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002364c
- (id)remoteDevicesManagerPairedDeviceOSVersion:(id)arg1;	// IMP=0x00100000000235d2
- (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023420
- (void)encryptedServiceProviderDataForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023159
- (void)serviceProviderDataForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022f66
- (id)paymentWebService;	// IMP=0x0010000000022f16
- (id);	// IMP=0x0010000000022f0c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000226b8
- (void)_reconcileDatabaseWithCompanionPassLibraryWithAddedPassHandler:(CDUnknownBlockType)arg1 updatedPassHandler:(CDUnknownBlockType)arg2 removedPassHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002239e
- (void)_reconcileDatabaseWithPaymentPassDirectoryWithAddedPassHandler:(CDUnknownBlockType)arg1 updatedPassHandler:(CDUnknownBlockType)arg2 removedPassHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000221df
- (void)_reconcilePassesInDatabasePassingTest:(CDUnknownBlockType)arg1 withNewPassUniqueIDs:(id)arg2 passAccessor:(CDUnknownBlockType)arg3 addedPassHandler:(CDUnknownBlockType)arg4 updatedPassHandler:(CDUnknownBlockType)arg5 removedPassHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000002111f
- (void)_checkHasCandidateRelevantPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020ec2
- (void)_doSync;	// IMP=0x00100000000203ad
- (void)_doFullSyncWithResyncID:(id)arg1;	// IMP=0x001000000001f79e
- (_Bool)_shouldSyncPassFromCompanionPassLibrary:(id)arg1;	// IMP=0x001000000001f722
- (void)_resyncPassUniqueIDUpdates:(id)arg1 andRemovals:(id)arg2 withResyncID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d613
- (void)_removePassFromDatabaseWithID:(id)arg1;	// IMP=0x001000000001d5a5
- (void)_removePendingAppleCardNotification;	// IMP=0x001000000001d47b
- (void)_addPassToDatabaseAndPrepareForTransmissionToGizmo:(id)arg1 isUpdate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c9a0
- (double)gizmoScreenScale;	// IMP=0x001000000001c5ec
- (struct CGSize)gizmoScreenSize;	// IMP=0x001000000001c074
- (void)_handleCompanionPassRemovedWithID:(id)arg1;	// IMP=0x001000000001bdf7
- (void)_handleCompanionPassUpdatedWithID:(id)arg1;	// IMP=0x001000000001ba3c
- (void)_handleCompanionPassAddedWithID:(id)arg1;	// IMP=0x001000000001b61d
- (void)_handleRemovalAndSendToGizmoForPassWithUniqueID:(id)arg1 syncID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ad81
- (void)_handleUpdateAndSendToGizmoForPass:(id)arg1 syncID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a39b
- (void)_handleAddAndSendToGizmoForPass:(id)arg1 syncID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000197d5
- (id)serializedRemovePassWithUniqueID:(id)arg1 withNewLibraryHash:(id)arg2 omitHashForChunking:(_Bool)arg3 catalog:(id)arg4 syncID:(id)arg5 resyncID:(id)arg6;	// IMP=0x00100000000195c1
- (id)serializedUpdatePass:(id)arg1 fromPassWithManifestHash:(id)arg2 withNewLibraryHash:(id)arg3 omitHashForChunking:(_Bool)arg4 catalog:(id)arg5 syncID:(id)arg6 resyncID:(id)arg7;	// IMP=0x0010000000019366
- (id)serializedAddPass:(id)arg1 withNewLibraryHash:(id)arg2 omitHashForChunking:(_Bool)arg3 catalog:(id)arg4 syncID:(id)arg5 resyncID:(id)arg6;	// IMP=0x0010000000019134
- (id)serializedCatalog:(id)arg1;	// IMP=0x00100000000190b9
- (id)serializedPass:(id)arg1;	// IMP=0x0010000000019047
- (void)handleRelevantPassesNeededRequest:(id)arg1;	// IMP=0x0010000000018fa5
- (void)handleGizmoReceivedNewLibraryHashRequest:(id)arg1;	// IMP=0x0010000000018ebc
- (void)handleGizmoInitiatedDeletePassRequest:(id)arg1;	// IMP=0x0010000000018b7e
- (void)handleGizmoInitiatedAddPassRequest:(id)arg1;	// IMP=0x0010000000018604
- (void)resyncNeededRequest:(id)arg1;	// IMP=0x0010000000017e63
- (void)_handleDeviceCapabilitiesDidChange;	// IMP=0x0010000000017cff
- (void)_handleActiveDeviceChanged:(id)arg1;	// IMP=0x0010000000017b86
- (void)_fetchRelevantPassesAndNotifyGizmo;	// IMP=0x0010000000017592
- (void)_handleBulletinDistributorWillSendBulletinToGizmoWithSectionID:(id)arg1;	// IMP=0x001000000001748e
- (void)_handleRelevantPassesDidChange:(id)arg1;	// IMP=0x0010000000016a92
- (void)_handlePaymentOptionsDefaultsChanged;	// IMP=0x0010000000016a55
- (void)_handleWalletPreferencesChanged;	// IMP=0x00100000000168e2
- (void)_handlePassbookGlobalPreferencesChanged;	// IMP=0x0010000000016605
- (void)_handleStockholmPreferencesChanged;	// IMP=0x001000000001642c
- (void)_handleCompanionPaymentPassDatabaseChangedBroadcastUnconditionally:(_Bool)arg1;	// IMP=0x0010000000015b48
- (void)_handleCompanionSyncDatabaseChanged:(id)arg1;	// IMP=0x0010000000015a2c
- (void)_handleCompanionPaymentPassDatabaseChanged:(id)arg1;	// IMP=0x0010000000015941
- (void)_migrateLoggingDefaults;	// IMP=0x00100000000158af
- (void)_handleCompanionPassLibraryChanged:(id)arg1;	// IMP=0x0010000000014b6c
- (id)libraryHash;	// IMP=0x0010000000014b00
- (id)temporarilyRetainedPassLibrary;	// IMP=0x0010000000014a2b
@property(readonly) PKPassLibrary *passLibrary; // @dynamic passLibrary;
- (unsigned long long)companionPassSyncService:(id)arg1 settingsForPassWithUniqueID:(id)arg2;	// IMP=0x0010000000014710
- (void)companionPassSyncService:(id)arg1 receivedUpdatedSettings:(unsigned long long)arg2 forPassWithUniqueID:(id)arg3;	// IMP=0x00100000000146f8
- (void)didReceiveCheckCompanionPeerPaymentState;	// IMP=0x00100000000146bb
- (void)didReceivePaymentSetupRequestForApplicationName:(id)arg1;	// IMP=0x00100000000144cc
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithCredentials:(id)arg2;	// IMP=0x0010000000013e75
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalance:(id)arg3;	// IMP=0x00100000000136f8
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithBalances:(id)arg2;	// IMP=0x00100000000130a1
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitAppletState:(id)arg2;	// IMP=0x001000000001296b
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x0010000000012585
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x00100000000121b5
- (void)removeReminderNotificationForPassWithUniqueID:(id)arg1;	// IMP=0x0010000000012143
- (void)postVerifyReminderNotificationForPassWithUniqueID:(id)arg1;	// IMP=0x0010000000011f3f
- (void)postAddReminderNotificationForPassWithUniqueID:(id)arg1;	// IMP=0x0010000000011acd
- (_Bool)hasAnyWatchPaymentPasses;	// IMP=0x0010000000011a5b
- (void)doesWatchSupportPassLikeCompanionPassWithUniqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011482
- (id)pairedTerminalIdentifierForCompanionPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000011295
- (_Bool)hasWatchPaymentPassWithPairedTerminalIdentifier:(id)arg1;	// IMP=0x00100000000109ef
- (_Bool)hasCompanionPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000010965
- (_Bool)hasWatchPaymentPassRequiringVerificationWithUniqueID:(id)arg1;	// IMP=0x001000000001089a
- (_Bool)hasWatchPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000010810
- (void)supportsMigrationSync;	// IMP=0x001000000001080a
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x0010000000010768
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000010469
- (void)_stopDroppingIDSMessages;	// IMP=0x00100000000103fe
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000010186
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000010027
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000000ff58
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x001000000000fe89
- (void)_logDebugInformationWithExpectedPairedDeviceID:(id)arg1;	// IMP=0x001000000000f62d
- (void)_registerDarwinNotificationHandler;	// IMP=0x001000000000f2d2
- (void)_registerDistributedNotificationHandler;	// IMP=0x001000000000eabd
- (void)_createSyncServiceIfNecessary;	// IMP=0x001000000000e6b1
- (void)_disconnectAllClients;	// IMP=0x001000000000de70
- (void)_tearDownPairingSpecificStateForPairingIdentifier:(id)arg1;	// IMP=0x001000000000da9b
- (void)_initializePairingSpecificStateForDevice:(id)arg1;	// IMP=0x001000000000cb97
- (void)_updateInitializationForActiveDevice;	// IMP=0x001000000000ca11
- (void)dealloc;	// IMP=0x001000000000c94a
- (id)init;	// IMP=0x001000000000c1e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
