//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

__attribute__((visibility("hidden")))
@interface SSVBarrierOperationQueue : NSOperationQueue
{
}

- (void)addBarrierOperation:(id)arg1;	// IMP=0x0000000000147985
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x0000000000147623
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001475d0
- (void)addOperation:(id)arg1;	// IMP=0x000000000014736c

@end
