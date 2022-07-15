//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, STResult;
@protocol OS_dispatch_queue;

@interface STPromise : NSObject
{
    long long _state;	// 8 = 0x8
    NSObject *_stateLock;	// 16 = 0x10
    NSMutableArray *_observers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    STResult *_result;	// 40 = 0x28
}

+ (id)dispatchGroup;	// IMP=0x002000000006751c
+ (id)createQueue;	// IMP=0x0010000000067217
+ (id)resolvedWith:(id)arg1;	// IMP=0x001000000006719a
+ (id)pendingPromise;	// IMP=0x0010000000067138
+ (CDUnknownBlockType)resolved;	// IMP=0x0010000000068399
+ (id)onQueue:(id)arg1 all:(id)arg2;	// IMP=0x001000000006847d
+ (id)all:(id)arg1;	// IMP=0x0010000000068400
+ (id)onQueue:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x001000000006927c
+ (id)do:(CDUnknownBlockType)arg1;	// IMP=0x00100000000691ff
+ (CDUnknownBlockType)doOn;	// IMP=0x00100000000695d5
+ (CDUnknownBlockType)doWork;	// IMP=0x001000000006956e
- (void).cxx_destruct;	// IMP=0x001000000006835b
@property(readonly, copy) STResult *result; // @synthesize result=_result;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSMutableArray *observers; // @synthesize observers=_observers;
@property(readonly) NSObject *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly) long long state; // @synthesize state=_state;
- (id)chainOnQueue:(id)arg1 chainedResolve:(CDUnknownBlockType)arg2 chainedError:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067df8
- (void)observeOnQueue:(id)arg1 resolve:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067a4c
- (void)cancel;	// IMP=0x00100000000677ea
- (void)resolve:(id)arg1;	// IMP=0x001000000006756a
@property(readonly) _Bool isCanceled;
@property(readonly) _Bool isResolved;
@property(readonly) _Bool isPending;
- (id)description;	// IMP=0x00100000000672f3
- (id)initWithResolution:(id)arg1 onQueue:(id)arg2;	// IMP=0x0010000000067061
- (id)initPendingOnQueue:(id)arg1;	// IMP=0x0010000000066f9e
- (void)dealloc;	// IMP=0x0010000000066f32
- (id)onQueue:(id)arg1 catch:(CDUnknownBlockType)arg2;	// IMP=0x001000000006901e
- (id)catch:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068fa1
- (CDUnknownBlockType)catchOn;	// IMP=0x0010000000069195
- (CDUnknownBlockType)catch;	// IMP=0x001000000006912e
- (id)onQueue:(id)arg1 given:(CDUnknownBlockType)arg2;	// IMP=0x00100000000696bc
- (id)given:(CDUnknownBlockType)arg1;	// IMP=0x001000000006963f
- (MISSING_TYPE *)givenOn;	// IMP=0x001000000006983b
- (CDUnknownBlockType)given;	// IMP=0x00100000000697d4
- (id)onQueue:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069f6c
- (id)then:(CDUnknownBlockType)arg1;	// IMP=0x0010000000069eef
- (CDUnknownBlockType)thenOn;	// IMP=0x001000000006a0e0
- (CDUnknownBlockType)then;	// IMP=0x001000000006a079

@end
