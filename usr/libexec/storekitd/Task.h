//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class KeepAlive, NSError, NSLock;

@interface Task : NSOperation
{
    KeepAlive *_keepAlive;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000005dd6
@property _Bool success; // @synthesize success=_success;
@property(copy) NSError *error; // @synthesize error=_error;
- (void)_dispatchCompletionBlock;	// IMP=0x0010000000005c57
- (void)unlock;	// IMP=0x0010000000005c3a
- (_Bool)runSubTask:(id)arg1 returningError:(id *)arg2;	// IMP=0x0010000000005b42
- (_Bool)runTaskReturningError:(id *)arg1;	// IMP=0x0010000000005a6a
- (void)lock;	// IMP=0x0010000000005a4d
- (void)completeWithSuccess;	// IMP=0x00100000000059e6
- (void)completeWithError:(id)arg1;	// IMP=0x0010000000005956
- (id)initWithoutKeepAlive;	// IMP=0x00100000000058f9
- (id)init;	// IMP=0x001000000000582e

@end
