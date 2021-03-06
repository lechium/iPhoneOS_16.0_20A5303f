//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDMediaUserStateCenterServerNotificationsManager, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface ICDMediaUserStateCenterServer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_startSemaphore;	// 16 = 0x10
    _Bool _hasStarted;	// 24 = 0x18
    ICDMediaUserStateCenterServerNotificationsManager *_serverNotificationsManager;	// 32 = 0x20
    NSArray *_userStatesCache;	// 40 = 0x28
    NSMutableArray *_activeConnections;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000036089
@property(retain, nonatomic) NSMutableArray *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(retain, nonatomic) NSArray *userStatesCache; // @synthesize userStatesCache=_userStatesCache;
@property(readonly, nonatomic) ICDMediaUserStateCenterServerNotificationsManager *serverNotificationsManager; // @synthesize serverNotificationsManager=_serverNotificationsManager;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000035b36
- (unsigned long long)_userStateAccessForConnection:(id)arg1;	// IMP=0x0010000000035af5
- (_Bool)_userStatesChanged:(id)arg1;	// IMP=0x001000000003587c
- (void)_loadIdentitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035731
- (void)_getUserStateFromIdentity:(id)arg1 tokensDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000355cf
- (void)_getTokenStatusesForDSIDs:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035476
- (void)_fetchAccountsWithForceRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000353dd
- (void)_buildUserStateFromUserIdentity:(id)arg1 storeRequestContext:(id)arg2 tokensDictionary:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000034d5f
- (void)_applyServerStateUpdatedWithUserStatesIfNeeded:(id)arg1;	// IMP=0x0010000000034c86
- (void)notificationsManager:(id)arg1 didReceiveNotificationChangingUserState:(id)arg2;	// IMP=0x0010000000034c38
- (void)stop;	// IMP=0x0010000000034c1e
- (void)start;	// IMP=0x0010000000034bbc
- (void)getUserStatesForcingRefresh:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034ab4
- (id)init;	// IMP=0x0010000000034a22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

