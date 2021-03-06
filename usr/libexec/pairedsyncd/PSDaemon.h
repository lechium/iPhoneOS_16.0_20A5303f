//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCListener, PSDSwitchAssertionManager, PSDSyncRestrictionNotifier, PSDWatchSyncStateObserver;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PSDaemon : NSObject
{
    NSXPCListener *_toolListener;	// 8 = 0x8
    NSXPCListener *_progressListener;	// 16 = 0x10
    NSXPCListener *_clientListener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    NSArray *_loggers;	// 40 = 0x28
    PSDWatchSyncStateObserver *_watchSyncStateObserver;	// 48 = 0x30
    PSDSyncRestrictionNotifier *_syncRestrictionNotifier;	// 56 = 0x38
    PSDSwitchAssertionManager *_switchAssertionManager;	// 64 = 0x40
    NSObject<OS_os_transaction> *_syncingStayAliveTransaction;	// 72 = 0x48
    struct os_unfair_lock_s _stayAliveTransactionLock;	// 80 = 0x50
    _Bool _shouldNotDieSuddenly;	// 84 = 0x54
    _Bool _exitPending;	// 85 = 0x55
    _Bool _shouldRelaunch;	// 86 = 0x56
}

+ (id)sharedInstance;	// IMP=0x002000000000ec6a
- (void).cxx_destruct;	// IMP=0x002000000000fd8b
- (void)syncInitiatorStateChangedTo:(unsigned long long)arg1;	// IMP=0x001000000000fb11
- (void)addLoggersIfNeeded;	// IMP=0x001000000000fb0b
- (_Bool)shouldAcceptNewClientConnection:(id)arg1;	// IMP=0x001000000000f931
- (_Bool)shouldAcceptNewProgressConnection:(id)arg1;	// IMP=0x001000000000f8d6
- (_Bool)shouldAcceptNewToolConnection:(id)arg1;	// IMP=0x001000000000f73b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000f6b2
- (void)_registerForNotifications;	// IMP=0x001000000000f58f
- (void)sigTermHandler;	// IMP=0x001000000000f487
@property(nonatomic) _Bool shouldRelaunch; // @synthesize shouldRelaunch=_shouldRelaunch;
- (void)_clearStayAliveTransaction;	// IMP=0x001000000000f0bf
- (void)_acquireStayAliveTransaction;	// IMP=0x001000000000f083
- (void)run;	// IMP=0x001000000000f03f
- (id)init;	// IMP=0x001000000000ecef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

