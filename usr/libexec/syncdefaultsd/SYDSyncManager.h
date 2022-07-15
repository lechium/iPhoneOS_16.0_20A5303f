//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKSyncEngine, NSMutableSet, NSString, SYDCoreDataStore;
@protocol OS_dispatch_queue, SYDSyncManagerDelegate;

@interface SYDSyncManager : NSObject
{
    _Bool _alwaysSaveRecordZones;	// 8 = 0x8
    CKSyncEngine *_engine;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    SYDCoreDataStore *_coreDataStore;	// 32 = 0x20
    long long _storeType;	// 40 = 0x28
    NSString *_personaUniqueString;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSMutableSet *_storeIdentifiersWithChangedValuesDuringFetchChanges;	// 64 = 0x40
    id <SYDSyncManagerDelegate> _delegate;	// 72 = 0x48
}

+ (_Bool)shouldIgnoreFetchError:(id)arg1;	// IMP=0x002000000001088c
- (void).cxx_destruct;	// IMP=0x00200000000188ba
@property(nonatomic) __weak id <SYDSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool alwaysSaveRecordZones; // @synthesize alwaysSaveRecordZones=_alwaysSaveRecordZones;
@property(retain, nonatomic) NSMutableSet *storeIdentifiersWithChangedValuesDuringFetchChanges; // @synthesize storeIdentifiersWithChangedValuesDuringFetchChanges=_storeIdentifiersWithChangedValuesDuringFetchChanges;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(nonatomic) long long storeType; // @synthesize storeType=_storeType;
@property(retain, nonatomic) SYDCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)deleteDataFromDisk;	// IMP=0x00100000000186f1
- (id)syncEngine:(id)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(id)arg2 recordIDs:(id)arg3;	// IMP=0x001000000001831f
- (void)syncEngineDidEndFetchingChanges:(id)arg1;	// IMP=0x0010000000017f0c
- (void)syncEngineWillBeginFetchingChanges:(id)arg1;	// IMP=0x0010000000017dc8
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x0010000000017cd4
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;	// IMP=0x0010000000017ae7
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;	// IMP=0x00100000000179b7
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;	// IMP=0x001000000001777e
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;	// IMP=0x001000000001764e
- (void)syncEngine:(id)arg1 didSaveRecordZones:(id)arg2;	// IMP=0x001000000001751e
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x00100000000173dc
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x0010000000016c0b
- (void)deduplicateRecordForKeyValue:(id)arg1 withNewlyFetchedRecord:(id)arg2;	// IMP=0x00100000000160b6
- (void)didFetchKeyValueRecord:(id)arg1;	// IMP=0x0010000000015888
- (void)saveSyncAnchorSystemFieldsRecord:(id)arg1;	// IMP=0x001000000001564d
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x001000000001537d
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x0010000000015214
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x0010000000014cbc
- (void)failedToSaveKeyValueRecord:(id)arg1 error:(id)arg2;	// IMP=0x0010000000013833
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x00100000000133ae
- (void)didSaveKeyValueRecord:(id)arg1;	// IMP=0x0010000000012eff
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x0010000000012c28
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x0010000000012722
- (void)_markZoneForDeletionOnManateeFailureForRecordZoneID:(id)arg1;	// IMP=0x00100000000125b4
- (void)syncEngine:(id)arg1 failedToFetchChangesForRecordZoneID:(id)arg2 error:(id)arg3;	// IMP=0x0010000000012365
- (void)_queue_resetSyncEngine;	// IMP=0x0010000000012296
- (void)resetSyncEngineWithContainer:(id)arg1;	// IMP=0x0010000000012178
- (void)resetSyncEngine;	// IMP=0x00100000000120f1
- (void)addSyncAnchorRecordIDToSaveIfNecessaryForStoreIdentifier:(id)arg1;	// IMP=0x0010000000011ff9
- (void)addKeyValueRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;	// IMP=0x0010000000011b43
- (void)markAllKeyValuesAsNeedingToBeUploadedForStoreWithIdentifier:(id)arg1;	// IMP=0x00100000000117b0
- (void)markAllKeyValuesAsNeedingToBeUploaded;	// IMP=0x00100000000114f7
- (id)newRecordNameForKey:(id)arg1;	// IMP=0x0010000000011403
- (_Bool)hasPendingChangesToUpload;	// IMP=0x00100000000113bf
@property(nonatomic, getter=isAutomaticSyncingEnabled) _Bool automaticSyncingEnabled;
- (id)recordIDForKey:(id)arg1 inStoreWithIdentifier:(id)arg2;	// IMP=0x001000000001126b
- (void)deleteDataFromCloudWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010c12
- (_Bool)shouldRetryAfterModifyError:(id)arg1;	// IMP=0x0010000000010a44
- (void)fetchChangesFromCloudForStoreIdentifiers:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010350
- (void)fetchChangesFromCloudForAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010337
- (void)savePendingChangesToCloudForStoreIdentifiers:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000fbb1
- (void)savePendingChangesToCloudForAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fb98
- (void)synchronizeAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f91b
- (void)synchronizeStoresWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f276
- (void)synchronizeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f185
- (_Bool)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000f16a
- (_Bool)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000000eb1d
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000eafa
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 excludeFromChangeTracking:(_Bool)arg4 enforceQuota:(_Bool)arg5 error:(id *)arg6;	// IMP=0x001000000000df01
- (id)objectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000d9ed
- (_Bool)shouldSyncStoreWithIdentifier:(id)arg1;	// IMP=0x001000000000d909
@property(readonly, nonatomic) _Bool useSyncAnchor;
- (_Bool)useUUIDRecordNames;	// IMP=0x001000000000d8cf
- (_Bool)validateKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000d785
- (id)engineWithError:(id *)arg1;	// IMP=0x001000000000d711
@property(readonly, nonatomic) CKSyncEngine *engine; // @synthesize engine=_engine;
- (_Bool)initializeSyncEngineWithError:(id *)arg1;	// IMP=0x001000000000d493
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000000d30b
- (id)initWithContainer:(id)arg1 coreDataStore:(id)arg2 storeType:(long long)arg3;	// IMP=0x001000000000cf98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
