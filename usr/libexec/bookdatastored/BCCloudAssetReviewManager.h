//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BCCloudKitController, NSString;

@interface BCCloudAssetReviewManager : NSObject
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudKitController *_cloudKitController;	// 16 = 0x10
    BCCloudDataSource *_assetReviewDataSource;	// 24 = 0x18
    BCCloudDataSyncManager *_syncManager;	// 32 = 0x20
    BCCloudDataManager *_dataManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005fcd1
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *assetReviewDataSource; // @synthesize assetReviewDataSource=_assetReviewDataSource;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)getAssetReviewChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005fbb9
- (void)fetchAssetReviewsForUserID:(id)arg1 includingDeleted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005fb02
- (void)assetReviewsForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005fa4b
- (void)assetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f8aa
- (void)deleteAssetReviewForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f7f3
- (void)deleteAssetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f73c
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f64b
- (void)removeAssetReviewsForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f546
- (void)setAssetReviews:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f455
- (void)setAssetReview:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f36b
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005f2f9
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005f287
- (id)entityName;	// IMP=0x001000000005f0e7
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ef81
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ee1b
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005eb9d
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e934
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x001000000005e856
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e7c3
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x001000000005e623

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

