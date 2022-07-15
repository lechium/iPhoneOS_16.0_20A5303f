//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BYDaemonContext, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BYDaemonConnectionManager : NSObject
{
    NSXPCListener *_generalListener;	// 8 = 0x8
    NSXPCListener *_cloudSyncListener;	// 16 = 0x10
    NSXPCListener *_migrationSourceListener;	// 24 = 0x18
    NSXPCListener *_proximitySourceListener;	// 32 = 0x20
    NSXPCListener *_proximityTargetListener;	// 40 = 0x28
    NSXPCListener *_proximityAutomatedDeviceEnrollmentTargetListener;	// 48 = 0x30
    NSXPCListener *_settingsManagerListener;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_pendingFollowUpRevisionQueue;	// 64 = 0x40
    BYDaemonContext *_context;	// 72 = 0x48
    NSXPCConnection *_currentProximityAutomatedDeviceEnrollmentConnection;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x002000000000a236
- (void).cxx_destruct;	// IMP=0x002000000000ac1a
@property(retain, nonatomic) NSXPCConnection *currentProximityAutomatedDeviceEnrollmentConnection; // @synthesize currentProximityAutomatedDeviceEnrollmentConnection=_currentProximityAutomatedDeviceEnrollmentConnection;
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x001000000000ab9d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000a86b
- (void)_monitorLocalNotifications;	// IMP=0x001000000000a80f
- (void)_monitorXPCEvents;	// IMP=0x001000000000a796
- (void)start;	// IMP=0x001000000000a702
- (void)performLaunchTokenUpgrade;	// IMP=0x001000000000a59f
- (id)init;	// IMP=0x001000000000a377
- (void)dealloc;	// IMP=0x001000000000a28b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
