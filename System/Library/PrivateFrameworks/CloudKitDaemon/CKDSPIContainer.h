//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDContainer.h"

@interface CKDSPIContainer : CKDContainer
{
}

- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;	// IMP=0x000000000004a25e
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;	// IMP=0x000000000004a0ba
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049f3b
- (void)tossConfigWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049d5f
- (void)performRepairZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000497a4
- (void)getRecordPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049550
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000492fc
- (void)representativeDataclassEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000490fd
- (void)clearPILSCacheForLookupInfos:(id)arg1;	// IMP=0x000000000004905d
- (void)clearContainerFromMetadataCache;	// IMP=0x0000000000048fd0
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000048d2f
- (void)resetAllApplicationPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000048a52
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000048a40
- (void)dropDetachedContainersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000048602
- (void)getOutstandingOperationCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000481af
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;	// IMP=0x0000000000047fb2
- (void)fetchPCSFromCacheForZoneWithZoneID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047d89
- (void)clearCachesForZoneWithZoneID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047c3b
- (void)clearCachesForRecordWithRecordID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047ab4
- (void)clearCachesWithOptions:(unsigned long long)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000475d3
- (void)clearAuthTokensWithRecordID:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x0000000000047413
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;	// IMP=0x00000000000471f9
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;	// IMP=0x0000000000047165
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004706e
- (void)countAssetCacheItemsWithDatabaseScope:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046f6a
- (void)performAggregateZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046d73
- (void)currentUserBoundaryKeyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000466e9
- (void)currentDeviceIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000465e1
- (void)serverEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000464cb
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046224
- (void)performFetchRegisteredBundleIDsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045de2
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045dd0
- (void)performUploadMergeableDeltasOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004573e
- (void)performReplaceMergeableDeltasOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004535d
- (void)performFetchMergeableDeltaMetadataOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044f64
- (void)performFetchMergeableDeltasOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044b6b
- (void)performFetchUserQuotaOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044754
- (void)performInitiateParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044363
- (void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043e1a
- (void)performFetchShareParticipantKeyOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000439e2
- (void)performCompleteParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000433ef
- (void)performModifyRecordAccessOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042cf9
- (void)performDeserializeRecordModificationsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000429e1
- (void)performSerializeRecordModificationsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000426e0
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000425e0
- (void)getNewWebSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000421d3
- (void)performModifyWebSharingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041add
- (void)performMarkAssetBrokenOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041646
- (void)performRepairAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004119e
- (void)performPublishAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040cd1
- (void)performArchiveRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000408b8
- (void)performFetchArchivedRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004016e
- (void)performFetchRecordVersionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003fba2
- (void)frameworkCachesDirectoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fa55

@end

