//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKQueryCursor, CKRecordZoneID, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitCKQueryBackedImportWorkItem
{
    NSString *_recordType;	// 8 = 0x8
    NSDate *_maxModificationDate;	// 16 = 0x10
    CKQueryCursor *_queryCursor;	// 24 = 0x18
    CKRecordZoneID *_zoneIDToQuery;	// 32 = 0x20
}

- (_Bool)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005f404
- (_Bool)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005f1fb
- (_Bool)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000000005ec18
- (void)addUpdatedRecord:(id)arg1;	// IMP=0x000000000005eb3a
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e00e
- (id)description;	// IMP=0x000000000005df5f
- (void)dealloc;	// IMP=0x000000000005ded8
- (id)initForRecordType:(id)arg1 withOptions:(id)arg2 request:(id)arg3;	// IMP=0x000000000005de34

@end

