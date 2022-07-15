//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCondition, NSError, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface GTFuture_capture : NSOperation
{
    NSTimer *_timeout;	// 8 = 0x8
    NSCondition *_condition;	// 16 = 0x10
    _Bool _resolved;	// 24 = 0x18
    _Bool _cancelled;	// 25 = 0x19
    id _result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSMutableArray *_notifyList;	// 48 = 0x30
    NSMutableArray *_inflightDependencies;	// 56 = 0x38
    _Bool _started;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
    long long _priority;	// 80 = 0x50
}

+ (_Bool)logPerformance;	// IMP=0x00600000000055a6
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000000552e
+ (id)futureWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00600000000054dd
+ (id)future;	// IMP=0x00600000000054c3
- (id)_dependencies_NOLOCK;	// IMP=0x0000000000005089
- (_Bool)_waitForDependencies_REQUIRESLOCK;	// IMP=0x0000000000004ffd
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000004f6e
- (void)_addDependency_REQUIRESLOCK:(id)arg1;	// IMP=0x0000000000004e60
- (void)notifyGroup:(id)arg1;	// IMP=0x0000000000004d7a
- (void)notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004c84
- (void)resolveWithFuture:(id)arg1;	// IMP=0x0000000000004b67
- (void)timeoutAfter:(double)arg1 label:(id)arg2;	// IMP=0x0000000000004a8c
- (void)setError:(id)arg1;	// IMP=0x0000000000004a72
- (void)cancel;	// IMP=0x00000000000049c2
- (id)error;	// IMP=0x000000000000498d
- (void)setResult:(id)arg1;	// IMP=0x0000000000004973
- (void)_setResult:(id)arg1 error:(id)arg2 notify_NOLOCK:(_Bool)arg3;	// IMP=0x00000000000046fb
- (int)intResult;	// IMP=0x00000000000046b1
- (unsigned int)uint32Result;	// IMP=0x0000000000004667
- (_Bool)boolResult;	// IMP=0x000000000000461f
- (void)requestResult:(CDUnknownBlockType)arg1;	// IMP=0x00000000000045f1
- (void)addResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004494
- (id)result;	// IMP=0x000000000000445f
- (void)waitUntilResolved;	// IMP=0x00000000000041dc
- (void)start;	// IMP=0x00000000000041ca
- (id)dependencies;	// IMP=0x00000000000041b8
- (void)addDependency:(id)arg1;	// IMP=0x0000000000004163
- (void)waitUntilFinished;	// IMP=0x00000000000040e4
- (void)_start_NOLOCK;	// IMP=0x000000000000404f
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003ff2
- (CDUnknownBlockType)completionBlock;	// IMP=0x0000000000003f8e
- (void)setQueuePriority:(long long)arg1;	// IMP=0x0000000000003f3e
- (long long)queuePriority;	// IMP=0x0000000000003eef
- (_Bool)isFinished;	// IMP=0x0000000000003e8c
- (_Bool)isExecuting;	// IMP=0x0000000000003e27
- (_Bool)isAsynchronous;	// IMP=0x0000000000003e1f
- (_Bool)isCancelled;	// IMP=0x0000000000003dd0
- (void)dealloc;	// IMP=0x0000000000003c66
- (id)init;	// IMP=0x0000000000003ba4

@end
