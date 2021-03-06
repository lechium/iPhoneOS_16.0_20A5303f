//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKContainer, CKDatabase, NSOperationQueue;

@interface CloudTabRemoteStore
{
    CKDatabase *_threadUnsafeDatabase;	// 24 = 0x18
    NSOperationQueue *_cloudTabsOperationQueue;	// 32 = 0x20
    _Bool _usesManateeContainer;	// 40 = 0x28
    CKContainer *_container;	// 48 = 0x30
}

+ (id)cloudTabsRecordZoneID;	// IMP=0x0020000000071524
+ (id)recordZoneSubscriptionID;	// IMP=0x0010000000071517
- (void).cxx_destruct;	// IMP=0x00200000000752ab
@property(readonly, nonatomic) _Bool usesManateeContainer; // @synthesize usesManateeContainer=_usesManateeContainer;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)_zoneLogName;	// IMP=0x001000000007527d
- (id)_zoneID;	// IMP=0x0010000000075273
- (id)_operationQueue;	// IMP=0x001000000007525e
- (id)_database;	// IMP=0x0010000000075249
- (void)_recursivelyCancelDependentOperations:(id)arg1 operationQueue:(id)arg2;	// IMP=0x0010000000075005
- (id)_operationToDeleteCloudTabRecordIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000074c77
- (void)_saveCloudTabsRecordBatch:(id)arg1 previouslySavedRecords:(id)arg2 previouslyDeletedRecordIDs:(id)arg3 retryManager:(id)arg4 inOperationGroup:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000739ee
- (void)_saveCloudTabsRecordBatch:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000738ed
- (void)_createCloudTabsRecordZoneInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007321f
- (void)deleteCloudTabsZoneInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072e12
- (void)deleteCloudTabRecords:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000727b2
- (void)saveCloudTabsRecordBatch:(id)arg1 createCloudTabsZoneIfMissing:(_Bool)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000721a2
- (void)fetchCloudTabsRecordChangesSinceServerChangeToken:(id)arg1 inOperationGroup:(id)arg2 recordChangedBlock:(CDUnknownBlockType)arg3 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000071f82
- (void)saveCloudTabsZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071b6d
- (void)fetchCloudTabsZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071770
- (void)createCloudTabsRecordZoneInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000716f1
- (id)initWithContainer:(id)arg1;	// IMP=0x001000000007152e

@end

