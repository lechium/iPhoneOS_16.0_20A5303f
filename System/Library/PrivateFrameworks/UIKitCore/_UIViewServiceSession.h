//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, _UIAsyncInvocation, _UIViewServiceDeputyManager, _UIViewServiceSessionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    _UIViewServiceSessionManager *_manager;	// 24 = 0x18
    _UIViewServiceDeputyManager *_deputyManager;	// 32 = 0x20
    _UIAsyncInvocation *_invalidationInvocation;	// 40 = 0x28
    CDUnknownBlockType _terminationHandler;	// 48 = 0x30
    int __automatic_invalidation_retainCount;	// 56 = 0x38
    _Bool __automatic_invalidation_invalidated;	// 60 = 0x3c
}

+ (id)sessionWithConnection:(id)arg1 manager:(id)arg2;	// IMP=0x00100000012b4f36
@property(copy, nonatomic) CDUnknownBlockType terminationHandler; // @synthesize terminationHandler=_terminationHandler;
@property(readonly) __weak _UIViewServiceSessionManager *manager; // @synthesize manager=_manager;
- (id)mainStoryboardNameForViewControllerOperator:(id)arg1;	// IMP=0x00000000012b5aa1
- (id)containingViewControllerClassNameForViewControllerOperator:(id)arg1;	// IMP=0x00000000012b59ce
- (id)viewControllerClassNameForViewControllerOperator:(id)arg1;	// IMP=0x00000000012b58b3
- (_Bool)requiresExtensionContextForViewControllerOperator:(id)arg1;	// IMP=0x00000000012b5829
- (_Bool)isExtensionServiceViewControllerOperator:(id)arg1;	// IMP=0x00000000012b581f
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewController:(id)arg2 contextToken:(id)arg3;	// IMP=0x00000000012b57b4
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;	// IMP=0x00000000012b579e
- (void)unregisterDeputyClass:(Class)arg1;	// IMP=0x00000000012b5788
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012b5590
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000012b557a
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x00000000012b542b
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000000012b5302
- (void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2;	// IMP=0x00000000012b52e9
- (void)dealloc;	// IMP=0x00000000012b5224
- (_Bool)_isDeallocating;	// IMP=0x00000000012b4f1a
- (_Bool)_tryRetain;	// IMP=0x00000000012b4ee5
- (unsigned long long)retainCount;	// IMP=0x00000000012b4ed4
- (oneway void)release;	// IMP=0x00000000012b4e51
- (id)retain;	// IMP=0x00000000012b4e37
- (int)__automatic_invalidation_logic;	// IMP=0x00000000012b4d95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
