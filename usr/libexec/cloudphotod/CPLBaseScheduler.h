//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLSyncSession, MISSING_TYPE, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLBaseScheduler : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sequenceNumberQueue;	// 24 = 0x18
    unsigned long long _sequenceNumber;	// 32 = 0x20
    CPLSyncSession *_currentSession;	// 40 = 0x28
    CPLSyncSession *_scheduledSession;	// 48 = 0x30
    _Bool _lookingForPersistedSyncSession;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000739f7
- (id)componentName;	// IMP=0x00100000000739ea
- (void)unscheduleSyncSession:(id)arg1;	// IMP=0x001000000007385a
- (id)scheduleNextSyncSessionAtDate:(id)arg1;	// IMP=0x0010000000073406
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073247
- (void)unschedulePersistedSyncSession;	// IMP=0x001000000007309f
- (void)schedulePersistedSyncSessionIfAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000072b48
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000072904
- (void)noteSyncSession:(id)arg1 failedWithError:(id)arg2;	// IMP=0x001000000007251c
- (MISSING_TYPE *)noteSyncSessionSucceeded: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000723cc
- (void)noteServerHasChanges;	// IMP=0x00100000000723c6
- (void)noteClientNeedsToPull;	// IMP=0x00100000000723c0
- (void)noteScopeNeedsToPushToTransport;	// IMP=0x00100000000723ba
- (_Bool)shouldCoalesceServerChangesNotification;	// IMP=0x00100000000723b2
- (_Bool)shouldStartSyncSessionFromState:(unsigned long long)arg1;	// IMP=0x00100000000723aa
- (unsigned long long)_nextSequenceNumber;	// IMP=0x00100000000722ee
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000721a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

