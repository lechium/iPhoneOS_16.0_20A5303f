//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteStatusCenter
{
    CPLPrequeliteVariable *_generationVar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006c4ef
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000006c3e4
- (id)status;	// IMP=0x001000000006bf98
- (_Bool)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006be0e
- (_Bool)acknowledgeChangedStatus:(id)arg1 hasBeenDeleted:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000006bbf1
- (id)statusChangesMaximumCount:(unsigned long long)arg1;	// IMP=0x001000000006ba98
- (id)statusForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000006b8d4
- (_Bool)addStatus:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b6b5
- (_Bool)getNewGeneration:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x001000000006b5fe
@property(readonly, nonatomic) _Bool hasStatusChanges;
- (_Bool)openWithError:(id *)arg1;	// IMP=0x001000000006b55b
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000006b1ae
- (_Bool)initializeStorage;	// IMP=0x001000000006b0b3
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x001000000006b00e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

