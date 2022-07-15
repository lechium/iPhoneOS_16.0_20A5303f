//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GEOPDPlaceCacheManifestInfoProviding, GEOPDPlaceCacheSchedulingDelegate, OS_dispatch_source;

@interface GEOPDPlaceCache : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    id <GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;	// 16 = 0x10
    id <GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_cleanupTimer;	// 32 = 0x20
    NSMutableDictionary *_accessTimesDict;	// 40 = 0x28
    NSMutableOrderedSet *_recentlySeenPlaceHashes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000014b3b
@property(readonly, nonatomic) NSArray *serviceVersions;
- (void)cancelCleanupBlockSchedule;	// IMP=0x00100000000149e1
- (void)runCleanupBlock:(CDUnknownBlockType)arg1 inSecondsFromNow:(long long)arg2;	// IMP=0x00100000000147f6
- (long long)currentTime;	// IMP=0x00100000000147d7
- (id)internalSerialQueue;	// IMP=0x00100000000147c1
- (void)iterateAllHandleKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001471d
- (void)iterateAllPhoneKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014679
- (void)iterateAllBasemapIdKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000145d5
- (void)iterateAllMUIDKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014531
- (void)iterateAllKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014517
- (void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014238
- (void)iterateHandlePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014194
- (void)iteratePhonePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000140f0
- (void)iterateBasemapIdPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001404c
- (void)iterateMUIDPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013fa8
- (void)iterateAllPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013f8e
- (void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013c39
- (void)close;	// IMP=0x0010000000013bcc
- (void)_evictPlaceWithHash:(id)arg1;	// IMP=0x0010000000013951
- (void)periodicCleanupAndAccessTimeUpdate;	// IMP=0x001000000001332e
- (void)scheduleCleanup;	// IMP=0x0010000000013224
- (void)enqueueAccessTimeUpdateForCacheKey:(id)arg1 accessTime:(long long)arg2;	// IMP=0x001000000001309f
- (void)evictAllEntries;	// IMP=0x0010000000012ef3
- (void)deletePhoneNumberMapping;	// IMP=0x0010000000012d66
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;	// IMP=0x0010000000012b85
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x0010000000012a35
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x00100000000127b0
- (unsigned long long)_calculateFreeableSpace;	// IMP=0x0010000000012689
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x0010000000012548
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001237f
- (id)lookupIdentifierByPhoneNumber:(id)arg1;	// IMP=0x0010000000011ded
- (void)lookupPlaceByHandle:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000119f4
- (void)lookupPlaceByIdentifier:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001138b
- (void)lookupPlaceByPhoneNumber:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010f81
- (void)lookupPlaceByRequest:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000109e9
- (void)_lookupPlaceByRequestKey:(id)arg1 allowExpiredPlace:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000103c1
- (void)storePlace:(id)arg1 forRequest:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000fd83
- (void)storePlace:(id)arg1 forRequest:(id)arg2;	// IMP=0x001000000000fcb2
- (void)trackPlace:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f7ed
- (void)trackPlace:(id)arg1;	// IMP=0x001000000000f737
- (id)_cacheKeyForHandle:(id)arg1;	// IMP=0x001000000000f67b
- (id)_cacheKeysForPlace:(id)arg1 request:(id)arg2;	// IMP=0x001000000000f2da
- (void)_storePlace:(id)arg1 withHash:(id)arg2 forRequestKeys:(id)arg3;	// IMP=0x001000000000e654
- (_Bool)_meetsManifestVersionPolicyForPlace:(id)arg1;	// IMP=0x001000000000e38b
- (_Bool)_deleteAndResetDB:(id)arg1;	// IMP=0x001000000000e160
- (_Bool)_validateDBLocaleAndResetIfNecessary;	// IMP=0x001000000000dde4
- (void)dealloc;	// IMP=0x001000000000dd6f
- (id)initWithCacheFilePath:(id)arg1 schedulingDelegate:(id)arg2 manifestInfoProvider:(id)arg3;	// IMP=0x001000000000d920

@end
