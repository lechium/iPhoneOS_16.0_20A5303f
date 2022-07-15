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

- (void)corruptDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000245864
- (void)queryTelemetryEnablement:(CDUnknownBlockType)arg1;	// IMP=0x000000000024550b
- (void)reportFinishedMigration:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000244663
- (_Bool)_isErrorAnExpectedError:(id)arg1 originatorId:(unsigned long long)arg2;	// IMP=0x00000000002445d5
- (void)reportCleanupFailureDuringSilentMigration:(id)arg1 operationType:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000244093
- (void)reportItemMismatchDuringSilentMigration:(id)arg1 information:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000243b51
- (void)signalStartOfSilentTelemetry:(id)arg1 uuid:(id)arg2 manual:(_Bool)arg3 version:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000024358c
- (void)queryLastCiconiaVersion:(CDUnknownBlockType)arg1;	// IMP=0x000000000024312a
- (void)getPausedFilesList:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000242d62
- (void)_sendPausedFileListBatchToUpdater:(id)arg1 fromRowID:(unsigned long long)arg2 batchSize:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000242706
- (void)fetchLatestVersionForFileAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000242513
- (void)resumeSyncForFileAtURL:(id)arg1 dropLocalChanges:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000242335
- (void)pauseSyncForFileAtURL:(id)arg1 timeout:(double)arg2 options:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000242157
- (void)checkIfItemIsShareableWithInode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241c9e
- (oneway void)updatePrivilegesDescriptor;	// IMP=0x0000000000241c88
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000024188f
- (void)lookupExcludedExtensionsForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000241528
- (void)lookupExcludedFilenamesForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002411c1
- (void)_t_extractMetadataForAllContainersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000024089e
- (void)_t_getEntitledContainerIDsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002407d3
- (void)_t_getEntitlementsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000240708
- (void)trashItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000240515
- (void)removeItemFromDisk:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000240337
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023fcf3
- (oneway void)willAcceptShareAtURL:(id)arg1;	// IMP=0x000000000023fced
- (void)_presentAcceptDialogsWithMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f771
- (void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f75f
- (void)getShareOptionsOfItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e89d
- (void)getCreatorNameComponentsForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023e524
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023dda9
- (void)copyBulkShareIDsAtURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023dbb6
- (void)startOperation:(id)arg1 toAcceptShareLink:(id)arg2 skipAcceptDialogs:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023d4b1
- (void)startOperation:(id)arg1 toProcessSubitemsWithItemID:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000023cf13
- (void)_startOperation:(id)arg1 toProcessSubitemsWithLocalItem:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000023caf9
- (void)startOperation:(id)arg1 toPrepFolderForSharingWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023c49b
- (void)_startOperation:(id)arg1 toPrepFolderForSharingWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023ba1b
- (void)startOperation:(id)arg1 toCopyParticipantTokenWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023b461
- (void)_startOperation:(id)arg1 toCopyParticipantTokenWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023afee
- (void)startOperation:(id)arg1 toModifyRecordAccessWithItemID:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023aa20
- (void)_startOperation:(id)arg1 toModifyRecordAccessWithLocalItem:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023a52c
- (void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000239dea
- (void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000023918b
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000237f83
- (void)createSharingInfoForItemID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000237975
- (void)_createSharingInfoForLocalItem:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002371ac
- (void)copyCollaborationIdentifierForFileObjectID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000236a5e
- (void)copyCollaborationIdentifierForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023686b
- (void)copyCurrentUserNameAndDisplayHandleWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002360c6
- (void)copyCurrentUserNameAndEmailWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000235b80
- (void)copyCurrentUserIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002355b6
- (void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000234eab
- (void)startOperation:(id)arg1 toEvictItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000234ccd
- (void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002347db
- (void)startOperation:(id)arg1 toCopyDocumentURLForRecordID:(id)arg2 syncIfNeeded:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000232bc3
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000232653
- (void)startOperation:(id)arg1 toCopySharingInfoWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000232099
- (void)_startOperation:(id)arg1 toCopySharingInfoWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002318ec
- (void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002316f9
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231506
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002312ef
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000231111
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000230f33
- (void)_getPublishedURLForLocalItem:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002307ba
- (void)enumerateWorkingSetChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000230093
- (void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000022f88f
- (_Bool)_enumerateFoldersWithParent:(id)arg1 depth:(unsigned long long)arg2 session:(id)arg3 db:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000022f382
- (void)enumerateItemsInFolder:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000022e596
- (void)currentNotifRankWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022e191
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022dcf6
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022d6cd
- (void)getContainerStatusWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022d168
- (void)getLocalizedLastSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c7c8
- (void)getLastSyncDateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c3d0
- (void)getApplicationStatusForProcess:(CDStruct_4c969caf)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c038
- (void)getApplicationStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000000022bd01
- (void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022bb0e
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022a802
- (void)resolveFileObjectIDToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000229dc0
- (void)resolveFileObjectIDsToContentRecordIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000229474
- (void)getBookmarkDataForURL:(id)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000229278
- (void)getSyncState:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000228c01
- (void)getMigrationStatusForPrimaryiCloudAccount:(CDUnknownBlockType)arg1;	// IMP=0x000000000022886d
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000228202
- (void)getContainersNeedingUpload:(CDUnknownBlockType)arg1;	// IMP=0x0000000000227b38
- (void)jetsamCloudDocsAppsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000227769
- (void)invalidateAccountCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022743c
- (void)updateAccountDisplayName:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000226fa5
- (void)logoutAccountWithACAccountID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000226b0e
- (void)_unregisterPrematurely;	// IMP=0x0000000000226a92
- (void)createAccountWithACAccountID:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002264b0
- (void)cancelTreeConsistencyCheckWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022615c
- (void)resumeSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000225c41
- (void)pauseSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002258ed
- (void)launchSyncConsistencyChecksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000225074
- (void)launchItemCountMismatchChecksAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000224e81
- (void)dropSpotlightIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000224e68
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000224b22
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002247b4
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000022425a
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000223e7f
- (void)waitForFileSystemChangeProcessingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000223a95
- (void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000223407
- (void)forceSyncContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002223b4
- (void)refreshSharingStateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000220ee6
- (void)forceSyncWithBarrierContainerID:(id)arg1 timeout:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021fe95
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021f438
- (void)zoneNameForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021ec86
- (void)healthStatusStringForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021e341
- (void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021d388
- (void)gatherInformationForPath:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021cf09
- (void)_gatherInformationForPath:(id)arg1 session:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021cd16
- (void)dumpCoordinationInfoTo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021c68d
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 includeAllItems:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000021bc42
- (void)printStatus:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021b585
- (void)performSelfCheck:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021b083
- (void)resetBudgets:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021aa3e
- (void)setupInstanceWithDict:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021a78d
- (void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021a3c4
- (id)_loggedInUserPropertyValuesForKeys:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000219ef4
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000219a02
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000219824
- (void)getContainerForMangledID:(id)arg1 personaID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021918f
- (void)getContainersByID:(CDUnknownBlockType)arg1;	// IMP=0x0000000000218cb0
- (void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000218b55
- (void)evictOldDocumentsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000218763
- (void)setStorageOpimizationEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000218414
- (void)hasOptimizeStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002180b4
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002177d2
- (void)getTotalApplicationDocumentUsageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000216d4e
- (void)queryLoggedInAccountDescriptorsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002169e1
- (void)querySyncedRootURLsForPersona:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000216063
- (void)queryPathsForPersona:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000215aee
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002150aa
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000214ecc
- (void)evictItemAtURL:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000214cee
- (void)startOperation:(id)arg1 toDownloadItemAtURL:(id)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000214690
- (id)_removeSandboxedAttributes:(id)arg1;	// IMP=0x00000000002144c0
- (void)updateItemFromURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002142cd
- (void)getQueryItemForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002140da
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000213c93
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 wait:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000213160
- (oneway void)updateContainerMetadataForID:(id)arg1;	// IMP=0x0000000000212954
- (void)getContainerURLForID:(id)arg1 forProcess:(CDStruct_4c969caf)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000021229f
- (void)presyncContainerWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000211deb
- (void)getContainerURLForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000211dd4
- (void)getContainerURLForID:(id)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002118ef
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;	// IMP=0x000000000021156c
- (void)getAttributeValues:(id)arg1 forItemIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000144ecc
- (void)getPublishedURLForItemIdentifier:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000144967
- (void)getBookmarkDataForItemIdentifier:(id)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(id)arg3 documentID:(id)arg4 isDirectory:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000144309
- (void)capabilityWhenTryingToReparentItemIdentifier:(id)arg1 toNewParent:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001439d2
- (void)boostFilePresenterForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000143604
- (void)notifyReimportCompleted:(CDUnknownBlockType)arg1;	// IMP=0x0000000000143248
- (void)enumerateTrashItemsFromRank:(unsigned long long)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001429cf
- (void)reimport:(CDUnknownBlockType)arg1;	// IMP=0x0000000000142309
- (void)modifyItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 additionalAttrs:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001419f8
- (void)deleteItemWithIdentifier:(id)arg1 baseVersion:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000014086a
- (void)startDownloadFileObject:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000013f5dd
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 additionalItemAttributes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000013e886
- (void)getQueryItemForBRFileObjectID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000013e017
- (void)accessItemIdentifierServerItem:(id)arg1 dbAccessKind:(long long)arg2 synchronouslyIfPossible:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000013dff5
- (void)accessItemIdentifierLocalItem:(id)arg1 dbAccessKind:(long long)arg2 synchronouslyIfPossible:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000013dfd2
- (void)accessItemIdentifier:(id)arg1 dbAccessKind:(long long)arg2 synchronouslyIfPossible:(_Bool)arg3 LocalItemHandler:(CDUnknownBlockType)arg4 ServerItemHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000013d5f2
- (id)_overrideSessionForDomainIdentifier:(id)arg1;	// IMP=0x000000000013d300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end
