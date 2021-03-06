//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSDate, NSString;
@protocol CPLCKRecordPropertyMapping, CPLCloudKitScopeProvider;

@interface CPLCloudKitMoveBackCopyHelper : NSObject
{
    Class _recordClass;	// 8 = 0x8
    id <CPLCKRecordPropertyMapping> _mapping;	// 16 = 0x10
    NSDate *_recordModificationDate;	// 24 = 0x18
    CKRecordID *_userRecordID;	// 32 = 0x20
    id <CPLCloudKitScopeProvider> _scopeProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000123941
@property(readonly, nonatomic) id <CPLCloudKitScopeProvider> scopeProvider; // @synthesize scopeProvider=_scopeProvider;
@property(readonly, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x0010000000123917
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x0010000000123901
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000001238eb
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000001238d5
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000001238bf
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012383c
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000123826
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x001000000012381e
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000123600
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000001235c2
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x001000000012344c
- (id)initWithUserRecordID:(id)arg1 scopeProvider:(id)arg2;	// IMP=0x0010000000123356

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

