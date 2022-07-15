//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDelegateAccountStoreOptions, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegateAccountStoreXPCWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    ICDelegateAccountStoreOptions *_accountStoreOptions;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    CDUnknownBlockType _externalChangeHandler;	// 40 = 0x28
    _Bool _hasReceivedConnectionInvalidation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000112b63
- (void)_getXPCConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000112ad8
- (id)_onceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000112a10
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000112982
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001128f0
- (void)invalidate;	// IMP=0x00000000001128a5
@property(copy, nonatomic) CDUnknownBlockType externalChangeHandler; // @synthesize externalChangeHandler=_externalChangeHandler;
- (void)delegateAccountStoreDidChange;	// IMP=0x00000000001126ce
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001125e6
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001124fe
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000112440
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000112382
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001122c4
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001121dc
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011214a
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000112062
- (void)dealloc;	// IMP=0x0000000000112020
- (id)initWithAccountStoreOptions:(id)arg1;	// IMP=0x0000000000111ef7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
