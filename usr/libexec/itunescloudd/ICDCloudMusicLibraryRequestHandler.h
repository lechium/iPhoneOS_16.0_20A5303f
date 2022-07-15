//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class JaliscoRequestHandler, MISSING_TYPE, NSMutableDictionary, NSObject, NSOperationQueue, NSString, SagaRequestHandler;
@protocol OS_dispatch_queue;

@interface ICDCloudMusicLibraryRequestHandler
{
    SagaRequestHandler *_sagaRequestHandler;	// 8 = 0x8
    JaliscoRequestHandler *_jaliscoRequestHandler;	// 16 = 0x10
    long long _musicSubscriptionCheckStatus;	// 24 = 0x18
    MISSING_TYPE *_accessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSOperationQueue *_retryQueue;	// 56 = 0x38
    int _autoEnableFailureCount;	// 64 = 0x40
    int _subscriptionStatusFailureCount;	// 68 = 0x44
    int _autoRetryCloudAuthenticateFailureCount;	// 72 = 0x48
    int _sagaImportFailureCount;	// 76 = 0x4c
    int _deauthOperationCount;	// 80 = 0x50
    _Bool _havePendingSubscriptionStatusCheck;	// 84 = 0x54
    _Bool _havePendingAutoEnableICMLCheck;	// 85 = 0x55
    _Bool _havePendingCloudUpdateLibraryCheck;	// 86 = 0x56
    _Bool _didAdjustMergePreference;	// 87 = 0x57
    _Bool _havePendingSagaUpdate;	// 88 = 0x58
    _Bool _didManuallyReloadCloudLibrary;	// 89 = 0x59
    _Bool _isPendingAuthentication;	// 90 = 0x5a
    _Bool _isHandlerActive;	// 91 = 0x5b
    _Bool _didHandleStartupNotificationReason;	// 92 = 0x5c
    NSMutableDictionary *_syncProgressDictionary;	// 96 = 0x60
}

