//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ADCompanionRoutingService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_pendingCallResultBlocks;	// 16 = 0x10
    _Bool _isInCall;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000009a481
- (void)_processPendingCallResultBlocks;	// IMP=0x001000000009a2b8
- (void)_callStateDidChange:(id)arg1;	// IMP=0x001000000009a1dc
- (void)preheatDomain:(id)arg1;	// IMP=0x0010000000099cb8
- (void)_handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000099561
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000009941b
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000099413
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000098fe6
- (id)domains;	// IMP=0x0010000000098f0c
- (id)handle;	// IMP=0x0010000000098f03
- (id)init;	// IMP=0x0010000000098df1

@end

