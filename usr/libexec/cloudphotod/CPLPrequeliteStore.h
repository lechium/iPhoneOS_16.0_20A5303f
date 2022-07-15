//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLChangeSessionUpdate, CPLPrequeliteClientCacheMigrator, CPLPrequeliteTable, CPLPrequeliteVariable, CPLSimpleUpgradeHistory, NSDate, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURL, PQLConnection;
@protocol OS_dispatch_queue;

@interface CPLPrequeliteStore : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_writeQueue;	// 16 = 0x10
    PQLConnection *_db;	// 24 = 0x18
    NSURL *_dbURL;	// 32 = 0x20
    _Bool _configuringDB;	// 40 = 0x28
    NSMutableSet *_modifiedVariables;	// 48 = 0x30
    id _globalVariableCacheIdentifier;	// 56 = 0x38
    CPLPrequeliteTable *_globals;	// 64 = 0x40
    CPLPrequeliteVariable *_libraryVersionVar;	// 72 = 0x48
    CPLPrequeliteVariable *_userIdentifierVar;	// 80 = 0x50
    CPLPrequeliteVariable *_lastQuarantineCountReportDateVar;	// 88 = 0x58
    CPLPrequeliteVariable *_clientCacheIdentifierVar;	// 96 = 0x60
    CPLPrequeliteVariable *_clientCacheIdentifierAsKnownByClient;	// 104 = 0x68
    CPLPrequeliteVariable *_libraryCreationDateVar;	// 112 = 0x70
    CPLPrequeliteVariable *_changeSessionUpdateVar;	// 120 = 0x78
    _Bool _hasCachedChangeSessionUpdate;	// 128 = 0x80
    CPLChangeSessionUpdate *_cachedChangeSessionUpdate;	// 136 = 0x88
    CPLPrequeliteVariable *_libraryOptionsVar;	// 144 = 0x90
    CPLPrequeliteVariable *_shouldUpdateDisabledFeaturesVar;	// 152 = 0x98
    CPLPrequeliteVariable *_disabledFeaturesDataVar;	// 160 = 0xa0
    CPLSimpleUpgradeHistory *_history;	// 168 = 0xa8
    CPLPrequeliteVariable *_derivativesFilterVar;	// 176 = 0xb0
    CPLPrequeliteVariable *_deactivatedVar;	// 184 = 0xb8
    CPLPrequeliteVariable *_universeNameVar;	// 192 = 0xc0
    Class _userIdentifierClass;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_isClientInSyncWithClientCacheQueue;	// 208 = 0xd0
    _Bool _isClientInSyncWithClientCache;	// 216 = 0xd8
    unsigned long long _resetOption;	// 224 = 0xe0
    NSString *_resetReason;	// 232 = 0xe8
    NSString *_wipeReason;	// 240 = 0xf0
    _Bool _failInsteadOfWipe;	// 248 = 0xf8
    _Bool _needsToReset;	// 249 = 0xf9
    _Bool _reentrencyGuard;	// 250 = 0xfa
    _Bool _didWipeLibrary;	// 251 = 0xfb
    int _upgradeEventJournal;	// 252 = 0xfc
    _Bool _mustFix22666940;	// 256 = 0x100
    _Bool _mustMigratePushQueue;	// 257 = 0x101
    CPLPrequeliteClientCacheMigrator *_clientCacheMigrator;	// 264 = 0x108
    _Bool _hasScheduledClientCacheDrop;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_vacuumQueue;	// 280 = 0x118
    _Bool _executingVacuum;	// 288 = 0x120
    _Bool _shouldProfile;	// 289 = 0x121
    _Bool _showStatsForAllTransactions;	// 290 = 0x122
    double _lastLongTransactionDate;	// 296 = 0x128
    NSMutableDictionary *_transactionStatistics;	// 304 = 0x130
    NSDate *_libraryCreationDate;	// 312 = 0x138
}

