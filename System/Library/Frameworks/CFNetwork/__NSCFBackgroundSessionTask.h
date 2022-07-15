//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLSessionTask.h"

@class NSError, NSMutableSet, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask
{
    NSMutableSet *_secKeyProxies;	// 8 = 0x8
    struct os_unfair_lock_s _proxyLock;	// 16 = 0x10
    _Bool _sentCancel;	// 20 = 0x14
    _Bool _sentDidFinish;	// 21 = 0x15
    NSError *_immediateError;	// 24 = 0x18
}

- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000012d537
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000012d49b
- (void)set_discretionaryOverride:(long long)arg1;	// IMP=0x000000000012d401
- (id)_timingData;	// IMP=0x000000000012d3e7
- (void)setDelegate:(id)arg1;	// IMP=0x000000000012d3b3
- (void)setTaskDescription:(id)arg1;	// IMP=0x000000000012d319
- (void)_onSessionQueue_disavow;	// IMP=0x000000000012d2a0
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;	// IMP=0x000000000012d249
- (void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x000000000012d243
- (void)_onqueue_adjustLoadingPoolPriority;	// IMP=0x000000000012d1da
- (void)_onqueue_adjustPoolPriority;	// IMP=0x000000000012d176
- (void)_onqueue_resume;	// IMP=0x000000000012ccb1
- (void)_onqueue_cancel;	// IMP=0x000000000012cc1b
- (void)_onqueue_suspend;	// IMP=0x000000000012cbc9
- (void)_onqueue_didFinishWithError:(id)arg1;	// IMP=0x000000000012cb48
- (void)_onqueue_didReceiveResponse:(id)arg1;	// IMP=0x000000000012cae1
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012ca78
- (void)removeSecKeyProxy:(id)arg1;	// IMP=0x000000000012ca29
- (void)addSecKeyProxy:(id)arg1;	// IMP=0x000000000012c9c3
- (void)dealloc;	// IMP=0x000000000012c81f
- (id)initWithBackgroundTask:(id)arg1;	// IMP=0x000000000012c7d1
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;	// IMP=0x000000000012c522
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;	// IMP=0x000000000012c4d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
