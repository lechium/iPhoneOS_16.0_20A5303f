//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBlockOperation.h>

@class CKKSCondition, NSDate, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKKSResultOperation : NSBlockOperation
{
    _Bool _timeoutCanOccur;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDate *_finishDate;	// 24 = 0x18
    CKKSCondition *_completionHandlerDidRunCondition;	// 32 = 0x20
    long long _descriptionErrorCode;	// 40 = 0x28
    NSMutableArray *_successDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_timeoutQueue;	// 56 = 0x38
    CDUnknownBlockType _finishingBlock;	// 64 = 0x40
}

+ (id)named:(id)arg1 withBlockTakingSelf:(CDUnknownBlockType)arg2;	// IMP=0x00400000001252e3
+ (id)named:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012526f
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012521d
- (void).cxx_destruct;	// IMP=0x0020000000124e26
@property(copy) CDUnknownBlockType finishingBlock; // @synthesize finishingBlock=_finishingBlock;
@property(retain) NSObject<OS_dispatch_queue> *timeoutQueue; // @synthesize timeoutQueue=_timeoutQueue;
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) NSMutableArray *successDependencies; // @synthesize successDependencies=_successDependencies;
@property long long descriptionErrorCode; // @synthesize descriptionErrorCode=_descriptionErrorCode;
@property(retain) CKKSCondition *completionHandlerDidRunCondition; // @synthesize completionHandlerDidRunCondition=_completionHandlerDidRunCondition;
@property(retain) NSDate *finishDate; // @synthesize finishDate=_finishDate;
@property(retain) NSError *error; // @synthesize error=_error;
- (_Bool)allSuccessful:(id)arg1;	// IMP=0x00100000001246e9
- (_Bool)allDependentsSuccessful;	// IMP=0x0010000000124696
- (void)addNullableSuccessDependency:(id)arg1;	// IMP=0x00100000001245e3
- (void)addSuccessDependency:(id)arg1;	// IMP=0x00100000001245d1
- (id)timeout:(unsigned long long)arg1;	// IMP=0x00100000001244ee
- (id)_onqueueTimeoutError;	// IMP=0x00100000001243c1
- (id)descriptionError;	// IMP=0x00100000001242de
- (id)dependenciesDescriptionError;	// IMP=0x001000000012408d
- (void)invalidateTimeout;	// IMP=0x001000000012401c
- (void)start;	// IMP=0x0010000000123fb9
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123ec0
- (id)debugDescription;	// IMP=0x0010000000123eae
- (id)description;	// IMP=0x0010000000123d1c
- (id)operationStateString;	// IMP=0x0010000000123c31
- (id)init;	// IMP=0x0010000000123a8d

@end
