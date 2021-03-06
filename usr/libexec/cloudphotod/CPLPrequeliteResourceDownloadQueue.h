//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue
{
    CPLPrequeliteVariable *_nextTaskIdentifier;	// 8 = 0x8
    CPLPrequeliteVariable *_nextPosition;	// 16 = 0x10
    _Bool _recreatedDownloadQueueIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000051201
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000000510f6
- (id)statusPerScopeIndex;	// IMP=0x0010000000051072
- (id)status;	// IMP=0x0010000000050ca1
- (id)recordsDesignation;	// IMP=0x0010000000050c94
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;	// IMP=0x0010000000050be4
- (unsigned long long)countOfQueuedDownloadTasks;	// IMP=0x0010000000050bcd
- (unsigned long long)_countOfRecordsWithStatus:(int)arg1;	// IMP=0x0010000000050b1c
- (id)enumeratorForDownloadedResources;	// IMP=0x001000000005094c
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000507c2
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;	// IMP=0x00100000000506db
- (id);	// IMP=0x001000000005009a
- (_Bool)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000004feff
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000004fd58
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(_Bool)arg3 didDiscard:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000004f880
- (_Bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 intent:(unsigned long long)arg2 downloading:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004f220
- (id)_enqueuedResourceForResource:(id)arg1 verifyScopeIndex:(_Bool)arg2;	// IMP=0x001000000004f074
- (_Bool)_deleteEnqueuedResource:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004eede
- (_Bool)_getNextPosition:(unsigned long long *)arg1 andBumpWithError:(id *)arg2;	// IMP=0x001000000004ee27
- (unsigned long long)newTaskIdentifier;	// IMP=0x001000000004ecce
- (_Bool)openWithError:(id *)arg1;	// IMP=0x001000000004ebbc
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000004e543
- (_Bool)initializeStorage;	// IMP=0x001000000004e424
- (_Bool)_createResourceTypeAndStatusIndex;	// IMP=0x001000000004e3c7
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x001000000004e2c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