+ (void)setShouldWarnUserBeforeWipeOnUpgrade:(_Bool)arg1;	// IMP=0x002000000003153e
+ (_Bool)shouldWarnUserBeforeWipeOnUpgrade;	// IMP=0x0010000000031532
+ (void)setShouldPreventWipeOnUpgrade:(_Bool)arg1;	// IMP=0x001000000003151f
+ (_Bool)shouldPreventWipeOnUpgrade;	// IMP=0x0010000000031498
- (void).cxx_destruct;	// IMP=0x002000000003d556
@property(readonly) NSDate *libraryCreationDate; // @synthesize libraryCreationDate=_libraryCreationDate;
- (id)redactedDescription;	// IMP=0x001000000003d433
@property(readonly, copy) NSString *description;
- (_Bool)deleteDynamicallyCreatedStorages:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003cf7d
- (_Bool)createStoragesDynamically:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003cc6c
- (void)markAsCorrupted;	// IMP=0x001000000003ca37
- (void)emergencyClose;	// IMP=0x001000000003c6b9
- (void)stopVacuum;	// IMP=0x001000000003c5d8
- (void)startVacuum;	// IMP=0x001000000003c3c0
- (void)_vacuum:(long long)arg1 withInitialDatabaseSize:(long long)arg2;	// IMP=0x001000000003bdb4
- (long long)_sizeInBytes;	// IMP=0x001000000003bce5
- (id)transientPullRepository;	// IMP=0x001000000003bc67
- (id)cloudCache;	// IMP=0x001000000003bbe9
- (id)clientCache;	// IMP=0x001000000003bbb9
- (_Bool)hasTable:(id)arg1;	// IMP=0x001000000003bb66
- (_Bool)table:(id)arg1 hasColumnWithName:(id)arg2;	// IMP=0x001000000003ba5b
- (void)table:(id)arg1 enumerateCountGroupedByProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b93c
- (void)table:(id)arg1 enumerateCountGroupedByUnsignedIntegerProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b81a
- (unsigned long long)table:(id)arg1 countOfRecordsMatchingQuery:(id)arg2;	// IMP=0x001000000003b774
- (unsigned long long)tableCountOfRecords:(id)arg1;	// IMP=0x001000000003b6e5
- (_Bool)table:(id)arg1 hasRecordsMatchingQuery:(id)arg2;	// IMP=0x001000000003b64c
- (_Bool)tableHasRecords:(id)arg1;	// IMP=0x001000000003b5d3
- (void)recordUpgradeEvent:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x001000000003b4f7
- (void)recordUpgradeEvent:(id)arg1;	// IMP=0x001000000003b453
- (id)status;	// IMP=0x001000000003b383
- (void)transactionDidFinish;	// IMP=0x001000000003b37d
- (void)writeTransactionDidFail;	// IMP=0x001000000003b202
- (void)writeTransactionDidSucceed;	// IMP=0x001000000003b1e5
- (void)wipeStoreAtNextOpeningWithReason:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003af82
- (void)_deleteWipeReason;	// IMP=0x001000000003add1
- (id)wipeReason;	// IMP=0x001000000003ad1a
- (id)_wipeStoreMarkerURL;	// IMP=0x001000000003ac72
- (_Bool)storeDerivativesFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003abd0
- (id)derivativesFilter;	// IMP=0x001000000003ab53
- (id)disabledFeatures;	// IMP=0x001000000003aa9a
- (_Bool)storeDisabledFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a9b7
- (_Bool)setShouldUpdateDisabledFeaturesWithError:(id *)arg1;	// IMP=0x001000000003a990
@property(readonly, nonatomic) _Bool shouldUpdateDisabledFeatures;
- (_Bool)storeChangeSessionUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a7c4
@property(readonly, nonatomic) CPLChangeSessionUpdate *storedChangeSessionUpdate;
@property(readonly, nonatomic) _Bool hasStoredChangeSessionUpdate;
- (_Bool)isClientInSyncWithClientCache;	// IMP=0x001000000003a520
- (_Bool)storeClientIsNotInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x001000000003a391
- (_Bool)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x001000000003a1d0
- (id)createNewClientCacheIdentifier;	// IMP=0x001000000003a179
- (_Bool)storeClientCacheIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a159
- (id)clientCacheIdentifier;	// IMP=0x001000000003a13c
- (_Bool)storeLastQuarantineCountReportDate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a11c
- (id)lastQuarantineCountReportDate;	// IMP=0x001000000003a0ae
- (_Bool)storeUserIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000039f2d
- (id)userIdentifier;	// IMP=0x0010000000039cc5
- (Class)_userIdentifierClass;	// IMP=0x0010000000039bea
- (_Bool)resetValueForGlobalVariable:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000039b6a
- (id)valueForGlobalVariable:(id)arg1;	// IMP=0x0010000000039a3b
- (_Bool)setValue:(id)arg1 forGlobalVariable:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000039935
- (_Bool)addGlobalVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003958c
- (void)_cacheValue:(id)arg1 forVariable:(id)arg2;	// IMP=0x00100000000394fe
- (id)pqlConnection;	// IMP=0x00100000000394e9
- (id)createNewLibraryVersion;	// IMP=0x0010000000039492
- (_Bool)storeLibraryVersion:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000039472
- (id)libraryVersion;	// IMP=0x0010000000039455
- (_Bool)updateLibraryOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000391c4
- (unsigned long long)libraryOptions;	// IMP=0x0010000000039175
- (void)performBarrier;	// IMP=0x0010000000039153
- (void)performBarrierTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039046
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0010000000038ffe
- (void)blockWriteTransactionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038e9d
- (void)performWriteTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038925
- (void)performReadTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003856c
- (_Bool)executePostOpenWithError:(id *)arg1;	// IMP=0x00100000000384a6
- (_Bool)openWithError:(id *)arg1;	// IMP=0x001000000003825d
- (_Bool)_openWithError:(id *)arg1;	// IMP=0x0010000000036d5c
- (void)_markLibraryAsCorruptedWithInfo:(id)arg1;	// IMP=0x0010000000036c96
- (_Bool)_setupPragmasAndFunctions;	// IMP=0x0010000000036c79
- (_Bool)markDatabaseAsDeactivatedWithError:(id *)arg1;	// IMP=0x0010000000036c52
- (void)_deleteCorruptionInfo;	// IMP=0x0010000000036aa1
@property(readonly, nonatomic) id corruptionInfo;
- (id)_corruptionMarkerURL;	// IMP=0x00100000000368fc
- (_Bool)_setupDBIfNeeded;	// IMP=0x001000000003608a
- (_Bool)_upgradeDB:(long long)arg1;	// IMP=0x00100000000352d2
- (_Bool)_wipeIfDeactivated:(long long)arg1 didWipeDatabase:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00100000000351bc
- (void)_wipeBeforeOpeningIfNecessary;	// IMP=0x0010000000034fe8
- (id)_wipeReasonFromCorruptionInfo:(id)arg1;	// IMP=0x0010000000034f51
- (_Bool)_closeWipeAndReOpenWithReason:(id)arg1 warnUserIfPossible:(_Bool)arg2 createRadar:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000034ab2
- (void)_wipeWithReason:(id)arg1;	// IMP=0x00100000000348ce
- (_Bool)_fixStoreAfterAnyVersionChange;	// IMP=0x0010000000034723
- (_Bool)_postUpgradeToVersion:(long long)arg1;	// IMP=0x00100000000344f8
- (_Bool)_upgradeToVersion:(long long)arg1;	// IMP=0x001000000003418b
- (void)_scheduleClientCacheDropIfNecessary;	// IMP=0x00100000000340b3
- (void)_scheduleClientCacheDrop;	// IMP=0x0010000000033f73
- (_Bool)_fix22666940;	// IMP=0x001000000003376f
- (_Bool)_performWithFlags:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x00000000000333ee
- (void)_unsetupProfilingHooks;	// IMP=0x0010000000033372
- (void)_setupProfilingHooks;	// IMP=0x0010000000032c5a
- (id)_transactionStatsDescription;	// IMP=0x0010000000032a1b
- (_Bool)_initializeDB;	// IMP=0x0010000000031f70
- (void)triggerResetAfterUpgrade:(unsigned long long)arg1 withReason:(id)arg2;	// IMP=0x0010000000031dcd
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x001000000003154a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
