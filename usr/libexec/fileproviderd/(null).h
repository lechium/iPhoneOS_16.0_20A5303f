//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FSVolume, NSMutableArray, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface (null) : NSObject
{
    _Atomic int _resetCount;	// 8 = 0x8
    _Atomic int _suspendCount;	// 12 = 0xc
    struct fpfs_fsevent_stream *_stream;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_streamQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_processQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_fseventsProcessSource;	// 48 = 0x30
    NSMutableArray *_fseventsToProcess;	// 56 = 0x38
    unsigned long long _maxFSEventQueueSize;	// 64 = 0x40
    unsigned long long _fseventProcessBatchSize;	// 72 = 0x48
    _Bool _isCancelled;	// 80 = 0x50
    _Bool _drainEvents;	// 81 = 0x51
    _Bool _isActivated;	// 82 = 0x52
    _Bool _createNoDelay;	// 83 = 0x53
    _Bool _hasMarkSelf;	// 84 = 0x54
    _Bool _optimizeOutOwnEvents;	// 85 = 0x55
    _Bool _isProcessingHistory;	// 86 = 0x56
    FSVolume *_volume;	// 88 = 0x58
    NSMutableArray *_subscriptions;	// 96 = 0x60
    NSMutableArray *_pendingBarrierEvents;	// 104 = 0x68
    NSObject<OS_os_log> *_log;	// 112 = 0x70
    _Bool _plannedRescan;	// 120 = 0x78
    NSURL *_barrierFolderURL;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000000c3d4
@property(nonatomic, getter=hasPlannedRescan) _Bool plannedRescan; // @synthesize plannedRescan=_plannedRescan;
@property(retain, nonatomic) NSURL *barrierFolderURL; // @synthesize barrierFolderURL=_barrierFolderURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegationQueue; // @synthesize delegationQueue=_delegationQueue;
- (void)cancel;	// IMP=0x001000000000c2ed
- (void)_cancel;	// IMP=0x001000000000c2a4
- (void)resume;	// IMP=0x001000000000c1a1
- (void)suspend;	// IMP=0x001000000000c0f1
- (void)resetWithReason:(long long)arg1 newFSEventID:(unsigned long long)arg2;	// IMP=0x001000000000bc48
- (void)close;	// IMP=0x001000000000ba4b
- (void)_close;	// IMP=0x001000000000b848
- (void)flushStream;	// IMP=0x001000000000b83a
- (id)description;	// IMP=0x001000000000b6de
- (_Bool)handleFSEvent:(id)arg1 indexInBatch:(unsigned int)arg2 batchSize:(unsigned int)arg3;	// IMP=0x001000000000ab22
- (void)deliverBarrierEvents;	// IMP=0x001000000000a7b9
- (void)processFseventBatch;	// IMP=0x001000000000a159
- (void)queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;	// IMP=0x0010000000009f60
- (_Bool)_queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;	// IMP=0x0010000000009c0b
- (_Bool)setUpStreamForReason:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000009b51
- (id)liveFSEventsXPCActivityCriteria;	// IMP=0x0010000000009b49
- (struct fpfs_fsevent_stream *)_createStreamNamed:(id)arg1 since:(unsigned long long)arg2 criteria:(id)arg3;	// IMP=0x00100000000093e0
@property(readonly, nonatomic) _Bool hasBufferedEvents;
@property(readonly, nonatomic) double latency;
- (unsigned long long)oldestStartingPoint;	// IMP=0x0010000000009146
- (void)foreachSubscriptionInState:(unsigned long long)arg1 apply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008f61
- (void)disableSubscription:(id)arg1;	// IMP=0x0010000000008e7a
- (_Bool)activateSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008dbc
- (_Bool)_activateSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008bb4
- (id)subscribeToEventsAtPath:(id)arg1 fd:(int)arg2 sinceEventID:(unsigned long long)arg3 streamUUID:(id)arg4 ignoreOwnEvents:(_Bool)arg5 delegate:(id)arg6 purpose:(id)arg7;	// IMP=0x0010000000008a47
- (void)dealloc;	// IMP=0x00100000000089af
- (id)initWithLabel:(id)arg1 workloop:(id)arg2;	// IMP=0x0010000000008415
- (id)init;	// IMP=0x001000000000840c

@end
