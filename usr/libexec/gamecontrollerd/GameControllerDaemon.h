//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/GCDaemon.h>

@class GCSSettingsStore, GameControllerDaemonAnalytics, NSMutableSet, NSObject, NSString, NSUserDefaults, NSXPCListener;
@protocol OS_os_transaction;

@interface GameControllerDaemon : GCDaemon
{
    NSXPCListener *_appServiceListener;	// 8 = 0x8
    NSXPCListener *_driverServiceListener;	// 16 = 0x10
    NSXPCListener *_hapticServiceListener;	// 24 = 0x18
    NSXPCListener *_agentServiceListener;	// 32 = 0x20
    NSObject<OS_os_transaction> *_clientTransaction;	// 40 = 0x28
    NSMutableSet *_clients;	// 48 = 0x30
    GameControllerDaemonAnalytics *_analytics;	// 56 = 0x38
    NSUserDefaults *_defaults;	// 64 = 0x40
    GCSSettingsStore *_settingsStore;	// 72 = 0x48
    unsigned long long _activeDevicesCount;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00200000000066df
+ (void)run;	// IMP=0x0010000000006643
- (void).cxx_destruct;	// IMP=0x0020000000007ad8
- (id)filterClientForPid:(int)arg1;	// IMP=0x001000000000791b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000007771
- (_Bool)acceptNewConnection:(id)arg1 fromGCEnabledApp:(id)arg2;	// IMP=0x00100000000075aa
- (_Bool)acceptNewConnection:(id)arg1 fromHIDServer:(id)arg2;	// IMP=0x0010000000007432
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000007192
- (void)client:(id)arg1 connectionsDidChange:(id)arg2;	// IMP=0x001000000000701e
- (void)refreshClientTransaction;	// IMP=0x0010000000006e20
- (id)clientForConnection:(id)arg1;	// IMP=0x0010000000006c4a
- (id)serviceFor:(id)arg1 client:(id)arg2;	// IMP=0x0010000000006b88
- (void)_requestAgentLaunch;	// IMP=0x0010000000006b67
- (void)dealloc;	// IMP=0x0010000000006aeb
- (void)_stop;	// IMP=0x0010000000006ae5
- (void)_start;	// IMP=0x0010000000006a8b
- (id)init;	// IMP=0x0010000000006a60
- (id)_init;	// IMP=0x0010000000006744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
