//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x002000000016f19c
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x001000000016f0ce
- (void)_gkInvokeOnce;	// IMP=0x001000000016f0a0
- (void)_gkClearTarget;	// IMP=0x001000000016f068
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x001000000016f001
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;	// IMP=0x001000000016edac
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x001000000016ece4
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x001000000016ec40
- (id)_gkReplyHandlerInvocation;	// IMP=0x001000000016eba5
- (void)_gkClearCopiedArguments;	// IMP=0x001000000016e9fe
- (void)_gkCopyArguments;	// IMP=0x001000000016e79a
- (void)_gkPrintBlockSignature;	// IMP=0x001000000016e6bf
- (_Bool)_gkHasReplyBlock;	// IMP=0x001000000016f201
@end

