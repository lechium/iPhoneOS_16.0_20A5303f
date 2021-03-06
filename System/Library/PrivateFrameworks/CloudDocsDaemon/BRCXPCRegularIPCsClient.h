//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCRegularIPCsClient
{
}

- (void)corruptDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000273af9
- (void)queryTelemetryEnablement:(CDUnknownBlockType)arg1;	// IMP=0x00000000002737a0
- (void)reportFinishedMigration:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002727fd
- (_Bool)_isErrorAnExpectedError:(id)arg1 originatorId:(unsigned long long)arg2;	// IMP=0x000000000027276f
- (void)reportCleanupFailureDuringSilentMigration:(id)arg1 operationType:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000027222d
- (void)reportItemMismatchDuringSilentMigration:(id)arg1 information:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000271ceb
- (void)signalStartOfSilentTelemetry:(id)arg1 uuid:(id)arg2 manual:(_Bool)arg3 version:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000027166d
- (void)queryLastCiconiaVersion:(CDUnknownBlockType)arg1;	// IMP=0x000000000027120b
- (void)getPausedFilesList:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000270e43
- (void)_sendPausedFileListBatchToUpdater:(id)arg1 fromRowID:(unsigned long long)arg2 batchSize:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002707a3
- (void)fetchLatestVersionForFileAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026f464
- (void)resumeSyncForFileAtURL:(id)arg1 dropLocalChanges:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000026eb64
- (void)pauseSyncForFileAtURL:(id)arg1 timeout:(double)arg2 options:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000026e13e
- (void)checkIfItemIsShareableWithInode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026dc85
- (oneway void)updatePrivilegesDescriptor;	// IMP=0x000000000026dc6f
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000026d876
- (void)lookupExcludedExtensionsForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000026d50f
- (void)lookupExcludedFilenamesForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000026d1a8
- (void)_t_extractMetadataForAllContainersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000026c885
- (void)_t_getEntitledContainerIDsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026c7ba
- (void)_t_getEntitlementsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026c6ef
- (void)trashItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026b9b1
- (void)removeItemFromDisk:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026b342
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000026acfe
- (oneway void)willAcceptShareAtURL:(id)arg1;	// IMP=0x000000000026acf8
- (void)_presentAcceptDialogsWithMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026a77c
- (void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026a76a
- (void)getShareOptionsOfItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002698a8
- (void)getCreatorNameComponentsForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000269122
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002689a7
- (void)copyBulkShareIDsAtURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000267933
- (void)startOperation:(id)arg1 toAcceptShareLink:(id)arg2 skipAcceptDialogs:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000026722e
- (void)startOperation:(id)arg1 toProcessSubitemsWithItemID:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000266c90
- (void)_startOperation:(id)arg1 toProcessSubitemsWithLocalItem:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000266876
- (void)startOperation:(id)arg1 toPrepFolderForSharingWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000266218
- (void)_startOperation:(id)arg1 toPrepFolderForSharingWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000265798
- (void)startOperation:(id)arg1 toCopyParticipantTokenWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002651de
- (void)_startOperation:(id)arg1 toCopyParticipantTokenWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000264d6b
- (void)startOperation:(id)arg1 toModifyRecordAccessWithItemID:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000026479d
- (void)_startOperation:(id)arg1 toModifyRecordAccessWithLocalItem:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002642a9
- (void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000263b67
- (void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000262f08
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002619b8
- (void)createSharingInfoForItemID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002613aa
- (void)_createSharingInfoForLocalItem:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000260be1
- (void)copyCollaborationIdentifierForFileObjectID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000260493
- (void)copyCollaborationIdentifierForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000025fdea
- (void)copyCurrentUserNameAndDisplayHandleWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000025f645
- (void)copyCurrentUserNameAndEmailWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000025f0ff
- (void)copyCurrentUserIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000025eb35
- (void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000025e42a
- (void)startOperation:(id)arg1 toEvictItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000025dc9e
- (void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d7ac
- (void)startOperation:(id)arg1 toCopyDocumentURLForRecordID:(id)arg2 syncIfNeeded:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000025bb85
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000025b615
- (void)startOperation:(id)arg1 toCopySharingInfoWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000025b05b
- (void)_startOperation:(id)arg1 toCopySharingInfoWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000025a8ae
- (void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000259c04
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000258f5d
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000257a4b
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000256c2a
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000255fff
- (void)_getPublishedURLForLocalItem:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000255886
- (void)enumerateWorkingSetChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000025515f
- (void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000025495b
- (_Bool)_enumerateFoldersWithParent:(id)arg1 depth:(unsigned long long)arg2 session:(id)arg3 db:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000025444e
- (void)enumerateItemsInFolder:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000253330
- (void)currentNotifRankWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000252f2b
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000252a90
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000252467
- (void)getContainerStatusWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000251f02
- (void)getLocalizedLastSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000251562
- (void)getLastSyncDateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000025116a
- (void)getApplicationStatusForProcess:(CDStruct_4c969caf)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000250dd2
- (void)getApplicationStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000000250a9b
- (void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024fd01
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024e565
- (void)resolveFileObjectIDToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024da76
- (void)resolveFileObjectIDsToContentRecordIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024d12a
- (void)getBookmarkDataForURL:(id)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000024c80b
- (void)getSyncState:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024c194
- (void)getMigrationStatusForPrimaryiCloudAccount:(CDUnknownBlockType)arg1;	// IMP=0x000000000024be00
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000024b795
- (void)getContainersNeedingUpload:(CDUnknownBlockType)arg1;	// IMP=0x000000000024b0cb
- (void)jetsamCloudDocsAppsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000024acfc
- (void)invalidateAccountCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000024a9cf
- (void)updateAccountDisplayName:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a538
- (void)logoutAccountWithACAccountID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a0a1
- (void)_unregisterPrematurely;	// IMP=0x000000000024a025
- (void)createAccountWithACAccountID:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000249a43
- (void)cancelTreeConsistencyCheckWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002496ef
- (void)resumeSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002491d4
- (void)pauseSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000248e80
- (void)launchSyncConsistencyChecksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000248607
- (void)launchItemCountMismatchChecksAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000247b60
- (void)dropSpotlightIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000247b47
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000247801
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000247493
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000246f39
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000246b5e
- (void)waitForFileSystemChangeProcessingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000246474
- (void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000245de6
- (void)forceSyncContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000244d93
- (void)refreshSharingStateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002434a9
- (void)forceSyncWithBarrierContainerID:(id)arg1 timeout:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000242458
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002419fb
- (void)zoneNameForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241249
- (void)healthStatusStringForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000240904
- (void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023f94b
- (void)gatherInformationForPath:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f4cc
- (void)_gatherInformationForPath:(id)arg1 session:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023e9c4
- (void)dumpCoordinationInfoTo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e33b
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 includeAllItems:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000023d8f0
- (void)printStatus:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023d233
- (void)performSelfCheck:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023cd31
- (void)resetBudgets:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c6ec
- (void)setupInstanceWithDict:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c43b
- (void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c072
- (id)_loggedInUserPropertyValuesForKeys:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023bba2
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023b6b0
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023ad1d
- (void)getContainerForMangledID:(id)arg1 personaID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023a688
- (void)getContainersByID:(CDUnknownBlockType)arg1;	// IMP=0x000000000023a1a9
- (void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023a04e
- (void)evictOldDocumentsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000239c5c
- (void)setStorageOpimizationEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023990d
- (void)hasOptimizeStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002395ad
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000238ccb
- (void)getTotalApplicationDocumentUsageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000238247
- (void)queryLoggedInAccountDescriptorsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000237eda
- (void)querySyncedRootURLsForPersona:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023755c
- (void)queryPathsForPersona:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000236fe7
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002365a3
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000236005
- (void)evictItemAtURL:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000235aad
- (void)startOperation:(id)arg1 toDownloadItemAtURL:(id)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000023544f
- (id)_removeSandboxedAttributes:(id)arg1;	// IMP=0x000000000023527f
- (void)updateItemFromURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000234931
- (void)getQueryItemForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000234167
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000233d20
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 wait:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000002331ed
- (oneway void)updateContainerMetadataForID:(id)arg1;	// IMP=0x00000000002329e1
- (void)getContainerURLForID:(id)arg1 forProcess:(CDStruct_4c969caf)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023232c
- (void)presyncContainerWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231e78
- (void)getContainerURLForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231e61
- (void)getContainerURLForID:(id)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023197c
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;	// IMP=0x00000000002315f9
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f38ec
- (void)getURLForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f3157
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f2a6f
- (void)_updateDirectoryMtime:(long long)arg1 onDisk:(id)arg2;	// IMP=0x00000000001f2a69
- (void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f2321
- (void)boostFilePresenterAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f1e9a
- (void)capabilityWhenTryingToReparentItemAtURL:(id)arg1 toNewParent:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f1804
- (void)overwriteAccessTimeForItemAtURL:(id)arg1 atime:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f0c25
- (void)_t_getReaderStateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f02f8
- (void)_t_dropReaderJobAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ef78f
- (void)getEvictableSpaceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ef226
- (void)readerThrottleBackoffForDocumentAtPath:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001eed42
- (void)_readerThrottleBackoffForDocumentAtPath:(id)arg1 session:(id)arg2 containerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ee562
- (void)moveBRSecurityBookmarkAtURL:(id)arg1 toURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001eda45
- (void)scheduleDeepScanForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ed3c9
- (void)addExternalDocumentReferenceTo:(id)arg1 inContainer:(id)arg2 underParent:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ed166
- (void)_addExternalDocumentReferenceTo:(id)arg1 session:(id)arg2 inContainer:(id)arg3 underParent:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ec3b1
- (void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ec17c
- (void)_addExternalDocumentReferenceTo:(id)arg1 session:(id)arg2 underParent:(id)arg3 forceReparent:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000001eb3ca
- (id)_createBookmarkWithTarget:(id)arg1 targetPath:(id)arg2 parentPath:(id)arg3 aliasName:(id)arg4 error:(id *)arg5;	// IMP=0x00000000001eb020
- (void)startOperation:(id)arg1 toProcessSubitemsAtURL:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ea97b
- (void)startOperation:(id)arg1 toPrepFolderForSharingAt:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ea307
- (void)startOperation:(id)arg1 toCopyParticipantTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e9b7d
- (void)startOperation:(id)arg1 toModifyRecordAccessAtURL:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e9341
- (void)createSharingInfoForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e8b19
- (void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e833d
- (void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e7970
- (void)startOperation:(id)arg1 toCopyEtagAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e6c1f
- (void)startOperation:(id)arg1 toCopyShortTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e6299
- (void)startOperation:(id)arg1 toCopyShareInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e574f
- (id)_sharingOperationItemFromLookup:(id)arg1 url:(id)arg2 allowDirectory:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000001e5446
- (void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000001e49fb
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e436c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end

