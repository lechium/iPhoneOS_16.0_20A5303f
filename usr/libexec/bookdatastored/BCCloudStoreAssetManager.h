//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BCCloudKitController, NSString;

@interface BCCloudStoreAssetManager : NSObject
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudKitController *_cloudKitController;	// 16 = 0x10
    BCCloudDataSource *_storeAssetDataSource;	// 24 = 0x18
    BCCloudDataSyncManager *_syncManager;	// 32 = 0x20
    BCCloudDataManager *_dataManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000674b6
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *storeAssetDataSource; // @synthesize storeAssetDataSource=_storeAssetDataSource;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)getStoreItemChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006739e
- (void)fetchStoreItemsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067326
- (void)storeItemForStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067185
- (void)deleteStoreItemsWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000670ce
- (void)deleteStoreItemWithStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067017
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066f26
- (void)removeStoreItemWithSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066e21
- (void)addStoreItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066d30
- (void)addStoreItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066c46
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000066bd4
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000066b62
- (id)entityName;	// IMP=0x00100000000669c2
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006685c
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000666f6
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066478
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006620f
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x0010000000066131
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006609e
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x0010000000065efe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
