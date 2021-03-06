//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, CPLRecordTargetMapping, NSString;
@protocol CPLCloudKitScopeProvider;

@interface CPLSimpleCKRecordBuilder : NSObject
{
    CKRecord *_ckRecord;	// 8 = 0x8
    id <CPLCloudKitScopeProvider> _scopeProvider;	// 16 = 0x10
    CKRecordID *_currentUserRecordID;	// 24 = 0x18
    CPLRecordTargetMapping *_targetMapping;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000ac6f8
@property(readonly, nonatomic) CPLRecordTargetMapping *targetMapping; // @synthesize targetMapping=_targetMapping;
@property(readonly, nonatomic) CKRecordID *currentUserRecordID; // @synthesize currentUserRecordID=_currentUserRecordID;
@property(readonly, nonatomic) id <CPLCloudKitScopeProvider> scopeProvider; // @synthesize scopeProvider=_scopeProvider;
@property(readonly, nonatomic) CKRecord *ckRecord; // @synthesize ckRecord=_ckRecord;
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000ac6ba
- (void)setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000ac6a4
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000ac68e
- (void)setCKReferenceWithScopedIdentifier:(id)arg1 forKey:(id)arg2 referenceAction:(unsigned long long)arg3;	// IMP=0x00100000000ac515
- (void)setCKAsset:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000ac503
- (id)recordIDForResourcesOfRecordWithScopedIdentifier:(id)arg1 databaseScope:(long long *)arg2 error:(id *)arg3;	// IMP=0x00100000000ac432
- (id)_recordIDFromScopedIdentifier:(id)arg1 databaseScope:(long long *)arg2 error:(id *)arg3;	// IMP=0x00100000000ac2cd
- (id)initWithBaseCKRecord:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 targetMapping:(id)arg4;	// IMP=0x00100000000ac1eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

