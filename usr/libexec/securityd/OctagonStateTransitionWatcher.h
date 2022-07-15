//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSResultOperation, NSOperationQueue, NSString, OctagonStateTransitionPath, OctagonStateTransitionPathStep, OctagonStateTransitionRequest;
@protocol OS_dispatch_queue;

@interface OctagonStateTransitionWatcher : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _completed;	// 9 = 0x9
    _Bool _timeoutCanOccur;	// 10 = 0xa
    NSString *_name;	// 16 = 0x10
    CKKSResultOperation *_result;	// 24 = 0x18
    OctagonStateTransitionPath *_intendedPath;	// 32 = 0x20
    OctagonStateTransitionPathStep *_remainingPath;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    OctagonStateTransitionRequest *_initialRequest;	// 56 = 0x38
    CKKSResultOperation *_initialTimeoutListenerOp;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000c98c9
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) CKKSResultOperation *initialTimeoutListenerOp; // @synthesize initialTimeoutListenerOp=_initialTimeoutListenerOp;
@property(retain) OctagonStateTransitionRequest *initialRequest; // @synthesize initialRequest=_initialRequest;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) OctagonStateTransitionPathStep *remainingPath; // @synthesize remainingPath=_remainingPath;
@property _Bool completed; // @synthesize completed=_completed;
@property _Bool active; // @synthesize active=_active;
@property(readonly) OctagonStateTransitionPath *intendedPath; // @synthesize intendedPath=_intendedPath;
@property(readonly) CKKSResultOperation *result; // @synthesize result=_result;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)onqueueStartFinishOperation;	// IMP=0x00100000000c96d4
- (void)onqueueProcessTransition:(id)arg1;	// IMP=0x00100000000c91d6
- (id)timeout:(unsigned long long)arg1;	// IMP=0x00100000000c90f3
- (void)_onqueuePerformTimeoutWithUnderlyingError:(id)arg1;	// IMP=0x00100000000c8f71
- (void)onqueueHandleTransition:(id)arg1;	// IMP=0x00100000000c8e08
- (id)description;	// IMP=0x00100000000c8d4b
- (id)initNamed:(id)arg1 serialQueue:(id)arg2 path:(id)arg3 initialRequest:(id)arg4;	// IMP=0x00100000000c8a10

@end
