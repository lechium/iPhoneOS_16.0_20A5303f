//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface PSDSyncStateManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_syncStateCache;	// 16 = 0x10
    NSMutableArray *_activeConnections;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

+ (id)sharedSyncStateManager;	// IMP=0x002000000000af62
- (void).cxx_destruct;	// IMP=0x002000000000cf83
- (id)syncStatePersistentURL;	// IMP=0x001000000000cefb
- (void)_loadLegacySyncStateAndMigrateIfNeeded;	// IMP=0x001000000000cba5
- (void)_queue_tellRemoteObserversDidCompleteSyncForPairingID:(id)arg1;	// IMP=0x001000000000ca12
- (oneway void)registerSyncStateObserverIfNeeded;	// IMP=0x001000000000ca0c
- (oneway void)requestDeviceSyncStateEntriesForPairingIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c663
- (void)connectionInterrupted:(id)arg1;	// IMP=0x001000000000c5ba
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000c2fa
- (void)setupListener;	// IMP=0x001000000000c293
- (id)domainAccessorForPairingID:(id)arg1;	// IMP=0x001000000000c1ab
- (id)_queue_deviceSyncStateEntryForPairingID:(id)arg1;	// IMP=0x001000000000bf9b
- (id)isInitialSyncCompleteForPairingID:(id)arg1;	// IMP=0x001000000000be0a
- (id)isSyncCompleteForPairingID:(id)arg1;	// IMP=0x001000000000bc54
- (void)setSyncCompleteForPairingID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b760
- (void)_updateMigrationCounter;	// IMP=0x001000000000b29c
- (id)init;	// IMP=0x001000000000afe7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

