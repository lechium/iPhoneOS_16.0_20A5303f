//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_group;

@interface PipelineStatePromise : NSObject
{
    NSMapTable *pipelineStates;	// 8 = 0x8
    NSMapTable *errors;	// 16 = 0x10
    NSObject<OS_dispatch_group> *group;	// 24 = 0x18
    _Atomic _Bool initialization_completed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000018019
- (id)errorForFunction:(id)arg1;	// IMP=0x0000000000017fab
- (id)pipelineStateForFunction:(id)arg1;	// IMP=0x0000000000017f3d
- (_Bool)groupWasSuccessful;	// IMP=0x0000000000017f01
- (_Bool)timesOutWaitingForPipelineStates:(double)arg1;	// IMP=0x0000000000017eb1
- (id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3;	// IMP=0x0000000000017dfa

@end
