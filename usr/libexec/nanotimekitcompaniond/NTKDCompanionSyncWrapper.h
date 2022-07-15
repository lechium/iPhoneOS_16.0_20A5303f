//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYService;
@protocol NTKDSyncDelegate, OS_dispatch_queue;

@interface NTKDCompanionSyncWrapper : NSObject
{
    _Bool _resetSyncRequestedDuringSyncRestriction;	// 8 = 0x8
    _Bool _resumeWhenSyncRestrictionLifted;	// 9 = 0x9
    SYService *_syncService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_syncServiceQueue;	// 24 = 0x18
    _Bool _resetSyncRequested;	// 32 = 0x20
    unsigned long long _syncFailureCount;	// 40 = 0x28
    _Bool _syncBackoffOngoing;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_syncSerialQueue;	// 56 = 0x38
    _Bool _deltaSyncRequiredAfterBackoff;	// 64 = 0x40
    _Bool _resetSyncRequiredAfterBackoff;	// 65 = 0x41
    _Bool _isPrimary;	// 66 = 0x42
    id <NTKDSyncDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000032710
@property(nonatomic) __weak id <NTKDSyncDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;	// IMP=0x0010000000032604
- (id)dataFromChange:(id)arg1;	// IMP=0x00100000000325e3
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x0010000000032436
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x001000000003204c
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x0010000000031ff9
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031b50
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0010000000031931
- (void)service:(id)arg1 incomingData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000315ee
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;	// IMP=0x001000000003149f
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000031180
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x0010000000031101
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000030fc5
- (void)_reportProgressForMessage:(id)arg1 inSession:(id)arg2;	// IMP=0x0010000000030e1b
- (void)_resetBackoffPeriod;	// IMP=0x0010000000030dd0
- (long long)_getNextSyncBackoffPeriod;	// IMP=0x0010000000030cf1
- (void)_queue_requestSync:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030a43
- (void)_queue_deltaSync;	// IMP=0x001000000003096b
- (void)_queue_resetSync;	// IMP=0x0010000000030831
- (void)sendOutOfBandMessage:(id)arg1 ofType:(long long)arg2;	// IMP=0x001000000003051e
- (void)requestDeltaSync;	// IMP=0x00100000000304bd
- (void)requestResetSync;	// IMP=0x00100000000303b1
- (void)suspend;	// IMP=0x001000000003032e
- (void)resume;	// IMP=0x001000000003018b
- (void)dealloc;	// IMP=0x00100000000300d3
- (id)initAsPrimary:(_Bool)arg1;	// IMP=0x001000000002feea
- (id)init;	// IMP=0x001000000002fed6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
