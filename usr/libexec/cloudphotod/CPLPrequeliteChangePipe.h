//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteChangePipe
{
    CPLPrequeliteVariable *_pullGenerationVar;	// 8 = 0x8
    CPLPrequeliteVariable *_pushGenerationVar;	// 16 = 0x10
    NSString *_countSqlCommand;	// 24 = 0x18
    NSString *_logDomain;	// 32 = 0x20
    unsigned long long _lastPullMarkerForCompact;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005af05
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000005adfa
- (id)statusPerScopeIndex;	// IMP=0x001000000005ac37
- (id)status;	// IMP=0x001000000005aae2
- (void)writeTransactionDidFail;	// IMP=0x001000000005aaa2
- (id)allChangeBatches;	// IMP=0x001000000005a701
- (_Bool)compactChangeBatchesWithError:(id *)arg1;	// IMP=0x001000000005a5ae
- (_Bool)deleteAllChangesWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005a36a
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;	// IMP=0x001000000005a204
- (_Bool)hasSomeChangeWithScopeFilter:(id)arg1;	// IMP=0x001000000005a020
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id)arg1;	// IMP=0x0010000000059ee3
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000059d95
- (_Bool)popNextBatchWithError:(id *)arg1;	// IMP=0x0010000000059bd7
- (id)nextBatch;	// IMP=0x0010000000059578
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;	// IMP=0x0010000000058e63
- (_Bool)appendChangeBatch:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000058898
- (_Bool)hasQueuedBatches;	// IMP=0x001000000005887f
- (unsigned long long)countOfQueuedBatches;	// IMP=0x00100000000586af
- (_Bool)_setPushMarker:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000058645
- (unsigned long long)_pushMarker;	// IMP=0x00100000000585f6
- (_Bool)_setPullMarker:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000005858c
- (unsigned long long)_pullMarker;	// IMP=0x001000000005853d
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000582b2
- (_Bool)initializeStorage;	// IMP=0x0010000000058164
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000058061

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
