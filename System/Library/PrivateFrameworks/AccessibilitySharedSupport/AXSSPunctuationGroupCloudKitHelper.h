//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AXSSCloudKitHelper.h"

@class AXDispatchTimer;

__attribute__((visibility("hidden")))
@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper
{
    AXDispatchTimer *_changeCoalescer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001d7e3
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;	// IMP=0x000000000001d34c
- (void)punctuationGroupsChanged:(id)arg1;	// IMP=0x000000000001d123
- (void)beginWatchingForChanges;	// IMP=0x000000000001d02c
- (void)retrieveLocalChangesForCloud:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c3cb
- (void)clearRecordsForPurging:(id)arg1;	// IMP=0x000000000001c146
- (id)createCKRecordFromObject:(id)arg1;	// IMP=0x000000000001bf21
- (id)createCKRecordFromGroup:(id)arg1;	// IMP=0x000000000001bcfc
- (id)testRecordForSchemaCreation:(id)arg1;	// IMP=0x000000000001bc3a
- (id)apsEnvironment;	// IMP=0x000000000001bc26
- (void)dealloc;	// IMP=0x000000000001bbb1
- (Class)managedObjectClass;	// IMP=0x000000000001bba0
- (id)recordType;	// IMP=0x000000000001bb93

@end