+ (id)handler;	// IMP=0x002000000001a1fe
+ (id)handlers;	// IMP=0x001000000001a1ce
- (void).cxx_destruct;	// IMP=0x002000000000b770
- (void)_handleSagaAuthentication:(id)arg1 finishedForReason:(long long)arg2 explicitUserAction:(_Bool)arg3 shouldStartInitialImport:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000b2f4
- (id)_prepareLibraryLoadErrorWithJaliscoError:(id)arg1 sagaError:(id)arg2;	// IMP=0x001000000000b1fe
- (void)_postLibraryUpdateProgressChangedForLibraryType:(long long)arg1;	// IMP=0x001000000000b13c
- (void)_performInitialSagaImportWithClientIdentity:(id)arg1 allowingNoisyAuthPrompt:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000af0a
- (void)_performJaliscoImportWithClientIdentity:(id)arg1 byAddingMediaKind:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ada5
- (void)_performInitialJaliscoImportWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ab31
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x001000000000a961
- (void)_runDisableCloudLibraryOperationWithClientIdentity:(id)arg1 byDeletingDatabase:(_Bool)arg2 disableActiveLockerAccount:(_Bool)arg3 removeSourcePurchaseHistory:(_Bool)arg4 isHandlerDeactivating:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000a364
- (void)_runSagaAuthenticateOperationWithClientIdentity:(id)arg1 mergePreference:(id)arg2 allowNoisyPrompt:(_Bool)arg3 cloudLibraryEnableReason:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009fe0
- (void)_tryEnablingCloudMusicLibraryForReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009f08
- (void)_tryEnablingICMLOnDevicesSupportingSideLoadedContentWithProperties:(id)arg1 reason:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009a30
- (void)_authenticateAndStartInitialImportWithMergePreference:(id)arg1 userIdentityProperties:(id)arg2 enableReason:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000991f
- (void)_registerDeviceAndPerformInitialImportWithUserIdentityProperties:(id)arg1 cloudLibraryEnableReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009206
- (long long)_shouldHandleDaemonStartupOrAccountChangedNotificationWithProperties:(id)arg1;	// IMP=0x0010000000008ea6
- (void)_adjustMergePreferenceWithUserIdentityProperties:(id)arg1;	// IMP=0x00100000000088a5
- (_Bool)_wasRestoredFromCloudBackup:(id)arg1;	// IMP=0x001000000000865b
- (long long)_canEnableCloudMusicLibraryOnPlatformsWithSideLoadedMediaContentWithProperties:(id)arg1 includeLocalContentCheck:(_Bool)arg2;	// IMP=0x0010000000007f5d
- (long long)_getCurrentSubscriptionStatusForReason:(long long)arg1;	// IMP=0x0010000000007f2e
- (void)_retryEnablingCloudMusicLibraryForReason:(long long)arg1;	// IMP=0x0010000000007d7b
- (void)_reloadSubscriptionStatusAndEnableCloudMusicLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007af8
- (void)_enqueueCloudUpdateLibraryOperationForReason:(long long)arg1;	// IMP=0x00100000000079dd
- (void)_enqueueSubscriptionStatusCheckForReason:(long long)arg1;	// IMP=0x001000000000776a
- (void)_runSubscriptionStatusCheckOperationWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000076d3
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x0010000000007404
- (_Bool)_isNativeMusicAppInstalled;	// IMP=0x00100000000072fa
- (void)_resetInternalCloudLibraryState;	// IMP=0x00100000000072bb
- (void)_deactivateJaliscoLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000719b
- (void)_deactivateSagaLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006ce3
- (void)updateLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006a1e
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006981
- (void)becomeActive;	// IMP=0x001000000000692f
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x0010000000006847
- (void)scheduleBackgroundTaskToUpdateLibraryType:(long long)arg1;	// IMP=0x00100000000067cd
- (void)setUpdateProgress:(float)arg1 forLibraryType:(long long)arg2;	// IMP=0x0010000000006772
- (void)finishedUpdateOperationForLibraryType:(long long)arg1 withResponse:(id)arg2;	// IMP=0x00100000000066d5
- (void)startingUpdateOperationForLibraryType:(long long)arg1 isInitialImport:(_Bool)arg2;	// IMP=0x001000000000667c
- (_Bool)shouldIncludeMediaKindSongForJaliscoImport;	// IMP=0x001000000000636d
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006280
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000061ee
- (void)loadBooksForStoreIDs:(id)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006101
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 clientIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006037
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005f4a
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005e5d
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005d66
- (void)removeLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005ca8
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000005c52
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000005bfc
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005b32
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005a68
- (void)loadLastKnownEnableICMLStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005602
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005515
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005428
- (void)loadArtworkInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000533b
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005271
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000005167
- (void)updatePlaylistPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000050a9
- (void)updateItemPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004feb
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004ef4
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004dfd
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004d33
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 requestingBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000004bd8
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000004ab3
- (void)addStorePlaylistWithGlobalID:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000049c6
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000048a9
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000047af
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000046ad
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000004588
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000044b2
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000043b0
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000004255
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000418b
- (void)removePlaylistsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000409e
- (void)removeItemsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003fb1
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003ee7
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000003d8c
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003c69
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x0010000000003c13
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x0010000000003bbd
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x0010000000003b67
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003a9d
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000039d3
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003909
- (void)updateProgressForLibraryType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000386c
- (void)cancelPendingChangesForLibraryType:(long long)arg1;	// IMP=0x0010000000003816
- (void)addBackgroundOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x0010000000003770
- (void)addOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x00100000000036ca
- (void)updateJaliscoLibraryWithClientIdentity:(id)arg1 forReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003600
- (void)updateSagaLibraryWithClientIdentity:(id)arg1 forReason:(long long)arg2 allowNoisyAuthPrompt:(_Bool)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003515
- (void)updateCloudLibraryProgressWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000034ef
- (void)isUpdatingCloudLibraryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000345d
- (_Bool)isUpdatingCloudLibrary;	// IMP=0x00100000000033c8
- (void)disableCloudLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002a00
- (void)enableCloudLibraryWithClientIdentity:(id)arg1 startInitialImport:(_Bool)arg2 enableCloudLibraryPolicy:(long long)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000028df
- (void)handleMusicAppInstalled;	// IMP=0x001000000000288d
- (void)handleMusicAppRemovedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002775
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000002432

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
