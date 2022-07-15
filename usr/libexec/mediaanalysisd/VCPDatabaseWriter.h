//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface VCPDatabaseWriter : NSObject
{
    NSString *_filepath;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;	// 16 = 0x10
    struct sqlite3 *_database;	// 24 = 0x18
    _Bool _transaction;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
}

+ (id)initializationCommand:(int)arg1;	// IMP=0x002000000001e972
+ (id)databaseForPhotoLibrary:(id)arg1;	// IMP=0x001000000001e74b
+ (id)retryEligibilityPredicate;	// IMP=0x0010000000028de6
+ (id)databaseWithFilepath:(id)arg1;	// IMP=0x001000000002dc2e
- (void).cxx_destruct;	// IMP=0x0010000000021497
- (_Bool)exists;	// IMP=0x00100000000213a1
- (id)creationDate;	// IMP=0x00100000000212e8
- (unsigned long long)sizeBytes;	// IMP=0x0010000000021245
- (void)flush;	// IMP=0x00100000000211e4
- (int)commit;	// IMP=0x001000000002116c
- (int)executeDatabaseBlock:(CDUnknownBlockType)arg1 fallbackBlock:(CDUnknownBlockType)arg2 write:(_Bool)arg3;	// IMP=0x001000000002076c
- (_Bool)shouldPropagateError:(int *)arg1 finalAttempt:(_Bool)arg2;	// IMP=0x0010000000020438
- (int)_removeKey:(id)arg1;	// IMP=0x0010000000020341
- (int)_setValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x00100000000201c1
- (int)_queryValue:(long long *)arg1 forKey:(id)arg2;	// IMP=0x0010000000020034
- (int)_checkKeyValueStoreForAnalysisVersions;	// IMP=0x001000000001fb65
- (int)_checkStoreWithCurrentVersion:(int)arg1 andTimestamp:(long long)arg2 forTaskID:(unsigned long long)arg3;	// IMP=0x001000000001f75a
- (int)openDatabase;	// IMP=0x001000000001ea70
- (int)getUserVersion:(int *)arg1;	// IMP=0x001000000001e907
- (void)closeDatabase;	// IMP=0x001000000001e8d0
- (int)commitTransaction;	// IMP=0x001000000001e842
- (int)beginTransaction;	// IMP=0x001000000001e7b0
- (void)dealloc;	// IMP=0x001000000001e6cc
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x001000000001e5ea
- (id)initWithFilepath:(id)arg1;	// IMP=0x001000000001e530
- (int)removeChangeTokenForTaskID:(unsigned long long)arg1;	// IMP=0x0010000000021de6
- (int)queryChangeToken:(id *)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x0010000000021a80
- (int)updateChangeToken:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x0010000000021816
- (int)setChangeToken:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00100000000214ca
- (int)containsAsset:(id)arg1 result:(_Bool *)arg2;	// IMP=0x0010000000022a5f
- (int)updateDateModifiedForAsset:(id)arg1;	// IMP=0x001000000002275e
- (int)updateLocalIdentifer:(id)arg1 to:(id)arg2;	// IMP=0x0010000000022461
- (int)updateFingerprint:(id)arg1 forAsset:(id)arg2;	// IMP=0x0010000000022154
- (int)setDeletePendingFlag:(_Bool)arg1 localIdentifier:(id)arg2;	// IMP=0x0010000000021ec1
- (int)deleteAnalysisForAsset:(id)arg1;	// IMP=0x0010000000026723
- (int)analysisForAsset:(id)arg1 analysis:(id *)arg2;	// IMP=0x0010000000026550
- (int)_queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;	// IMP=0x0010000000026105
- (int)_queryPropertiesForAsset:(id)arg1 assetId:(long long *)arg2 analysis:(id *)arg3;	// IMP=0x0010000000025a1e
- (int)bumpAnalysisVersionForAsset:(id)arg1;	// IMP=0x00100000000257cc
- (int)storeAnalysisForAsset:(id)arg1 analysis:(id)arg2;	// IMP=0x0010000000025225
- (int)updateResultsForAsset:(id)arg1 results:(id)arg2;	// IMP=0x0010000000024cc7
- (int)_updateAnalysis:(id)arg1 withAnalysis:(id)arg2 forAsset:(id)arg3 withAssetId:(long long)arg4;	// IMP=0x0010000000024070
- (int)_updateProperties:(id)arg1 forAssetId:(long long)arg2;	// IMP=0x0010000000023dcd
- (int)_deleteResult:(id)arg1 forAssetId:(long long)arg2;	// IMP=0x0010000000023c73
- (int)_storeAnalysis:(id)arg1 forLocalIdentifier:(id)arg2;	// IMP=0x00100000000238e7
- (int)_storeResult:(id)arg1 withKey:(id)arg2 forAssetId:(long long)arg3;	// IMP=0x001000000002359e
- (int)_storeProperties:(id)arg1 forLocalIdentifier:(id)arg2 assetId:(long long *)arg3;	// IMP=0x00100000000230e2
- (int)_deleteAsset:(id)arg1;	// IMP=0x0010000000022fe7
- (long long)compareExistingAnalysis:(id)arg1 toNewAnalysis:(id)arg2 forAsset:(id)arg3;	// IMP=0x0010000000022c5b
- (int)getBlacklistedAssetsWithCount:(int)arg1 localIdentifiers:(id *)arg2;	// IMP=0x001000000002764c
- (int)getBlacklistSizeForThreshold:(int)arg1 size:(unsigned long long *)arg2;	// IMP=0x001000000002754c
- (int)removeLocalIdentifierFromBlacklist:(id)arg1;	// IMP=0x00100000000273b4
- (int)decrementBlacklistCountForLocalIdentifier:(id)arg1;	// IMP=0x0010000000027094
- (int)incrementBlacklistCountForMemory:(id)arg1;	// IMP=0x0010000000027081
- (int)addAssetToBlacklist:(id)arg1;	// IMP=0x0010000000026dc9
- (int)getBlacklistCountForLocalIdentifier:(id)arg1;	// IMP=0x0010000000026c93
- (int)_getBlacklistCountForLocalIdentifier:(id)arg1 count:(int *)arg2;	// IMP=0x0010000000026b5f
- (int)ageOutBlacklistBefore:(id)arg1 count:(int *)arg2;	// IMP=0x001000000002699f
- (int)_getBlacklistExpiredCount:(id)arg1 count:(int *)arg2;	// IMP=0x001000000002689e
- (int)hardFailAllRunningProcessingStatusForTaskID:(unsigned long long)arg1;	// IMP=0x001000000002ac1a
- (int)updateUnknownProcessingStatusWithProcessingStatus:(unsigned long long)arg1 forLocalIdentifier:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x001000000002aa03
- (int)updateProcessingStatus:(unsigned long long)arg1 forLocalIdentifier:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x001000000002a80b
- (int)removeAllProcessingStatusForTaskID:(unsigned long long)arg1;	// IMP=0x001000000002a730
- (int)removeProcessingStatusForLocalIdentifier:(id)arg1 andTaskID:(unsigned long long)arg2;	// IMP=0x001000000002a572
- (int)decrementAttemptsForLocaldentifier:(id)arg1 andTaskID:(unsigned long long)arg2;	// IMP=0x001000000002a55a
- (int)decrementAttemptsForLocaldentifier:(id)arg1 withPreviousProcessingStatus:(unsigned long long)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x001000000002a314
- (int)incrementAttemptsForLocaldentifier:(id)arg1 andTaskID:(unsigned long long)arg2;	// IMP=0x001000000002a000
- (int)fetchLocalIdentifiers:(id *)arg1 withTaskID:(unsigned long long)arg2 andProcessingStatus:(unsigned long long)arg3;	// IMP=0x0010000000029d9b
- (int)fetchLocalIdentifiers:(id *)arg1 withProcessingStatus:(unsigned long long)arg2 andTaskID:(unsigned long long)arg3 andAttempts:(int)arg4 andFetchLimit:(unsigned long long)arg5;	// IMP=0x0010000000029af8
- (int)fetchLocalIdentifiersEligibleForRetry:(id *)arg1 withTaskID:(unsigned long long)arg2 excludingStatuses:(id)arg3 andFetchLimit:(unsigned long long)arg4;	// IMP=0x00100000000294f8
- (int)fetchLocalIdentifiersEligibleForRetry:(id *)arg1 withTaskID:(unsigned long long)arg2 includingStatuses:(id)arg3 andFetchLimit:(unsigned long long)arg4;	// IMP=0x0010000000028ef8
- (int)fetchLocalIdentifiersEligibleForRetry:(id *)arg1 withTaskID:(unsigned long long)arg2 andFetchLimit:(unsigned long long)arg3;	// IMP=0x0010000000028a1d
- (int)fetchEligibleToRetryLocalIdentifiers:(id *)arg1 withProcessingStatus:(unsigned long long)arg2 andTaskID:(unsigned long long)arg3 andFetchLimit:(unsigned long long)arg4;	// IMP=0x0010000000028688
- (unsigned long long)queryEligibleToRetryAssetCountWithProcessingStatus:(unsigned long long)arg1 andTaskID:(unsigned long long)arg2;	// IMP=0x00100000000283e8
- (unsigned long long)queryEligibleToRetryAssetCountWithTaskID:(unsigned long long)arg1;	// IMP=0x00100000000282f2
- (int)queryProcessingStatus:(unsigned long long *)arg1 andAttempts:(int *)arg2 andRevisitDate:(id *)arg3 forLocalIdentifier:(id)arg4 andTaskID:(unsigned long long)arg5;	// IMP=0x0010000000027fb4
- (int)queryAttemptsForLocalIdentifier:(id)arg1 andTaskID:(unsigned long long)arg2;	// IMP=0x0010000000027d6a
- (int)queryAssetCountForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2 andAttempts:(int)arg3;	// IMP=0x0010000000027be4
- (int)queryAssetCountForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2;	// IMP=0x0010000000027a7a
- (int)queryAssetCountForTaskID:(unsigned long long)arg1;	// IMP=0x001000000002792c
- (int)purgeExcessiveSchedulingRecordsForActivityID:(unsigned long long)arg1;	// IMP=0x001000000002ba29
- (int)querySchedulingHistoryRecords:(id *)arg1 forActivityID:(unsigned long long)arg2 sinceDate:(id)arg3;	// IMP=0x001000000002b5b1
- (int)updateSchedulingHistoryForActivityID:(unsigned long long)arg1 andStartTime:(id)arg2 withDuration:(double)arg3 andExitStatus:(int)arg4;	// IMP=0x001000000002b2a9
- (int)storeSchedulingHistoryForActivityID:(unsigned long long)arg1 andStartTime:(id)arg2;	// IMP=0x001000000002b0dd
- (int)_storeSchedulingHistoryForActivityID:(unsigned long long)arg1 andStartTime:(id)arg2;	// IMP=0x001000000002aed3
- (int)_removeSchedulingHistoryForStartTimeBefore:(id)arg1;	// IMP=0x001000000002ad57
- (int)cacheCurrentFaceProgress;	// IMP=0x001000000002d7f4
- (unsigned long long)getAssetCountMatchingStatsFlags:(unsigned long long)arg1 andAnalysisTypes:(unsigned long long)arg2;	// IMP=0x001000000002d663
- (unsigned long long)getAssetCountMatchingAllFlags:(unsigned long long)arg1 andAnyFlags:(unsigned long long)arg2;	// IMP=0x001000000002d4ee
- (unsigned long long)getAssetCountMatchingAllFlags:(unsigned long long)arg1;	// IMP=0x001000000002d395
- (int)storeStatsFlags:(unsigned long long)arg1 forLocalIdentifier:(id)arg2;	// IMP=0x001000000002d1ce
- (int)removeKey:(id)arg1;	// IMP=0x001000000002d0e5
- (int)setValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x001000000002cff1
- (long long)valueForKey:(id)arg1;	// IMP=0x001000000002ceb8
- (_Bool)keyExistsInKeyValueStore:(id)arg1;	// IMP=0x001000000002cc0b
- (int)loadAllKeyValuePairs:(id)arg1;	// IMP=0x001000000002c91b
- (int)queryAnalysisResultWithType:(unsigned long long)arg1 forAsset:(id)arg2 result:(id *)arg3;	// IMP=0x001000000002c672
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2;	// IMP=0x001000000002c094
- (int)parseHeader:(struct sqlite3_stmt *)arg1 startColumn:(int)arg2 analysis:(id)arg3;	// IMP=0x001000000002bbdd
- (unsigned long long)analysisRecordsModifiedSinceDate:(id)arg1;	// IMP=0x001000000002deb1
- (int)flushWAL;	// IMP=0x001000000002ddb1
- (int)restoreAnalysis:(id)arg1 forLocalIdentifier:(id)arg2;	// IMP=0x001000000002dc93

@end
