//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSString, TabSnapshotCache;
@protocol TabSnapshotCacheStressTestRunnerDelegate;

__attribute__((visibility("hidden")))
@interface TabSnapshotCacheStressTestRunner : NSObject
{
    unsigned long long _maxIterations;	// 8 = 0x8
    id <TabSnapshotCacheStressTestRunnerDelegate> _delegate;	// 16 = 0x10
    TabSnapshotCache *_cache;	// 24 = 0x18
    NSMutableOrderedSet *_currentUUIDs;	// 32 = 0x20
    unsigned long long _iterations;	// 40 = 0x28
    unsigned long long _cachesUntilNextIteration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000130a34
@property(nonatomic) unsigned long long cachesUntilNextIteration; // @synthesize cachesUntilNextIteration=_cachesUntilNextIteration;
@property(nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(retain, nonatomic) NSMutableOrderedSet *currentUUIDs; // @synthesize currentUUIDs=_currentUUIDs;
@property(retain, nonatomic) TabSnapshotCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak id <TabSnapshotCacheStressTestRunnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxIterations; // @synthesize maxIterations=_maxIterations;
- (unsigned long long)capacityForTabSnapshotCache:(id)arg1;	// IMP=0x0000000000130990
- (_Bool)tabSnapshotCache:(id)arg1 shouldRequestSavedSnapshotWithIdentifier:(id)arg2;	// IMP=0x0000000000130988
- (void)tabSnapshotCacheDidFinishUpdating:(id)arg1;	// IMP=0x0000000000130976
- (_Bool)tabSnapshotCacheShouldDeferNextSnapshotRequest:(id)arg1;	// IMP=0x000000000013096e
- (id)snapshotsToPresistOnDiskForTabSnapshotCache:(id)arg1;	// IMP=0x0000000000130955
- (void)tabSnapshotCache:(id)arg1 requestSnapshotWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000130800
- (void)tabSnapshotCache:(id)arg1 didEvictSnapshotWithIdentifier:(id)arg2;	// IMP=0x00000000001307fa
- (void)tabSnapshotCache:(id)arg1 didCacheSnapshotWithIdentifier:(id)arg2;	// IMP=0x00000000001307d6
- (void)_runIteration;	// IMP=0x000000000013065a
- (id)_mutatedUUIDsFromUUIDs:(id)arg1;	// IMP=0x0000000000130512
- (void)start;	// IMP=0x0000000000130300
- (id)_mutableOrderedSetOfUUIDsWithCount:(unsigned long long)arg1;	// IMP=0x000000000013026b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

