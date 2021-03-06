//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IDSIDQueryController : NSObject
{
    NSMutableDictionary *_listeners;	// 8 = 0x8
    NSMutableDictionary *_idStatusCache;	// 16 = 0x10
    NSMutableDictionary *_transactionIDToBlockMap;	// 24 = 0x18
    NSObject<OS_xpc_object> *_connection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSString *_serviceToken;	// 56 = 0x38
    NSMapTable *_delegateToInfo;	// 64 = 0x40
    NSMutableDictionary *_listenerIDToServicesMap;	// 72 = 0x48
    id _delegateContext;	// 80 = 0x50
}

+ (id)_createXPCConnectionOnQueue:(id)arg1;	// IMP=0x00100000000d2e0e
+ (void)initialize;	// IMP=0x00100000000cf4d3
- (void).cxx_destruct;	// IMP=0x00000000000e3ceb
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000e39b2
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;	// IMP=0x00000000000e35a2
- (_Bool)_flushQueryCacheForService:(id)arg1;	// IMP=0x00000000000e345c
- (_Bool)_warmupQueryCacheForService:(id)arg1;	// IMP=0x00000000000e31bf
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000e317b
- (_Bool)_hasCacheForService:(id)arg1;	// IMP=0x00000000000e316d
- (_Bool)idInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000e2a12
- (_Bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e29f6
- (_Bool)_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 waitForReply:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e20d3
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e1f23
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e1dd8
- (_Bool)requiredIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e1af0
- (_Bool)requiredIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e1abb
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e17d0
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 forceRefresh:(_Bool)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e1790
- (_Bool)_sync_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e1770
- (_Bool)_sync_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e162b
- (_Bool)_sync_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e15f7
- (_Bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 queue:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x00000000000e1247
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x00000000000e06df
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;	// IMP=0x00000000000e0517
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;	// IMP=0x00000000000e0455
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;	// IMP=0x00000000000e01f2
- (void)_purgeIDStatusCache;	// IMP=0x00000000000e011a
- (void)_purgeIDStatusCacheAfter:(double)arg1;	// IMP=0x00000000000dffac
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;	// IMP=0x00000000000dfd6f
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;	// IMP=0x00000000000dfca2
- (id)_cacheForService:(id)arg1;	// IMP=0x00000000000dfc8c
- (_Bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;	// IMP=0x00000000000dfb67
- (void)dealloc;	// IMP=0x00000000000dfb14
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;	// IMP=0x00000000000df9fc
- (id)init;	// IMP=0x00000000000df940
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x000000000003fd37
- (void)addListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x000000000003f9df
- (void)daemonDisconnected;	// IMP=0x000000000003f9cd
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000003f4cb
- (void)_connect;	// IMP=0x000000000003f47d
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f208
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003f191
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000003f086
- (void)___oldDealloc;	// IMP=0x000000000003f024
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(_Bool)arg5;	// IMP=0x00000000000d281f
- (void)_requestIDInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d1ccc
- (void)_requestRemoteDevicesForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 waitForReply:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d1207
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 forceRefresh:(_Bool)arg4 bypassLimit:(_Bool)arg5 listenerID:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d07ec
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 respectExpiry:(_Bool)arg4 listenerID:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000cfe60
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cf665
- (void)_disconnectFromQueryService;	// IMP=0x00000000000cf55e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

