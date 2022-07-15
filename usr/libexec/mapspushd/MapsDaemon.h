//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDAnnouncementsManager, MDDevicePushManager, MDGeoServicesServer, MDLocalProxy, MDLocationManager, MDNotificationCenter, MDShareETAServer, MDState, MapsConnectionBrokerServer, RAPSubmissionStatusDownloader;

@interface MapsDaemon : NSObject
{
    MDState *_state;	// 8 = 0x8
    MDLocalProxy *_localProxy;	// 16 = 0x10
    MDDevicePushManager *_devicePushManager;	// 24 = 0x18
    MDGeoServicesServer *_geoServicesServer;	// 32 = 0x20
    MDShareETAServer *_shareETSServer;	// 40 = 0x28
    MDNotificationCenter *_notificationCenter;	// 48 = 0x30
    MDLocationManager *_locationManager;	// 56 = 0x38
    RAPSubmissionStatusDownloader *_submissionStatusDownloader;	// 64 = 0x40
    MDAnnouncementsManager *_announcementsManager;	// 72 = 0x48
    MapsConnectionBrokerServer *_mapsConnectionBrokerServer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000001d39d
- (void)start;	// IMP=0x001000000001d355
- (void)mapsInstallStateDidChange:(_Bool)arg1;	// IMP=0x001000000001d326
- (void)_registerXPCActivities;	// IMP=0x001000000001cee9
- (void)_consumeDarwinNotifications;	// IMP=0x001000000001cbc0
- (void)_migrate;	// IMP=0x001000000001cbba
- (void)_watchMain;	// IMP=0x001000000001cba1
- (void)_main;	// IMP=0x001000000001c9b4

@end
